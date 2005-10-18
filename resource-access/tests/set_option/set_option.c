/*
 * set_option.c
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
#include "execscripts.h"
#include "conf.h"
#include <malloc.h>

int main (int argc, char *argv[]) {

  char opt[] = "csc policy";
  char opt_dfl[] = "2";
  char opt_ndfl[] = "34";
  char shr[] = "users";

  char enc[] = "encrypt passwords";
  char enc_def[] = "yes";
  char enc_ndef[] = "no";

  void *trash = malloc(1);                   /* trick: auxiliary variable*/
  
  struct mallinfo info;
  int MemDinInitial, MemDinFinal;
  
  free(trash);                              /* trick */
  info = mallinfo();
  MemDinInitial = info.uordblks;

  printf("Return: %d\n",set_share_option("users","comment","Users"));
  printf("Return: %d\n",set_share_option("users","browseable","Yes"));
  printf("Return: %d\n",
	 set_printer_option("printers","comment","New Printers Share"));
  printf("Return: %d\n",set_global_option("logon drive","F:"));
  printf("Return: %d\n",set_share_option("print$","comment","New comment"));
  printf("Return: %d\n",set_share_option("mys","comment","Shall not find"));
  
  printf("Setting option %s of %s to non-default value. Return is: %d\n",opt,
	                               shr,set_share_option(shr,opt,opt_ndfl));
  printf("Value read for %s: %s\n",opt,get_option(shr,opt));

  printf("Setting option %s of %s to default value. Return is: %d\n",opt,
	                               shr,set_share_option(shr,opt,opt_dfl));
  printf("Value read for %s: %s\n",opt,get_option(shr,opt));

  printf("Setting option %s of %s to default value. Return is: %d\n",enc,
	                               shr,set_share_option(shr,enc,enc_def));
  printf("Value read for %s: %s\n",opt,get_option(shr,enc));
  
  printf("Setting option %s of %s to non-default value. Return is: %d\n",enc,
	                               shr,set_share_option(shr,enc,enc_ndef));
  printf("Value read for %s: %s\n",opt,get_option(shr,enc));

  printf("Setting option %s of %s back to default value. Return is: %d\n",enc,
	                           shr,set_share_option(shr,enc,enc_def));
  printf("Value read for %s: %s\n",opt,get_option(shr,enc));

  terminator();
  
  info = mallinfo();
  MemDinFinal = info.uordblks;
  if (MemDinInitial!=MemDinFinal)
    printf("\n\nDynamic memory  was not completely fred (%d, %d)\n",
	   MemDinInitial,MemDinFinal);
  else printf("All clean here!\n");

  return 0;
}
