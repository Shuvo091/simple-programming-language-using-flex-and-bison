%{
	int yylex();
	void yyerror(const char *s);
	#include <stdio.h>
	#include <math.h>	
	#include <string.h>
	#include <stdlib.h>
	extern int yylex();
	extern int yyparse();
	extern FILE *yyin;
	extern FILE *yyout;

	int no_of_var = 0;
	struct variable_struct
		{
			char var_id[30];
			int var_type;
			int ival;
			char cval;
			float fval;
		}variable[500];

	int search_id(char X[30])
	{
		int  i = 0;
		for(i=0; i<no_of_var; i++)
		{
			if(!strcmp(variable[i].var_id , X))
			{
				return 1;
			}
		}
		return 0;
	}
	void set_id_type(int x)
	{
		int  i = 0;
		for(i=0; i<no_of_var; i++)
		{
			if(variable[i].var_type == -1)
			{
				variable[i].var_type = x;
			}
		}
	}
	int get_id_index(char X[30])
	{
		int  i = 0;
		for(i=0; i<no_of_var; i++)
		{
			if(!strcmp(variable[i].var_id , X))
			{
				//puts(variable[i].var_id);
				return i;
			}
		}
		return -1;
	}

%}

%union {
   long val;
   char* stringValue;
}

%token POWER INT FLOAT CHAR NUM ID MAIN PLUS MINUS MUL DIV IF ELIF ELSE EQ NOTEQUAL GT GE LT LE FOR CASE SWITCH DEFAULT PRINT/* define token type for numbers */
%left PLUS MINUS
%left MUL DIV


%type<val> power_code print_code for_loop code assignment e f t bool_expression expression TYPE INT FLOAT CHAR NUM MAIN PLUS MINUS MUL DIV IF ELIF ELSE EQ NOTEQUAL GT GE LT LE FOR /* define token type for numbers */
%type<stringValue>   something ID1 ID



%%	  	


program: 
	|program mainfunc
	;
mainfunc: MAIN '{' code '}'  {
	printf("\n Valid code\n");
	printf("\nnumber of variables = %d\n", no_of_var);
	int i = 0;
	for(;i<no_of_var; i=i+1)
	{
		printf("%s  : type --> ", variable[i].var_id);
		if(variable[i].var_type == 0)
		{
			printf("char   value --> %c", variable[i].cval);
		}
		else if(variable[i].var_type == 1)
		{
			printf("integer   value --> %d", variable[i].ival);
		}
		else if(variable[i].var_type == 2)
		{
			printf("float   value --> %f", variable[i].fval);
		}
		printf("\n");
	}
}
	;
code: declaration code{ }
	| assignment code{ }
	| condition code { }
	| for_loop code { }
	| switch_case code { }
	| print_code code{ }
	| power_code code { }
	|
	;
power_code: POWER '(' NUM ',' NUM ')' ':' {
	$$ = pow($3,$5);
	printf("power func value: %d\n", $$) ;
}
print_code: PRINT '(' something ')' ':' {
											int i = get_id_index($3);
											printf("\nprint: %s value: %d\n", variable[i].var_id, variable[i].ival);
											if(variable[i].var_type == 0)
											{
												$$ =  variable[i].cval;
											}
											else if(variable[i].var_type == 1)
											{
												$$ =  variable[i].ival;
											}
											else
											{
												$$ = variable[i].fval;
											}
																		//printf("\nprint pawa gese\n");

										}
	;
something: ID {$$ = $1;
				int i = get_id_index($1);
				//printf("\nprint pawa gese  er moddhe variable er naam : %s ar value: %d\n", variable[i].var_id, variable[i].ival);
				if(variable[i].var_type == 0)
				{
					//printf("%c", variable[i].cval);
				}
				else if(variable[i].var_type == 1)
				{
					//printf("%d\n", variable[i].ival);
				}
				else
				{
					//printf("%f\n", variable[i].fval);
				}
				}
	| NUM {
		$$ = (char *)$1; 
		printf("%d\n", $1);
		}
	;
switch_case: SWITCH '(' ID ')' '{' case_code '}' { 
										printf("Switch case found\n");
												}
	;
case_code: case1_code default_code {}
	;
case1_code:CASE NUM '~' code  case1_code {}
	| 
	;
default_code: DEFAULT '~' code {}
	;
for_loop: FOR '('assignment assignment assignment  ')' '{' code '}' {
												//printf("\nfor loop found\n");
												int j = $3;
												int diff = abs($3-$4);
												int incc = abs($5);
												for(j = 1; j<diff; j=j+incc)
												{
													printf("loop running: %d\n", $8);
												}
												
											  }
	;
condition: IF '(' bool_expression ')' '{' code '}' else_if else {
	                                                  printf("IF condition found\n");
													  if( $3 == 1)
													  {
														  printf("if condition is TRUE\n");
													  }
													  else
													  {
														  printf("if condition is FALSE\n");
													  }
													}
	;
