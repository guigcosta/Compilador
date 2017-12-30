/****************************************************/
/* File: analyze.c                                  */
/* Semantic analyzer implementation                 */
/* for the TINY compiler                            */
/* Compiler Construction: Principles and Practice   */
/*                                                  */
/****************************************************/

#include "globals.h"
#include "symtab.h"
#include "analyze.h"

static void typeError(TreeNode * t, char * message);

char nomeEscopo[32] = "global";

int flagId = 0;
char nomeId[64];

static int location = 0;

/* Procedure traverse is a generic recursive
 * syntax tree traversal routine:
 * it applies preProc in preorder and postProc
 * in postorder to tree pointed to by t
 */
static void traverse( TreeNode * t,
               void (* preProc) (TreeNode *),
               void (* postProc) (TreeNode *) )
{ if (t != NULL)
  { preProc(t);
    { int i;
      for (i=0; i < MAXCHILDREN; i++)
        traverse(t->child[i],preProc,postProc);
    }
    postProc(t);
    traverse(t->sibling,preProc,postProc);
  }
}

/* nullProc is a do-nothing procedure to
 * generate preorder-only or postorder-only
 * traversals from traverse
 */
static void nullProc(TreeNode * t)
{ if (t==NULL) return;
  else return;
}

/* Procedure insertNode inserts
 * identifiers stored in t into
 * the symbol table
 */
static void insertNode( TreeNode * t)
{ switch (t->nodekind)
  { case StmtK:
      switch (t->kind.stmt)
      {case AssignK:
        break;
        case OpK:
        break;
        default:
          break;
      }
      break;
        

    case ExpK:
        switch (t->kind.exp)
        {
            case IdK:
                if (st_lookup(t->attr.name, t->escopo) != -1)
                    if(t->type == Integer)
                        if((flagId == 1 && (strcmp(t->attr.name,nomeId) == 0)) || (st_lookup_fun(t->attr.name, t->escopo) == 1)){
                            flagId = 0;
                        }
                        else{
                            st_insert(t->attr.name,t->lineno,0,0,0,t->escopo);
                        }
                    else
                        if(flagId == 1 && (strcmp(t->attr.name,nomeId) == 0) || (st_lookup_fun(t->attr.name, t->escopo) == 1)){
                            flagId = 0;
                        }
                        else{
                            st_insert(t->attr.name,t->lineno,0,0,2,t->escopo);
                        }

            break;

            case IntFuncK:
                st_insert(t->child[0]->attr.name,t->lineno,location++,1,0,"Global");
            break;

            case VoidFuncK:
                st_insert(t->child[0]->attr.name,t->lineno,location++,1,2,"Global");
            break;

            case IntK:
                if(st_lookup_scope(t->child[0]->attr.name, t->escopo) == t->escopo){
                    typeError(t, "Variable has been declared in this scope");
                }
                else{
                    st_insert(t->child[0]->attr.name,t->lineno,location++,0,0,t->escopo);
                    t->type = Integer;
                    t->child[0]->type = Integer;
                    flagId = 1;
                    strcpy(nomeId, t->child[0]->attr.name);
                }

            break;

            case VetorK:
                if(st_lookup_scope(t->child[0]->attr.name, t->escopo) == t->escopo){ /*ALT VERIFICA ERRO: verifica variavel duplicada*/
                    typeError(t, "Variable has been declared in this scope");
                }
                else{
                    st_insert(t->child[0]->attr.name,t->lineno,location++,0,0,t->escopo);
                    t->type = Integer;
                    t->child[0]->type = Integer;
                    flagId = 1;
                    strcpy(nomeId, t->child[0]->attr.name);
                }
                break;

            case VoidK:
                if(st_lookup_scope(t->child[0]->attr.name, t->escopo) == t->escopo){ /*ALT VERIFICA ERRO: verifica variavel duplicada*/
                    typeError(t, "Variable has been declared in this scope");
                }
                else{
                    st_insert(t->child[0]->attr.name,t->lineno,location++,0,2,t->escopo);
                    t->type = Void;
                    t->child[0]->type = Void;
                    flagId = 1;
                    strcpy(nomeId, t->child[0]->attr.name);
                }
            break;

            default:
            break;
        }
        break;
    default:
    break;
  }
}

/* Function buildSymtab constructs the symbol
 * table by preorder traversal of the syntax tree
 */
void buildSymtab(TreeNode * syntaxTree)
{ traverse(syntaxTree,insertNode,nullProc);
  if (TraceAnalyze)
  { fprintf(listing,"\nSymbol table:\n\n");
    printSymTab(listing);
  }
}

static void typeError(TreeNode * t, char * message)
{ fprintf(listing,"Type error at line %d: %s\n",t->lineno,message);
  Error = TRUE;
}

/* Procedure checkNode performs
 * type checking at a single tree node
 */

static void checkNode(TreeNode * t)
{
    switch (t->nodekind)
    {
        case ExpK:
        switch (t->kind.exp)
        {
            case OpK:
                if ((t->attr.op == EQ) || (t->attr.op == LT) || (t->attr.op == LTIGUAL ) || (t->attr.op == MT ) || (t->attr.op == MTIGUAL ) || (t->attr.op == DIFFERENT ))
                    t->type = Boolean;
                else
                    t->type = Integer;
                if ((t->attr.op == PLUS) || (t->attr.op == MINUS) || (t->attr.op == TIMES) || (t->attr.op == OVER))
                    t->type = Integer;
                if ((t->child[0]->type != Integer) || (t->child[1]->type != Integer))
                    typeError(t,"Op applied to non-integer");
            break;

            case ConstK:
                t->type = Integer;
            break;

            case IdK:
                if((st_lookup(t->attr.name, t->escopo) == -1) && (st_lookup(t->attr.name, "Global") == -1))
                    typeError(t,"Variable or function not declared");
            break;

            case IntK:
                if(st_lookup_fun(t->child[0]->attr.name, "Global") == 1)
                    typeError(t, "Function name applied to variable");
            break;

            case VoidK:
                if(t->child[0]->child[1] == NULL)
                    typeError(t, "Void type applied to a variable");
                if(st_lookup_fun(t->child[0]->attr.name, "Global") == 1){
                    typeError(t, "Function name applied to variable");
            }
            break;

            default:
            break;
        }
        break;

        case StmtK:
            switch (t->kind.stmt)
            { case IfK:
                if (t->child[0]->type == Integer)
                    typeError(t->child[0],"if test is not Boolean");
            break;

            case AssignK:
                if(t->child[1]->kind.exp == IdK){
                    if((st_lookup_dtype(t->child[1]->attr.name, t->escopo) == 2) || st_lookup_dtype(t->child[1]->attr.name, "Global") == 2)
                        typeError(t->child[1],"Variable receiving a declared void value");
                }
            break;

            case WhileK:
                if (t->child[0]->type == Integer)
                    typeError(t->child[1],"while test is not Boolean");
            break;

            default:
            break;
        }
        break;

        default:
        break;
   }
 }

void mainCheck(TreeNode * t){
    if(st_lookup("main", "Global") == -1){
        typeError(t, "main function not detected");
  }
}

/* Procedure typeCheck performs type checking
 * by a postorder syntax tree traversal
 */
void typeCheck(TreeNode * syntaxTree)
{ traverse(syntaxTree,nullProc,checkNode);
}
