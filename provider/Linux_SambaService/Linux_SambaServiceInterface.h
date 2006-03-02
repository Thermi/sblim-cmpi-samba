// =======================================================================
// Linux_SambaServiceInterface.h
//     created on Fri, 24 Feb 2006 using ECUTE
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
//                Rodrigo Ceron    <rceron@br.ibm.com>
//                Wolfgang Taphorn <taphorn@de.ibm.com>
//
// =======================================================================
//
// 
#ifndef Linux_SambaServiceInterface_h
#define Linux_SambaServiceInterface_h

#include "Linux_SambaServiceInstanceName.h"
#include "Linux_SambaServiceManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "CIM_ConcreteJobInstanceName.h"


namespace genProvider {

  class Linux_SambaServiceInterface {
  	
    public:    
    virtual ~Linux_SambaServiceInterface() { };
    
    /* intrinsic methods */
    
    virtual void enumInstanceNames(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      Linux_SambaServiceInstanceNameEnumeration& anInstanceNameEnumeration) = 0;
    
  	
    
    virtual void enumInstances(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
  	  Linux_SambaServiceManualInstanceEnumeration& aManualInstanceEnumeration) = 0;
  	
  	
    
    virtual Linux_SambaServiceManualInstance getInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaServiceInstanceName& anInstanceName) = 0;
    
  	
    
    virtual void setInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaServiceManualInstance& aManualInstance) = 0;
    
  	
    
    virtual Linux_SambaServiceInstanceName createInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaServiceManualInstance& aManualInstance) = 0;
    
  	
    
    virtual void deleteInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaServiceInstanceName& anInstanceName) = 0;
    
	
    
    
    /* extrinsic methods */
    
    
    virtual CMPIUint32 RequestStateChange(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaServiceInstanceName& anInstanceName,
      const CMPIUint16& RequestedState,
      int isRequestedStatePresent,
      CIM_ConcreteJobInstanceName& Job,
      const CmpiDateTime& TimeoutPeriod,
      int isTimeoutPeriodPresent) = 0;
    

    
    virtual CMPIUint32 StartService(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaServiceInstanceName& anInstanceName) = 0;
    

    
    virtual CMPIUint32 StopService(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaServiceInstanceName& anInstanceName) = 0;
    

	
  };
  
}
#endif
