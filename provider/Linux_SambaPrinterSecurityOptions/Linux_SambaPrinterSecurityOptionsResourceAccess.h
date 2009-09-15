// =======================================================================
// Linux_SambaPrinterSecurityOptionsResourceAccess.h
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
#ifndef Linux_SambaPrinterSecurityOptionsResourceAccess_h
#define Linux_SambaPrinterSecurityOptionsResourceAccess_h

#include "Linux_SambaPrinterSecurityOptionsInstanceName.h"
#include "Linux_SambaPrinterSecurityOptionsManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaPrinterSecurityOptionsDefaultImplementation.h"


namespace genProvider {

  class Linux_SambaPrinterSecurityOptionsResourceAccess:
   public Linux_SambaPrinterSecurityOptionsDefaultImplementation {
  	
    public:
    /*
    Linux_SambaPrinterSecurityOptionsResourceAccess();
    */    
    virtual ~Linux_SambaPrinterSecurityOptionsResourceAccess() ;
    
    /* intrinsic methods */

    virtual void enumInstanceNames(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      Linux_SambaPrinterSecurityOptionsInstanceNameEnumeration& anInstanceNameEnumeration);

  	

    virtual void enumInstances(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
  	  Linux_SambaPrinterSecurityOptionsManualInstanceEnumeration& aManualInstanceEnumeration);

  	

    virtual Linux_SambaPrinterSecurityOptionsManualInstance getInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaPrinterSecurityOptionsInstanceName& anInstanceName);

  	
    
    virtual void setInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaPrinterSecurityOptionsManualInstance& aManualInstance);
    
  	
    /*
    virtual Linux_SambaPrinterSecurityOptionsInstanceName createInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaPrinterSecurityOptionsManualInstance& aManualInstance);
    */
  	
    /*
    virtual void deleteInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaPrinterSecurityOptionsInstanceName& anInstanceName);
    */
	
    
    
    /* extrinsic methods */
    
	
  };
  
}
#endif
