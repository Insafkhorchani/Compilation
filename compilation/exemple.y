%{
   
    #include <stdio.h>
	#include <stdlib.h>
	int yylex(void);
	void yyerror(char*);

	int outputSyntaxique = 1;	// flag qui permet d'afficher(1)/masquer(0) les messages de l'analyseur syntaxique, par d�faut (1)
		/* fonction qui affiche un message passe en parametre */
	void output_syn(const char* msg) {
		if(outputSyntaxique == 1) {
			printf("Analyseur syntaxique: %s\n", msg);
		}
	}

%}
%debug

	/* l'axiome de la grammaire */


/* Tokens*/
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


%error_verbose
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
                          	|
				PROGRAM 					
	                        ID 							
	                        POINT_VIRGULE										
	                        instruction_composee		
                          			
                           	|error ID POINT_VIRGULE            {yyerror (" program attendu on line : ");  yyerrok;}
                            	|PROGRAM error POINT_VIRGULE       {yyerror (" nom du programme invalide on line : "); yyerrok; } 
                            	|PROGRAM ID error                  {yyerror (" point virgule attendu on line : "); yyerrok; };

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
	error  	{ yyerror("mot cle var introuvable !");  yyerrok;}			
	liste_identificateurs
	DEUX_POINTS					
	INTEGER 				
	POINT_VIRGULE	
|
  
	declaration_var		
	VAR 				
	error { yyerror("liste_identificateurs manquante "); yyerrok;}
	DEUX_POINTS					
	INTEGER 				
	POINT_VIRGULE	
|	declaration_var 
    VAR
	liste_identificateurs
	error { yyerror(":  manquante !"); yyerrok; }
	INTEGER 				
	POINT_VIRGULE
	
|	declaration_var		
	VAR 				
	liste_identificateurs
	DEUX_POINTS	
    error 					{ yyerror("mot cle 'int' introuvable !");  yyerrok;}
    POINT_VIRGULE	
	
	|
    declaration_var		
	VAR 				
	liste_identificateurs
	DEUX_POINTS	
    INTEGER
    error { yyerror(" ; manquante !"); yyerrok; }
	
;

liste_identificateurs:
	ID 							
|	liste_identificateurs		
	POINT_VIRGULE					
	ID
	
|	liste_identificateurs		
	error {yyerror(" ; manquante !"); yyerrok;} 					
	ID	
|	liste_identificateurs		
	POINT_VIRGULE	
    error {yyerror(" id introuvable!"); yyerrok;} 	

;

declarations_sous_programmes:
	declarations_sous_programmes
	declarations_sous_programme 
	POINT_VIRGULE							
|	/* chaîne vide */
|
	declarations_sous_programmes
	declarations_sous_programme 
	error {yyerror(" ; manquante!"); yyerrok;}	
;

declarations_sous_programme:
	entete_sous_programme		
	declaration 				
	instruction_composee 
	|
	 entete_sous_programme						
	 instruction_composee 
	 
	|error {yyerror(" entete de programme  manquante!"); yyerrok;}
	 declaration 				
	 instruction_composee
	 
	|entete_sous_programme		
	 declaration 
	 error {yyerror(" corps de fonction / procedure  manquant  manquante!"); yyerrok;}
	
	
  
;

entete_sous_programme:
	FUNCTION					
	ID 							
	arguments					
	DEUX_POINTS							
	INT 						
	POINT_VIRGULE	
  
   	|
					
	error {yyerror("  mot cle function manquant !"); yyerrok;} 						
	ID 
	arguments					
	DEUX_POINTS							
	INT 						
	POINT_VIRGULE
 
   	|
	FUNCTION					
	error {yyerror("  nom  de fonction manquant !"); yyerrok;} 						
	arguments					
	DEUX_POINTS							
	INT 						
	POINT_VIRGULE
   |
	FUNCTION					
	ID 							
	arguments					
	error {yyerror("  : manquant !"); yyerrok;} 						
	INT 						
	POINT_VIRGULE
	|
	FUNCTION					
	ID 							
	arguments					
	DEUX_POINTS							
	error {yyerror("  return type de fonction manquant !"); yyerrok;}  						
	POINT_VIRGULE
	|
    FUNCTION					
	ID 							
	arguments					
	DEUX_POINTS							
	INT 						
	error {yyerror("  ;manquante!"); yyerrok;}  
	|	
	PROCEDURE 					
	ID 							
	arguments 					
	POINT_VIRGULE
	|	
	PROCEDURE 					
	error {yyerror("nom  e procedure manquant !"); yyerrok;} 						
	arguments 					
	POINT_VIRGULE
	
	|
	PROCEDURE
	ID 							
	arguments					
	error {yyerror(";manquante!"); yyerrok;} 


	
;

arguments:
	PARENTHESE_OUVRANTE
	liste_parametres 			
	PARENTHESE_FERMANTE						
|       error{ yyerror("parenthese ouvrante manquante");  yyerrok;} 
	liste_parametres 			
	PARENTHESE_FERMANTE						
|	PARENTHESE_OUVRANTE
	liste_parametres 			
	error{ yyerror("parenthese fermante manquante");  yyerrok;} 						
