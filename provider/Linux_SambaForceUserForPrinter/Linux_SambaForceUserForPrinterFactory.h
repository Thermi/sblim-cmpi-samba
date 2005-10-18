/**
 *  Linux_SambaForceUserForPrinterFactory.h
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


#ifndef Linux_SambaForceUserForPrinterFactory_h
#define Linux_SambaForceUserForPrinterFactory_h


#include "Linux_SambaForceUserForPrinterInterface.h"

namespace genProvider{
	
class Linux_SambaForceUserForPrinterFactory{
public:

	Linux_SambaForceUserForPrinterFactory(){};
	~Linux_SambaForceUserForPrinterFactory(){};
	
	static Linux_SambaForceUserForPrinterInterface* getImplementation();
};
}
#endif
 
