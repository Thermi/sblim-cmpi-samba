/**
 *  Linux_SambaPrinterPrintingForPrinterResourceAccess.cpp
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


#include "Linux_SambaPrinterPrintingForPrinterResourceAccess.h"

namespace genProvider {
  
    //Linux_SambaPrinterPrintingForPrinterResourceAccess::Linux_SambaPrinterPrintingForPrinterResourceAccess();
    Linux_SambaPrinterPrintingForPrinterResourceAccess::~Linux_SambaPrinterPrintingForPrinterResourceAccess() { };
    
    /* intrinsic methods */
    /*
    void Linux_SambaPrinterPrintingForPrinterResourceAccess::enumInstanceNames(
     const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
     Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration& instnames){
      
      int numInstanceNames=1;
      for(int i=0;i<numInstanceNames;i++){
      
        //place here the code retrieving your instanceName
      
        Linux_SambaPrinterPrintingForPrinterInstanceName instanceName;
        
      }      
    }
    */
  	/*
    void Linux_SambaPrinterPrintingForPrinterResourceAccess::enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration& instances){};
  	*/
  	/*
    Linux_SambaPrinterPrintingForPrinterManualInstance 
     Linux_SambaPrinterPrintingForPrinterResourceAccess::getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaPrinterPrintingForPrinterInstanceName&){
      Linux_SambaPrinterPrintingForPrinterManualInstance instance;
      
    }
  	*/
  	/*
    void Linux_SambaPrinterPrintingForPrinterResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaPrinterPrintingForPrinterManualInstance&){};
  	*/
  	/*
    void Linux_SambaPrinterPrintingForPrinterResourceAccess::createInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaPrinterPrintingForPrinterManualInstance&){};
  	*/
  	
    void Linux_SambaPrinterPrintingForPrinterResourceAccess::deleteInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaPrinterPrintingForPrinterInstanceName&){};
	
    
    /* Association Interface */
  
  void Linux_SambaPrinterPrintingForPrinterResourceAccess::referencesSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaPrinterOptionsInstanceName& sourceInst,
   Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration& instEnum)
  {
    Linux_SambaPrinterPrintingForPrinterManualInstance manualInstance;
    
    Linux_SambaPrinterPrintingForPrinterInstanceName instName;
    instName.setNamespace(nsp);
    instName.setManagedElement(sourceInst);
    
    Linux_SambaPrinterPrintingOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(sourceInst.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
    instName.setSettingData(secInstName);
    
    manualInstance.setInstanceName(instName);
    instEnum.addElement(manualInstance);
  };

  
  void Linux_SambaPrinterPrintingForPrinterResourceAccess::referencesManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaPrinterPrintingOptionsInstanceName& sourceInst,
   Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration& instEnum)
  {
    Linux_SambaPrinterPrintingForPrinterManualInstance manualInstance;
    
    Linux_SambaPrinterPrintingForPrinterInstanceName instName;
    instName.setNamespace(nsp);
    instName.setSettingData(sourceInst);
    
    Linux_SambaPrinterOptionsInstanceName printerInstName;
    printerInstName.setNamespace(nsp);
    printerInstName.setName(sourceInst.getName());
    printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instName.setManagedElement(printerInstName);
    
    manualInstance.setInstanceName(instName);
    instEnum.addElement(manualInstance);
  };

  
  void Linux_SambaPrinterPrintingForPrinterResourceAccess::associatorsSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaPrinterOptionsInstanceName& sourceInst,
   Linux_SambaPrinterPrintingOptionsInstanceEnumeration& instEnum)
  {
    Linux_SambaPrinterPrintingOptionsInstance instance;
    
    Linux_SambaPrinterPrintingOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(sourceInst.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(secInstName);
    
    char *option;
   
    option = get_option(sourceInst.getName(),CUPS_OPTIONS);	
    if ( option )
      instance.setCupsOptions( option );

    option = get_option(sourceInst.getName(),DEFAULT_DEVMODE);	
    if ( option )
      if(strcasecmp(option,"yes") == 0)
	instance.setDefaultDevMode( true );
      else
	instance.setDefaultDevMode( false );

    option = get_option(sourceInst.getName(),MAX_PRINT_JOBS);	
    if ( option )
      instance.setMaxPrintjobs( atoi(option) );

    option = get_option(sourceInst.getName(),PRINT_COMMAND);	
    if ( option )
      instance.setPrintCommand( option );
    
    option = get_option(sourceInst.getName(),USE_CLIENT_DRIVER);	
    if ( option )
      if(strcasecmp(option,"yes") == 0)
	instance.setUseClientDriver( true );
      else
	instance.setUseClientDriver( false );

    option = get_option(sourceInst.getName(),MAX_REPORTED_PRINT_JOBS);	
    if ( option )
      instance.setMaxReportedPrintjobs( atoi(option) );
    
    instEnum.addElement(instance);
  };

  
  
  void Linux_SambaPrinterPrintingForPrinterResourceAccess::associatorsManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaPrinterPrintingOptionsInstanceName& sourceInst,
   Linux_SambaPrinterOptionsInstanceEnumeration& instEnum)
   {
    Linux_SambaPrinterOptionsInstance instance;
    
    Linux_SambaPrinterOptionsInstanceName printerInstName;
    printerInstName.setNamespace(nsp);
    printerInstName.setName(sourceInst.getName());
    printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(printerInstName);
    char *option;
    
    option = get_option(sourceInst.getName(),AVAILABLE);	
    if ( option )
       if(strcasecmp(option,YES) == 0)
	 instance.setAvailable( true );
       else
	 instance.setAvailable( false );
    
    option = get_option(sourceInst.getName(),COMMENT);	
    if ( option )
      instance.setComment( option );

    option = get_option(sourceInst.getName(),PRINTABLE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setPrintable( true );
      else
	instance.setPrintable( false );

    option = get_option(sourceInst.getName(),PATH);	
    if ( option )
      instance.setPath( option );

    option = get_option(sourceInst.getName(),PRINTER_NAME);	
    if ( option )
      instance.setSystemPrinterName( option );
    
    instEnum.addElement(instance);
  };

    /* extrinsic methods */
	
}


