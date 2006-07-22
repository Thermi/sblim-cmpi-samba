// =======================================================================
// Linux_SambaServiceDefaultImplementation.h
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
#ifndef Linux_SambaServiceDefaultImplementation_h
#define Linux_SambaServiceDefaultImplementation_h

#include "Linux_SambaServiceInstanceName.h"
#include "Linux_SambaServiceManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "CIM_ConcreteJobInstanceName.h"
#include "Linux_SambaServiceInterface.h"


namespace genProvider {

  class Linux_SambaServiceDefaultImplementation:
   public Linux_SambaServiceInterface {
  	
    public:    
    virtual ~Linux_SambaServiceDefaultImplementation() { };
    
    /* intrinsic methods */
    
    virtual void enumInstanceNames(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      Linux_SambaServiceInstanceNameEnumeration& anInstanceNameEnumeration);
    
  	
    
    virtual void enumInstances(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
  	  Linux_SambaServiceManualInstanceEnumeration& aManualInstanceEnumeration);
  	
  	
    
    virtual Linux_SambaServiceManualInstance getInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaServiceInstanceName& anInstanceName);
    
  	
    
    virtual void setInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaServiceManualInstance& aManualInstance);
    
  	
    
    virtual Linux_SambaServiceInstanceName createInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaServiceManualInstance& aManualInstance);
    
  	
    
    virtual void deleteInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaServiceInstanceName& anInstanceName);
    
	
    
    
    /* extrinsic methods */
    
    
    virtual CMPIUint32 RequestStateChange(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaServiceInstanceName& anInstanceName,
      const CMPIUint16& RequestedState,
      int isRequestedStatePresent,
      CIM_ConcreteJobInstanceName& Job,
      const CmpiDateTime& TimeoutPeriod,
      int isTimeoutPeriodPresent);
    

    
    virtual CMPIUint32 StartService(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaServiceInstanceName& anInstanceName);
    

    
    virtual CMPIUint32 StopService(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaServiceInstanceName& anInstanceName);
    

	
  };
  
}
#endif
