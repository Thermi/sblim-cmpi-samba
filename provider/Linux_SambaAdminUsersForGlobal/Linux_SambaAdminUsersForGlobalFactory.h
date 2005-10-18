/**
 *  Linux_SambaAdminUsersForGlobalFactory.h
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


#ifndef Linux_SambaAdminUsersForGlobalFactory_h
#define Linux_SambaAdminUsersForGlobalFactory_h


#include "Linux_SambaAdminUsersForGlobalInterface.h"

namespace genProvider{
	
class Linux_SambaAdminUsersForGlobalFactory{
public:

	Linux_SambaAdminUsersForGlobalFactory(){};
	~Linux_SambaAdminUsersForGlobalFactory(){};
	
	static Linux_SambaAdminUsersForGlobalInterface* getImplementation();
};
}
#endif
 
