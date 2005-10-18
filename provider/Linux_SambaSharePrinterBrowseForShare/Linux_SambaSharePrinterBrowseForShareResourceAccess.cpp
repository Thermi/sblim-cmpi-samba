/**
 *  Linux_SambaSharePrinterBrowseForShareResourceAccess.cpp
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


#include "Linux_SambaSharePrinterBrowseForShareResourceAccess.h"

namespace genProvider {
  
    //Linux_SambaSharePrinterBrowseForShareResourceAccess::Linux_SambaSharePrinterBrowseForShareResourceAccess();
    Linux_SambaSharePrinterBrowseForShareResourceAccess::~Linux_SambaSharePrinterBrowseForShareResourceAccess() { };
    
    /* intrinsic methods */
    /*
    void Linux_SambaSharePrinterBrowseForShareResourceAccess::enumInstanceNames(
     const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
     Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration& instnames){
      
      int numInstanceNames=1;
      for(int i=0;i<numInstanceNames;i++){
      
        //place here the code retrieving your instanceName
      
        Linux_SambaSharePrinterBrowseForShareInstanceName instanceName;
        
      }      
    }
    */
  	/*
    void Linux_SambaSharePrinterBrowseForShareResourceAccess::enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration& instances){};
  	*/
  	/*
    Linux_SambaSharePrinterBrowseForShareManualInstance 
     Linux_SambaSharePrinterBrowseForShareResourceAccess::getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaSharePrinterBrowseForShareInstanceName&){
      Linux_SambaSharePrinterBrowseForShareManualInstance instance;
      
    }
  	*/
  	/*
    void Linux_SambaSharePrinterBrowseForShareResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaSharePrinterBrowseForShareManualInstance&){};
  	*/
  	/*
    void Linux_SambaSharePrinterBrowseForShareResourceAccess::createInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaSharePrinterBrowseForShareManualInstance&){};
  	*/
  	
    void Linux_SambaSharePrinterBrowseForShareResourceAccess::deleteInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaSharePrinterBrowseForShareInstanceName&){};
	
    
    /* Association Interface */
  
  void Linux_SambaSharePrinterBrowseForShareResourceAccess::referencesSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaShareOptionsInstanceName& sourceInst,
   Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration& instEnum)
  {
    Linux_SambaSharePrinterBrowseForShareManualInstance manualInstance;
    
    Linux_SambaSharePrinterBrowseForShareInstanceName instName;
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

  void Linux_SambaSharePrinterBrowseForShareResourceAccess::referencesManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaSharePrinterBrowseOptionsInstanceName& sourceInst,
   Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration& instEnum) 
  {
    Linux_SambaSharePrinterBrowseForShareManualInstance manualInstance;
    
    Linux_SambaSharePrinterBrowseForShareInstanceName instName;
    instName.setNamespace(nsp);
    instName.setSettingData(sourceInst);
    
    Linux_SambaShareOptionsInstanceName shareInstName;
    shareInstName.setNamespace(nsp);
    shareInstName.setName(sourceInst.getName());
    shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instName.setManagedElement(shareInstName);
    
    manualInstance.setInstanceName(instName);
    instEnum.addElement(manualInstance);
  };
  
  void Linux_SambaSharePrinterBrowseForShareResourceAccess::associatorsSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaShareOptionsInstanceName& sourceInst,
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

  void Linux_SambaSharePrinterBrowseForShareResourceAccess::associatorsManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaSharePrinterBrowseOptionsInstanceName& sourceInst,
   Linux_SambaShareOptionsInstanceEnumeration& instEnum)
  {
    Linux_SambaShareOptionsInstance instance;
    
    Linux_SambaShareOptionsInstanceName shareInstName;
    shareInstName.setNamespace(nsp);
    shareInstName.setName(sourceInst.getName());
    shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(shareInstName);
    char *option;
    
    option = get_option(sourceInst.getName(),AVAILABLE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setAvailable( true );
      else
	instance.setAvailable( false );
    
    option = get_option(sourceInst.getName(),COMMENT);
    if ( option )
      instance.setComment(option);
    
    option = get_option(sourceInst.getName(),PATH);
    if ( option )
      instance.setPath(option);
    
    option = get_option(sourceInst.getName(),PRINTABLE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setPrintable( true );
      else
	instance.setPrintable( false );
    
    instEnum.addElement(instance);
  };

    /* extrinsic methods */
	
}


