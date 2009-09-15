// =======================================================================
// Linux_SambaPrinterBrowseOptionsFactory.cpp
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

#include "Linux_SambaPrinterBrowseOptionsFactory.h"
#include "Linux_SambaPrinterBrowseOptionsResourceAccess.h"

namespace genProvider {
	
	Linux_SambaPrinterBrowseOptionsInterface* 
  Linux_SambaPrinterBrowseOptionsFactory::getImplementation(){
	  	
	  return (new Linux_SambaPrinterBrowseOptionsResourceAccess());
  
  }

}
 
