/**
 *  Linux_SambaCommonSecurityOptionsFactory.h
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


#ifndef Linux_SambaCommonSecurityOptionsFactory_h
#define Linux_SambaCommonSecurityOptionsFactory_h


#include "Linux_SambaCommonSecurityOptionsInterface.h"

namespace genProvider{
	
class Linux_SambaCommonSecurityOptionsFactory{
public:

	Linux_SambaCommonSecurityOptionsFactory(){};
	~Linux_SambaCommonSecurityOptionsFactory(){};
	
	static Linux_SambaCommonSecurityOptionsInterface* getImplementation();
};
}
#endif
 
