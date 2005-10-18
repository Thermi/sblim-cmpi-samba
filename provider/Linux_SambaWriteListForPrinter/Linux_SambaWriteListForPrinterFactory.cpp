/**
 *  Linux_SambaWriteListForPrinterFactory.cpp
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


#include "Linux_SambaWriteListForPrinterFactory.h"
#include "Linux_SambaWriteListForPrinterResourceAccess.h"

namespace genProvider{
	
	Linux_SambaWriteListForPrinterInterface* 
	  Linux_SambaWriteListForPrinterFactory::getImplementation(){
	  	
	  	return (new Linux_SambaWriteListForPrinterResourceAccess());
	  };
}
 
