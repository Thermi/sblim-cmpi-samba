/**
 *  Linux_SambaServiceResourceAccess.cpp
 * 
 * (C) Copyright IBM Corp. 2005
 *
 * THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
 * ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
 * CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
 *
 * You can obtain a current copy of the Common Public License from
 * http://www.opensource.org/licenses/cpl1.0.php
 *
 * Author:     Rodrigo Ceron <rceron@br.ibm.com>
 *
 * Contributors:
 *
 */


#include "Linux_SambaServiceResourceAccess.h"

namespace genProvider {
  
  void Linux_SambaServiceResourceAccess::setInstanceNameProperties(const char* nsp,     
    Linux_SambaServiceInstanceName& anInstanceName)
  {
    anInstanceName.setNamespace(nsp);
    anInstanceName.setName(DEFAULT_SERVICE_NAME);
    anInstanceName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
    anInstanceName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
    anInstanceName.setSystemName(DEFAULT_SYSTEM_NAME);
  };

  //Linux_SambaServiceResourceAccess::Linux_SambaServiceResourceAccess();
  Linux_SambaServiceResourceAccess::~Linux_SambaServiceResourceAccess() { 
    terminator();
  };
  
  /* intrinsic methods */
  
  void Linux_SambaServiceResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaServiceInstanceNameEnumeration& instnames)
  {
    Linux_SambaServiceInstanceName instanceName;
    setInstanceNameProperties(nsp,instanceName);
    instnames.addElement(instanceName); 
  };
  
  
  void Linux_SambaServiceResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaServiceManualInstanceEnumeration& instances)
  {
    Linux_SambaServiceManualInstance aManualInstance;
    Linux_SambaServiceInstanceName instanceName;
    
    setInstanceNameProperties(nsp,instanceName);
    aManualInstance.setInstanceName(instanceName);
    if(status_server())
      aManualInstance.setStarted(true);
    else
      aManualInstance.setStarted(false);
    instances.addElement(aManualInstance);
  };
  

  Linux_SambaServiceManualInstance 
  Linux_SambaServiceResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaServiceInstanceName& instanceName)
  {
    Linux_SambaServiceManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    if(status_server())
      aManualInstance.setStarted(true);
    else
      aManualInstance.setStarted(false);
    return aManualInstance;
  }
  	
  	
  void Linux_SambaServiceResourceAccess::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaServiceManualInstance&){};
  
  	/*
    void Linux_SambaServiceResourceAccess::createInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaServiceManualInstance&){};
  	*/
  	/*
    void Linux_SambaServiceResourceAccess::deleteInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaServiceInstanceName&){};
	*/
    
    /* extrinsic methods */
    /*
    virtual CMPIUint32 Linux_SambaServiceResourceAccess::RequestStateChange(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaServiceInstanceName&,
      const CMPIUint16 &RequestedState,
      int isRequestedStatePresent,
      CIM_ConcreteJobInstanceName &Job,
      const CmpiDateTime &TimeoutPeriod,
      int isTimeoutPeriodPresent) 
    {};
    */
    
  CMPIUint32 Linux_SambaServiceResourceAccess::StartService(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaServiceInstanceName& instanceName) 
  { 
    if(start_server()) 
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Service could not be started!");
    return 0;
  };
  
  
  CMPIUint32 Linux_SambaServiceResourceAccess::StopService(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaServiceInstanceName& instanceName) 
  { 
    if(stop_server()) 
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Service could not be stoped!");
    return 0;
  };
  
	
}


