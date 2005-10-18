#!/usr/bin/python
#
# smt_smb_ra_get_db_entries.py
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

class Users:
    """Class that parses the output of something in the format ^[^:]*[^:]*:.*$ """

    def __init__(self,cmd):

        self.cmd = cmd
        #self.entry = re.compile(r"^[^:]*:.*$")
        self.entry = re.compile(r"^[^:]*:[^:]*:.*$")
        self.users_list = []
        self.parse()

    def parse(self):

        p = popen(self.cmd,"r")
        
        for line in p.readlines():
            if self.entry.search(line):
                u = line.split(":",1)[0]
                self.users_list.append(u)
            else:
                continue
        p.close()
        
    def get_users(self):
        return self.users_list


try:
    cmd = argv[1]
    pipeid = int(argv[2])
except IndexError:
    exit(EINVAL)

users = Users(cmd)
res = ["%s" % k for k in users.get_users()]
res.append("EOF\n")

write(pipeid,"\n".join(res))
close(pipeid)
exit(0)
