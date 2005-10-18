/**
 *  Linux_SambaInvalidUsersForShareFactory.h
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


#ifndef Linux_SambaInvalidUsersForShareFactory_h
#define Linux_SambaInvalidUsersForShareFactory_h


#include "Linux_SambaInvalidUsersForShareInterface.h"

namespace genProvider{
	
class Linux_SambaInvalidUsersForShareFactory{
public:

	Linux_SambaInvalidUsersForShareFactory(){};
	~Linux_SambaInvalidUsersForShareFactory(){};
	
	static Linux_SambaInvalidUsersForShareInterface* getImplementation();
};
}
#endif
 
