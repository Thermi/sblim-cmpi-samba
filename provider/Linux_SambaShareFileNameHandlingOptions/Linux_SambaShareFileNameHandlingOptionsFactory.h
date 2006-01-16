/**
 *  Linux_SambaShareFileNameHandlingOptionsFactory.h
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


#ifndef Linux_SambaShareFileNameHandlingOptionsFactory_h
#define Linux_SambaShareFileNameHandlingOptionsFactory_h


#include "Linux_SambaShareFileNameHandlingOptionsInterface.h"

namespace genProvider{
	
class Linux_SambaShareFileNameHandlingOptionsFactory{
public:

	Linux_SambaShareFileNameHandlingOptionsFactory(){};
	~Linux_SambaShareFileNameHandlingOptionsFactory(){};
	
	static Linux_SambaShareFileNameHandlingOptionsInterface* getImplementation();
};
}
#endif
 