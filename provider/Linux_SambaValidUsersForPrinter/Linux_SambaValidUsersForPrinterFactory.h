// =======================================================================
// Linux_SambaValidUsersForPrinterFactory.h
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
#ifndef Linux_SambaValidUsersForPrinterFactory_h
#define Linux_SambaValidUsersForPrinterFactory_h


#include "Linux_SambaValidUsersForPrinterInterface.h"

namespace genProvider{
	
  class Linux_SambaValidUsersForPrinterFactory {

    public:
	  Linux_SambaValidUsersForPrinterFactory() {};
	  ~Linux_SambaValidUsersForPrinterFactory() {};
	
	  static Linux_SambaValidUsersForPrinterInterface* getImplementation();

    };
    
}

#endif
