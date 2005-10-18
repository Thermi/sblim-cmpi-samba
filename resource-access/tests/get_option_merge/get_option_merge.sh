#!/bin/bash
#
# get_option_merge.sh
#
# (C) Copyright IBM Corp. 2005
#
# THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
# ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
# CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
#
# You can obtain a current copy of the Common Public License from
# http://www.opensource.org/licenses/cpl1.0.php
#
# Author:  Rodrigo Ceron <rceron@br.ibm.com>
#
# Contributors:
#
#####################################################################


numtests=1
prog=`basename $0 | cut -d'.' -f1`
for i in $(seq 1);
	do 
		if [ ! -e $i.out ];
			then echo "File $i.out needed for test $i not found. Aborting.";
					 exit 255;
		fi
					 
		tst=`./$prog $i.conf | diff $i.out -`
		if [ ! "x$tst" == "x" ];
			then echo "Test $i failed. Aborting";
			exit $i;
		fi
	done

		
