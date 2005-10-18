/*
 * delete_share.c
 *
 * (C) Copyright IBM Corp. 2005
 *
 * THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
 * ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
 * CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
 *
 * You can obtain a current copy of the Common Public License from
 * http://www.opensource.org/licenses/cpl1.0.php
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

  char **shares_list;
  char dummy_share[] = "Cesar Romero"; 
  int i, size = 0;
  
  void *trash = malloc(1);                   /* trick: auxiliary variable*/
  
  struct mallinfo info;
  int MemDinInitial, MemDinFinal;
  
  free(trash);                              /* trick */
  info = mallinfo();
  MemDinInitial = info.uordblks;

  shares_list = get_shares_list();
  
  printf("Trying to delete dummy %s service. Should fail: %d\n",dummy_share,
	                                           delete_share(dummy_share) );

  printf("Trying to delete global. Should fail: %d\n", delete_share("global") );

 
  
  /* delete services. Need to get services_list again in each iteration since
  * it changes after a delete */
  while(shares_list){
    i = 0;
    while(shares_list[i]){
      if (!strcmp("global",shares_list[i])) i++;
      else break;
    }
    if (!shares_list[i]) break;
    
    printf("Trying to delete %s. Should succeed: %d\n",shares_list[i],
	                                  delete_share(shares_list[i]) );
    shares_list = get_shares_list();
  }


  printf("Checking if entries are still in cache...\n");

  i = 0;
  while(shares_list && shares_list[i]){
    printf("Does share %s exist? Answer is: %d\n",shares_list[i],
	                           service_exists(shares_list[i]) );
    i++;
  }
   
  terminator();  

  info = mallinfo();
  MemDinFinal = info.uordblks;
  if (MemDinInitial!=MemDinFinal)
    printf("\n\nDynamic memory  was not completely fred (%d, %d)\n",
                      MemDinInitial,MemDinFinal);
  else printf("All clean here\n!");

  return 0; 
}
