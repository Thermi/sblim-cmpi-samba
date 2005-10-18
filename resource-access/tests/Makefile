#!/bin/bash
#
# Makefile
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

FILE=$(notdir $(basename $(CURDIR)))

COMMONLIB_OUT=$(PEGASUS_HOME)/lib

CFLAGS=-I../../../../tools-libra/src -I../../ -L../../  -L$(COMMONLIB_OUT) -lRaTools -lRaToolsSmb

all:
	gcc $(FILE).c $(CFLAGS) -o $(FILE) -Wl,-rpath,../../ -g 
