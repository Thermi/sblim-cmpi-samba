#!/usr/bin/python
#
# smt_smb_ra_get_synonyms.py
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
from os import write,close
from smt_smb_ra_errors import *
import re


class Synonyms:
    """Class that parses the synonyms file"""

    def __init__(self, filename):

        self.filename = filename
        self.comment = re.compile(r"^\s*([#]+.*|\s*)$")
        self.synonym = re.compile(r"^\s*[^,]*(,[^,]*)+.*;.*$")
        self.synlist = []
        self.parse()

    def parse(self):
        """Parses the file"""

        f = open(self.filename,"r")
        for line in f.readlines():
            if self.comment.search(line): continue
            elif self.synonym.search(line):
                self.parseline(line,self.synlist)
            else:
                exit(EINVAL)
                write(pipeid,"EOF\n")

    def parseline(self,line,l):
        """Parses a specific line containing synonims"""

        synlist = line.strip().strip(";").split(",")

        try:
            l.append(synlist)
        except IndexError:
            write(pipeid,"EOF\n")
            exit(EINVAL)

    def get_synonyms(self):
        """returns the synonyms dictionary"""

        return self.synlist
        

try:
    infname = argv[1]
except IndexError:
    exit(EINVAL)
    
try:
    pipeid = int(argv[2])
except IndexError:
    exit(EINVAL)

s = Synonyms(infname)
li = s.get_synonyms()
res = ["%s" % ";".join(["%s" % v.strip() for v in k]) for k in li]
res.append("EOF\n")

write(pipeid,"\n".join(["%s" % k for k in res]))
close(pipeid)
exit(0)
