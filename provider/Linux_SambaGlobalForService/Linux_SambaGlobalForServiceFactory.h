/**
 *  Linux_SambaGlobalForServiceFactory.h
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


#ifndef Linux_SambaGlobalForServiceFactory_h
#define Linux_SambaGlobalForServiceFactory_h


#include "Linux_SambaGlobalForServiceInterface.h"

namespace genProvider{
	
class Linux_SambaGlobalForServiceFactory{
public:

	Linux_SambaGlobalForServiceFactory(){};
	~Linux_SambaGlobalForServiceFactory(){};
	
	static Linux_SambaGlobalForServiceInterface* getImplementation();
};
}
#endif
 
