// =======================================================================
// Linux_SambaGroupFactory.h
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
#ifndef Linux_SambaGroupFactory_h
#define Linux_SambaGroupFactory_h


#include "Linux_SambaGroupInterface.h"

namespace genProvider{
	
  class Linux_SambaGroupFactory {

    public:
	  Linux_SambaGroupFactory() {};
	  ~Linux_SambaGroupFactory() {};
	
	  static Linux_SambaGroupInterface* getImplementation();

    };
    
}

#endif
