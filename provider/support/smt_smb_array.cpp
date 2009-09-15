/**
 *  smt_smb_array.cpp
 * 
 * (C) Copyright IBM Corp. 2005
 *
 * THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
 * ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
 * CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
 *
 * You can obtain a current copy of the Eclipse Public License from
 * http://www.opensource.org/licenses/eclipse-1.0.php
 *
 * Author:     Rodrigo Ceron <rceron@br.ibm.com>
 *
 * Contributors:
 *                Wolfgang Taphorn   <taphorn@de.ibm.com>
 *                Mukunda Chowdaiah  <cmukunda@in.ibm.com>
 *                Ashoka S Rao       <ashoka.rao@in.ibm.com>
 *                Rodrigo Ceron      <rceron@br.ibm.com>
 *
 *
 */


#include <string>
#include <list>
#include <iostream>

using namespace std;

#include "smt_smb_array.h"

SambaArray::SambaArray(const char *ptr) {
  splitArrayStr( string(ptr) );
};

SambaArray::SambaArray(){};

SambaArray::~SambaArray() {}; 

bool SambaArray::populate(const char *ptr)
{
  if ( samba_array.empty() ) {
    splitArrayStr( string(ptr) );
    return true;
  } else 
    return false;
}


void SambaArray::removeChars(string &str, const char *c)
{
  string::size_type pos = 0;
  while (pos != string::npos)
    {
      pos = str.find(c,pos);
      if (pos != string::npos)
	str.erase(pos,1);
    }
};


void strip(string &StringToModify)
{
   if(StringToModify.empty()) return;

   int startIndex = StringToModify.find_first_not_of(" ");
   int endIndex = StringToModify.find_last_not_of(" ");
   string tempString = StringToModify;
   StringToModify.erase();

   StringToModify = tempString.substr(startIndex, (endIndex-startIndex+ 1) );
}


void SambaArray::splitArrayStr(string text)
{
  //removeChars(text," ");
  
  int n = text.length();
  string entry;
  int start, stop;
  start = text.find_first_not_of(","); 
  
  while ((start >= 0) && (start < n)) {
    stop = text.find_first_of(",", start);

    if ((stop < 0) || (stop > n)) stop = n;
    entry = text.substr(start, stop - start);
    strip(entry);
    samba_array.push_back( entry );
    start = text.find_first_not_of(",", stop+1);
  }
};

void SambaArray::add(string s)
{
  samba_array.push_back( s );
}

void SambaArray::remove(string s)
{
  samba_array.remove( s );
}


bool SambaArray::isPresent(string str)
{
  SambaArrayIterator iter;
  iter = find( samba_array.begin(), samba_array.end(), str);
  
  if ( iter != samba_array.end() )
    return true;
  else
    return false;
} 

string SambaArray::toString()
{
  SambaArrayIterator iter;
  string ret = " ";
  
  for ( iter = samba_array.begin(); iter != samba_array.end(); ++iter )
    {
      if (iter != samba_array.begin())
	ret.append(", ");
      ret.append( (*iter).c_str() );
    }
  return ret;
};

const char **SambaArray::toArray()
{
  SambaArrayIterator iter;
  char **ret = (char **) malloc( samba_array.size()*sizeof(char *) ); 
  char **arr = ret;
  
  for ( iter = samba_array.begin(); iter != samba_array.end(); ++iter )
    {
      *arr = strdup( (*iter).c_str() ) ;
      arr++;
    }
  return (const char**) ret;
};

SambaArrayConstIterator SambaArray::begin()
{
  //SambaArrayConstIterator iter = samba_array.begin();
  
  return samba_array.begin();
}

SambaArrayConstIterator SambaArray::end()
{
  return samba_array.end();
}

int SambaArray::size()
{
  return samba_array.size();
}

bool SambaArray::chkEmpty()
{
  return ( (samba_array.begin()== samba_array.end()) );
}

