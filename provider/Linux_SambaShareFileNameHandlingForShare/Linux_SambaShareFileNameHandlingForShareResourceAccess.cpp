/**
 *  Linux_SambaShareFileNameHandlingForShareResourceAccess.cpp
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


#include "Linux_SambaShareFileNameHandlingForShareResourceAccess.h"

namespace genProvider {
  
    //Linux_SambaShareFileNameHandlingForShareResourceAccess::Linux_SambaShareFileNameHandlingForShareResourceAccess();
    Linux_SambaShareFileNameHandlingForShareResourceAccess::~Linux_SambaShareFileNameHandlingForShareResourceAccess() { };
    
    /* intrinsic methods */
    /*
    void Linux_SambaShareFileNameHandlingForShareResourceAccess::enumInstanceNames(
     const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
     Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration& instnames){
      
      int numInstanceNames=1;
      for(int i=0;i<numInstanceNames;i++){
      
        //place here the code retrieving your instanceName
      
        Linux_SambaShareFileNameHandlingForShareInstanceName instanceName;
        
      }      
    }
    */
  	/*
    void Linux_SambaShareFileNameHandlingForShareResourceAccess::enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration& instances){};
  	*/
  	/*
    Linux_SambaShareFileNameHandlingForShareManualInstance 
     Linux_SambaShareFileNameHandlingForShareResourceAccess::getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaShareFileNameHandlingForShareInstanceName&){
      Linux_SambaShareFileNameHandlingForShareManualInstance instance;
      
    }
  	*/
  	/*
    void Linux_SambaShareFileNameHandlingForShareResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaShareFileNameHandlingForShareManualInstance&){};
  	*/
  	/*
    void Linux_SambaShareFileNameHandlingForShareResourceAccess::createInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaShareFileNameHandlingForShareManualInstance&){};
  	*/
  	
    void Linux_SambaShareFileNameHandlingForShareResourceAccess::deleteInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaShareFileNameHandlingForShareInstanceName&){};
	
    
    /* Association Interface */
    
  void Linux_SambaShareFileNameHandlingForShareResourceAccess::referencesSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaShareOptionsInstanceName& sourceInst,
   Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration& instEnum)
  {
    Linux_SambaShareFileNameHandlingForShareManualInstance manualInstance;
    
    Linux_SambaShareFileNameHandlingForShareInstanceName instName;
    instName.setNamespace(nsp);
    instName.setManagedElement(sourceInst);
    
    Linux_SambaShareFileNameHandlingOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(sourceInst.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
    instName.setSettingData(secInstName);
    
    manualInstance.setInstanceName(instName);
    instEnum.addElement(manualInstance);
  };


  void Linux_SambaShareFileNameHandlingForShareResourceAccess::referencesManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaShareFileNameHandlingOptionsInstanceName& sourceInst,
   Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration& instEnum)
  {
    Linux_SambaShareFileNameHandlingForShareManualInstance manualInstance;
    
    Linux_SambaShareFileNameHandlingForShareInstanceName instName;
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
    

  void Linux_SambaShareFileNameHandlingForShareResourceAccess::associatorsSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaShareOptionsInstanceName& sourceInst,
   Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration& instEnum)
  {
    Linux_SambaShareFileNameHandlingOptionsInstance instance;
    
    Linux_SambaShareFileNameHandlingOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(sourceInst.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(secInstName);
    char *option;
    
    option = get_option(sourceInst.getName(),CASE_SENSITIVE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setCaseSensitive( true );
      else
	instance.setCaseSensitive( false );
    
    option = get_option(sourceInst.getName(),DOS_FILETIMES);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setDosFiletimes( true );
      else
	instance.setDosFiletimes( false );
    
    option = get_option(sourceInst.getName(),HIDE_DOT_FILES);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setHideDotFiles( true );
      else
	instance.setHideDotFiles( false );
    
    instEnum.addElement(instance);
  };

  void Linux_SambaShareFileNameHandlingForShareResourceAccess::associatorsManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaShareFileNameHandlingOptionsInstanceName& sourceInst,
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


