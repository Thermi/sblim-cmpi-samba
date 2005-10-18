/**
 *  Linux_SambaPrinterPrintingOptionsResourceAccess.cpp
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


#include "Linux_SambaPrinterPrintingOptionsResourceAccess.h"

namespace genProvider {

  void Linux_SambaPrinterPrintingOptionsResourceAccess::setInstanceNameProperties(const char* nsp,
   char *instanceName,
   Linux_SambaPrinterPrintingOptionsInstanceName& anInstanceName)
  {
    anInstanceName.setNamespace(nsp);
    anInstanceName.setName(instanceName);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  };
  
  void Linux_SambaPrinterPrintingOptionsResourceAccess::setInstanceProperties(
   Linux_SambaPrinterPrintingOptionsManualInstance& aManualInstance)
  {
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
  
  void Linux_SambaPrinterPrintingOptionsResourceAccess::setRAProperties(
   Linux_SambaPrinterPrintingOptionsManualInstance newInstance)
  {
    if ( newInstance.isCupsOptionsSet() )
      set_printer_option(newInstance.getInstanceName().getName(),CUPS_OPTIONS,newInstance.getCupsOptions());
   
    if ( newInstance.isDefaultDevModeSet() )
      if(newInstance.getDefaultDevMode())  
	set_printer_option(newInstance.getInstanceName().getName(),DEFAULT_DEVMODE,YES);
      else
	set_printer_option(newInstance.getInstanceName().getName(),DEFAULT_DEVMODE,NO);
    
    
    if ( newInstance.isMaxPrintjobsSet()){
      char *option = (char *) malloc( 5*sizeof(char) );
      sprintf(option,"%d",(int)newInstance.getMaxPrintjobs());
      set_printer_option(newInstance.getInstanceName().getName(),MAX_PRINT_JOBS, option);
      free(option);
    }

    if ( newInstance.isPrintCommandSet() )
      set_printer_option(newInstance.getInstanceName().getName(),PRINT_COMMAND,newInstance.getPrintCommand()); 

    if ( newInstance.isUseClientDriverSet() )
      {
	if(newInstance.getUseClientDriver())  
	  set_printer_option(newInstance.getInstanceName().getName(),USE_CLIENT_DRIVER,YES);
	else
	  set_printer_option(newInstance.getInstanceName().getName(),USE_CLIENT_DRIVER,NO);
      }

    if ( newInstance.isMaxReportedPrintjobsSet()){
      char *option = (char *) malloc( 5*sizeof(char) );
      sprintf(option,"%d",(int)newInstance.getMaxReportedPrintjobs());
      set_printer_option(newInstance.getInstanceName().getName(),MAX_REPORTED_PRINT_JOBS, option);
      free(option);
    }
    
  };

    //Linux_SambaPrinterPrintingOptionsResourceAccess::Linux_SambaPrinterPrintingOptionsResourceAccess();
    Linux_SambaPrinterPrintingOptionsResourceAccess::~Linux_SambaPrinterPrintingOptionsResourceAccess() { };
    
    /* intrinsic methods */
  
  void Linux_SambaPrinterPrintingOptionsResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaPrinterPrintingOptionsInstanceNameEnumeration& instnames)
  { 
    char ** printers = get_samba_printers_list();
    
    if(printers){
      for (int i=0; printers[i]; i++){
	Linux_SambaPrinterPrintingOptionsInstanceName instanceName;
	setInstanceNameProperties(nsp,printers[i],instanceName);
	instnames.addElement(instanceName); 
      }
    }
  };
    
  void Linux_SambaPrinterPrintingOptionsResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration& instances)
  {
    char ** printers = get_samba_printers_list();
    
    if(printers){
      for (int i=0; printers[i]; i++){
	Linux_SambaPrinterPrintingOptionsManualInstance aManualInstance;
	Linux_SambaPrinterPrintingOptionsInstanceName instanceName;
	
	setInstanceNameProperties(nsp,printers[i],instanceName);
	aManualInstance.setInstanceName(instanceName);
	
	setInstanceProperties(aManualInstance);
	
	instances.addElement(aManualInstance);
      }
    }
  };


  Linux_SambaPrinterPrintingOptionsManualInstance 
   Linux_SambaPrinterPrintingOptionsResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaPrinterPrintingOptionsInstanceName& instanceName)
  {
    Linux_SambaPrinterPrintingOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    
    setInstanceProperties(aManualInstance);
    
    return aManualInstance;  
  };
     
  void Linux_SambaPrinterPrintingOptionsResourceAccess::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaPrinterPrintingOptionsManualInstance& newInstance)
  {
    setRAProperties(newInstance);
  };
  

  void Linux_SambaPrinterPrintingOptionsResourceAccess::createInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaPrinterPrintingOptionsManualInstance& newInstance)
  {
    setRAProperties(newInstance);
  };
  	
  void Linux_SambaPrinterPrintingOptionsResourceAccess::deleteInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaPrinterPrintingOptionsInstanceName& instanceName)
  {
    if(service_exists(instanceName.getName())){
      set_printer_option(instanceName.getName(),CUPS_OPTIONS, NULL);
      set_printer_option(instanceName.getName(),DEFAULT_DEVMODE, NULL);
      set_printer_option(instanceName.getName(),MAX_PRINT_JOBS, NULL);
      set_printer_option(instanceName.getName(),PRINT_COMMAND, NULL); 
      set_printer_option(instanceName.getName(),USE_CLIENT_DRIVER, NULL);
      set_printer_option(instanceName.getName(),MAX_REPORTED_PRINT_JOBS, NULL);
    }else
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Instance doesn't exist!");
  };	
    
    /* extrinsic methods */
	
}


