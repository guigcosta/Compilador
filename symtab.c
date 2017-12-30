/****************************************************/
/* File: symtab.c                                   */
/* Symbol table implementation for the TINY compiler*/
/* (allows only one symbol table)                   */
/* Symbol table is implemented as a chained         */
/* hash table                                       */
/* Compiler Construction: Principles and Practice   */
/*                                                  */
/****************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symtab.h"

/* SIZE is the size of the hash table */
#define SIZE 211

/* SHIFT is the power of two used as multiplier
   in hash function  */
#define SHIFT 4

/* the hash function */
static int hash ( char * key )
{ int temp = 0;
  int i = 0;
  while (key[i] != '\0')
  { temp = ((temp << SHIFT) + key[i]) % SIZE;
    ++i;
  }
  return temp;
}

/* the list of line numbers of the source
 * code in which a variable is referenced
 */
typedef struct LineListRec
   { int lineno;
     struct LineListRec * next;
   } * LineList;

/* The record in the bucket lists for
 * each variable, including name,
 * assigned memory location, and
 * the list of line numbers in which
 * it appears in the source code
 */
typedef struct BucketListRec
   { char * name;
     LineList lines;
     int memloc ; /* posicao da variavel na memoria */
     int type_id; /*variavel ou funcao*/
     int type_data; /*tipo do dado*/
     char * escopo;
     struct BucketListRec * next;
   } * BucketList;

/* the hash table */
static BucketList hashTable[SIZE];

/* Procedure st_insert inserts line numbers and
 * memory locations into the symbol table
 * loc = memory location is inserted only the
 * first time, otherwise ignored
 */
void st_insert( char * name, int lineno, int loc, int t_id, int t_data, char * escopo)
{
    char nomeEscopoConcat[128];
   strcpy(nomeEscopoConcat, name);
   if(escopo != NULL){
     strcat(nomeEscopoConcat, escopo);
   }
   else{
     strcat(nomeEscopoConcat, "");
   }



    int h = hash(nomeEscopoConcat);
    BucketList l =  hashTable[h];
    while ((l != NULL) && (strcmp(name,l->name) != 0))
        l = l->next;
    if (l == NULL) /* variable not yet in table */
    {
        l = (BucketList) malloc(sizeof(struct BucketListRec));
        l->name = name;
        l->lines = (LineList) malloc(sizeof(struct LineListRec));
        l->lines->lineno = lineno;
        l->memloc = loc;
        l->lines->next = NULL;
        l->next = hashTable[h];
        l->type_id = t_id;
        l->type_data = t_data;
        l->escopo = escopo;
        hashTable[h] = l;
    }
    else /* ALT: Encontrou algum identificador com mesmo nome */
   {
     if(strcmp(escopo,l->escopo) != 0){ /* ALT: Se o escopo for diferente, deve-se adicionar novo elemento a tabela */
       int tipoDado = l->type_data;
       int tipoId = l->type_id;
       int local = l->memloc;
       l = (BucketList) malloc(sizeof(struct BucketListRec));
       l->name = name;
       l->lines = (LineList) malloc(sizeof(struct LineListRec));
       l->lines->lineno = lineno;
       l->memloc = local;
       l->lines->next = NULL;
       l->next = hashTable[h];
       l->type_id = tipoId;
       l->type_data = tipoDado;
       l->escopo = escopo;
       hashTable[h] = l;
     }
     else{ /* ALT: Se o escopo for o mesmo, apenas acrescenta-se novo numero de linha */
       LineList t = l->lines;
       while (t->next != NULL) t = t->next;
       t->next = (LineList) malloc(sizeof(struct LineListRec));
       t->next->lineno = lineno;
       t->next->next = NULL;
     }

   }
} /* st_insert */

/* Function st_lookup returns the memory
 * location of a variable or -1 if not found
 */
int st_lookup ( char * name, char * escopo)
{ char nomeEscopoConcat[128];
  strcpy(nomeEscopoConcat, name);
  if(escopo != NULL){
    strcat(nomeEscopoConcat, escopo);
  }
  else{
    strcat(nomeEscopoConcat, "");
  }

  int h = hash(nomeEscopoConcat);
  BucketList l =  hashTable[h];
  while ((l != NULL) && (strcmp(name,l->name) != 0))
    l = l->next;
  if (l == NULL) return -1;
  else return l->memloc;
}

int st_lookup_fun ( char * name, char * escopo) //Retorna o tipo do identificador 0:variavel 1:funcao
{ char nomeEscopoConcat[128];
  strcpy(nomeEscopoConcat, name);
  if(escopo != NULL){
    strcat(nomeEscopoConcat, escopo);
  }
  else{
    strcat(nomeEscopoConcat, "");
  }

  int h = hash(nomeEscopoConcat);
  BucketList l =  hashTable[h];
  while ((l != NULL) && (strcmp(name,l->name) != 0))
    l = l->next;
  if (l == NULL) return -1;
  else return l->type_id;
}

int st_lookup_dtype ( char * name, char * escopo) //Retorna o tipo de dado 0:int 1:bool 2:void
{ char nomeEscopoConcat[128];
  strcpy(nomeEscopoConcat, name);
  if(escopo != NULL){
    strcat(nomeEscopoConcat, escopo);
  }
  else{
    strcat(nomeEscopoConcat, "");
  }

  int h = hash(nomeEscopoConcat);
  BucketList l =  hashTable[h];
  while ((l != NULL) && (strcmp(name,l->name) != 0))
    l = l->next;
  if (l == NULL) return -1;
  else return l->type_data;
}

char * st_lookup_scope ( char * name, char * escopo)
{ char nomeEscopoConcat[128];
  strcpy(nomeEscopoConcat, name);
  if(escopo != NULL){
    strcat(nomeEscopoConcat, escopo);
  }
  else{
    strcat(nomeEscopoConcat, "");
  }

  int h = hash(nomeEscopoConcat);
  BucketList l =  hashTable[h];
  while ((l != NULL) && (strcmp(name,l->name) != 0))
    l = l->next;
  if (l == NULL) return NULL;
  else return l->escopo;
}





/* Procedure printSymTab prints a formatted
 * listing of the symbol table contents
 * to the listing file
 */
void printSymTab(FILE * listing)
{ int i;
  fprintf(listing,"Variable Name      Location   Scope            Var Type     Data type       Line Number\n");
  fprintf(listing,"-----------------  ---------  ---------------  ----------   --------------  --------------\n");
  for (i=0;i<SIZE;++i)
  { if (hashTable[i] != NULL)
    { BucketList l = hashTable[i];
      while (l != NULL)
      { LineList t = l->lines;
        fprintf(listing,"%-18s ",l->name);
        fprintf(listing,"%-9d  ",l->memloc);
        fprintf(listing,"%-15s  ",l->escopo);
        if(l->type_id == 0) //type_id == 0 -> variavel
          fprintf(listing,"Variable     ");
        else    //type_id == 1 -> funcao
          fprintf(listing,"Function     ");
        if(l->type_data == 0) //type_data == 0 -> int
          fprintf(listing,"Integer       ");
        else if(l->type_data == 1)  //type_data == 1 -> bool
          fprintf(listing,"Boolean      ");
          else fprintf(listing,"Void          "); //type_data == 2 -> void
        while (t != NULL)
        { fprintf(listing,"%4d ",t->lineno);
          t = t->next;
        }
        fprintf(listing,"\n");
        l = l->next;
      }
    }
  }
} /* printSymTab */
