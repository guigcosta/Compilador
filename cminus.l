/****************************************************/
/* File: tiny.l                                     */
/* Lex especificação para C-                        */
/*                                                  */
/****************************************************/

%{
#include "globals.h"
#include "util.h"
#include "scan.h"
/* lexeme of identifier or reserved word */
char tokenString[MAXTOKENLEN+1];
static int yylex(void);
%}

digit       [0-9]
number      {digit}+
letter      [a-zA-Z]
identifier  {letter}+
newline     \n
whitespace  [ \t]+

%%

"/*"            {  char c;
				   int flag = 2;
				   while(flag){
						c = input();
						if(c == EOF){
							break;
						}
						else if(c == '\n') lineno++;
						else{
							if(c == '*') flag = 1;
							else if(flag == 1 && c == '/') flag = 0;
							else flag = 2;

						}
				   }
				}
"else"          {return ELSE;}
"if"            {return IF;}
"int"		{return INT;}
"return"	{return RETURN;}
"void"		{return VOID;}
"while"		{return WHILE;}
"+"             {return PLUS;}
"-"             {return MINUS;}
"*"             {return TIMES;}
"/"             {return OVER;}
"<"             {return LT;}
"<="            {return LTIGUAL;}
">"             {return MT;}
">="            {return MTIGUAL;}
"=="            {return EQ;}
"!="            {return DIFFERENT;}
"="             {return ASSIGN;}
";"             {return SEMI;}
","		{return COMA;}
"("             {return LPAREN;}
")"             {return RPAREN;}
"["		{return LCOLCHETE;}
"]"		{return RCOLCHETE;}
"{"		{return LCHAVE;}
"}"		{return RCHAVE;}
{number}        {return NUM;}
{identifier}    {return ID;}
{newline}       {lineno++;}
{whitespace}    {/* skip whitespace */}
.               {return ERROR;}

%%

TokenType getToken(void)
{ static int firstTime = TRUE;
  TokenType currentToken;
  if (firstTime)
  { firstTime = FALSE;
    lineno++;
    yyin = source;
    yyout = listing;
  }
  currentToken = yylex();
  strncpy(tokenString,yytext,MAXTOKENLEN);
  if (TraceScan) {
    fprintf(listing,"\t%d: ",lineno);
    printToken(currentToken,tokenString);
  }
  return currentToken;
}

