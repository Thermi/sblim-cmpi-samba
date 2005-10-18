/**
 *  Linux_SambaPrinterOptionsFactory.h
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


#ifndef Linux_SambaPrinterOptionsFactory_h
#define Linux_SambaPrinterOptionsFactory_h


#include "Linux_SambaPrinterOptionsInterface.h"

namespace genProvider{
	
class Linux_SambaPrinterOptionsFactory{
public:

	Linux_SambaPrinterOptionsFactory(){};
	~Linux_SambaPrinterOptionsFactory(){};
	
	static Linux_SambaPrinterOptionsInterface* getImplementation();
};
}
#endif
 
