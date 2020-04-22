%{	
 /* We usually need these... */	
 #include <stdio.h>	
 #include <stdlib.h>	
 		
 #include "exemple.tab.h"	                                                                         	
 /* Local stuff we need here... */	
#include <math.h>	 			
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

[bB][eE][gG][iI][nN]                     { return BEGIN_TOKEN ;}	 	
[dD][oO]								{ return  DO ; 		 				}
[eE][lL][sS][eE]						{      return  ELSE ; 		 			}
[eE][nN][dD]							{ return  END ; 		 			}
[fF][uU][nN][cC][tT][iI][oO][nN]		{ return  FUNCTION ; 	 		}
[iI][fF]								{ return  IF ; 		 				}
[pP][rR][oO][cC][eE][dD][uU][rR][eE]	{ return  PROCEDURE ; 		}
[pP][rR][oO][gG][rR][aA][mM]			{ return  PROGRAM ; 	 		}
[tT][hH][eE][nN]						{ return  THEN ; 		 			}
[vV][aA][rR]							{ return  VAR ; 		 			}
[wW][hH][iI][lL][eE]					{return  WHILE ; 			}
[nN][oO][tT]							{return NOT ;}
"read"									{return READ;}
"write"	                                { return WRITE;}
":"                                     { return DEUX_POINTS ;}
";"                                     { return POINT_VIRGULE ;}
","                                     { return VIRGULE ;}
"integer"								{  return INTEGER ;}
"array"									{return ARRAY;}								
{id}									{return ID ;}
{nb}									{return NB ;}
==|<>|<|>|<=|>=							{return OPREL ;}
	
\+|\-  							{return OPADD ;}
:=										{return OPAFFECT ;}
	/*
			opmul		(* / div mod and)
	*/
\*|\/|[dD][iI][vV]|[mM][oO][dD]|[aA][nN][dD]	{return OPMUL ;}
	
{chaine} 								{ return CHAINE ;}

	/*
			* caractéres blancs: espace, tabulation, retour chariot
	*/
{blanc}									{
											/* les caractéres blancs sont à ignorer, on ne retourne rien */
										}
	/*
			* commentaires: placés entre { ... }
	*/
{commentaire}							{	return COMMENTAIRE ;}


{ouvrante}                              { return PARENTHESE_OUVRANTE ;}
{fermante}                              {  return PARENTHESE_FERMANTE ; }

{iderrone}              {fprintf(stderr,"illegal identifier \'%s\' on line :%d\n",yytext,yylineno);}
	/*
		Les caractéres restants
	*/

.			{fprintf(stderr,"Illegal character \'%s\' on line :%d\n",yytext,yylineno);}


%%
int yywrap()
{
	return(1);
}