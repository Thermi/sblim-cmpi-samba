// =======================================================================
// Linux_SambaPrinterSecurityOptionsFactory.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
// http://www.opensource.org/licenses/eclipse-1.0.php
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
#ifndef Linux_SambaPrinterSecurityOptionsFactory_h
#define Linux_SambaPrinterSecurityOptionsFactory_h


#include "Linux_SambaPrinterSecurityOptionsInterface.h"

namespace genProvider{
	
  class Linux_SambaPrinterSecurityOptionsFactory {

    public:
	  Linux_SambaPrinterSecurityOptionsFactory() {};
	  ~Linux_SambaPrinterSecurityOptionsFactory() {};
	
	  static Linux_SambaPrinterSecurityOptionsInterface* getImplementation();

    };
    
}

#endif
