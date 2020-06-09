%{
    #include <stdio.h>
int yyparse();
void yyerror(const char *s);
extern int yylex();
extern int yyparse();
%}

%token ID1

%%
    start: ID1 {printf("ID found \n");}
%%

int main()
{
    yyparse();
    return 0;
}

void yyerror(char const *s)
{

}

int yywrap()
{
    return 0;
}