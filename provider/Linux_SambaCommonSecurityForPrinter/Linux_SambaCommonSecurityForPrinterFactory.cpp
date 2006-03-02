// =======================================================================
// Linux_SambaCommonSecurityForPrinterFactory.cpp
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

#include "Linux_SambaCommonSecurityForPrinterFactory.h"
#include "Linux_SambaCommonSecurityForPrinterResourceAccess.h"

namespace genProvider {
	
	Linux_SambaCommonSecurityForPrinterInterface* 
  Linux_SambaCommonSecurityForPrinterFactory::getImplementation(){
	  	
	  return (new Linux_SambaCommonSecurityForPrinterResourceAccess());
  
  }

}
 
