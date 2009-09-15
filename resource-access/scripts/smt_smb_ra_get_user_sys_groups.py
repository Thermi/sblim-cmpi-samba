#!/usr/bin/python
#
# smt_smb_ra_get_user_sys_groups.py
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
from os import write,close,popen
from smt_smb_ra_errors import *
import re

CMD = "groups"

try:
    user = argv[1]
    pipeid = int(argv[2])
except IndexError:
    exit(EINVAL)

cmd = "%s %s" %(CMD,user)

try:
    p = popen(cmd,"r")
    line = p.readline()
    p.close()
    grps = line.split(":")[1].strip().split(" ")
    grps.append("EOF\n")
    write(pipeid,"\n".join(grps))
    close(pipeid)
    exit(0)
except:
    exit(0)

