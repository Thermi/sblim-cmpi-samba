// =======================================================================
// Linux_SambaGlobalPrintingOptionsResourceAccess.cpp
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
#include "Linux_SambaGlobalPrintingOptionsResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"
using namespace std;

namespace genProvider {

  //----------------------------------------------------------------------------
  // manual written methods

  static void setInstanceNameProperties(
      const char* aNameSpaceP, 
      Linux_SambaGlobalPrintingOptionsInstanceName& anInstanceName) {
    
    anInstanceName.setNamespace(aNameSpaceP);
    anInstanceName.setName(DEFAULT_GLOBAL_NAME);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  }


  //----------------------------------------------------------------------------


  static void setInstanceProperties(
      Linux_SambaGlobalPrintingOptionsManualInstance& aManualInstance) {
    char *option;
    
    option = get_global_option(CUPS_OPTIONS);	
    if ( option )
      aManualInstance.setCupsOptions( option );

    option = get_global_option(DEFAULT_DEVMODE);	
    if ( option ) {
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setDefaultDevMode( true );
      else
	aManualInstance.setDefaultDevMode( false );
    }

    option = get_global_option(MAX_PRINT_JOBS);	
    if ( option )
      aManualInstance.setMaxPrintjobs( atoi(option) );
    
    option = get_global_option(MAX_REPORTED_PRINT_JOBS);	
    if ( option )
      aManualInstance.setMaxReportedPrintjobs( atoi(option) );
    
    option = get_global_option(PRINT_COMMAND);	
    if ( option ) 
      aManualInstance.setPrintCommand( option );
    
    option = get_global_option(PRINTCAP_CACHE_TIME);	
    if ( option )
      aManualInstance.setPrintcapCacheTime( atoi(option) );
    
    option = get_global_option(PRINTER_NAME);	
    if ( option )
      aManualInstance.setSystemPrinterName( option );
    
    option = get_global_option(USE_CLIENT_DRIVER);	
    if ( option ) {
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setUseClientDriver( true );
      else
	aManualInstance.setUseClientDriver( false );
    }
  };

  //----------------------------------------------------------------------------

  
  //----------------------------------------------------------------------------
  //Linux_SambaGlobalPrintingOptionsResourceAccess::Linux_SambaGlobalPrintingOptionsResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaGlobalPrintingOptionsResourceAccess::~Linux_SambaGlobalPrintingOptionsResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalPrintingOptionsResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaGlobalPrintingOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {
   
    Linux_SambaGlobalPrintingOptionsInstanceName instanceName;
    setInstanceNameProperties(aNameSpaceP,instanceName);
    anInstanceNameEnumeration.addElement(instanceName); 
  }
  
  //----------------------------------------------------------------------------

  void
  Linux_SambaGlobalPrintingOptionsResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaGlobalPrintingOptionsManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    Linux_SambaGlobalPrintingOptionsManualInstance aManualInstance;
    Linux_SambaGlobalPrintingOptionsInstanceName instanceName;
    
    setInstanceNameProperties(aNameSpaceP,instanceName);
    aManualInstance.setInstanceName(instanceName);

    setInstanceProperties(aManualInstance);
    
    aManualInstanceEnumeration.addElement(aManualInstance);
  }

  
  //----------------------------------------------------------------------------

  Linux_SambaGlobalPrintingOptionsManualInstance 
  Linux_SambaGlobalPrintingOptionsResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaGlobalPrintingOptionsInstanceName& anInstanceName) {

    if (strcasecmp(DEFAULT_GLOBAL_NAME,anInstanceName.getName())!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }

    Linux_SambaGlobalPrintingOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);
    
    setInstanceProperties(aManualInstance);
    
    return aManualInstance;
  }

  //----------------------------------------------------------------------------

  void
  Linux_SambaGlobalPrintingOptionsResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaGlobalPrintingOptionsManualInstance& aManualInstance) {
    
    if (strcasecmp(DEFAULT_GLOBAL_NAME,aManualInstance.getInstanceName().getName())!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }
    cout << aManualInstance.getCupsOptions()<< endl;
    cout << aManualInstance.getMaxPrintjobs()<< endl;
    if ( aManualInstance.isCupsOptionsSet() )
      set_global_option(CUPS_OPTIONS,aManualInstance.getCupsOptions());
    
    if ( aManualInstance.isDefaultDevModeSet() ) {
      if(aManualInstance.getDefaultDevMode())  
	set_global_option(DEFAULT_DEVMODE,YES);
      else
	set_global_option(DEFAULT_DEVMODE,NO);
    }
    
    if ( aManualInstance.isMaxPrintjobsSet()){
      char *option = (char *) malloc( 5*sizeof(char) );
      sprintf(option,"%d",(int)aManualInstance.getMaxPrintjobs());
      set_global_option(MAX_PRINT_JOBS, option);
      free(option);
    }
    
    if ( aManualInstance.isMaxReportedPrintjobsSet()){
      char *option = (char *) malloc( 5*sizeof(char) );
      sprintf(option,"%d",(int)aManualInstance.getMaxReportedPrintjobs());
      set_global_option(MAX_REPORTED_PRINT_JOBS, option);
      free(option);
    }
    
    if ( aManualInstance.isPrintCommandSet() ) {
      set_global_option(PRINT_COMMAND,aManualInstance.getPrintCommand());
    }
    
    if ( aManualInstance.isPrintcapCacheTimeSet()){
      char *option = (char *) malloc( 5*sizeof(char) );
      sprintf(option,"%d",(int)aManualInstance.getPrintcapCacheTime());
      set_global_option(PRINTCAP_CACHE_TIME, option);
      free(option);
    }
    
    if ( aManualInstance.isSystemPrinterNameSet() )
      set_global_option(PRINTER_NAME,aManualInstance.getSystemPrinterName());
    
    if ( aManualInstance.isUseClientDriverSet() ) {
      if(aManualInstance.getUseClientDriver())  
	set_global_option(USE_CLIENT_DRIVER,YES);
      else
	set_global_option(USE_CLIENT_DRIVER,NO);
    }
  }

  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaGlobalPrintingOptionsInstanceName
  Linux_SambaGlobalPrintingOptionsResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaGlobalPrintingOptionsManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaGlobalPrintingOptionsResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaGlobalPrintingOptionsInstanceName& anInstanceName) { }
	*/
	

  
  // extrinsic methods

	
}


