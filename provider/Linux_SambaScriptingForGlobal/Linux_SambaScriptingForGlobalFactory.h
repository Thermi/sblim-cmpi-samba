// =======================================================================
// Linux_SambaScriptingForGlobalFactory.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
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
#ifndef Linux_SambaScriptingForGlobalFactory_h
#define Linux_SambaScriptingForGlobalFactory_h


#include "Linux_SambaScriptingForGlobalInterface.h"

namespace genProvider{
	
  class Linux_SambaScriptingForGlobalFactory {

    public:
	  Linux_SambaScriptingForGlobalFactory() {};
	  ~Linux_SambaScriptingForGlobalFactory() {};
	
	  static Linux_SambaScriptingForGlobalInterface* getImplementation();

    };
    
}

#endif
