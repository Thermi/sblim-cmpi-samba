/*
 * add_share.c
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

  char **shares_list;
  int i = 0;
  char new_share[] = "Cesar Romero";
  char new_share_opt[] = "announce as";
  char new_share_opt_val[] = "Win95";
  char new_share_opt_val2[] = "NT server";
  char dirname[] = "/home/romero/test/";
  char deeperdir[] = "/home/romero/test/1/2/3";


  void *lixo = malloc(1);                   /* truque: vari�vel auxiliar */
  
  struct mallinfo info;   
  int MemDinInicial, MemDinFinal;
  
  free(lixo);                              /* truque */
  info = mallinfo();
  MemDinInicial = info.uordblks;
  

  printf("First, create shares that already exist. This shall all fail\n");

  shares_list = get_shares_list();
  for(i=0; shares_list && shares_list[i]; i++)
    printf("Tried to create %s, return value was: %d\n",shares_list[i],
	                                      add_share(shares_list[i]) );

  printf("Creating share %s. Return must be zero: %d\n",new_share,
	                                      add_share(new_share) );

  printf("Does share %s exists? Answer is: %d\n",new_share,
	                     service_exists(new_share) );

  printf("Setting some attributes for share %s...\n",new_share);
  printf("Tryed to set %s in %s to %s. Return was: %d\n",new_share_opt,
	                                   new_share, new_share_opt_val,
	     set_share_option(new_share,new_share_opt,new_share_opt_val));

  printf("\tRead written value: %s\n",get_option(new_share,new_share_opt));

  printf("\tChanging value to %s. Return is: %d\n",new_share_opt_val2,
	   set_share_option(new_share,new_share_opt,new_share_opt_val2));
    
  printf("\tRead written value: %s\n",get_option(new_share,new_share_opt));

  printf("\tChanging value back to %s. Return is: %d\n",new_share_opt_val,
	    set_share_option(new_share,new_share_opt,new_share_opt_val));

  printf("Setting path for share to %s. Return is %d\n",dirname,
	                           set_share_option(new_share,"path",dirname));

  printf("Setting path for share to %s. Return is %d\n",deeperdir,
	                         set_share_option(new_share,"path",deeperdir));

  terminator();


  info = mallinfo();
  MemDinFinal = info.uordblks;
  if (MemDinInicial!=MemDinFinal)
    printf("\n\nDynamic memory  was not completely fred (%d, %d)\n",
                      MemDinInicial,MemDinFinal);
  else printf("All clean here!\n");


  return 0;

}
