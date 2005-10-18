/**
 *  Linux_SambaGroupFactory.cpp
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


#include "Linux_SambaGroupFactory.h"
#include "Linux_SambaGroupResourceAccess.h"

namespace genProvider{
	
	Linux_SambaGroupInterface* 
	  Linux_SambaGroupFactory::getImplementation(){
	  	
	  	return (new Linux_SambaGroupResourceAccess());
	  };
}
 
