/**
 *  Linux_SambaGlobalPrintingForGlobalResourceAccess.cpp
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


#include "Linux_SambaGlobalPrintingForGlobalResourceAccess.h"

namespace genProvider {
  
    //Linux_SambaGlobalPrintingForGlobalResourceAccess::Linux_SambaGlobalPrintingForGlobalResourceAccess();
    Linux_SambaGlobalPrintingForGlobalResourceAccess::~Linux_SambaGlobalPrintingForGlobalResourceAccess() { };
    
    /* intrinsic methods */
    /*
    void Linux_SambaGlobalPrintingForGlobalResourceAccess::enumInstanceNames(
     const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
     Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration& instnames){
      
      int numInstanceNames=1;
      for(int i=0;i<numInstanceNames;i++){
      
        //place here the code retrieving your instanceName
      
        Linux_SambaGlobalPrintingForGlobalInstanceName instanceName;
        
      }      
    }
    */
  	/*
    void Linux_SambaGlobalPrintingForGlobalResourceAccess::enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration& instances){};
  	*/
  	/*
    Linux_SambaGlobalPrintingForGlobalManualInstance 
     Linux_SambaGlobalPrintingForGlobalResourceAccess::getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalPrintingForGlobalInstanceName&){
      Linux_SambaGlobalPrintingForGlobalManualInstance instance;
      
    }
  	*/
  	/*
    void Linux_SambaGlobalPrintingForGlobalResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalPrintingForGlobalManualInstance&){};
  	*/
  	/*
    void Linux_SambaGlobalPrintingForGlobalResourceAccess::createInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaGlobalPrintingForGlobalManualInstance&){};
  	*/
  	/*
    void Linux_SambaGlobalPrintingForGlobalResourceAccess::deleteInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaGlobalPrintingForGlobalInstanceName&){};
	*/
    
    /* Association Interface */
    
  void Linux_SambaGlobalPrintingForGlobalResourceAccess::referencesSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalOptionsInstanceName& sourceInst,
   Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration& instEnum)
  {
    Linux_SambaGlobalPrintingForGlobalManualInstance manualInstance;
    
    Linux_SambaGlobalPrintingForGlobalInstanceName instName;
    instName.setNamespace(nsp);
    instName.setManagedElement(sourceInst);
    
    Linux_SambaGlobalPrintingOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(sourceInst.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
    instName.setSettingData(secInstName);
    
    manualInstance.setInstanceName(instName);
    instEnum.addElement(manualInstance);
  };
    
  void Linux_SambaGlobalPrintingForGlobalResourceAccess::referencesManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalPrintingOptionsInstanceName& sourceInst,
   Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration& instEnum)
  {
    Linux_SambaGlobalPrintingForGlobalManualInstance manualInstance;
    
    Linux_SambaGlobalPrintingForGlobalInstanceName instName;
    instName.setNamespace(nsp);
    instName.setSettingData(sourceInst);
    
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(nsp);
    globalInstName.setName(sourceInst.getName());
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instName.setManagedElement(globalInstName);
    
    manualInstance.setInstanceName(instName);
    instEnum.addElement(manualInstance);
  };
    
  void Linux_SambaGlobalPrintingForGlobalResourceAccess::associatorsSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalOptionsInstanceName& sourceInst,
   Linux_SambaGlobalPrintingOptionsInstanceEnumeration& instEnum)
  {
    Linux_SambaGlobalPrintingOptionsInstance instance;
    
    Linux_SambaGlobalPrintingOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(sourceInst.getName());
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
    
    instEnum.addElement(instance);
  };
  
  void Linux_SambaGlobalPrintingForGlobalResourceAccess::associatorsManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalPrintingOptionsInstanceName& sourceInst,
   Linux_SambaGlobalOptionsInstanceEnumeration& instEnum)
  {
    Linux_SambaGlobalOptionsInstance instance;
    
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(nsp);
    globalInstName.setName(sourceInst.getName());
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
    	
    
    instEnum.addElement(instance);
  };

    /* extrinsic methods */
	
}


