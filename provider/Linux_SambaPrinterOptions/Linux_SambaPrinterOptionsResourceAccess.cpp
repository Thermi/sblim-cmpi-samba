// =======================================================================
// Linux_SambaPrinterOptionsResourceAccess.cpp
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
//
// 
#include "Linux_SambaPrinterOptionsResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  //----------------------------------------------------------------------------
  // manual written methods

  static void setInstanceNameProperties(
      const char* aNameSpaceP, 
      char *instanceName, 
      Linux_SambaPrinterOptionsInstanceName& anInstanceName) {

    anInstanceName.setNamespace(aNameSpaceP);
    anInstanceName.setName(instanceName);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  };
  

  //----------------------------------------------------------------------------


  static void setInstanceProperties(
      Linux_SambaPrinterOptionsManualInstance& aManualInstance) {
    
    char *option;
    
    option = get_option(aManualInstance.getInstanceName().getName(),AVAILABLE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setAvailable( true );
      else
	aManualInstance.setAvailable( false );
    
    option = get_option(aManualInstance.getInstanceName().getName(),COMMENT);	
    if ( option )
      aManualInstance.setComment( option );
    
    option = get_option(aManualInstance.getInstanceName().getName(),PRINTABLE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setPrintable( true );
      else
	aManualInstance.setPrintable( false );
    
    option = get_option(aManualInstance.getInstanceName().getName(),PATH);	
    if ( option )
      aManualInstance.setPath( option );
    
    option = get_option(aManualInstance.getInstanceName().getName(),PRINTER_NAME);	
    if ( option )
      aManualInstance.setSystemPrinterName( option );
  };

  
  //----------------------------------------------------------------------------


  static void setRAProperties(
      Linux_SambaPrinterOptionsManualInstance aManualInstance) {
    
    if ( aManualInstance.isAvailableSet())
      if(aManualInstance.getAvailable())
	set_printer_option(aManualInstance.getInstanceName().getName(),AVAILABLE,YES);
      else
	set_printer_option(aManualInstance.getInstanceName().getName(),AVAILABLE,NO);
    
    if ( aManualInstance.isCommentSet())
      set_printer_option(aManualInstance.getInstanceName().getName(),COMMENT, aManualInstance.getComment());
    
    // If you are managing an instance of a printer, the printable attribute must be 'yes'
    set_printer_option(aManualInstance.getInstanceName().getName(),PRINTABLE,YES);
    
    if ( aManualInstance.isPathSet())
      set_printer_option(aManualInstance.getInstanceName().getName(),PATH, aManualInstance.getPath());
    
    if ( aManualInstance.isSystemPrinterNameSet())
      set_printer_option(aManualInstance.getInstanceName().getName(),PRINTER_NAME, aManualInstance.getSystemPrinterName());
    
  };

  //----------------------------------------------------------------------------


  //----------------------------------------------------------------------------
  //Linux_SambaPrinterOptionsResourceAccess::Linux_SambaPrinterOptionsResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaPrinterOptionsResourceAccess::~Linux_SambaPrinterOptionsResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterOptionsResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaPrinterOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    char ** printers = get_samba_printers_list();
    
    if(printers){
      for (int i=0; printers[i]; i++){
	Linux_SambaPrinterOptionsInstanceName instanceName;
	setInstanceNameProperties(aNameSpaceP,printers[i],instanceName);
	anInstanceNameEnumeration.addElement(instanceName); 
      }
    }
  }
  
  
  //----------------------------------------------------------------------------

  void
  Linux_SambaPrinterOptionsResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaPrinterOptionsManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char ** printers = get_samba_printers_list();
    
    if(printers){
      for (int i=0; printers[i]; i++){
	Linux_SambaPrinterOptionsManualInstance aManualInstance;
	Linux_SambaPrinterOptionsInstanceName instanceName;
	
	setInstanceNameProperties(aNameSpaceP,printers[i],instanceName);
	aManualInstance.setInstanceName(instanceName);
	
	setInstanceProperties(aManualInstance);
	
	aManualInstanceEnumeration.addElement(aManualInstance);
      }
    }
  }
  
  
  //----------------------------------------------------------------------------

  Linux_SambaPrinterOptionsManualInstance 
  Linux_SambaPrinterOptionsResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstanceName& anInstanceName) {

    Linux_SambaPrinterOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);

    if (!service_exists(anInstanceName.getName())) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }

    char* option = get_option(aManualInstance.getInstanceName().getName(),PRINTABLE);
    if ( option )
      if(strcasecmp(option,NO) == 0)
        throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The specified instance is not a valid printer.");

    setInstanceProperties(aManualInstance);
    
    return aManualInstance; 
  }

  //----------------------------------------------------------------------------

  void
  Linux_SambaPrinterOptionsResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaPrinterOptionsManualInstance& aManualInstance) {
    
    if (!service_exists(aManualInstance.getInstanceName().getName())) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }

    if(aManualInstance.isPrintableSet() && !aManualInstance.getPrintable())
        throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The specified instance is not a valid printer.");

    setRAProperties(aManualInstance);
  }

  
  //----------------------------------------------------------------------------

  Linux_SambaPrinterOptionsInstanceName
  Linux_SambaPrinterOptionsResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaPrinterOptionsManualInstance& aManualInstance) {
    
    if(!service_exists(aManualInstance.getInstanceName().getName())){
      if(!add_samba_printer(aManualInstance.getInstanceName().getName()))
	setRAProperties(aManualInstance);
      else
	throw CmpiStatus(CMPI_RC_ERR_FAILED,"Instance could not be created!");

    } else
      throw CmpiStatus(CMPI_RC_ERR_ALREADY_EXISTS,"Instance already exists!");

    return aManualInstance.getInstanceName();
  }
  
  
  //----------------------------------------------------------------------------

  void
  Linux_SambaPrinterOptionsResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaPrinterOptionsInstanceName& anInstanceName) {
    
    if(service_exists(anInstanceName.getName())){
      char* option = get_option(anInstanceName.getName(),PRINTABLE);
      if ( option )
        if(strcasecmp(option,NO) == 0)
          throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The specified instance is not a valid printer.");

      if(delete_samba_printer(anInstanceName.getName())) 
	throw CmpiStatus(CMPI_RC_ERR_FAILED,"Instance could not be deleted!");
      
    }else
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
  }

	

  
  // extrinsic methods


  char* Linux_SambaPrinterOptionsResourceAccess::getAllSystemDefinedPrinters(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaPrinterOptionsInstanceName& anInstanceName) {
    
    char ** printers = get_cups_printer_list();
    char *  ret = NULL;
    int len = 0;
    
    if(printers){
      for (int i=0; printers[i]; i++)
	len = len + strlen(printers[i]) + 4;
      
      ret =(char*) calloc(len,sizeof(char));
      
      for (int i=0; printers[i]; i++){
	if(ret[0]=='\0')
	  sprintf(ret,"%s",printers[i]);
	else
	  sprintf(ret,"%s, %s",ret,printers[i]);
      }
    }
    
    return ret;
  }


	
}


