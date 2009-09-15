#!/usr/bin/python
#
# smt_smb_ra_parse-params.py
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

"""This generates the list of samba default parameters"""


import sys

try:
    inf = open(sys.argv[1],"r")
except IndexError:
    inf = sys.stdin

try:
    outputfilename = sys.argv[2]
    of = open(outputfilename,"w")
except IndexError:
    of = sys.stdout

opts = {}

for line in inf.readlines():

    try:
        (k,v) = line.split("=")
        if v.strip()!='': opts.update({k.strip():v.strip()})
    except ValueError:
        continue
    
of.write("\n".join(["%s = %s" % (k,v) for (k,v) in opts.iteritems()]))
    
if inf != sys.stdin: inf.close() 
if of != sys.stdout: of.close()
