/**
 *  Linux_SambaGlobalSecurityOptionsFactory.h
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


#ifndef Linux_SambaGlobalSecurityOptionsFactory_h
#define Linux_SambaGlobalSecurityOptionsFactory_h


#include "Linux_SambaGlobalSecurityOptionsInterface.h"

namespace genProvider{
	
class Linux_SambaGlobalSecurityOptionsFactory{
public:

	Linux_SambaGlobalSecurityOptionsFactory(){};
	~Linux_SambaGlobalSecurityOptionsFactory(){};
	
	static Linux_SambaGlobalSecurityOptionsInterface* getImplementation();
};
}
#endif
 
