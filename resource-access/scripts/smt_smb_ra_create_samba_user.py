#!/usr/bin/python
#
# smt_smb_ra_create_samba_user.py
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

AUXCMD = "echo -e"

CMD = "pdbedit"
ARGS = ["-t","-a"]
REDIRECT = "> /dev/null"

try:
    user= argv[1]
    passwd = argv[2]
except IndexError:
    exit(EINVAL)

auxcmdargs = "\"" + passwd + "\n" + passwd + "\n\""
command = "%s %s|%s %s %s %s" % (AUXCMD,auxcmdargs,CMD," ".join(ARGS),user,
                                                                   REDIRECT)

exit(system(command))
