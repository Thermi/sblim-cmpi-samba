/*
 * delete_samba_user.c
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

  int i=0;
  char user[] = "romero";
  char user2[] = "larry";
  char user2s[] = "garotinho";
  char passwd[] = "blah";
  char **samba_users;

  void *trash = malloc(1);                   /* trick: auxiliary variable*/

  struct mallinfo info;
  int MemDinInitial, MemDinFinal;
  
  free(trash);                              /* trick */
  info = mallinfo();
  MemDinInitial = info.uordblks;

  printf("Deleting samba user %s. Return was: %d\n",user,
	                          delete_samba_user(user));

  printf("Deleting samba user %s. Return was: %d\n",user2s,
	                          delete_samba_user(user2s));

  printf("Deleting samba user %s. Return was: %d\n",user2,
	                          delete_samba_user(user2));
  
  samba_users = get_samba_users_list();
  while(samba_users && samba_users[i]){
    printf("User: %s\n",samba_users[i]);
    i++;
  }

  terminator();

  info = mallinfo();
  MemDinFinal = info.uordblks;
  if (MemDinInitial!=MemDinFinal)
    printf("\n\nDynamic memory  was not completely fred (%d, %d)\n",
                      MemDinInitial,MemDinFinal);
  else printf("All clean here!");

  return 0;
}
