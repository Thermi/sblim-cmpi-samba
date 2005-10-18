#!/usr/bin/python
#
# smt_smb_ra_get_all_services.py
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

from smt_smb_ra_parser import Parser
from sys import argv,exit
from os import write,close
from smt_smb_ra_errors import *

try:
	filename = argv[1]
except IndexError:
	exit(EINVAL)
try:	
	pipeid = int(argv[2])
except IndexError:
	exit(EINVAL)

try:
	p = Parser(filename)
except IOError:
	write(pipeid,"SMBEOF\n")
	exit(ENOFILE)


list = p.get_service_list()
for share in list:
	opts = p.get_share(share)

	write(pipeid,share + "\n");
	#opts.append("SMBEOF");
	for opt in opts.iteritems():
		# bellow , we use ; as a separator, as we know it won't appear 
  	# in the options.
		write(pipeid,opt[0] + ";" + opt[1] + "\n")
	write(pipeid,"ENDSHARE\n");

write(pipeid,"SMBEOF\n")
close(pipeid)
exit(0)
