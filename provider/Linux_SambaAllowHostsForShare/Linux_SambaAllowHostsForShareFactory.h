// =======================================================================
// Linux_SambaAllowHostsForShareFactory.h
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
#ifndef Linux_SambaAllowHostsForShareFactory_h
#define Linux_SambaAllowHostsForShareFactory_h


#include "Linux_SambaAllowHostsForShareInterface.h"

namespace genProvider{
	
  class Linux_SambaAllowHostsForShareFactory {

    public:
	  Linux_SambaAllowHostsForShareFactory() {};
	  ~Linux_SambaAllowHostsForShareFactory() {};
	
	  static Linux_SambaAllowHostsForShareInterface* getImplementation();

    };
    
}

#endif