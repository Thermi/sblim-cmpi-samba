/*
 * get_option.c
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

  char *opt, *servicename;
  int i;
  char **services_list;
  void *trash = malloc(1);                   /* trick: auxiliary variable*/
  
  struct mallinfo info;
  int MemDinInitial, MemDinFinal;
  
  free(trash);                              /* trick */
  info = mallinfo();
  MemDinInitial = info.uordblks;

  services_list = get_shares_list(); 

  for(i=0; services_list[i]; i++){
    /*get all services and some of its options*/
    
    servicename = services_list[i];
    
    printf("service: %s\n",servicename);
    
    opt = get_option(servicename,"workgroup");
    printf("   workgroup = %s\n",opt);
    
    opt = get_option(servicename,"path");
    printf("   path = %s\n",opt);
    
    opt = get_option(servicename,"browseable");
    printf("   browseable = %s\n",opt);
    
    opt = get_option(servicename,"read only");
    printf("   read only = %s\n",opt);
    
    opt = get_option(servicename,"guest ok");
    printf("   guest ok = %s\n",opt);
    
    opt = get_option(servicename,"os level");
    printf("   os level = %s\n",opt);
    
    opt = get_option(servicename,"ldap suffix");
    printf("   ldap suffix = %s\n",opt);
    
    opt = get_option(servicename,"wins server");
    printf("   wins server = %s\n",opt);	
    
    opt = get_option(servicename,"dos filemode");
    printf("   dos filemode = %s\n",opt);	
    
  }

  terminator();
  
  info = mallinfo();
  MemDinFinal = info.uordblks;
  if (MemDinInitial!=MemDinFinal)
    printf("\n\nDynamic memory  was not completely fred (%d, %d)\n",
	   MemDinInitial,MemDinFinal);
  else printf("All clean here!\n");

  return 0;
}
