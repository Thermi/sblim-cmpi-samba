/*
 * remove_user_from_group.c
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

  char smbusr[] = "larry";
  char smbgrp[] = "Guests";

  void *trash = malloc(1);                   /* trick: auxiliary variable*/

  struct mallinfo info;
  int MemDinInitial, MemDinFinal;
  
  free(trash);                              /* trick */
  info = mallinfo();
  MemDinInitial = info.uordblks;
  
  printf("Removing samba user %s from samba group %s. Result was: %d\n",
	 smbusr,smbgrp,remove_user_from_group(smbusr,smbgrp));

  printf("Trying again, this should fail. Result was: %d\n",
	                    remove_user_from_group(smbusr,smbgrp));

  terminator();

  info = mallinfo();
  MemDinFinal = info.uordblks;
  if (MemDinInitial!=MemDinFinal)
    printf("\n\nDynamic memory  was not completely fred (%d, %d)\n",
                      MemDinInitial,MemDinFinal);
  else printf("All clean here!\n");

  return 0;
}
