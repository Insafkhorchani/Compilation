%{

 		/* Code C */
int outputLexical = 1;	// flag qui permet d'afficher(1)/masquer(0) les messages de l'analyseur lexicale, par defaut (1)
	/* fonction qui affiche un message passe en parametre */
void output(const char* msg) {
	if(outputLexical == 1) {
		printf("Analyseur lexicale: %s\n", msg);
	}
}	
 #include "exemple.tab.h"	                                                                         	
 


char buffer[50];



%}

%option yylineno

lettre			[a-zA-Z]
chiffre			[0-9]
id 			{lettre}({lettre}|{chiffre})*
nb 			{chiffre}+

blanc			[ \t\n]+
chaine			\'[^\']*\'
commentaire		"{"[^{}]*"}"
ouvrante  (\()
fermante  (\))
iderrone  {chiffre}({lettre}|{chiffre})*
%%

[bB][eE][gG][iI][nN]                     {output("mot cle: BEGIN"); return BEGIN_TOKEN ;}	 	
[dD][oO]								{ output("mot cle: DO");return  DO ; 		 				}
[eE][lL][sS][eE]						{  output("mot cle: ELSE");    return  ELSE ; 		 			}
[eE][nN][dD]							{output("mot cle: END"); return  END ; 		 			}
[fF][uU][nN][cC][tT][iI][oO][nN]		{output("mot cle: FUNCTION"); return  FUNCTION ; 	 		}
[iI][fF]								{output("mot cle: IF"); return  IF ; 		 				}
[pP][rR][oO][cC][eE][dD][uU][rR][eE]	{output("mot cle: PROCEDURE"); return  PROCEDURE ; 		}
[pP][rR][oO][gG][rR][aA][mM]			{output("mot cle: PROGRAM"); return  PROGRAM ; 	 		}
[tT][hH][eE][nN]						{output("mot cle: THEN"); return  THEN ; 		 			}
[vV][aA][rR]							{ output("mot cle: VAR");return  VAR ; 		 			}
[wW][hH][iI][lL][eE]					{output("mot cle: WHILE"); return  WHILE ; 			}
[nN][oO][tT]							{output("mot cle: NOT");return NOT ;}
"read"									{output("mot cle: READ");return READ;}
"write"	                                {output("mot cle: write"); return WRITE;}
":"                                     {output("mot cle: DEUX_POINTS"); return DEUX_POINTS ;}
";"                                     { output("mot cle: POINT_VIRGULE");return POINT_VIRGULE ;}
","                                     { output("mot cle: VIRGULE");return VIRGULE ;}
"integer"								{ output("mot cle: INTEGER");return INTEGER ;}
"array"									{output("mot cle: ARRAY");return ARRAY;}								
{id}									{output("mot cle: ID");return ID ;}
{nb}									{output("mot cle: NB");return NB ;}
==|<>|<|>|<=|>=							{output("mot cle: OPREL");return OPREL ;}
	
\+|\-  							{output("mot cle: OPADD");return OPADD ;}
:=										{output("mot cle: OPAFFECT");return OPAFFECT ;}
	/*
			opmul		(* / div mod and)
	*/
\*|\/|[dD][iI][vV]|[mM][oO][dD]|[aA][nN][dD]	{output("mot cle: OPMUL");return OPMUL ;}
	
{chaine} 								{output("mot cle: CHAINE"); return CHAINE ;}

	/*
			* caractéres blancs: espace, tabulation, retour chariot
	*/
{blanc}									{
											/* les caractéres blancs sont à ignorer, on ne retourne rien */
										}
	/*
			* commentaires: placés entre { ... }
	*/
{commentaire}							{output("mot cle: COMMENTAIRE");	return COMMENTAIRE ;}


{ouvrante}                              {output("mot cle: PARENTHESE_OUVRANTE"); return PARENTHESE_OUVRANTE ;}
{fermante}                              { output("mot cle: PARENTHESE_FERMANTE"); return PARENTHESE_FERMANTE ; }

{iderrone}              {fprintf(stderr,"illegal identifier \'%s\' on line :%d\n",yytext,yylineno);}
	/*
		Les caractéres restants
	*/
.										{
											
											
										}


.										{
											sprintf(buffer, "AUTRE: %s (%d caractere(s))", yytext, yyleng);
											output(buffer);
											/* dans le cas des autres caracteres, on doit le retourner tel qu'il est */
											return *yytext;	/* ou alors, return yytext[0] */
										}

%%
	/* Code C */

int yywrap(void) {
	return 1;
}
