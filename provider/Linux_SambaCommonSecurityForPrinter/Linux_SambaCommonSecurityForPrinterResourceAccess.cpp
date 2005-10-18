/**
 *  Linux_SambaCommonSecurityForPrinterResourceAccess.cpp
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


#include "Linux_SambaCommonSecurityForPrinterResourceAccess.h"

namespace genProvider {
  
    //Linux_SambaCommonSecurityForPrinterResourceAccess::Linux_SambaCommonSecurityForPrinterResourceAccess();
    Linux_SambaCommonSecurityForPrinterResourceAccess::~Linux_SambaCommonSecurityForPrinterResourceAccess() { };
    
    /* intrinsic methods */
    /*
    void Linux_SambaCommonSecurityForPrinterResourceAccess::enumInstanceNames(
     const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
     Linux_SambaCommonSecurityForPrinterInstanceNameEnumeration& instnames){
      
      int numInstanceNames=1;
      for(int i=0;i<numInstanceNames;i++){
      
        //place here the code retrieving your instanceName
      
        Linux_SambaCommonSecurityForPrinterInstanceName instanceName;
        
      }      
    }
    */
  	/*
    void Linux_SambaCommonSecurityForPrinterResourceAccess::enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration& instances){};
  	*/
  	/*
    Linux_SambaCommonSecurityForPrinterManualInstance 
     Linux_SambaCommonSecurityForPrinterResourceAccess::getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaCommonSecurityForPrinterInstanceName&){
      Linux_SambaCommonSecurityForPrinterManualInstance instance;
      
    }
  	*/
  	/*
    void Linux_SambaCommonSecurityForPrinterResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaCommonSecurityForPrinterManualInstance&){};
  	*/
  	/*
    void Linux_SambaCommonSecurityForPrinterResourceAccess::createInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaCommonSecurityForPrinterManualInstance&){};
  	*/
  	
    void Linux_SambaCommonSecurityForPrinterResourceAccess::deleteInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaCommonSecurityForPrinterInstanceName&){};
	
    
    /* Association Interface */
   
  void Linux_SambaCommonSecurityForPrinterResourceAccess::referencesSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaPrinterOptionsInstanceName& sourceInst,
   Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration& instEnum)
  {
    Linux_SambaCommonSecurityForPrinterManualInstance manualInstance;
    
    Linux_SambaCommonSecurityForPrinterInstanceName instName;
    instName.setNamespace(nsp);
    instName.setManagedElement(sourceInst);
    
    Linux_SambaCommonSecurityOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(sourceInst.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instName.setSettingData(secInstName);
    
    manualInstance.setInstanceName(instName);
    instEnum.addElement(manualInstance);
  };

    
  void Linux_SambaCommonSecurityForPrinterResourceAccess::referencesManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaCommonSecurityOptionsInstanceName& sourceInst,
   Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration& instEnum)
  {
    Linux_SambaCommonSecurityForPrinterManualInstance manualInstance;
    
    Linux_SambaCommonSecurityForPrinterInstanceName instName;
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

  
  void Linux_SambaCommonSecurityForPrinterResourceAccess::associatorsSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaPrinterOptionsInstanceName& sourceInst,
   Linux_SambaCommonSecurityOptionsInstanceEnumeration& instEnum)
  {
    Linux_SambaCommonSecurityOptionsInstance instance;
    
    Linux_SambaCommonSecurityOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(sourceInst.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(secInstName);
    char *option;
    
    option = get_option(sourceInst.getName(),GUEST_OK);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setGuestOK( true );
      else
	instance.setGuestOK( false );

    option = get_option(sourceInst.getName(),GUEST_ONLY);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setGuestOnly( true );
      else
	instance.setGuestOnly( false );

    option = get_option(sourceInst.getName(),HOSTS_ALLOW);	
    if ( option )
      instance.setHostsAllow( option );

    option = get_option(sourceInst.getName(),HOSTS_DENY);	
    if ( option )
      instance.setHostsDeny( option ); 

    option = get_option(sourceInst.getName(),READ_ONLY);	
    if ( option )
      if(strcasecmp(option,YES) == 0) 
	instance.setReadOnly( true );
      else
	instance.setReadOnly( false );
    
    instEnum.addElement(instance);
  };  

  
  void Linux_SambaCommonSecurityForPrinterResourceAccess::associatorsManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaCommonSecurityOptionsInstanceName& sourceInst,
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


