#!/usr/bin/python
#
# smt_smb_ra_set_group_mapping.py
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

from sys import argv,exit
from os import system
from smt_smb_ra_errors import *

CMD = ("net groupmap modify", "net groupmap delete")

try:
    ntgroup = "ntgroup=\"%s\"" % argv[1]
except IndexError:
    exit(EINVAL)

try:
    unixgroup = "unixgroup=%s" % argv[2]
    act = 0
except IndexError:
    act = 1
    unixgroup = ""

command = "%s %s %s" % (CMD[act], ntgroup, unixgroup)

exit(system(command))