|	/* chaîne vide */
;

liste_parametres:
	parametre 					
|	liste_parametres 			
	POINT_VIRGULE						
	parametre
|	liste_parametres 			
	error{ yyerror("point virgule manquante");  yyerrok;} 					
	parametre
|	error{ yyerror("parametre manquante");  yyerrok;}  			
	POINT_VIRGULE						
	parametre
|	liste_parametres 			
	POINT_VIRGULE						
	error{ yyerror("parametre manquante");  yyerrok;}  

parametre:
	ID 							
	DEUX_POINTS 						
	INTEGER 						
|	error{ yyerror("identifiant manquant"); yyerrok; } 							
	DEUX_POINTS 						
	INTEGER 						
|	ID						
	DEUX_POINTS 						
	error{ yyerror("integer manquant");  yyerrok;} 												
|	VAR 						
	ID 							
	DEUX_POINTS 						
	INTEGER
;

instruction_composee:
	BEGIN_TOKEN
	instructions_optionnelles
	END|
	error{ yyerror("Begin manquante"); yyerrok; }
	instructions_optionnelles
	END
|	BEGIN_TOKEN
	instructions_optionnelles
	error{ yyerror("End manquante");  yyerrok;}
;

instructions_optionnelles:
	liste_instructions
;

liste_instructions:
	instruction POINT_VIRGULE
|	liste_instructions
	instruction POINT_VIRGULE
|	instruction
	error 					{ yyerror("point virgule d'instruction omis"); yyerrok; }
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
|	error { yyerror("IF manquante"); yyerrok; }
	expression
	THEN
	instruction
	ELSE
	instruction

|	IF
	expression
	error { yyerror("THEN manquante"); yyerrok; }
	instruction
	ELSE
	instruction
|	IF
	expression
	THEN
	instruction
	error { yyerror("ELSE manquante");  yyerrok;}
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
	error  { yyerror("PARENTHESE OUVRANTE manquante");  yyerrok;}
	liste_expressions
	PARENTHESE_FERMANTE
|	ID
	PARENTHESE_OUVRANTE
	liste_expressions
	PARENTHESE_FERMANTE
|	ID
	PARENTHESE_OUVRANTE
	liste_expressions
	error  { yyerror("PARENTHESE_FERMANTE manquante"); yyerrok; }
;


liste_expressions:
	expression
|	liste_expressions
	VIRGULE
	expression
|	liste_expressions
	error  { yyerror("virgule manquante");  yyerrok;}
	expression
|	liste_expressions
	VIRGULE
	error  { yyerror("expression manquante"); yyerrok; }
;

expression:
	expression_simple
|	expression_simple
	OPREL
	expression_simple
|	error  { yyerror("expression simple manquante"); yyerrok; }
	OPREL
	expression_simple
|	expression_simple
	error  { yyerror("OPREL manquant"); yyerrok; }
	expression_simple
|	expression_simple
	OPREL
	error  { yyerror("expression simple manquante");  yyerrok;}
;

expression_simple:
	terme
|	signe 
        error  { yyerror("terme manquant"); yyerrok; }
|	error  { yyerror("signe manquant"); yyerrok; } 
         terme
|	expression_simple
	OPADD
	terme

|	error  { yyerror("expression simple manquante"); yyerrok; } 
	OPADD
	terme
|	expression_simple
	error  { yyerror("OPADD manquante"); yyerrok; } 
	terme
|	expression_simple
	OPADD
	error  { yyerror("terme manquante");  yyerrok;} 
;

terme:
	facteur
|	terme
	OPMUL
	facteur
|	error  { yyerror("terme manquant"); yyerrok; }
	OPMUL
	facteur
|	terme
	error  { yyerror("OPMUL manquant");  yyerrok;}
	facteur
|	terme
	OPMUL
	error  { yyerror("facteur manquant");  yyerrok;}
;

facteur:
	ID
|	ID
	PARENTHESE_OUVRANTE
	liste_expressions
	PARENTHESE_FERMANTE
|	ID
	error  { yyerror("parenthese ouvrante manquante");  yyerrok;}
	liste_expressions
	PARENTHESE_FERMANTE
|	ID
        PARENTHESE_OUVRANTE
	liste_expressions
	error  { yyerror("parenthese fermante manquante");  yyerrok;}
|
	ID
	PARENTHESE_OUVRANTE
	
	PARENTHESE_FERMANTE
|	NB
	
|	PARENTHESE_OUVRANTE
	expression
	PARENTHESE_FERMANTE
|	error  { yyerror("parenthese ouvrante manquante"); yyerrok; }
	expression
	
|	PARENTHESE_OUVRANTE
	expression
	error  { yyerror("parenthese fermante manquante"); yyerrok; }

|	PARENTHESE_OUVRANTE
	error  { yyerror("expression manquante"); yyerrok; }
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

#include "lex.yy.c"
void yyerror(char *s) {
	extern int yylineno;
	char str[100];
	sprintf(str,"Erreur (ligne n %d): %s\n", yylineno, s);
	printf(str);
}

int main(int argc, char *argv[]) {
	yydebug = 0;

	yyparse();
	return 0;
}
