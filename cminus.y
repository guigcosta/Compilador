/****************************************************/
/* File: tiny.y                                     */
/* The TINY Yacc/Bison specification file           */
/*                                                  */
/****************************************************/
%{
#define YYPARSER /* distinguishes Yacc output from other code files */

#include "globals.h"
#include "util.h"
#include "scan.h"
#include "parse.h"

#define YYSTYPE TreeNode *
static char * savedName; /* for use in assignments */
static int savedLineNo;  /* ditto */
static TreeNode * savedTree; /* stores syntax tree for later return */
static int yylex(void);
static char * savedFunName = "Global";
static int flagFun = 0;
static int flagType = 0;

%}

%token IF WHILE ELSE RETURN INT VOID
%token PLUS MINUS TIMES OVER LT LTIGUAL MT MTIGUAL EQ DIFFERENT ASSIGN
%token LPAREN RPAREN LCOLCHETE RCOLCHETE LCHAVE RCHAVE SEMI COMA
%token ERROR NUM ID 

%% /* Grammar para C- */

programa : declaracao_lista{
			savedTree = $1;
		 };

declaracao_lista : declaracao_lista declaracao{
						YYSTYPE aux = $1;
						if(aux != NULL){
							while(aux->sibling != NULL){
								aux = aux->sibling;
							}
							aux->sibling = $2;
							$$ = $1;
						}
						else{
							$$ = $2;
						}
				}|
				declaracao{
					$$ = $1;
				};

declaracao : var_declaracao{
		   		$$ = $1;
		   }|
			fun_declaracao{
				$$ = $1;
				savedFunName = "Global";
			}
			| ERROR {$$ = NULL;};

var_declaracao : tipo_especificador idn SEMI{
					$$ = $1;
					$$->child[0] = $2;
					$$->escopo = savedFunName;
				}|
				tipo_especificador idn LCOLCHETE number RCOLCHETE SEMI{
					$$ = newExpNode(VetorK);
                       			$$->child[0] = $2;
                        		$2->child[0] = $4;
                        		$$->type = $1->type;
                        		$$->escopo = savedFunName;

				};

tipo_especificador	:	INT{
							$$ = newExpNode(IntK);
                        				$$->type = Integer;
                        				$$->escopo = savedFunName;
                        				flagType = 0;
					}|
						VOID{
							$$ = newExpNode(VoidK);
                        				$$->type = Void;
                        				$$->escopo = savedFunName;
                        				flagType = 1;
					};

fun_declaracao 		: INT idn funcao_id LPAREN params RPAREN composto_decl
                     		 {
                        				$$ = newExpNode(IntFuncK);
                        				$$->type = Integer;
                        				flagFun = 1;
                        				$$->child[0] = $2;
                        				$2->child[0] = $5;
                        				$2->child[1] = $7;
                     		 }
                      	| VOID idn funcao_id LPAREN params RPAREN composto_decl
                      		{
                        				$$ = newExpNode(VoidFuncK);
                        				$$->type = Void;
                        				flagFun = 1;
                        				$$->child[0] = $2;
                        				$2->child[0] = $5;
                        				$2->child[1] = $7;
                      		};


params : param_lista{
	  		$$= $1;
	  }|
		VOID{
			$$ = NULL;
	  };

param_lista : param COMA param_lista{
						$$ = $1;
                        			$$->sibling = $3;

			}|
			param{
				$$ = $1;
			};

param : tipo_especificador idn{
	  		$$ = $1;
			$$->child[0] = $2;
	  }|
	  tipo_especificador idn LCOLCHETE RCOLCHETE{
			$$ = newExpNode(VetorK);
                        $$->child[0] = $2;
                        $$->type = $1->type;

	  };

composto_decl : LCHAVE local_declaracoes statement_lista RCHAVE{
						YYSTYPE aux = $2;
						if(aux != NULL)
						{
							while(aux->sibling != NULL){
								aux = aux->sibling;
							}
							aux->sibling = $3;
							$$ = $2;
						}
						else{
							$$ = $3;
						}

				};

local_declaracoes : local_declaracoes var_declaracao{
						YYSTYPE aux = $1;
						if(aux != NULL){
							while(aux->sibling != NULL){
								aux = aux->sibling;
							}
							aux->sibling = $2;
							$$ = $1;
						}
						else{
							$$ = $2;
						}

					}|{$$ = NULL;};

statement_lista : statement_lista statement{
						YYSTYPE aux = $1;
						if(aux != NULL){
							while(aux->sibling != NULL){
								aux = aux->sibling;
							}
							aux->sibling = $2;
							$$ = $1;
						}
						else{
							$$ = $2;
						}
				}|{$$ = NULL;};

statement : expressao_decl{
		  		$$ = $1;
		  }|
		  composto_decl{
		  		$$ = $1;
		  }|
		  selecao_decl{
		  		$$ = $1;
		  }|
		  iteracao_decl{
		  		$$ = $1;
		  }|
		  retorno_decl{
		  		$$ = $1;
		  };

