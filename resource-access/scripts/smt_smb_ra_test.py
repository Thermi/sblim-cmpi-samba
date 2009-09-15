#!/usr/bin/python
#
# smt_smb_ra_test.py
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

from smt_smb_ra_parser import Parser

p = Parser("./smb.conf")

h = p.parse()

print "Parsing of the smb.conf file:"
print

for item in h.iteritems():
	print "\033[01mSection " + item[0] + ":\033[0m"
	for opts in item[1].iteritems():
		print "\t\033[01;032mkey:\033[0m " + opts[0] + " \033[01;032mvalue:\033[0m " + opts[1]

print
print "Test of the get_share functionality"
print "Getting the global section:"

gs = p.get_share("global")
for opts in gs.iteritems():
		print "\t\033[01;032mkey:\033[0m " + opts[0] + " \033[01;032mvalue:\033[0m " + opts[1]
print

print "Test of the get_service_list functionality"
print

print "list of services:"
s = p.get_service_list()
for service in s:
	print "\t\033[01m" + service + "\033[0m"
