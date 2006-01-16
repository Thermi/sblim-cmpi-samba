#!/usr/bin/python
#
# smt_smb_ra_create_sys_user.py
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

CMD = "useradd"
ARGS = ["-m","-G users"]

try:

    user= argv[1]
except IndexError:
    exit(EINVAL)

command = "%s %s %s" % (CMD," ".join(ARGS),user)
exit(system(command))