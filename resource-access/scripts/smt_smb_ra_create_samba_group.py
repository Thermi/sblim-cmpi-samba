#!/usr/bin/python
#
# smt_smb_ra_create_samba_group.py
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

"""This script is only run when the system group does not exist. If it existed
the smt_smb_ra_set_group_mapping.py script would have been called instead of this one"""


from sys import argv,exit
from os import system
from smt_smb_ra_errors import *

CMD = "net groupmap add"
ADD_GRP = "groupadd"

try:
    ntgroup = "ntgroup=\"%s\"" % argv[1]
    unixgroup = "unixgroup=%s" % argv[2]
    create_sys_grp = int(argv[3])
except IndexError:
    exit(EINVAL)

# since we always call this script with arg3=0, we'll never get here. This
#was left here for future use
if create_sys_grp:
    ret = system("%s %s" % (ADD_GRP,argv[2]))
    if ret: exit(ret)

command = "%s %s %s" % (CMD, ntgroup, unixgroup)

exit(system(command))
