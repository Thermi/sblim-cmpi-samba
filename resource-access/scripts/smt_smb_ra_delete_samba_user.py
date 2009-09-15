#!/usr/bin/python
#
# smt_smb_ra_delete_samba_user.py
#
# (C) Copyright IBM Corp. 2005
#
# THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
# ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
# CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
#
# You can obtain a current copy of the Eclipse Public License from
# http://www.opensource.org/licenses/eclipse-1.0.php
#
# Author:  Rodrigo Ceron <rceron@br.ibm.com>
#
# Contributors:
#
#####################################################################


from sys import argv,exit
from os import system
from smt_smb_ra_errors import *

CMD = "pdbedit"
ARGS = ["-x"]

try:
    user= argv[1]
except IndexError:
    exit(EINVAL)

command = "%s %s %s" % (CMD," ".join(ARGS),user)

exit(system(command))
