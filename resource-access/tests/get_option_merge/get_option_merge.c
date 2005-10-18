/*
 * get_option_merge.c
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

	char *opt;

	read_conf(argv[1]);


	opt = get_option_merge("users","path");
	printf("path =  %s\n",opt);
	
	opt = get_option_merge("users","hosts allow");
	printf("hosts allow =  %s\n",opt);

	opt = get_option_merge("print$","comment");
	printf("comment =  %s\n",opt);

	opt = get_option_merge("myshare","browseable");
	printf("browseable =  %s\n",opt);

	opt = get_option_merge("myshare","directory mask");
	printf("browseable =  %s\n",opt);


/*
	c = get_option_merge("users","printing");
	printf("From Users (mergeable): printing =  %s errno: %d\n",c,errno);	

	d = get_option_merge("users","printing");
	printf("From Users (mergeable2): printing =  %s errno %d\n",d,errno);	
	
	printf("Disabling the share printers. Status: %d\n",disable_service("printers"));

	printf("Enabling the share homes. Status: %d\n",enable_service("homes"));

	printf("Setting an option in the users share. Status: %d\n",set_option("users","path","/home/sblim"));
	e = get_service("users");
	printf("Share users:\n");
	for (; e; e = e->next){
			printf("Key: %s Value %s\n",e->key, e->value);
	}

	e = get_globals();
	printf("Global section:\n");
	for (; e; e = e->next){
			printf("Key: %s Value %s\n",e->key, e->value);
	}

	e = get_service("users");
	
	printf("Deleting users share. Status: %d\n",delete_service("users"));
	printf("Putting users share back with name users2. Status: %d\n",create_service("users2",e));
	*/
	return 0;
}
