/**
 *  Linux_SambaGlobalBrowseOptionsFactory.h
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


#ifndef Linux_SambaGlobalBrowseOptionsFactory_h
#define Linux_SambaGlobalBrowseOptionsFactory_h


#include "Linux_SambaGlobalBrowseOptionsInterface.h"

namespace genProvider{
	
class Linux_SambaGlobalBrowseOptionsFactory{
public:

	Linux_SambaGlobalBrowseOptionsFactory(){};
	~Linux_SambaGlobalBrowseOptionsFactory(){};
	
	static Linux_SambaGlobalBrowseOptionsInterface* getImplementation();
};
}
#endif
 
