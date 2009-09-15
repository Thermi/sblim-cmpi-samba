#!/usr/bin/python
#
# smt_smb_ra_get_sys_printers.py
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

CUPS_CMD = "lpstat"
CUPS_CMD_ARGS = ("-a",)

try:
    pipeid = int(argv[1])
except:
    exit(EINVAL)


cups_cmd = "%s %s" % (CUPS_CMD," ".join(CUPS_CMD_ARGS))

p = popen(cups_cmd)
cups_printers = ["%s" % line.split(" ",1)[0].strip() for line in p.readlines()]
cups_printers.append("EOF\n")
p.close()

write(pipeid,"\n".join(cups_printers))
close(pipeid)
exit(0)
