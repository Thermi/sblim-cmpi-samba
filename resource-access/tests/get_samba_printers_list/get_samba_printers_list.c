/*
 * get_samba_printers_list.c
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
#include <malloc.h>

int main (int argc, char *argv[]) {

  char **printers_list;
  char **cur_share;
  int i = 0;
  void *trash = malloc(1);                   /* trick: auxiliary variable*/
  
  struct mallinfo info;
  int MemDinInitial, MemDinFinal;
  
  free(trash);                              /* trick */
  info = mallinfo();
  MemDinInitial = info.uordblks;
  
  printers_list = get_samba_printers_list();
  cur_share = printers_list;

  while (cur_share[i]) printf("Printable share name: %s\n",cur_share[i++]);

  terminator();

  info = mallinfo();
  MemDinFinal = info.uordblks;
  if (MemDinInitial!=MemDinFinal)
    printf("\n\nDynamic memory  was not completely fred (%d, %d)\n",
           MemDinInitial,MemDinFinal);
  else printf("All clean here!\n");
  
  return 0;
}
