// =======================================================================
// Linux_SambaPrinterBrowseForPrinterFactory.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaPrinterBrowseForPrinterFactory_h
#define Linux_SambaPrinterBrowseForPrinterFactory_h


#include "Linux_SambaPrinterBrowseForPrinterInterface.h"

namespace genProvider{
	
  class Linux_SambaPrinterBrowseForPrinterFactory {

    public:
	  Linux_SambaPrinterBrowseForPrinterFactory() {};
	  ~Linux_SambaPrinterBrowseForPrinterFactory() {};
	
	  static Linux_SambaPrinterBrowseForPrinterInterface* getImplementation();

    };
    
}

#endif
