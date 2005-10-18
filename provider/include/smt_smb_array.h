/**
 *  smt_smb_array.h
 * 
 * (C) Copyright IBM Corp. 2005
 *
 * THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
 * ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
 * CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
 *
 * You can obtain a current copy of the Common Public License from
 * http://www.opensource.org/licenses/cpl1.0.php
 *
 * Author:     Rodrigo Ceron <rceron@br.ibm.com>
 *
 * Contributors:
 *
 */


#ifndef SAMBAARRAY_H
#define SAMBAARRAY_H

#include <string>
#include <vector>
#include <iterator>

using namespace std;

typedef list<string> SambaArrayContainer;
typedef list<string>::iterator SambaArrayIterator;
typedef list<string>::const_iterator SambaArrayConstIterator;

class SambaArray: list<string>  {
    SambaArrayContainer samba_array;

    private:
	void removeChars(string &str, const char *c);
        void splitArrayStr(string);

    public:
	SambaArray(const char *);
	SambaArray();
	~SambaArray();

	bool populate(const char *);

	void add(string);
	void remove(string);
	int size();

	bool isPresent(string);
	string toString();
	const char **SambaArray::toArray();

	SambaArrayConstIterator begin();
	SambaArrayConstIterator end();	
};
#endif
