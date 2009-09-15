/*
 * service_exists.c
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
#include "smt_libra_execscripts.h"
#include "smt_libra_conf.h"
#include <malloc.h>

int main (int argc, char *argv[]) {

  char **list;
  char **cur;
  int i = 0;

  void *trash = malloc(1);                   /* trick: auxiliary variable*/
  
  struct mallinfo info;
  int MemDinInitial, MemDinFinal;
  
  free(trash);                              /* trick */
  info = mallinfo();
  MemDinInitial = info.uordblks;
    
  list = get_shares_list();
  
  if (!list)
    exit(-1);
  
  cur = list;
  while(cur[i]) {
    printf("Checking for service %s, it should return 1: %d\n",
		   cur[i], service_exists((const char *)cur[i]) );
    i++;
  }
 

  printf("Checking for dummy service, it should return 0: %d\n",
	                                     service_exists("dummy") );

  printf("Checking for dummy service, it should return 0: %d\n",
	                                     service_exists(NULL) );
  terminator();

  info = mallinfo();
  MemDinFinal = info.uordblks;
  if (MemDinInitial!=MemDinFinal)
    printf("\n\nDynamic memory  was not completely fred (%d, %d)\n",
	   MemDinInitial,MemDinFinal);
  else printf("All clean here!\n");

  return 0;
  
}
