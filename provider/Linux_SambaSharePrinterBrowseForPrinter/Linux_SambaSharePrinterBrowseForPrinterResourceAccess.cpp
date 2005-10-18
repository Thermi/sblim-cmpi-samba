/**
 *  Linux_SambaSharePrinterBrowseForPrinterResourceAccess.cpp
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


#include "Linux_SambaSharePrinterBrowseForPrinterResourceAccess.h"

namespace genProvider {
  
    //Linux_SambaSharePrinterBrowseForPrinterResourceAccess::Linux_SambaSharePrinterBrowseForPrinterResourceAccess();
    Linux_SambaSharePrinterBrowseForPrinterResourceAccess::~Linux_SambaSharePrinterBrowseForPrinterResourceAccess() { };
    
    /* intrinsic methods */
    /*
    void Linux_SambaSharePrinterBrowseForPrinterResourceAccess::enumInstanceNames(
     const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
     Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration& instnames){
      
      int numInstanceNames=1;
      for(int i=0;i<numInstanceNames;i++){
      
        //place here the code retrieving your instanceName
      
        Linux_SambaSharePrinterBrowseForPrinterInstanceName instanceName;
        
      }      
    }
    */
  	/*
    void Linux_SambaSharePrinterBrowseForPrinterResourceAccess::enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration& instances){};
  	*/
  	/*
    Linux_SambaSharePrinterBrowseForPrinterManualInstance 
     Linux_SambaSharePrinterBrowseForPrinterResourceAccess::getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaSharePrinterBrowseForPrinterInstanceName&){
      Linux_SambaSharePrinterBrowseForPrinterManualInstance instance;
      
    }
  	*/
  	/*
    void Linux_SambaSharePrinterBrowseForPrinterResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaSharePrinterBrowseForPrinterManualInstance&){};
  	*/
  	/*
    void Linux_SambaSharePrinterBrowseForPrinterResourceAccess::createInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaSharePrinterBrowseForPrinterManualInstance&){};
  	*/
  	
    void Linux_SambaSharePrinterBrowseForPrinterResourceAccess::deleteInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaSharePrinterBrowseForPrinterInstanceName&){};
	
    
    /* Association Interface */
    
  void Linux_SambaSharePrinterBrowseForPrinterResourceAccess::referencesManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaSharePrinterBrowseOptionsInstanceName& sourceInst,
   Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration& instEnum)
  {
    Linux_SambaSharePrinterBrowseForPrinterManualInstance manualInstance;
    
    Linux_SambaSharePrinterBrowseForPrinterInstanceName instName;
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

  
  void Linux_SambaSharePrinterBrowseForPrinterResourceAccess::referencesSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaPrinterOptionsInstanceName& sourceInst,
   Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration& instEnum)
  {
    Linux_SambaSharePrinterBrowseForPrinterManualInstance manualInstance;
    
    Linux_SambaSharePrinterBrowseForPrinterInstanceName instName;
    instName.setNamespace(nsp);
    instName.setManagedElement(sourceInst);
    
    Linux_SambaSharePrinterBrowseOptionsInstanceName browseInstName;
    browseInstName.setNamespace(nsp);
    browseInstName.setName(sourceInst.getName());
    browseInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instName.setSettingData(browseInstName);
    
    manualInstance.setInstanceName(instName);
    instEnum.addElement(manualInstance);
  };
  
  

  
  void Linux_SambaSharePrinterBrowseForPrinterResourceAccess::associatorsManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaSharePrinterBrowseOptionsInstanceName& sourceInst,
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
    
  void Linux_SambaSharePrinterBrowseForPrinterResourceAccess::associatorsSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaPrinterOptionsInstanceName& sourceInst,
   Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration& instEnum)
  {
    Linux_SambaSharePrinterBrowseOptionsInstance instance;
    
    Linux_SambaSharePrinterBrowseOptionsInstanceName browseInstName;
    browseInstName.setNamespace(nsp);
    browseInstName.setName(sourceInst.getName());
    browseInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(browseInstName);
    char *option;
    option = get_option(sourceInst.getName(),BROWSEABLE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setBrowsable( true );
      else
	instance.setBrowsable( false );
      
    instEnum.addElement(instance);
  };
 
    /* extrinsic methods */
	
}


