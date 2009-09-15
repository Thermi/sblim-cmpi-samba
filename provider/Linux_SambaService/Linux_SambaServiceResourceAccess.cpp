// =======================================================================
// Linux_SambaServiceResourceAccess.cpp
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
//
// 
#include "Linux_SambaServiceResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  
  //----------------------------------------------------------------------------
  // manual written methods
  
  static void setInstanceNameProperties(
      const char* aNameSpaceP, 
      Linux_SambaServiceInstanceName& anInstanceName) {
    
    anInstanceName.setNamespace(aNameSpaceP);
    anInstanceName.setName(DEFAULT_SERVICE_NAME);
    anInstanceName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
    anInstanceName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
    anInstanceName.setSystemName(DEFAULT_SYSTEM_NAME);
  };

  
  //----------------------------------------------------------------------------
  
  
  //----------------------------------------------------------------------------
  //Linux_SambaServiceResourceAccess::Linux_SambaServiceResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaServiceResourceAccess::~Linux_SambaServiceResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaServiceResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaServiceInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    Linux_SambaServiceInstanceName instanceName;
    setInstanceNameProperties(aNameSpaceP,instanceName);
    anInstanceNameEnumeration.addElement(instanceName);
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaServiceResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaServiceManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    Linux_SambaServiceManualInstance aManualInstance;
    Linux_SambaServiceInstanceName instanceName;
    
    setInstanceNameProperties(aNameSpaceP,instanceName);
    aManualInstance.setInstanceName(instanceName);
    if(status_server())
      aManualInstance.setStarted(true);
    else
      aManualInstance.setStarted(false);
    aManualInstanceEnumeration.addElement(aManualInstance);
  }

  
  //----------------------------------------------------------------------------

  Linux_SambaServiceManualInstance 
  Linux_SambaServiceResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaServiceInstanceName& anInstanceName) {

    if (strcasecmp(anInstanceName.getName(),DEFAULT_SERVICE_NAME) != 0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }

    Linux_SambaServiceManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);
    if(status_server())
      aManualInstance.setStarted(true);
    else
      aManualInstance.setStarted(false);
    
    return aManualInstance;
  }

  //----------------------------------------------------------------------------
  
  void
  Linux_SambaServiceResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaServiceManualInstance& aManualInstance) { 

     if (strcasecmp(aManualInstance.getInstanceName().getName(),DEFAULT_SERVICE_NAME)!=0) {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!"); 
     }
     
     if ((aManualInstance.getStarted()!=true) && 
         (aManualInstance.getStarted()!=false)) {
        throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER, "The instance has invalid parameters for Started!");
     } 
     
     if ((aManualInstance.getStarted()==true) && !(aManualInstance.isStartedSet())) {
        if (start_server()) {
            throw CmpiStatus(CMPI_RC_ERR_FAILED, "The service could not be Started!");
        }
        
     } else if ( (aManualInstance.getStarted()==false) && (aManualInstance.isStartedSet())  ) {
        if (stop_server()) {
            throw CmpiStatus(CMPI_RC_ERR_FAILED, "The service could not be Stopped!");
        }
     }

  }
  
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaServiceInstanceName
  Linux_SambaServiceResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaServiceManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaServiceResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaServiceInstanceName& anInstanceName) { }
	*/
	

  
  // extrinsic methods

  /*
  CMPIUint32 Linux_SambaServiceResourceAccess::RequestStateChange(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaServiceInstanceName& anInstanceName,
      const CMPIUint16& RequestedState,
      int isRequestedStatePresent,
      CIM_ConcreteJobInstanceName& Job,
      const CmpiDateTime& TimeoutPeriod,
      int isTimeoutPeriodPresent) { }
  */


  CMPIUint32 Linux_SambaServiceResourceAccess::StartService(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaServiceInstanceName& anInstanceName) {
    
    if(start_server()) 
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Service could not be started!");

    return 0;
  }



  CMPIUint32 Linux_SambaServiceResourceAccess::StopService(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaServiceInstanceName& anInstanceName) {
    
    if(stop_server()) 
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Service could not be stoped!");
    
    return 0;
  }


	
}


