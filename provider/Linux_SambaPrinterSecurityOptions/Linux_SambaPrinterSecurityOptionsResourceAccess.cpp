// =======================================================================
// Linux_SambaPrinterSecurityOptionsResourceAccess.cpp
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
#include "Linux_SambaPrinterSecurityOptionsResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  //----------------------------------------------------------------------------
  // manual written methods

  static void setInstanceNameProperties(
      const char* aNameSpaceP, 
      char *instanceName, 
      Linux_SambaPrinterSecurityOptionsInstanceName& anInstanceName) {

    anInstanceName.setNamespace(aNameSpaceP);
    anInstanceName.setName(instanceName);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  };

  //----------------------------------------------------------------------------

  
  //----------------------------------------------------------------------------
  //Linux_SambaPrinterSecurityOptionsResourceAccess::Linux_SambaPrinterSecurityOptionsResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaPrinterSecurityOptionsResourceAccess::~Linux_SambaPrinterSecurityOptionsResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterSecurityOptionsResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaPrinterSecurityOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    char ** printers = get_samba_printers_list();
    Linux_SambaPrinterSecurityOptionsInstanceName instanceName;
    
    setInstanceNameProperties(aNameSpaceP,DEFAULT_GLOBAL_NAME,instanceName);
    anInstanceNameEnumeration.addElement(instanceName); 
    
    if(printers){
      for (int i=0; printers[i]; i++){
	setInstanceNameProperties(aNameSpaceP,printers[i],instanceName);
	anInstanceNameEnumeration.addElement(instanceName); 
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaPrinterSecurityOptionsResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaPrinterSecurityOptionsManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    Linux_SambaPrinterSecurityOptionsManualInstance aManualInstance;
    Linux_SambaPrinterSecurityOptionsInstanceName instanceName;
    
    setInstanceNameProperties(aNameSpaceP,DEFAULT_GLOBAL_NAME,instanceName);
    aManualInstance.setInstanceName(instanceName);
    
    aManualInstanceEnumeration.addElement(aManualInstance);
    
    char ** printers = get_samba_printers_list();
    
    if(printers){
      for (int i=0; printers[i]; i++){
	
	setInstanceNameProperties(aNameSpaceP,printers[i],instanceName);
	aManualInstance.setInstanceName(instanceName);
	
	aManualInstanceEnumeration.addElement(aManualInstance);
      }
    }
  }

  
  //----------------------------------------------------------------------------

  Linux_SambaPrinterSecurityOptionsManualInstance 
  Linux_SambaPrinterSecurityOptionsResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaPrinterSecurityOptionsInstanceName& anInstanceName) {
    
    if (!service_exists(anInstanceName.getName()) ||
        strcasecmp(DEFAULT_INSTANCE_ID,anInstanceName.getInstanceID())!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }

    Linux_SambaPrinterSecurityOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);
    
    return aManualInstance;
  }

  //----------------------------------------------------------------------------
  
  void
  Linux_SambaPrinterSecurityOptionsResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaPrinterSecurityOptionsManualInstance& aManualInstance) {

    if (!service_exists(aManualInstance.getInstanceName().getName()) ||
        strcasecmp(DEFAULT_INSTANCE_ID,aManualInstance.getInstanceName().getInstanceID())!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }
  }
  
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaPrinterSecurityOptionsInstanceName
  Linux_SambaPrinterSecurityOptionsResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaPrinterSecurityOptionsManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaPrinterSecurityOptionsResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaPrinterSecurityOptionsInstanceName& anInstanceName) { }
	*/
	

  
  // extrinsic methods

	
}


