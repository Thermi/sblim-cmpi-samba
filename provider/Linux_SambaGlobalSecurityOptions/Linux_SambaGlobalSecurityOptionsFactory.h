// =======================================================================
// Linux_SambaGlobalSecurityOptionsFactory.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
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
//                Wolfgang Taphorn   <taphorn@de.ibm.com>
//                Mukunda Chowdaiah  <cmukunda@in.ibm.com>
//                Ashoka S Rao       <ashoka.rao@in.ibm.com>
//                Rodrigo Ceron      <rceron@br.ibm.com>
//
// =======================================================================
#ifndef Linux_SambaGlobalSecurityOptionsFactory_h
#define Linux_SambaGlobalSecurityOptionsFactory_h


#include "Linux_SambaGlobalSecurityOptionsInterface.h"

namespace genProvider{
	
  class Linux_SambaGlobalSecurityOptionsFactory {

    public:
	  Linux_SambaGlobalSecurityOptionsFactory() {};
	  ~Linux_SambaGlobalSecurityOptionsFactory() {};
	
	  static Linux_SambaGlobalSecurityOptionsInterface* getImplementation();

    };
    
}

#endif
