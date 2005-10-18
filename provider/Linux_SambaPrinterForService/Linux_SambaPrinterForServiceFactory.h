/**
 *  Linux_SambaPrinterForServiceFactory.h
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


#ifndef Linux_SambaPrinterForServiceFactory_h
#define Linux_SambaPrinterForServiceFactory_h


#include "Linux_SambaPrinterForServiceInterface.h"

namespace genProvider{
	
class Linux_SambaPrinterForServiceFactory{
public:

	Linux_SambaPrinterForServiceFactory(){};
	~Linux_SambaPrinterForServiceFactory(){};
	
	static Linux_SambaPrinterForServiceInterface* getImplementation();
};
}
#endif
 
