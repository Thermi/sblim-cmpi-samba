/*
 * get_user_groups.c
 *
 * (C) Copyright IBM Corp. 2005
 *
 * THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
 * ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
 * CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
 *
 * You can obtain a current copy of the Eclipse Public License from
 * http://www.opensource.org/licenses/eclipse-1.0.php
 *
 * Author:  Rodrigo Ceron <rceron@br.ibm.com>
 *
 * Contributors:
 *
 */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "smt_smb_ra_support.h"
#include <malloc.h>


int main (int argc, char *argv[]) {

  char **list,**mlist;
  char **aux, **grplist, **cur;
  int j,i = 0;

  void *trash = malloc(1);                   /* trick: auxiliary variable*/
  
  struct mallinfo info;
  int MemDinInitial, MemDinFinal;
  
  free(trash);                              /* trick */
  info = mallinfo();
  MemDinInitial = info.uordblks;
  
  mlist = (char**) malloc(sizeof(char*));
  list = (char**) get_samba_users_list();
  cur = list;

  /* here we need to copy the user array because we can't pass its contents
   * back to any RA function because the pointers may (and probably will)
   * change during processing and we'd end up with a dangling pointer */
  while(cur && cur[i]){
    mlist = (char**)realloc(mlist,(i+2)*sizeof(char*));
    mlist[i] = strdup(cur[i]);
    i++;
  }
  mlist[i] = NULL;
  cur = mlist;

  i = 0;
  while (cur && cur[i]){
    grplist = (char**) get_user_groups(cur[i]);
    aux = grplist;
    printf("Samba user %s is member of groups:\n",cur[i]);
    for(j=0; grplist && aux[j]; j++)
      printf("\t%s\n",aux[j]);
    i++;
  }
     
  cur = mlist;
  i = 0;
  while(mlist && mlist[i]) free(mlist[i++]);
  free(mlist);

  terminator();

  info = mallinfo();
  MemDinFinal = info.uordblks;
  if (MemDinInitial!=MemDinFinal)
    printf("\n\nDynamic memory  was not completely fred (%d, %d)\n",
	   MemDinInitial,MemDinFinal);
  else printf("All clean here!\n");
  
  return 0;
}
