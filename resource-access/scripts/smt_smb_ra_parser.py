#!/usr/bin/python
#
# smt_smb_ra_parser.py
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

from string import strip
from smt_smb_ra_errors import *
import re

class Parser:
	
	def __init__(self,filename):
		self.filename = filename
		#self.share = re.compile(r"\[\s*([^\s\[\]]+)\s*\]")
		
		self.share = re.compile(r"^\s*\[\s*([^]\s[]|[^][\s].*[^][\s])\s*\]\s*$")
		self.opts	 = re.compile(r"\s*([^=]+?)\s*=\s*(.+)")
		self.comment = re.compile(r"^[#;]+")


	def parse(self):
		self.file = file(self.filename)
		self.tokens = {}
		self.sec_order = [] # These 2 exists basically to allow us to determine the
		self.all_order = {} # order in wich the shares appear in the file.  
		for i in self.file.xreadlines():
			if self.comment.search(i):
				continue
			try:
				sh = self.share.search(strip(i)).groups()[0]
				self.tokens[sh] = {} 
				self.sec_order.append(sh)
				self.all_order[sh] = []
			except AttributeError:
				try:
					op = self.opts.search(strip(i)).groups()
					self.tokens[sh][op[0]] = op[1]
					self.all_order[sh].append(op[0])
				except:
					continue
			except:
				continue
		self.file.close()		
		return self.tokens

	def get_order(self):
		return self.sec_order,self.all_order

	def get_share(self,name):
		try:
			return self.tokens[name]
		except AttributeError:
			self.parse()
			try:
				return self.tokens[name]
			except KeyError:
				return {}

	def get_service_list(self):
		try:
			return self.tokens.keys()
		except AttributeError:
			return self.parse().keys()

	def __get_option(self,share,option):
		try:
			sh = self.tokens[share]
		except AttributeError:
			self.parse()
		except KeyError:
			return ENOSHARE 
		try:
			sh = self.tokens[share]
		except KeyError: 
			return ENOSHARE
		return sh[option]
				
	def get_option(self,share,option):
		try:
			return self.__get_option(share,option)
		except KeyError:
			return ENOOPT

	def get_option_merge(self,share,option):
		if share == "global":
			return self.__get_option(share,option)
		else:
			try:
				return self.__get_option(share,option)
			except KeyError:
				try:
					return self.__get_option("global",option)
				except KeyError:
					return ENOOPT

	def lines(self,share):
		self.file = file(self.filename)
		inshare = 0
		lines = -1 
		linestart = -1
		lineend = -1
		for line in self.file.xreadlines():
			lines = lines + 1
			try:
				sh = self.share.search(line).groups()[0]
				if (sh == share):
					linestart = lines
					inshare = 1
				elif inshare:
						lineend = lines 
						inshare = 0
			except:
				continue

		if (linestart == -1):
			return 0
		if (lineend == -1):
			lineend = lines +1 ;

		self.file.close()
		return linestart,lineend
			
	def enable(self,share):
		lines = self.lines(share)
		if (lines == 0):
			return ENOSHARE
			
		try:
			self.file = file(self.filename,"r+")
		except IOError:
			return EACCES

		file_lines = self.file.readlines()
		for i in range(lines[0],lines[1]):
			if (self.share.search(file_lines[i]) or self.opts.search(file_lines[i])):
				file_lines[i] = self.comment.sub("",file_lines[i])

		self.file.seek(0)
		self.file.truncate(0)
		self.file.writelines(file_lines)
			
		self.file.close()
		return 0
		
	def disable(self,share):	
		lines = self.lines(share)
		if (lines == 0):
			return ENOSHARE
			
		try:
			self.file = file(self.filename,"r+")
		except IOError:
			return EACCES
			
		file_lines = self.file.readlines()
		for i in range(lines[0],lines[1]):
			if (not self.comment.search(file_lines[i])):
				file_lines[i] = "#" + file_lines[i]

	
		self.file.seek(0)
		self.file.truncate(0)
		self.file.writelines(file_lines)
		self.file.close()
		return 0
		
	def set_option(self,share,option,value):
		try:
			self.file = file(self.filename)
			file_lines = self.file.readlines()
		except IOError:
			return ENOFILE

		lines = self.lines(share)
		if (lines == 0):
			return ENOSHARE

		found = 0
		#try to match the option in the options already placed in the file
		#if this is the case, replace it
		#if not, add a new one, placed at the end of the range given by lines
		for i in range(lines[0],lines[1]):
			try:
				if (self.opts.search(file_lines[i]).groups()[0] == option):
					file_lines[i] = self.opts.sub(r"\t\1 = " + value,file_lines[i])
					found = 1
					#break	
			except AttributeError:
				continue

		if (not found):
			file_lines.insert(lines[1],"\t"+option+ " = " + value + "\n")
	
		try:
			self.file = file(self.filename,"w")
		except IOEerror:
			return EACCES

		self.file.writelines(file_lines)
		self.file.close()
		return 0
	
	def delete_share(self,share):	
		try:
			self.file = file(self.filename)
			file_lines = self.file.readlines()
		except IOError:
			return ENOFILE

		lines = self.lines(share)
		if (lines == 0):
			return ENOSHARE

		file_lines[lines[0]:lines[1]] = []

		try:
			self.file = file(self.filename,"w")
		except IOEerror:
			return EACCES

		self.file.writelines(file_lines)
		self.file.close()
		return 0

	def create_share(self,share):
		pass
