// =======================================================================
// Linux_SambaSharePrinterBrowseOptionsResourceAccess.cpp
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
#include "Linux_SambaSharePrinterBrowseOptionsResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  
  //----------------------------------------------------------------------------
  // manual written methods
  
  static void setInstanceNameProperties(
      const char* aNameSpaceP, 
      char *instanceName, 
      Linux_SambaSharePrinterBrowseOptionsInstanceName& anInstanceName) {
    
    anInstanceName.setNamespace(aNameSpaceP);
    anInstanceName.setName(instanceName);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  };

  
  //----------------------------------------------------------------------------
  

  static void setInstanceProperties(
      Linux_SambaSharePrinterBrowseOptionsManualInstance& aManualInstance) {
    
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
      Linux_SambaSharePrinterBrowseOptionsManualInstance aManualInstance) {
    if ( aManualInstance.isBrowsableSet() )
      if(aManualInstance.getBrowsable())  
	set_printer_option(aManualInstance.getInstanceName().getName(),BROWSEABLE,YES);
      else
	set_printer_option(aManualInstance.getInstanceName().getName(),BROWSEABLE,NO);
  };
  
  //----------------------------------------------------------------------------
  

  //----------------------------------------------------------------------------
  //Linux_SambaSharePrinterBrowseOptionsResourceAccess::Linux_SambaSharePrinterBrowseOptionsResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaSharePrinterBrowseOptionsResourceAccess::~Linux_SambaSharePrinterBrowseOptionsResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaSharePrinterBrowseOptionsResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaSharePrinterBrowseOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    char ** printers = get_samba_printers_list();
    char ** shares = get_shares_list();
    
    if(printers){
      for (int i=0; printers[i]; i++){
	Linux_SambaSharePrinterBrowseOptionsInstanceName instanceName;
	setInstanceNameProperties(aNameSpaceP,printers[i],instanceName);
	anInstanceNameEnumeration.addElement(instanceName); 
      }
    }
    
    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaSharePrinterBrowseOptionsInstanceName instanceName;
	setInstanceNameProperties(aNameSpaceP,shares[i],instanceName);
	anInstanceNameEnumeration.addElement(instanceName); 
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaSharePrinterBrowseOptionsResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char ** printers = get_samba_printers_list();
    char ** shares = get_shares_list();
    
    if(printers){
      for (int i=0; printers[i]; i++){
	Linux_SambaSharePrinterBrowseOptionsManualInstance aManualInstance;
	Linux_SambaSharePrinterBrowseOptionsInstanceName instanceName;
	
	setInstanceNameProperties(aNameSpaceP,printers[i],instanceName);
	aManualInstance.setInstanceName(instanceName);
	
	setInstanceProperties(aManualInstance);
	
	aManualInstanceEnumeration.addElement(aManualInstance);
      }
    }
    
    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaSharePrinterBrowseOptionsManualInstance aManualInstance;
	Linux_SambaSharePrinterBrowseOptionsInstanceName instanceName;
	
	setInstanceNameProperties(aNameSpaceP,shares[i],instanceName);
	aManualInstance.setInstanceName(instanceName);
	
	setInstanceProperties(aManualInstance);
	
	aManualInstanceEnumeration.addElement(aManualInstance);
      }
    }
  }

  
  //----------------------------------------------------------------------------

  Linux_SambaSharePrinterBrowseOptionsManualInstance 
  Linux_SambaSharePrinterBrowseOptionsResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaSharePrinterBrowseOptionsInstanceName& anInstanceName) {

    Linux_SambaSharePrinterBrowseOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);
    
    setInstanceProperties(aManualInstance);
    
    return aManualInstance;
  }

  //----------------------------------------------------------------------------

  void
  Linux_SambaSharePrinterBrowseOptionsResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaSharePrinterBrowseOptionsManualInstance& aManualInstance) {
    
    setRAProperties(aManualInstance);
  }

  
  //----------------------------------------------------------------------------

  Linux_SambaSharePrinterBrowseOptionsInstanceName
  Linux_SambaSharePrinterBrowseOptionsResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaSharePrinterBrowseOptionsManualInstance& aManualInstance) {
    
    setRAProperties(aManualInstance);
    
    return aManualInstance.getInstanceName();
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaSharePrinterBrowseOptionsResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaSharePrinterBrowseOptionsInstanceName& anInstanceName) {
    
    if(service_exists(anInstanceName.getName())){
      set_printer_option(anInstanceName.getName(),BROWSEABLE,NULL);
      
    }else
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Instance doesn't exist!");
  }

	

  
  // extrinsic methods

	
}


