%{
	

#include <stdio.h>	
 			
int yyerror(char const *msg);	
int yylex(void);
extern int yylineno;
int outputSyntaxique = 1;	// flag qui permet d'afficher(1)/masquer(0) les messages de l'analyseur syntaxique, par d�faut (1)
		/* fonction qui affiche un message passe en parametre */
	void output_syn(const char* msg) {
		if(outputSyntaxique == 1) {
			printf("Analyseur syntaxique: %s\n", msg);
		}
	}
%}

%token ID
%token NB
%token OPADD
%token OPAFFECT
%token OPMUL
%token OPREL

	/* Mots cl�s */
%token BEGIN_TOKEN
%token DO
%token ELSE
%token END
%token FUNCTION
%token IF
%token NOT
%token PROCEDURE
%token PROGRAM
%token THEN
%token VAR
%token WHILE
%token INTEGER
%token READ
%token WRITE
%token DEUX_POINTS
%token ARRAY
%token POINT_VIRGULE
%token VIRGULE
%token CHAINE
%token INT
%token PARENTHESE_OUVRANTE
%token PARENTHESE_FERMANTE
%token COMMENTAIRE


%start programmes

%%
programmes		       :PROGRAM 					
	                        ID 							
	                        POINT_VIRGULE
				|PROGRAM 					
	                        ID 							
	                        POINT_VIRGULE						
	                        declaration 	
				|PROGRAM 					
	                        ID 							
	                        POINT_VIRGULE						
	                        declaration 				
	                        instruction_composee	
							{ output_syn("fin du programme"); }
                          	|
				PROGRAM 					
	                        ID 							
	                        POINT_VIRGULE										
	                        instruction_composee		
                          			
                           	|error ID POINT_VIRGULE            {yyerror (" program attendu on line : "); }
                            	|PROGRAM error POINT_VIRGULE       {yyerror (" nom du programme invalide on line : "); } 
                            	|PROGRAM ID error                  {yyerror (" point virgule attendu on line : "); };

declaration:
	declaration_var				
	declarations_sous_programmes
;
declaration_var:
	declaration_var		
	VAR 				
	liste_identificateurs
	DEUX_POINTS					
	INTEGER 				
	POINT_VIRGULE	

	
|	/* chaîne vide */

|  declaration_var		
	error  	{ yyerror("mot cle var introuvable !"); }			
	liste_identificateurs
	DEUX_POINTS					
	INTEGER 				
	POINT_VIRGULE	
|
  
	declaration_var		
	VAR 				
	error { yyerror("identificateur de variable  manquante ");}
	DEUX_POINTS					
	INTEGER 				
	POINT_VIRGULE	
|	declaration_var 
    VAR
	liste_identificateurs
	error { yyerror(":  manquante !"); }
	INTEGER 				
	POINT_VIRGULE
	
|	declaration_var		
	VAR 				
	liste_identificateurs
	DEUX_POINTS	
    error 					{ yyerror("mot cle 'int' introuvable !"); }
    POINT_VIRGULE	
	
	|
    declaration_var		
	VAR 				
	liste_identificateurs
	DEUX_POINTS	
    INTEGER
    error { yyerror(" ; manquante !"); }
	
;

liste_identificateurs:
	ID 							
|	liste_identificateurs		
	POINT_VIRGULE					
	ID
	
|	liste_identificateurs		
	error {yyerror(" ; manquante !");} 					
	ID	
|	liste_identificateurs		
	POINT_VIRGULE	
    error {yyerror(" id introuvable!");} 	

;

declarations_sous_programmes:
	declarations_sous_programmes
	declarations_sous_programme 
	POINT_VIRGULE							
|	/* chaîne vide */
|
	declarations_sous_programmes
	declarations_sous_programme 
	error {yyerror(" ; manquante!");}	
;

declarations_sous_programme:
	entete_sous_programme		
	declaration 				
	instruction_composee 
	|
	 entete_sous_programme						
	 instruction_composee 
	 
	|error {yyerror(" entete de programme  manquante!");}
	 declaration 				
	 instruction_composee
	 
	|entete_sous_programme		
	 declaration 
	 error {yyerror(" corps de fonction / procedure  manquant  manquante!");}
	
	
  
;

entete_sous_programme:
	FUNCTION					
	ID 							
	arguments					
	DEUX_POINTS							
	INTEGER						
	POINT_VIRGULE	
  
   	|
					
	error {yyerror("  mot cle function manquant !");} 						
	ID 
	arguments					
	DEUX_POINTS							
	INTEGER						
	POINT_VIRGULE
 
   	|
	FUNCTION					
	error {yyerror("  nom  de fonction manquant !");} 						
	arguments					
	DEUX_POINTS							
	INTEGER 						
	POINT_VIRGULE
   |
	FUNCTION					
	ID 							
	arguments					
	error {yyerror("  : manquant !");} 						
	INTEGER 						
	POINT_VIRGULE
	|
	FUNCTION					
	ID 							
	arguments					
	DEUX_POINTS							
	error {yyerror("  return type de fonction manquant !");}  						
	POINT_VIRGULE
	|
    FUNCTION					
	ID 							
	arguments					
	DEUX_POINTS							
	INTEGER 						
	error {yyerror("  ;manquante!");}  
	|	
	PROCEDURE 					
	ID 							
	arguments 					
	POINT_VIRGULE
	|	
	PROCEDURE 					
	error {yyerror("nom  e procedure manquant !");} 						
	arguments 					
	POINT_VIRGULE
	
	|
	PROCEDURE
	ID 							
	arguments					
	error {yyerror(";manquante!");} 


	
