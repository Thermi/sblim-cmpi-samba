#!/bin/bash
#
# do_tests.sh
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


thisdir=`pwd`
for i in $(find -maxdepth 1 -type d); 
	do 
		if [ -e $thisdir/$i/`basename $i`.sh ]; 
				then make -s -f $thisdir/Makefile -C $thisdir/$i
						if [ $? != 0 ];
							then echo "Warning: make failed in dir $thisdir/$i";
						fi
						cd $thisdir/$i;
				    ./`basename $i`.sh; 
				if [ $? != 0 ]; 
					then echo "failed test for $i"
					#exit 1;
				else
					echo "test suceeded for $i"
					#rm -f $thisdir/$i/`basename $i`
				fi		
		fi 
	done
