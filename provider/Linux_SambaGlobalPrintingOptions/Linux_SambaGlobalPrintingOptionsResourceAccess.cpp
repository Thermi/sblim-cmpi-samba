/**
 *  Linux_SambaGlobalPrintingOptionsResourceAccess.cpp
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


#include "Linux_SambaGlobalPrintingOptionsResourceAccess.h"

namespace genProvider {
  
   void Linux_SambaGlobalPrintingOptionsResourceAccess::setInstanceNameProperties(const char* nsp,     
    Linux_SambaGlobalPrintingOptionsInstanceName& anInstanceName)
  {
    anInstanceName.setNamespace(nsp);
    anInstanceName.setName(DEFAULT_GLOBAL_NAME);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  }

  void Linux_SambaGlobalPrintingOptionsResourceAccess::setInstanceProperties(
   Linux_SambaGlobalPrintingOptionsManualInstance& aManualInstance)
  {
    char *option;
    
    option = get_global_option(CUPS_OPTIONS);	
    if ( option )
      aManualInstance.setCupsOptions( option );

    option = get_global_option(DEFAULT_DEVMODE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setDefaultDevMode( true );
      else
	aManualInstance.setDefaultDevMode( false );

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
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setUseClientDriver( true );
      else
	aManualInstance.setUseClientDriver( false );
  };

  //Linux_SambaGlobalPrintingOptionsResourceAccess::Linux_SambaGlobalPrintingOptionsResourceAccess();
  Linux_SambaGlobalPrintingOptionsResourceAccess::~Linux_SambaGlobalPrintingOptionsResourceAccess() { };
  
    /* intrinsic methods */
    
  void Linux_SambaGlobalPrintingOptionsResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaGlobalPrintingOptionsInstanceNameEnumeration& instnames)
  {
    Linux_SambaGlobalPrintingOptionsInstanceName instanceName;
    setInstanceNameProperties(nsp,instanceName);
    instnames.addElement(instanceName); 
  };
      
  
  void Linux_SambaGlobalPrintingOptionsResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaGlobalPrintingOptionsManualInstanceEnumeration& instances)
  {
    Linux_SambaGlobalPrintingOptionsManualInstance aManualInstance;
    Linux_SambaGlobalPrintingOptionsInstanceName instanceName;
    
    setInstanceNameProperties(nsp,instanceName);
    aManualInstance.setInstanceName(instanceName);

    setInstanceProperties(aManualInstance);
    
    instances.addElement(aManualInstance);
  };
  	

  Linux_SambaGlobalPrintingOptionsManualInstance 
   Linux_SambaGlobalPrintingOptionsResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGlobalPrintingOptionsInstanceName& instanceName)
  {
    Linux_SambaGlobalPrintingOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    
    setInstanceProperties(aManualInstance);

    return aManualInstance;      
  };

  void Linux_SambaGlobalPrintingOptionsResourceAccess::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGlobalPrintingOptionsManualInstance& newInstance)
  {  
    if ( newInstance.isCupsOptionsSet() )
      set_global_option(CUPS_OPTIONS,newInstance.getCupsOptions());
    
    if ( newInstance.isDefaultDevModeSet() )
      if(newInstance.getDefaultDevMode())  
	set_global_option(DEFAULT_DEVMODE,YES);
      else
	set_global_option(DEFAULT_DEVMODE,NO);
    
    
    if ( newInstance.isMaxPrintjobsSet()){
      char *option = (char *) malloc( 5*sizeof(char) );
      sprintf(option,"%d",(int)newInstance.getMaxPrintjobs());
      set_global_option(MAX_PRINT_JOBS, option);
      free(option);
    }
    
    if ( newInstance.isMaxReportedPrintjobsSet()){
      char *option = (char *) malloc( 5*sizeof(char) );
      sprintf(option,"%d",(int)newInstance.getMaxReportedPrintjobs());
      set_global_option(MAX_REPORTED_PRINT_JOBS, option);
      free(option);
    }
    
    if ( newInstance.isPrintCommandSet() )
      set_global_option(PRINT_COMMAND,newInstance.getPrintCommand()); 
    
    if ( newInstance.isPrintcapCacheTimeSet()){
      char *option = (char *) malloc( 5*sizeof(char) );
      sprintf(option,"%d",(int)newInstance.getPrintcapCacheTime());
      set_global_option(PRINTCAP_CACHE_TIME, option);
      free(option);
    }
    
    if ( newInstance.isSystemPrinterNameSet() )
      set_global_option(PRINTER_NAME,newInstance.getSystemPrinterName());
    
    if ( newInstance.isUseClientDriverSet() )
      {
	if(newInstance.getUseClientDriver())  
	  set_global_option(USE_CLIENT_DRIVER,YES);
	else
	  set_global_option(USE_CLIENT_DRIVER,NO);
      }
  };
  

  	/*
    void Linux_SambaGlobalPrintingOptionsResourceAccess::createInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaGlobalPrintingOptionsManualInstance&){};
  	*/
  	/*
    void Linux_SambaGlobalPrintingOptionsResourceAccess::deleteInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaGlobalPrintingOptionsInstanceName&){};
	*/
    
    /* extrinsic methods */
	
}


