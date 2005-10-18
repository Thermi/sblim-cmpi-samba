#!/usr/bin/python
#
# smt_smb_ra_get_services_list.py
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

from smt_smb_ra_parser import Parser
from sys import argv,exit
from os import write,close 
from smt_smb_ra_errors import *

try:
	filename = argv[1]
except IndexError:
	exit(EINVAL)
try:	
	pipeid = int(argv[2])
except IndexError:
	exit(EINVAL)

try:
	p = Parser(filename)
except IOError:
	exit(ENOFILE)

sections = p.get_service_list()


sections.append("EOF\n");
for sec in sections:
	write(pipeid,sec + "\n")
close(pipeid)

exit(0)
