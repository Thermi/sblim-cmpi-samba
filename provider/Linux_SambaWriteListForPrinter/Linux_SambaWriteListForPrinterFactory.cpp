// =======================================================================
// Linux_SambaWriteListForPrinterFactory.cpp
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

#include "Linux_SambaWriteListForPrinterFactory.h"
#include "Linux_SambaWriteListForPrinterResourceAccess.h"

namespace genProvider {
	
	Linux_SambaWriteListForPrinterInterface* 
  Linux_SambaWriteListForPrinterFactory::getImplementation(){
	  	
	  return (new Linux_SambaWriteListForPrinterResourceAccess());
  
  }

}
 
