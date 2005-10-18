/**
 *  Linux_SambaGlobalFileNameHandlingForGlobalResourceAccess.cpp
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


#include "Linux_SambaGlobalFileNameHandlingForGlobalResourceAccess.h"

namespace genProvider {
  
    //Linux_SambaGlobalFileNameHandlingForGlobalResourceAccess::Linux_SambaGlobalFileNameHandlingForGlobalResourceAccess();
    Linux_SambaGlobalFileNameHandlingForGlobalResourceAccess::~Linux_SambaGlobalFileNameHandlingForGlobalResourceAccess() { 
      terminator();
    };
    
    /* intrinsic methods */
    /*
    void Linux_SambaGlobalFileNameHandlingForGlobalResourceAccess::enumInstanceNames(
     const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
     Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration& instnames){
      
      int numInstanceNames=1;
      for(int i=0;i<numInstanceNames;i++){
      
        //place here the code retrieving your instanceName
      
        Linux_SambaGlobalFileNameHandlingForGlobalInstanceName instanceName;
        
      }      
    }
    */
  	/*
    void Linux_SambaGlobalFileNameHandlingForGlobalResourceAccess::enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration& instances){};
  	*/
  	/*
    Linux_SambaGlobalFileNameHandlingForGlobalManualInstance 
     Linux_SambaGlobalFileNameHandlingForGlobalResourceAccess::getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName&){
      Linux_SambaGlobalFileNameHandlingForGlobalManualInstance instance;
      
    }
  	*/
  	/*
    void Linux_SambaGlobalFileNameHandlingForGlobalResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance&){};
  	*/
  	/*
    void Linux_SambaGlobalFileNameHandlingForGlobalResourceAccess::createInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance&){};
  	*/
  	/*
    void Linux_SambaGlobalFileNameHandlingForGlobalResourceAccess::deleteInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName&){};
	*/
    
    /* Association Interface */
    
  void Linux_SambaGlobalFileNameHandlingForGlobalResourceAccess::referencesManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& sourceInst,
   Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration& instEnum)
  {
    Linux_SambaGlobalFileNameHandlingForGlobalManualInstance manualInstance;
    
    Linux_SambaGlobalFileNameHandlingForGlobalInstanceName instName;
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
    
  void Linux_SambaGlobalFileNameHandlingForGlobalResourceAccess::referencesSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalOptionsInstanceName& sourceInst,
   Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration& instEnum)
  {
    Linux_SambaGlobalFileNameHandlingForGlobalManualInstance manualInstance;
    
    Linux_SambaGlobalFileNameHandlingForGlobalInstanceName instName;
    instName.setNamespace(nsp);
    instName.setManagedElement(sourceInst);
    
    Linux_SambaGlobalFileNameHandlingOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(sourceInst.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
    instName.setSettingData(secInstName);
    
    manualInstance.setInstanceName(instName);
    instEnum.addElement(manualInstance);
  };
    
  void Linux_SambaGlobalFileNameHandlingForGlobalResourceAccess::associatorsManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& sourceInst,
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
    
  void Linux_SambaGlobalFileNameHandlingForGlobalResourceAccess::associatorsSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalOptionsInstanceName& sourceInst,
   Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumeration& instEnum)
  {
    Linux_SambaGlobalFileNameHandlingOptionsInstance instance;
    
    Linux_SambaGlobalFileNameHandlingOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(sourceInst.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(secInstName);
    
    char *option;
    option = get_global_option(CASE_SENSITIVE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setCaseSensitive( true );
      else
	instance.setCaseSensitive( false );
    
    option = get_global_option(DOS_FILETIMES);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setDosFiletimes( true );
      else
	instance.setDosFiletimes( false );
    
    option = get_global_option(HIDE_DOT_FILES);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setHideDotFiles( true );
      else
	instance.setHideDotFiles( false );
    
    instEnum.addElement(instance);
  }; 

    /* extrinsic methods */
	
}


