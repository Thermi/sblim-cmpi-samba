// =======================================================================
// Linux_SambaGlobalProtocolOptionsResourceAccess.h
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
//
// 
#ifndef Linux_SambaGlobalProtocolOptionsResourceAccess_h
#define Linux_SambaGlobalProtocolOptionsResourceAccess_h

#include "Linux_SambaGlobalProtocolOptionsInstanceName.h"
#include "Linux_SambaGlobalProtocolOptionsManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaGlobalProtocolOptionsDefaultImplementation.h"


namespace genProvider {

  class Linux_SambaGlobalProtocolOptionsResourceAccess:
   public Linux_SambaGlobalProtocolOptionsDefaultImplementation {
  	
    public:
    /*
    Linux_SambaGlobalProtocolOptionsResourceAccess();
    */    
    virtual ~Linux_SambaGlobalProtocolOptionsResourceAccess() ;
    
    /* intrinsic methods */

    virtual void enumInstanceNames(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      Linux_SambaGlobalProtocolOptionsInstanceNameEnumeration& anInstanceNameEnumeration);

  	

    virtual void enumInstances(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
  	  Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration& aManualInstanceEnumeration);

  	

    virtual Linux_SambaGlobalProtocolOptionsManualInstance getInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaGlobalProtocolOptionsInstanceName& anInstanceName);

  	

    virtual void setInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaGlobalProtocolOptionsManualInstance& aManualInstance);

  	
    /*
    virtual Linux_SambaGlobalProtocolOptionsInstanceName createInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaGlobalProtocolOptionsManualInstance& aManualInstance);
    */
  	
    /*
    virtual void deleteInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaGlobalProtocolOptionsInstanceName& anInstanceName);
    */
	
    
    
    /* extrinsic methods */
    
	
  };
  
}
#endif
