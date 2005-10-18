/*
 * create_service.c
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


int main (int argc, char *argv[]) {


	struct smbopt *head,*opt;
	
	read_conf(argv[1]);
	
	head = (struct smbopt *)malloc(sizeof (struct smbopt));

	INIT_LIST(head);
	head->key = strdup("comment");
	head->value = strdup("Test share");

	opt = (struct smbopt *)malloc(sizeof (struct smbopt));
	opt->key = strdup("browseable");
	opt->value = strdup("no");

	list_add(head,opt);

	opt = (struct smbopt *)malloc(sizeof (struct smbopt));
	opt->key = strdup("printable");
	opt->value = strdup("Yes");

	list_add(head,opt);

	opt = (struct smbopt *)malloc(sizeof (struct smbopt));
	opt->key = strdup("directory mask");
	opt->value = strdup("0644");

	list_add(head,opt);

	create_service("testshare",head);


	return 0;
}
