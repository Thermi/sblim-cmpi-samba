// =======================================================================
// Linux_SambaGlobalPrintingForGlobalResourceAccess.cpp
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
#include "Linux_SambaGlobalPrintingForGlobalResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  //----------------------------------------------------------------------------
  //Linux_SambaGlobalPrintingForGlobalResourceAccess::Linux_SambaGlobalPrintingForGlobalResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaGlobalPrintingForGlobalResourceAccess::~Linux_SambaGlobalPrintingForGlobalResourceAccess() {
    terminator();
  }
    
  // intrinsic methods
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalPrintingForGlobalResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    Linux_SambaGlobalPrintingForGlobalInstanceName instName;
    instName.setNamespace(aNameSpaceP);

    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(aNameSpaceP);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);

    instName.setManagedElement(globalInstName);

    Linux_SambaGlobalPrintingOptionsInstanceName elemInstanceName;
    elemInstanceName.setNamespace(aNameSpaceP);
    elemInstanceName.setName(DEFAULT_GLOBAL_NAME);
    elemInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);

    instName.setSettingData(elemInstanceName);

    anInstanceNameEnumeration.addElement(instName);
  
  }
  
  
  //----------------------------------------------------------------------------
  
  void
  Linux_SambaGlobalPrintingForGlobalResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     const char** aPropertiesPP,
  	 Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {

    Linux_SambaGlobalPrintingForGlobalManualInstance manualInstance;

    Linux_SambaGlobalPrintingForGlobalInstanceName instName;
    instName.setNamespace(aNameSpaceP);

    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(aNameSpaceP);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);

    instName.setManagedElement(globalInstName);

    Linux_SambaGlobalPrintingOptionsInstanceName elemInstanceName;
    elemInstanceName.setNamespace(aNameSpaceP);
    elemInstanceName.setName(DEFAULT_GLOBAL_NAME);
    elemInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);

    instName.setSettingData(elemInstanceName);

    manualInstance.setInstanceName(instName);
    aManualInstanceEnumeration.addElement(manualInstance);


  }
  
  
  //----------------------------------------------------------------------------
  
  Linux_SambaGlobalPrintingForGlobalManualInstance 
  Linux_SambaGlobalPrintingForGlobalResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaGlobalPrintingForGlobalInstanceName& anInstanceName) {

    Linux_SambaGlobalPrintingForGlobalManualInstance manualInstance;

  
    if (strcasecmp(anInstanceName.getSettingData().getName(),DEFAULT_GLOBAL_NAME)!=0 ||
        strcasecmp(anInstanceName.getSettingData().getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist. The specified GlobalPrintingOptions instance is unknown");
    }

    if (strcasecmp(anInstanceName.getManagedElement().getName(),DEFAULT_GLOBAL_NAME)!=0 ||
        strcasecmp(anInstanceName.getManagedElement().getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist. The specified GlobalOptions instance is unknown");
    }

    manualInstance.setInstanceName(anInstanceName);
    return manualInstance;
 }
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaGlobalPrintingForGlobalResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaGlobalPrintingForGlobalManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaGlobalPrintingForGlobalInstanceName
  Linux_SambaGlobalPrintingForGlobalResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaGlobalPrintingForGlobalManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaGlobalPrintingForGlobalResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaGlobalPrintingForGlobalInstanceName& anInstanceName) { }
	*/
	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaGlobalPrintingForGlobalResourceAccess::referencesSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {

    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME)!=0 || 
       strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }
    
    Linux_SambaGlobalPrintingForGlobalManualInstance manualInstance;
    
    Linux_SambaGlobalPrintingForGlobalInstanceName instName;
    instName.setNamespace(aNameSpaceP);
    instName.setManagedElement(aSourceInstanceName);
    
    Linux_SambaGlobalPrintingOptionsInstanceName secInstName;
    secInstName.setNamespace(aNameSpaceP);
    secInstName.setName(aSourceInstanceName.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
    instName.setSettingData(secInstName);
    
    manualInstance.setInstanceName(instName);
    aManualInstanceEnumeration.addElement(manualInstance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaGlobalPrintingForGlobalResourceAccess::referencesManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalPrintingOptionsInstanceName& aSourceInstanceName,
    Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {

    
    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME)!=0 ||
       strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }
    
    Linux_SambaGlobalPrintingForGlobalManualInstance manualInstance;
    
    Linux_SambaGlobalPrintingForGlobalInstanceName instName;
    instName.setNamespace(aNameSpaceP);
    instName.setSettingData(aSourceInstanceName);
    
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(aNameSpaceP);
    globalInstName.setName(aSourceInstanceName.getName());
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instName.setManagedElement(globalInstName);
    
    manualInstance.setInstanceName(instName);
    aManualInstanceEnumeration.addElement(manualInstance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaGlobalPrintingForGlobalResourceAccess::associatorsSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaGlobalPrintingOptionsInstanceEnumeration& anInstanceEnumeration) {
   
    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME)!=0 ||
       strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }
    
    Linux_SambaGlobalPrintingOptionsInstance instance;
    
    Linux_SambaGlobalPrintingOptionsInstanceName secInstName;
    secInstName.setNamespace(aNameSpaceP);
    secInstName.setName(aSourceInstanceName.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(secInstName);
    
    char *option;

    option = get_global_option(CUPS_OPTIONS);	
    if ( option )
      instance.setCupsOptions( option );

    option = get_global_option(DEFAULT_DEVMODE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setDefaultDevMode( true );
      else
	instance.setDefaultDevMode( false );

    option = get_global_option(MAX_PRINT_JOBS);	
    if ( option )
      instance.setMaxPrintjobs( atoi(option) );

    option = get_global_option(MAX_REPORTED_PRINT_JOBS);	
    if ( option )
      instance.setMaxReportedPrintjobs( atoi(option) );

    option = get_global_option(PRINT_COMMAND);	
    if ( option )
      instance.setPrintCommand( option );

    option = get_global_option(PRINTCAP_CACHE_TIME);	
    if ( option )
      instance.setPrintcapCacheTime( atoi(option) );

    option = get_global_option(PRINTER_NAME);	
    if ( option )
      instance.setSystemPrinterName( option );

    option = get_global_option(USE_CLIENT_DRIVER);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setUseClientDriver( true );
      else
	instance.setUseClientDriver( false );
    
    anInstanceEnumeration.addElement(instance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaGlobalPrintingForGlobalResourceAccess::associatorsManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalPrintingOptionsInstanceName& aSourceInstanceName,
    Linux_SambaGlobalOptionsInstanceEnumeration& anInstanceEnumeration) { 

      
    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME)!=0 ||
       strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }
    
    Linux_SambaGlobalOptionsInstance instance;
    
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(aNameSpaceP);
    globalInstName.setName(aSourceInstanceName.getName());
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(globalInstName);

    char *option;
    option = get_global_option(BIND_INTERFACES_ONLY);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setBindInterfacesOnly( true );
      else
	instance.setBindInterfacesOnly( false );

    option = get_global_option(INTERFACES);	
    if ( option )
      instance.setInterfaces( option );
    
    option = get_global_option(NETBIOS_ALIASES);	
    if ( option )
      instance.setNetbiosAlias( option );

    option = get_global_option(NETBIOS_NAME);	
    if ( option )
      instance.setNetbiosName( option );
    
    option = get_global_option(SERVER_STRING);	
    if ( option )
      instance.setServerString( option );
    
    option = get_global_option(WORKGROUP);	
    if ( option )
      instance.setWorkgroup( option );
    	
    
    anInstanceEnumeration.addElement(instance);
  }

   
  
  // extrinsic methods

	
}


