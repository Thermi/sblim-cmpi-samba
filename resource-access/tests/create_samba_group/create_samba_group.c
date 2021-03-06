/*
 * create_samba_group.c
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

  char smbgrp[] = "Lana";
  char unxgrp[] = "lang";
  char smbgrp2[] = "Basc aninha";
  char smbgrp3[] = "Fail";
  char sysgrp3[] = "idontexist";

  void *trash = malloc(1);                   /* trick: auxiliary variable*/

  struct mallinfo info;
  int MemDinInitial, MemDinFinal;
  
  free(trash);                              /* trick */
  info = mallinfo();
  MemDinInitial = info.uordblks;
  
  printf("Creating Samba group %s using unix group name %s. Result was: %d\n",
	 smbgrp,unxgrp,create_samba_group(smbgrp,unxgrp));

  printf("Creating Samba group %s using default unix group. Result was: %d\n",
	 smbgrp2,create_samba_group(smbgrp2,NULL));

  printf("Creating Samba group %s using default unix group. Result was: %d\n",
	 smbgrp3,create_samba_group(smbgrp3,sysgrp3));


  terminator();

  info = mallinfo();
  MemDinFinal = info.uordblks;
  if (MemDinInitial!=MemDinFinal)
    printf("\n\nDynamic memory  was not completely fred (%d, %d)\n",
                      MemDinInitial,MemDinFinal);
  else printf("All clean here!\n");

  return 0;
}