else_if: ELIF '(' bool_expression ')' '{' code '}' else_if {
	                                                       	printf("ELIF condition found\n");
													  if( $3 == 1)
													  {
														 printf("elif condition is TRUE\n");
													  }
													  else
													  {
														 printf("elif condition is false\n");
													
													  }	

                                                           }
	|
	;
else: ELSE '{' code '}'   {
                            printf("\nelse condition is found\n");
                          }
	|
	;
bool_expression: expression EQ expression {
                             if ($1 == $3)
							 {
								 $$ = 1;
							 }
							 else
							 {
								 $$ = 0;
							 }
							}
	| expression NOTEQUAL expression {
                             if ($1 == $3)
							 {
								 $$ = 0;
							 }
							 else
							 {
								 $$ = 1;
							 }
							}
	| expression GT expression {
                             if ($1 > $3)
							 {
								 $$ = 1;
							 }
							 else
							 {
								 $$ = 0;
							 }
							}
	| expression GE expression {
                             if ($1 >= $3)
							 {
								 $$ = 1;
							 }
							 else
							 {
								 $$ = 0;
							 }
							}
	| expression LT expression {
                             if ($1 < $3)
							 {
								 $$ = 1;
							 }
							 else
							 {
								 $$ = 0;
							 }
							}
    | expression LE expression {
                             if ($1 <= $3)
							 {
								 $$ = 1;
							 }
							 else
							 {
								 $$ = 0;
							 }
							}
	;
declaration: TYPE ID1 ':'	{ 
					
					set_id_type($1);
				}
	;

TYPE: INT	{ $$ = 1; printf("variable type: integer  ");}

     | FLOAT	{ $$ = 2;printf("variable type: float  ");}

     | CHAR	{ $$ = 0; printf("variable type: char  ");}
     ;

ID1: ID1 ',' ID	{ if(search_id($3) == 0 )
					 {
						 printf("Valid Declaration\n");
						strcpy(variable[no_of_var].var_id,$3);
						printf("variable name: %s  ", $3);
						variable[no_of_var].var_type = -1;
						no_of_var = no_of_var + 1;

					 }
					 else
					 {
						 printf("\nvariable is already declared\n");
					 }
					//printf("\n%s\n",$3);
				}

     |ID		{
		 			if(search_id($1) == 0 )
					 {
						 printf("Valid Declaration\n");
						strcpy(variable[no_of_var].var_id,$1);
						printf("variable name: %s  ", $1);
						variable[no_of_var].var_type = -1;
						no_of_var = no_of_var + 1;

					 }
					 else
					 {
						printf("\nvariable is already declared\n");
					 }

		 			//printf("\n%s\n",$1);
		 			strcpy($$,$1) ;
	 			}
     ;
assignment: ID '=' expression ':' { 
									$$ = $3;
									//printf("assign val: %d\n", $$);
									if(search_id($1) == 1)
									{
										int i = get_id_index($1);
	                                printf("Assign in %s: ", variable[i].var_id);
									if(variable[i].var_type == 0)
									{
										variable[i].cval =(char)$3;
										printf("var value %c\n", variable[i].cval);
									}
									if(variable[i].var_type == 1)
									{
										//printf("\ninteger e ashse\n");
										variable[i].ival = $3;
										printf("var value %d \n", variable[i].ival);
									}
									if(variable[i].var_type == 2)
									{
										variable[i].fval = (float)$3;
										printf("var value %f \n",variable[i].fval);
									}


									}
									else
									{
										printf("Variable is not declared\n");
									}
									
									//printf("\nValid assignment\n");
									}
	;
expression: e {$$ = $1; 
				//printf("\nvalue in exp: %d\n", $$);
			  }
	;
e: e PLUS f {$$ = $1 + $3; 
				 //printf("\nvalue in exp: %d\n", $1); 
				}
	| e MINUS f {$$ = $1 - $3;}
	| f      {$$ = $1;}
	;
f: f MUL t {$$ = $1 * $3;}
	| f DIV t {if($3 != 0)
				{
					$$ = $1 / $3;
	            }
	}
	| t   {$$ = $1;}
	;
t: '(' e ')' {$$ = $2;}
	| ID     {
		      int id_index = get_id_index($1);
			  if(id_index == -1)
			  {
				  yyerror("VARIABLE DOESN'T EXIST");
			  }
			  else
			  {
				  if(variable[id_index].var_type == 0)
				  {
					  $$ = variable[id_index].cval;
				  }
				  if(variable[id_index].var_type == 1)
				  {
					  $$ = variable[id_index].ival;
				  }
				  if(variable[id_index].var_type == 2)
				  {
					  $$ = variable[id_index].fval;
				  }
			  }
				}
	| NUM    {$$ = $1; 
	//printf("ekhane num --> %d", $1);
	}
	;
%%


int main()
{
    yyin = fopen("input.txt","r");
	yyout = freopen("out.txt","w",stdout);
	yyparse();
	fclose(yyin);
	fclose(yyout);
	return 0;
}

void yyerror (char const *s)
{
	//fprintf (stderr, "%s\n", s);
}

int yywrap()
{
	return 0;
}
