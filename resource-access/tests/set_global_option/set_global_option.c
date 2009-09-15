/*
 * set_global_option.c
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

extern struct conf *smb_conf;

int main (int argc, char *argv[]) {

  char *glob_opt = NULL;
  int i = 0;
  char opt[] = "os level"; 
  char new_option[] = "dos filemode";
  char new_glob_opt[] = "34";
  
  void *trash = malloc(1);                   /* trick: auxiliary variable*/
  
  struct mallinfo info;
  int MemDinInitial, MemDinFinal;
  
  free(trash);                              /* trick */
  info = mallinfo();
  MemDinInitial = info.uordblks;

  glob_opt = get_global_option(opt);

  printf("Value read for option %s: %s\n",opt,glob_opt);
  printf("Modifying option value to 34...\n");

  printf("Setting %s to %s. Return was: %d\n",opt,new_glob_opt,
	                    set_global_option(opt,new_glob_opt));

  printf("Value read for option %s after write: %s\n",
	                    opt,get_global_option(opt));

  printf("Modifying %s back to 65. Return was: %d\n",opt,
	                      set_global_option(opt,"65"));

  printf("Value read for option %s after write: %s\n",opt,
	                           get_global_option(opt));

  printf("Setting an option that is not set. This should create it\n");
  printf("Setting %s to yes. Return was: %d\n",new_option,
	            set_global_option(new_option,"yes"));

  printf("Value read for option %s after write: %s\n",new_option,
	                            get_global_option(new_option));
    
  printf("Modifying %s to no. Return was: %d\n",new_option,
	                 set_global_option(new_option,"no"));

  printf("Value read for option %s after write: %s\n",new_option,
	                           get_global_option(new_option));

  terminator();

  info = mallinfo();
  MemDinFinal = info.uordblks;
  if (MemDinInitial!=MemDinFinal)
    printf("\n\nDynamic memory  was not completely fred (%d, %d)\n",
	   MemDinInitial,MemDinFinal);
  else printf("All clean here!\n");

  return 0;
  
}
