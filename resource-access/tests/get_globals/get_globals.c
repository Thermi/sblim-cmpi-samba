/*
 * get_globals.c
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
#include "execscripts.h"
#include "conf.h"


extern struct conf *smb_conf;
int main (int argc, char *argv[]) {

	struct smbopt *globs;

	smb_conf = read_conf(argv[1],argv[1]);

	globs = get_globals();

	for (; globs; globs = globs->next){
			printf("Key: %s Value: %s\n",globs->key, globs->value);
	}

	return 0;
}