expressao_decl : expressao SEMI{
					$$ = $1;
				}|
				SEMI{$$ = $1;};

selecao_decl : IF LPAREN expressao RPAREN statement{
					$$ = newStmtNode(IfK);
					$$->child[0] = $3;
					$$->child[1] = $5;
			}|
			IF LPAREN expressao RPAREN statement ELSE statement{
					$$ = newStmtNode(IfK);
					$$->child[0] = $3;
					$$->child[1] = $5;
					$$->child[2] = $7;
			};

iteracao_decl : WHILE LPAREN expressao RPAREN statement{
					$$ = newStmtNode(WhileK);
					$$->child[0] = $3;
					$$->child[1] = $5;
			};

retorno_decl : RETURN SEMI{
				$$ = newStmtNode(ReturnK);
			   }|
			   RETURN expressao SEMI{
					$$ = newStmtNode(ReturnK);
					$$->child[0] = $2;
			   };

expressao : var ASSIGN expressao{
		  		$$ = newStmtNode(AssignK);
				$$->child[0] = $1;
				$$->child[1] = $3;
				$$->lineno = lineno;
		  }|
		   simples_expressao{
				$$ = $1;
		};
var : idn{
		$$ =$1;
	}|
	idn LCOLCHETE expressao RCOLCHETE{
		$$ = $1;
		$$->child[0]=$3;
	};
simples_expressao : soma_expressao relacional soma_expressao{
						$$ = $2;
						$$->child[0]=$1;
						$$->child[1]=$3;
					}|
					soma_expressao{
						$$ = $1;
					};
relacional : LT{
				$$ = newExpNode(OpK);
				$$->attr.op = LT;
		    }|
			LTIGUAL{
				$$ = newExpNode(OpK);
				$$->attr.op = LTIGUAL;

			}|
			MT{
				$$ = newExpNode(OpK);
				$$->attr.op = MT;

			}|
			MTIGUAL{
				$$ = newExpNode(OpK);
				$$->attr.op = MTIGUAL;

			}|
			EQ{
				$$ = newExpNode(OpK);
				$$->attr.op = EQ;

			}|
			DIFFERENT{
				$$ = newExpNode(OpK);
				$$->attr.op = DIFFERENT;

			};

soma_expressao : soma_expressao soma termo{
					$$ = $2;
					$$->child[0]=$1;
					$$->child[1]=$3;

			}|
			termo{
				$$ = $1;
			};
soma : PLUS{
	 		$$ = newExpNode(OpK);
			$$->attr.op = PLUS;
	 }|
	 MINUS{
	 		$$ = newExpNode(OpK);
			$$->attr.op = MINUS;
	 };

termo : termo mult fator{
	  		$$ = $2;
			$$->child[0] = $1;
			$$->child[1] = $3;
	  }|
	  fator{
			$$ = $1;
	  };

mult : TIMES{
	 		$$ = newExpNode(OpK);
			$$->attr.op = TIMES;
	 }|
	 OVER{
	 		$$ = newExpNode(OpK);
			$$->attr.op = OVER;
	 };
fator : LPAREN expressao RPAREN{
	  		$$ = $2;
	  }|
	  var{
			$$ = $1;
		}|
	  ativacao{
			$$ =$1;
		}
	  |number
	  |ERROR {
			$$ = NULL;
		};

ativacao : idn LPAREN args RPAREN{
		 		$$ = $1;
				$$->child[0] = $3;
		 };

args	 : arg_lista {
				$$ = $1; 
		}
	  | { $$ = newExpNode(NullK); };

arg_lista : arg_lista COMA expressao{
				YYSTYPE aux = $1;
						if(aux != NULL){
							while(aux->sibling != NULL){
								aux = aux->sibling;
							}
							aux->sibling = $3;
							$$ = $1;
						}
						else{
							$$ = $3;
						}

			}|expressao{
					$$=$1;
			};

idn : ID{
		$$ = newExpNode(IdK);
                $$->attr.name = copyString(tokenString);
                savedName = $$->attr.name;
                $$->lineno = lineno;
                $$->escopo = savedFunName;
                if(flagFun == 1){
                	savedFunName = $$->attr.name;
                	flagFun = 0;
                }
                if(flagType == 0){
                        $$->type = Integer;
                }
                else{
                        $$->type = Void;
                        flagType = 0;
                }
	};
number : NUM{
		$$ = newExpNode(ConstK);
		$$->attr.val = atoi(tokenString);
	};

funcao_id           : {savedFunName = savedName; }
		                ;

%%

int yyerror(char * message)
{ fprintf(listing,"Syntax error at line %d: %s\n",lineno,message);
  fprintf(listing,"Current token: ");
  printToken(yychar,tokenString);
  Error = TRUE;
  return 0;
}

/* yylex calls getToken to make Yacc/Bison output
 * compatible with ealier versions of the TINY scanner
 */
static int yylex(void)
{ return getToken(); }

TreeNode * parse(void)
{ yyparse();
  return savedTree;
}
