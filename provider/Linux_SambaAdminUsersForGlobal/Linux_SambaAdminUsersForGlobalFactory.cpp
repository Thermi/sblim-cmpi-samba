// =======================================================================
// Linux_SambaAdminUsersForGlobalFactory.cpp
//     created on Fri, 24 Feb 2006 using ECUTE
// 
// Copyright (c) 2006, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE 
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Common Public License from
// http://oss.software.ibm.com/developerworks/opensource/license-cpl.html
//
// Author:        generated
//
// Contributors:
//                Rodrigo Ceron    <rceron@br.ibm.com>
//                Wolfgang Taphorn <taphorn@de.ibm.com>
//
// =======================================================================
//
// 

#include "Linux_SambaAdminUsersForGlobalFactory.h"
#include "Linux_SambaAdminUsersForGlobalResourceAccess.h"

namespace genProvider {
	
	Linux_SambaAdminUsersForGlobalInterface* 
  Linux_SambaAdminUsersForGlobalFactory::getImplementation(){
	  	
	  return (new Linux_SambaAdminUsersForGlobalResourceAccess());
  
  }

}
 
