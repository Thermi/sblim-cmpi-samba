#!/usr/bin/python
#
# smt_smb_ra_remove_user_from_group.py
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
from os import system,popen
from smt_smb_ra_errors import *

AUX_CMD = "groups"

CMD = "usermod"
CMD_ARGS = ("-G",)


try:
    user = argv[1]
    group = argv[2]
except IndexError:
    exit(EINVAL)


aux_cmd = "%s %s" % (AUX_CMD, user)
p = popen(aux_cmd,"r")
line = p.readline()
groups = line.split(":")[1].strip().split(" ")
groups.remove(group)
cmd = "%s %s %s %s" % (CMD," ".join(CMD_ARGS),",".join(groups), user)
system(cmd)
exit(0)
