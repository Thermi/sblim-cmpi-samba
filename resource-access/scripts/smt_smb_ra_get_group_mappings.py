#!/usr/bin/python
#
# smt_smb_ra_get_group_mappings.py
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
from os import write,close,popen
from smt_smb_ra_errors import *
import re

class GroupMap:

    def __init__(self,cmd):

        self.cmd = cmd
        self.entry = re.compile(r"^([^(]*)\([^)]*\)\s*->\s*(.*)$")
        self.groupmap = {}
        self.parse()


    def parse(self):

        p = popen(cmd,"r")

        for line in p.readlines():
            if self.entry.search(line):
                try:
                    (k,v) = self.entry.findall(line)[0]
                    self.groupmap[k.strip()] = v.strip()
                except IndexError:
                    write(pipeid,"EOF\n")
                    exit(EINVAL)
            else:
                exit(EINVAL)
                write(pipeid,"EOF\n")
        p.close()


    def get_groupmap(self):
        return self.groupmap


try:
    cmd = argv[1]
    pipeid = int(argv[2])
except IndexError:
    exit(EINVAL)

gmap = GroupMap(cmd)

res = ["%s;%s" % (k,v) for (k,v) in gmap.get_groupmap().iteritems()]
res.append("EOF\n")

write(pipeid,"\n".join(res))
close(pipeid)
exit(0)
