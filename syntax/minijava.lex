%{	
 /* We usually need these... */	
 #include <stdio.h>	
 #include <stdlib.h>	
 		
 #include "miniJava.tab.h"	                                                                         	
 /* Local stuff we need here... */	
#include <math.h>	

int line =1;
 			
%}


%option yylineno


delim     [ \t]
bl        {delim}+
id        ([A-Za-z_][A-Za-z0-9_]*)
nb        (-?[1-9][0-9]*)
bool	  (true|false)
iderrone  [0-9][A-Za-z0-9_]*
comment_ouvrant "/*"
comment_fermant "*/"

COMMENT_LINE        "//"+([^\n])+"\n"
COMMENT_LONG {comment_ouvrant}([^*]|"\n")*+{comment_fermant}
COMMENT_BLOC_ouvrant 	   {comment_ouvrant}([^*]|\*+[^*/])*\*+

parenthese_ouvrante  (\()
parenthese_fermante  (\))
brace_ouvrante  (\{)
brace_fermante  (\})
bracket_ouvrante  (\[)
bracket_fermante  (\])


%%

{bl}                                                                                 

"\n" 			                                 line++;
"class"										     return CLASS;
"public static void main"						 return PSVM;
"public"							   		     return PUBLIC;
"static"									     return STATIC;
"void"										     return VOID;
"main"										     return MAIN;
"extends"									     return EXTENDS;
"return"									     return RETURN;
"if"										     return IF;
"else"										     return ELSE;
"while"										     return WHILE;
"System.out.println"								     return PRINT;
"length"								             return LENGTH;
"this"										     return THIS;
"new"										     return NEW;
"."										     return POINT;
";"										     return POINT_VIRGULE;
","											return VIRGULE;


"boolean"									     return BOOLEAN;
"int"										     return INT;
"String" 									     return STRING;




{parenthese_ouvrante}                                                                       return PARENTHESE_OUVRANTE;
{parenthese_fermante}                                                                       return PARENTHESE_FERMANTE;
{brace_ouvrante}                                                                       return BRACE_OUVRANTE;
{brace_fermante}                                                                       return BRACE_FERMANTE;
{bracket_ouvrante}                                                                        return BRACKET_OUVRANTE;
{bracket_fermante}                                                                        return BRACKET_FERMANTE;

										
"="	                                                                             return AFFECTATION;

"&&"                                                                                 return OPERATOR;  
"<"                                                                                  return OPERATOR; 
">"                                                                                  return OPERATOR; 
"+"                                                                                  return OPERATOR; 
"-"                                                                                  return OPERATOR;   
"*"                                                                                  return OPERATOR;  
"!"										    										 return NOT;


{id}                                                                                 return ID;  
{nb}                                                                                 return NUMBER;  
{bool}                                                                               return BOOL; 



{COMMENT_LINE}         								     printf("commentaire line");  
{COMMENT_LONG}        								     printf("commentaire long");   




{iderrone}                    {fprintf(stderr," illegal identifier \'%s\' on line :%d\n",yytext,yylineno);}
{COMMENT_BLOC_ouvrant}          {fprintf(stderr," comment ouvert \'%s\' on line :%d\n",yytext,yylineno);}
{comment_fermant}		{fprintf(stderr," comment fermant \'%s\' on line :%d\n",yytext,yylineno);}	



%%


int yywrap()
{
	return(1);
}
