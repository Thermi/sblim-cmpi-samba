#!/usr/bin/python
#
# smt_smb_ra_enable.py
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
from smt_smb_ra_errors import *

try:
	filename = argv[1]
except IndexError:
	exit(EINVAL)
try:
	sharename = argv[2]
except IndexError:
	exit(EINVAL)

try:
	p = Parser(filename)
except IOEerror:
	exit(ENOFILE)

ret = p.enable(sharename)
exit(ret)

