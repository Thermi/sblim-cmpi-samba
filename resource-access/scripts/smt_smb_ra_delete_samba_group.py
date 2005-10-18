#!/usr/bin/python
#
# smt_smb_ra_delete_samba_group.py
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
from os import system, popen
from smt_smb_ra_errors import *
import re

AUX_CMD = "net groupmap list "
CMD = "pdbtool"
KEY = "UNIXGROUP/"


class GroupMap:

    def __init__(self,ntgrp):

        self.cmd = "%s %s" % (AUX_CMD, ntgrp)
        self.entry = re.compile(r"\([^)]+\)")
        self.gid = None
        self.parse()


    def parse(self):

        try:
            p = popen(self.cmd,"r")
            line = p.readline()
            if not self.entry.search(line): exit(EINVAL)
            self.gid = self.entry.findall(line)[0].lstrip("(").rstrip(")")
	    p.close()
        except:
            exit(EINVAL)


    def get_gid(self):
        return self.gid


try:
    ntgroup = "ntgroup=\"%s\"" % argv[1]
    groupf = argv[2]
except IndexError:
    exit(EINVAL)


gmap = GroupMap(ntgroup)
gid = gmap.get_gid()

command = "echo -e \"delete %s\nq\n\" | tdbtool %s" % (KEY+gid,groupf)

exit(system(command))
