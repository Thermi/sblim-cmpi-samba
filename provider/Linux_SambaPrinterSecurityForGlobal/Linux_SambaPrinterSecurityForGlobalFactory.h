// =======================================================================
// Linux_SambaPrinterSecurityForGlobalFactory.h
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
#ifndef Linux_SambaPrinterSecurityForGlobalFactory_h
#define Linux_SambaPrinterSecurityForGlobalFactory_h


#include "Linux_SambaPrinterSecurityForGlobalInterface.h"

namespace genProvider{
	
  class Linux_SambaPrinterSecurityForGlobalFactory {

    public:
	  Linux_SambaPrinterSecurityForGlobalFactory() {};
	  ~Linux_SambaPrinterSecurityForGlobalFactory() {};
	
	  static Linux_SambaPrinterSecurityForGlobalInterface* getImplementation();

    };
    
}

#endif