;

arguments:
	PARENTHESE_OUVRANTE
	liste_parametres 			
	PARENTHESE_FERMANTE						
|       error{ yyerror("parenthese ouvrante manquante"); } 
	liste_parametres 			
	PARENTHESE_FERMANTE						
|	PARENTHESE_OUVRANTE
	liste_parametres 			
	error{ yyerror("parenthese fermante manquante"); } 						
|	/* chaîne vide */
;

liste_parametres:
	parametre 					
|	liste_parametres 			
	POINT_VIRGULE						
	parametre
|	liste_parametres 			
	error{ yyerror("point virgule manquante"); } 					
	parametre
|	error{ yyerror("parametre manquante"); }  			
	POINT_VIRGULE						
	parametre
|	liste_parametres 			
	POINT_VIRGULE						
	error{ yyerror("parametre manquante"); }  

parametre:
	ID 							
	DEUX_POINTS 						
	INTEGER 						
|	error{ yyerror("identifiant manquant"); } 							
	DEUX_POINTS 						
	INTEGER 						
|	ID						
	DEUX_POINTS 						
	error{ yyerror("integer manquant"); } 												
|	VAR 						
	ID 							
	DEUX_POINTS 						
	INTEGER
;

instruction_composee:
	BEGIN_TOKEN
	instructions_optionnelles
	END|
	error{ yyerror("Begin manquante"); }
	instructions_optionnelles
	END
|	BEGIN_TOKEN
	instructions_optionnelles
	error{ yyerror("End manquante"); }
;

instructions_optionnelles:
	liste_instructions
;

liste_instructions:
	instruction POINT_VIRGULE
|	liste_instructions
	instruction POINT_VIRGULE
|	instruction
	error 					{ yyerror("point virgule d'instruction omis"); }
;

instruction:
	variable
	OPAFFECT
	expression
|	appel_de_procedure
|	instruction_composee
|	IF
	expression
	THEN
	instruction
	ELSE
	instruction
|	error { yyerror("IF manquante"); }
	expression
	THEN
	instruction
	ELSE
	instruction

|	IF
	expression
	error { yyerror("THEN manquante"); }
	instruction
	ELSE
	instruction
|	IF
	expression
	THEN
	instruction
	error { yyerror("ELSE manquante"); }
	instruction
|	WHILE
	expression
	DO
	instruction
|	/* chaîne vide */
;

variable:
	ID
;

appel_de_procedure:
	ID
|	ID
	error  { yyerror("PARENTHESE OUVRANTE manquante"); }
	liste_expressions
	PARENTHESE_FERMANTE
|	ID
	PARENTHESE_OUVRANTE
	liste_expressions
	PARENTHESE_FERMANTE
|	ID
	PARENTHESE_OUVRANTE
	liste_expressions
	error  { yyerror("PARENTHESE_FERMANTE manquante"); }
;


liste_expressions:
	expression
|	liste_expressions
	VIRGULE
	expression
|	liste_expressions
	error  { yyerror("virgule manquante"); }
	expression
|	liste_expressions
	VIRGULE
	error  { yyerror("expression manquante"); }
;

expression:
	expression_simple
|	expression_simple
	OPREL
	expression_simple
|	error  { yyerror("expression simple manquante"); }
	OPREL
	expression_simple
|	expression_simple
	error  { yyerror("OPREL manquant"); }
	expression_simple
|	expression_simple
	OPREL
	error  { yyerror("expression simple manquante"); }
;

expression_simple:
	terme
|	signe 
        error  { yyerror("terme manquant"); }
|	error  { yyerror("signe manquant"); } 
         terme
|	expression_simple
	OPADD
	terme

|	error  { yyerror("expression simple manquante"); } 
	OPADD
	terme
|	expression_simple
	error  { yyerror("OPADD manquante"); } 
	terme
|	expression_simple
	OPADD
	error  { yyerror("terme manquante"); } 
;

terme:
	facteur
|	terme
	OPMUL
	facteur
|	error  { yyerror("terme manquant"); }
	OPMUL
	facteur
|	terme
	error  { yyerror("OPMUL manquant"); }
	facteur
|	terme
	OPMUL
	error  { yyerror("facteur manquant"); }
;

facteur:
	ID
|	ID
	PARENTHESE_OUVRANTE
	liste_expressions
	PARENTHESE_FERMANTE
|	ID
	error  { yyerror("parenthese ouvrante manquante"); }
	liste_expressions
	PARENTHESE_FERMANTE
|	ID
        PARENTHESE_OUVRANTE
	liste_expressions
	error  { yyerror("parenthese fermante manquante"); }
|
	ID
	PARENTHESE_OUVRANTE
	
	PARENTHESE_FERMANTE
|	NB
	
|	PARENTHESE_OUVRANTE
	expression
	PARENTHESE_FERMANTE
|	error  { yyerror("parenthese ouvrante manquante"); }
	expression
	
|	PARENTHESE_OUVRANTE
	expression
	error  { yyerror("parenthese fermante manquante"); }

|	PARENTHESE_OUVRANTE
	error  { yyerror("expression manquante"); }
	PARENTHESE_FERMANTE	
|       NOT
	facteur
|	CHAINE
;

signe:
	'+'
|	'-'
;
;
%%

int yyerror(char const *msg) {
       
	
	fprintf(stderr, "%s %d\n", msg,yylineno);
	return 0;
	
	
}

extern FILE *yyin;

int main()
{
 yyparse();
 return 1 ;
}

