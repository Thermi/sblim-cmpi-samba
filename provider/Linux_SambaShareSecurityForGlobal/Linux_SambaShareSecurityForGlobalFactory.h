/**
 *  Linux_SambaShareSecurityForGlobalFactory.h
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


#ifndef Linux_SambaShareSecurityForGlobalFactory_h
#define Linux_SambaShareSecurityForGlobalFactory_h


#include "Linux_SambaShareSecurityForGlobalInterface.h"

namespace genProvider{
	
class Linux_SambaShareSecurityForGlobalFactory{
public:

	Linux_SambaShareSecurityForGlobalFactory(){};
	~Linux_SambaShareSecurityForGlobalFactory(){};
	
	static Linux_SambaShareSecurityForGlobalInterface* getImplementation();
};
}
#endif
 