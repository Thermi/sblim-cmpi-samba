/*
 * get_user_unix_name.c
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

  void *trash = malloc(1);                   /* trick: auxiliary variable*/

  struct mallinfo info;
  int MemDinInitial, MemDinFinal;
  
  free(trash);                              /* trick */
  info = mallinfo();
  MemDinInitial = info.uordblks;
  

  printf("admin unix name -> %s\n",get_user_unix_name("admin"));
  printf("administrator unix name -> %s\n",
	                   get_user_unix_name("administrator"));
  printf("larry unix name -> %s\n",get_user_unix_name("larry"));
  printf("root unix name -> %s\n",get_user_unix_name("root"));
  printf("Cesar Romero unix name -> %s\n",get_user_unix_name("Cesar Romero"));

  terminator();

  info = mallinfo();
  MemDinFinal = info.uordblks;
  if (MemDinInitial!=MemDinFinal)
    printf("\n\nDynamic memory  was not completely fred (%d, %d)\n",
                      MemDinInitial,MemDinFinal);
  else printf("All clean here!\n");

  return 0;
}
