#!/usr/bin/python
#
# smt_smb_ra_set_user_mappings.py
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
from os import write,close,fdopen
from smt_smb_ra_errors import *

try:
    mapfile = argv[1]
    pipeid = int(argv[2])
except IndexError:
    exit(EINVAL)

f = fdopen(pipeid,"r")

d = {}

while 1:
    line = f.readline()
    if line.strip() == "EOF":
        f.close()
        break
    (v,k) = line.strip("\n").split("=")
    (value,key) = (v.strip(),k.strip())
    if value.find(" ")>=0: value = "\"%s\"" % value
    try:
        li = d[key]
    except KeyError:
        li = []
    if not v in li:
        li.append(value.strip())
        d[key] = li

outf = open(mapfile,"w")
outf.write("\n".join(["%s = %s" % (k," ".join(l)) for (k,l) in d.iteritems()]))
outf.close()
