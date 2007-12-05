#!/usr/bin/python
#
# smt_smb_ra_get_user_mappings.py
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

from sys import argv,exit,stdin
from os import write,close,path
from smt_smb_ra_errors import *
import re

class Mappings:
    """Class that parses the username map file"""

    def __init__(self,filename):

        self.fname = filename
        self.comment = re.compile(r"^[#;].*$|^\n$")        
        self.valid = re.compile(r"^[\s]*!?[\w\-]*[\s]*=([\w\s\"\-]+)$")
        self.right_side_group = re.compile(r"\"[^\"]*\"|[^\s]+")
        self.map_dic = {}
        self.parse()


    def parse_right_side(self,mline):

        d = {}
        for k in self.right_side_group.findall(mline): d[k.strip()] = k.strip()
        return ["%s" % k.strip("\"") for k in d.itervalues()] 


    def parse(self):
	if path.exists(self.fname):
            f = open(self.fname,"r")

            for line in f.readlines():

                if self.comment.search(line): continue
                elif self.valid.search(line):
                    (k,v) = line.split("=")
                    self.map_dic[k.strip()] = self.parse_right_side(v.strip())
                else:
                    exit(EINVAL)
	else:
    	    exit(EINVAL)

    def get_users_map(self):
        return self.map_dic


try:
    mapfile = argv[1]
    pipeid = int(argv[2])
except IndexError:
    exit(EINVAL)

umap = Mappings(mapfile)

udic = umap.get_users_map()

res = ["%s;%s" % (k,";".join(v)) for (k,v) in udic.iteritems()]
res.append("EOF\n")

write(pipeid,"\n".join(["%s" % k for k in res]))
close(pipeid)
            
