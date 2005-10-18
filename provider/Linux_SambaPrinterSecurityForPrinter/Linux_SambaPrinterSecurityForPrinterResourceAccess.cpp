/**
 *  Linux_SambaPrinterSecurityForPrinterResourceAccess.cpp
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


#include "Linux_SambaPrinterSecurityForPrinterResourceAccess.h"

namespace genProvider {
  
    //Linux_SambaPrinterSecurityForPrinterResourceAccess::Linux_SambaPrinterSecurityForPrinterResourceAccess();
    Linux_SambaPrinterSecurityForPrinterResourceAccess::~Linux_SambaPrinterSecurityForPrinterResourceAccess() { };
    
    /* intrinsic methods */
    /*
    void Linux_SambaPrinterSecurityForPrinterResourceAccess::enumInstanceNames(
     const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
     Linux_SambaPrinterSecurityForPrinterInstanceNameEnumeration& instnames){
      
      int numInstanceNames=1;
      for(int i=0;i<numInstanceNames;i++){
      
        //place here the code retrieving your instanceName
      
        Linux_SambaPrinterSecurityForPrinterInstanceName instanceName;
        
      }      
    }
    */
  	/*
    void Linux_SambaPrinterSecurityForPrinterResourceAccess::enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration& instances){};
  	*/
  	/*
    Linux_SambaPrinterSecurityForPrinterManualInstance 
     Linux_SambaPrinterSecurityForPrinterResourceAccess::getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaPrinterSecurityForPrinterInstanceName&){
      Linux_SambaPrinterSecurityForPrinterManualInstance instance;
      
    }
  	*/
  	/*
    void Linux_SambaPrinterSecurityForPrinterResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaPrinterSecurityForPrinterManualInstance&){};
  	*/
  	/*
    void Linux_SambaPrinterSecurityForPrinterResourceAccess::createInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaPrinterSecurityForPrinterManualInstance&){};
  	*/
  	
    void Linux_SambaPrinterSecurityForPrinterResourceAccess::deleteInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaPrinterSecurityForPrinterInstanceName&){};
	
    
    /* Association Interface */
    
  void Linux_SambaPrinterSecurityForPrinterResourceAccess::referencesSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaPrinterOptionsInstanceName& sourceInst,
   Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration& instEnum)
  {
    Linux_SambaPrinterSecurityForPrinterManualInstance manualInstance;
    
    Linux_SambaPrinterSecurityForPrinterInstanceName instName;
    instName.setNamespace(nsp);
    instName.setManagedElement(sourceInst);
    
    Linux_SambaPrinterSecurityOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(sourceInst.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
    instName.setSettingData(secInstName);
    
    manualInstance.setInstanceName(instName);
    instEnum.addElement(manualInstance);
  };
  
  void Linux_SambaPrinterSecurityForPrinterResourceAccess::referencesManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaPrinterSecurityOptionsInstanceName& sourceInst,
   Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration& instEnum)
  {
    Linux_SambaPrinterSecurityForPrinterManualInstance manualInstance;
    
    Linux_SambaPrinterSecurityForPrinterInstanceName instName;
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
  
  
  void Linux_SambaPrinterSecurityForPrinterResourceAccess::associatorsSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaPrinterOptionsInstanceName& sourceInst,
   Linux_SambaPrinterSecurityOptionsInstanceEnumeration& instEnum) 
  {
    Linux_SambaPrinterSecurityOptionsInstance instance;
    
    Linux_SambaPrinterSecurityOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(sourceInst.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(secInstName);
    
    // Linux_SambaPrinterSecurityOptions don't have any attribute
    
    instEnum.addElement(instance);
  };


  void Linux_SambaPrinterSecurityForPrinterResourceAccess::associatorsManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaPrinterSecurityOptionsInstanceName& sourceInst,
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


