// =======================================================================
// Linux_SambaPrinterPrintingOptionsResourceAccess.cpp
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
#include "Linux_SambaPrinterPrintingOptionsResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  
  //----------------------------------------------------------------------------
  // manual written methods

  static void setInstanceNameProperties(
      const char* aNameSpaceP, 
      char *instanceName, 
      Linux_SambaPrinterPrintingOptionsInstanceName& anInstanceName) {
    
    anInstanceName.setNamespace(aNameSpaceP);
    anInstanceName.setName(instanceName);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  };
  
  
  //----------------------------------------------------------------------------

  
  static void setInstanceProperties(
      Linux_SambaPrinterPrintingOptionsManualInstance& aManualInstance) {

    char *option;
    
    option = get_option(aManualInstance.getInstanceName().getName(),CUPS_OPTIONS);	
    if ( option )
      aManualInstance.setCupsOptions( option );
    
    option = get_option(aManualInstance.getInstanceName().getName(),DEFAULT_DEVMODE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setDefaultDevMode( true );
      else
	aManualInstance.setDefaultDevMode( false );
    
    option = get_option(aManualInstance.getInstanceName().getName(),MAX_PRINT_JOBS);	
    if ( option )
      aManualInstance.setMaxPrintjobs( atoi(option) );
    
    option = get_option(aManualInstance.getInstanceName().getName(),PRINT_COMMAND);	
    if ( option )
      aManualInstance.setPrintCommand( option );
    
    option = get_option(aManualInstance.getInstanceName().getName(),USE_CLIENT_DRIVER);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setUseClientDriver( true );
      else
	aManualInstance.setUseClientDriver( false );
    
    option = get_option(aManualInstance.getInstanceName().getName(),MAX_REPORTED_PRINT_JOBS);	
    if ( option )
      aManualInstance.setMaxReportedPrintjobs( atoi(option) );
    
  }; 
    
  
  //----------------------------------------------------------------------------


  static void setRAProperties(
      Linux_SambaPrinterPrintingOptionsManualInstance aManualInstance) {
    
    if ( aManualInstance.isCupsOptionsSet() )
      set_printer_option(aManualInstance.getInstanceName().getName(),CUPS_OPTIONS,aManualInstance.getCupsOptions());
    
    if ( aManualInstance.isDefaultDevModeSet() )
      if(aManualInstance.getDefaultDevMode())  
	set_printer_option(aManualInstance.getInstanceName().getName(),DEFAULT_DEVMODE,YES);
      else
	set_printer_option(aManualInstance.getInstanceName().getName(),DEFAULT_DEVMODE,NO);
    
    if ( aManualInstance.isMaxPrintjobsSet()){
      char *option = (char *) malloc( 5*sizeof(char) );
      sprintf(option,"%d",(int)aManualInstance.getMaxPrintjobs());
      set_printer_option(aManualInstance.getInstanceName().getName(),MAX_PRINT_JOBS, option);
      free(option);
    }
    
    if ( aManualInstance.isPrintCommandSet() )
      set_printer_option(aManualInstance.getInstanceName().getName(),PRINT_COMMAND,aManualInstance.getPrintCommand()); 
    
    if ( aManualInstance.isUseClientDriverSet() ) {
      if(aManualInstance.getUseClientDriver())  
	set_printer_option(aManualInstance.getInstanceName().getName(),USE_CLIENT_DRIVER,YES);
      else
	set_printer_option(aManualInstance.getInstanceName().getName(),USE_CLIENT_DRIVER,NO);
    }
    
    if ( aManualInstance.isMaxReportedPrintjobsSet()){
      char *option = (char *) malloc( 5*sizeof(char) );
      sprintf(option,"%d",(int)aManualInstance.getMaxReportedPrintjobs());
      set_printer_option(aManualInstance.getInstanceName().getName(),MAX_REPORTED_PRINT_JOBS, option);
      free(option);
    }
  };

  //----------------------------------------------------------------------------

  
  
  //----------------------------------------------------------------------------
  //Linux_SambaPrinterPrintingOptionsResourceAccess::Linux_SambaPrinterPrintingOptionsResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaPrinterPrintingOptionsResourceAccess::~Linux_SambaPrinterPrintingOptionsResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterPrintingOptionsResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaPrinterPrintingOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    char ** printers = get_samba_printers_list();
    
    if(printers){
      for (int i=0; printers[i]; i++){
	Linux_SambaPrinterPrintingOptionsInstanceName instanceName;
	setInstanceNameProperties(aNameSpaceP,printers[i],instanceName);
	anInstanceNameEnumeration.addElement(instanceName); 
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaPrinterPrintingOptionsResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char ** printers = get_samba_printers_list();
    
    if(printers){
      for (int i=0; printers[i]; i++){
	Linux_SambaPrinterPrintingOptionsManualInstance aManualInstance;
	Linux_SambaPrinterPrintingOptionsInstanceName instanceName;
	
	setInstanceNameProperties(aNameSpaceP,printers[i],instanceName);
	aManualInstance.setInstanceName(instanceName);
	
	setInstanceProperties(aManualInstance);
	
	aManualInstanceEnumeration.addElement(aManualInstance);
      }
    }
  }
  
  
  //----------------------------------------------------------------------------

  Linux_SambaPrinterPrintingOptionsManualInstance 
  Linux_SambaPrinterPrintingOptionsResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaPrinterPrintingOptionsInstanceName& anInstanceName) {

    Linux_SambaPrinterPrintingOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);
    
    setInstanceProperties(aManualInstance);
    
    return aManualInstance;
  }
  
  //----------------------------------------------------------------------------

  void
  Linux_SambaPrinterPrintingOptionsResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaPrinterPrintingOptionsManualInstance& aManualInstance) {
    
    setRAProperties(aManualInstance);
  }

  
  //----------------------------------------------------------------------------

  Linux_SambaPrinterPrintingOptionsInstanceName
  Linux_SambaPrinterPrintingOptionsResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaPrinterPrintingOptionsManualInstance& aManualInstance) {
    
    setRAProperties(aManualInstance);
    
    return aManualInstance.getInstanceName();
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaPrinterPrintingOptionsResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
   const Linux_SambaPrinterPrintingOptionsInstanceName& anInstanceName) {
    
    if(service_exists(anInstanceName.getName())){
      set_printer_option(anInstanceName.getName(),CUPS_OPTIONS, NULL);
      set_printer_option(anInstanceName.getName(),DEFAULT_DEVMODE, NULL);
      set_printer_option(anInstanceName.getName(),MAX_PRINT_JOBS, NULL);
      set_printer_option(anInstanceName.getName(),PRINT_COMMAND, NULL); 
      set_printer_option(anInstanceName.getName(),USE_CLIENT_DRIVER, NULL);
      set_printer_option(anInstanceName.getName(),MAX_REPORTED_PRINT_JOBS, NULL);
      
    }else
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Instance doesn't exist!");
  }

	

  
  // extrinsic methods

	
}


