// =======================================================================
// Linux_SambaPrinterBrowseOptionsResourceAccess.cpp
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
#include "Linux_SambaPrinterBrowseOptionsResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  
  //----------------------------------------------------------------------------
  // manual written methods
  
  static void setInstanceNameProperties(
      const char* aNameSpaceP, 
      char *instanceName, 
      Linux_SambaPrinterBrowseOptionsInstanceName& anInstanceName) {
    
    anInstanceName.setNamespace(aNameSpaceP);
    anInstanceName.setName(instanceName);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  };

  
  //----------------------------------------------------------------------------
  

  static void setInstanceProperties(
      Linux_SambaPrinterBrowseOptionsManualInstance& aManualInstance) {
    
    char *option;
    
    option = get_option(aManualInstance.getInstanceName().getName(),BROWSEABLE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setBrowsable( true );
      else
	aManualInstance.setBrowsable( false );
  };

  
  //----------------------------------------------------------------------------

  
  static void setRAProperties(
      Linux_SambaPrinterBrowseOptionsManualInstance aManualInstance) {
    if ( aManualInstance.isBrowsableSet() )
      if(aManualInstance.getBrowsable())  
	set_printer_option(aManualInstance.getInstanceName().getName(),BROWSEABLE,YES);
      else
	set_printer_option(aManualInstance.getInstanceName().getName(),BROWSEABLE,NO);
  };
  
  //----------------------------------------------------------------------------
  

  //----------------------------------------------------------------------------
  //Linux_SambaPrinterBrowseOptionsResourceAccess::Linux_SambaPrinterBrowseOptionsResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseOptionsResourceAccess::~Linux_SambaPrinterBrowseOptionsResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterBrowseOptionsResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaPrinterBrowseOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    char ** printers = get_samba_printers_list();
    
    if(printers){
      for (int i=0; printers[i]; i++){
	Linux_SambaPrinterBrowseOptionsInstanceName instanceName;
	setInstanceNameProperties(aNameSpaceP,printers[i],instanceName);
	anInstanceNameEnumeration.addElement(instanceName); 
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaPrinterBrowseOptionsResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaPrinterBrowseOptionsManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char ** printers = get_samba_printers_list();
    
    if(printers){
      for (int i=0; printers[i]; i++){
	Linux_SambaPrinterBrowseOptionsManualInstance aManualInstance;
	Linux_SambaPrinterBrowseOptionsInstanceName instanceName;
	
	setInstanceNameProperties(aNameSpaceP,printers[i],instanceName);
	aManualInstance.setInstanceName(instanceName);
	
	setInstanceProperties(aManualInstance);
	
	aManualInstanceEnumeration.addElement(aManualInstance);
      }
    }
  }

  
  //----------------------------------------------------------------------------

  Linux_SambaPrinterBrowseOptionsManualInstance 
  Linux_SambaPrinterBrowseOptionsResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaPrinterBrowseOptionsInstanceName& anInstanceName) {

    if (!service_exists(anInstanceName.getName()) ||
        strcasecmp(DEFAULT_INSTANCE_ID,anInstanceName.getInstanceID())!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }

    Linux_SambaPrinterBrowseOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);
    
    setInstanceProperties(aManualInstance);
    
    return aManualInstance;
  }

  //----------------------------------------------------------------------------

  void
  Linux_SambaPrinterBrowseOptionsResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaPrinterBrowseOptionsManualInstance& aManualInstance) {
    
    if (!service_exists(aManualInstance.getInstanceName().getName()) ||
        strcasecmp(DEFAULT_INSTANCE_ID,aManualInstance.getInstanceName().getInstanceID())!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }

    setRAProperties(aManualInstance);
  }

  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaPrinterBrowseOptionsInstanceName
  Linux_SambaPrinterBrowseOptionsResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaPrinterBrowseOptionsManualInstance& aManualInstance) {
    
    setRAProperties(aManualInstance);
    
    return aManualInstance.getInstanceName();
  }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaPrinterBrowseOptionsResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaPrinterBrowseOptionsInstanceName& anInstanceName) {
    
    if(service_exists(anInstanceName.getName())){
      set_printer_option(anInstanceName.getName(),BROWSEABLE,NULL);
      
    }else
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Instance doesn't exist!");
  }
  */
	

  
  // extrinsic methods

	
}


