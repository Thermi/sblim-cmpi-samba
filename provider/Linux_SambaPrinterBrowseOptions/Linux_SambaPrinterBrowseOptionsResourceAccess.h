// =======================================================================
// Linux_SambaPrinterBrowseOptionsResourceAccess.h
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
//
// 
#ifndef Linux_SambaPrinterBrowseOptionsResourceAccess_h
#define Linux_SambaPrinterBrowseOptionsResourceAccess_h

#include "Linux_SambaPrinterBrowseOptionsInstanceName.h"
#include "Linux_SambaPrinterBrowseOptionsManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaPrinterBrowseOptionsDefaultImplementation.h"


namespace genProvider {

  class Linux_SambaPrinterBrowseOptionsResourceAccess:
   public Linux_SambaPrinterBrowseOptionsDefaultImplementation {
  	
    public:
    /*
    Linux_SambaPrinterBrowseOptionsResourceAccess();
    */    
    virtual ~Linux_SambaPrinterBrowseOptionsResourceAccess() ;
    
    /* intrinsic methods */

    virtual void enumInstanceNames(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      Linux_SambaPrinterBrowseOptionsInstanceNameEnumeration& anInstanceNameEnumeration);

  	

    virtual void enumInstances(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
  	  Linux_SambaPrinterBrowseOptionsManualInstanceEnumeration& aManualInstanceEnumeration);

  	

    virtual Linux_SambaPrinterBrowseOptionsManualInstance getInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaPrinterBrowseOptionsInstanceName& anInstanceName);

  	

    virtual void setInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaPrinterBrowseOptionsManualInstance& aManualInstance);

  	
    /*
    virtual Linux_SambaPrinterBrowseOptionsInstanceName createInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaPrinterBrowseOptionsManualInstance& aManualInstance);
    */
  	
    /*
    virtual void deleteInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaPrinterBrowseOptionsInstanceName& anInstanceName);
    */
	
    
    
    /* extrinsic methods */
    
	
  };
  
}
#endif
