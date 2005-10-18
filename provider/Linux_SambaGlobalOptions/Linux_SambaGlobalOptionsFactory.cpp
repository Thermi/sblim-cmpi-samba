/**
 *  Linux_SambaGlobalOptionsFactory.cpp
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


#include "Linux_SambaGlobalOptionsFactory.h"
#include "Linux_SambaGlobalOptionsResourceAccess.h"

namespace genProvider{
	
	Linux_SambaGlobalOptionsInterface* 
	  Linux_SambaGlobalOptionsFactory::getImplementation(){
	  	
	  	return (new Linux_SambaGlobalOptionsResourceAccess());
	  };
}
 
