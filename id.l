%{
	#include <stdio.h>
	#include "id.tab.h"	
	extern char* strdup(const char*);
	#include <string.h>
%}

ID	[a-zA-z][a-zA-z0-9_]*
NUM [0-9][0-9]*
header [i][m][p][o][r][t][ ][a-z]+[.][h]

%%

[ \t]+	
"int"	return(INT);
"char"	return(CHAR);
"float"	return(FLOAT);   
"if" 	return (IF);
"elif"  return (ELIF);
"else"  return (ELSE);   
"for"   return(FOR);
"switch" return(SWITCH);
"case" return(CASE);
"default" return(DEFAULT);
"print" return(PRINT); 
"power" return(POWER);
{ID}	{yylval.stringValue = strdup(yytext); return(ID);}
{NUM}   {yylval.val = atoi(yytext); return(NUM);}
"+"     return(PLUS);
"-"     return(MINUS);
"*"     return(MUL);
"/"     return(DIV);
"=="    return(EQ);
"!="    return(NOTEQUAL);
">"     return(GT);
">="    return(GE);
"<"     return(LT);
"<="    return(LE);
"func main()" return(MAIN);
{header} {printf("Header file found\n");}
"||".*   {printf("single line cmnt found\n");}
[,:{}=()~]	{ yylval.stringValue = strdup(yytext); return *yytext;}
.	{ printf("\nunknown character"); }
[\n] {}
%%



