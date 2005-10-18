/**
 *  Linux_SambaValidUsersForPrinterFactory.h
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


#ifndef Linux_SambaValidUsersForPrinterFactory_h
#define Linux_SambaValidUsersForPrinterFactory_h


#include "Linux_SambaValidUsersForPrinterInterface.h"

namespace genProvider{
	
class Linux_SambaValidUsersForPrinterFactory{
public:

	Linux_SambaValidUsersForPrinterFactory(){};
	~Linux_SambaValidUsersForPrinterFactory(){};
	
	static Linux_SambaValidUsersForPrinterInterface* getImplementation();
};
}
#endif
 
