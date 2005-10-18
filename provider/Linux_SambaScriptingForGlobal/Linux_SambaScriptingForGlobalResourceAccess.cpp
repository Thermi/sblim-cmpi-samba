/**
 *  Linux_SambaScriptingForGlobalResourceAccess.cpp
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


#include "Linux_SambaScriptingForGlobalResourceAccess.h"

namespace genProvider {
  
    //Linux_SambaScriptingForGlobalResourceAccess::Linux_SambaScriptingForGlobalResourceAccess();
    Linux_SambaScriptingForGlobalResourceAccess::~Linux_SambaScriptingForGlobalResourceAccess() { 
      terminator();
    };
    
    /* intrinsic methods */
    /*
    void Linux_SambaScriptingForGlobalResourceAccess::enumInstanceNames(
     const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
     Linux_SambaScriptingForGlobalInstanceNameEnumeration& instnames){
      
      int numInstanceNames=1;
      for(int i=0;i<numInstanceNames;i++){
      
        //place here the code retrieving your instanceName
      
        Linux_SambaScriptingForGlobalInstanceName instanceName;
        
      }      
    }
    */
  	/*
    void Linux_SambaScriptingForGlobalResourceAccess::enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaScriptingForGlobalManualInstanceEnumeration& instances){};
  	*/
  	/*
    Linux_SambaScriptingForGlobalManualInstance 
     Linux_SambaScriptingForGlobalResourceAccess::getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaScriptingForGlobalInstanceName&){
      Linux_SambaScriptingForGlobalManualInstance instance;
      
    }
  	*/
  	/*
    void Linux_SambaScriptingForGlobalResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaScriptingForGlobalManualInstance&){};
  	*/
  	/*
    void Linux_SambaScriptingForGlobalResourceAccess::createInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaScriptingForGlobalManualInstance&){};
  	*/
  	/*
    void Linux_SambaScriptingForGlobalResourceAccess::deleteInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaScriptingForGlobalInstanceName&){};
	*/
    
    /* Association Interface */
    
  void Linux_SambaScriptingForGlobalResourceAccess::referencesManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaScriptingOptionsInstanceName& sourceInst,
   Linux_SambaScriptingForGlobalManualInstanceEnumeration& instEnum)
  {
    Linux_SambaScriptingForGlobalManualInstance manualInstance;
    
    Linux_SambaScriptingForGlobalInstanceName instName;
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
    
  void Linux_SambaScriptingForGlobalResourceAccess::referencesSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalOptionsInstanceName& sourceInst,
   Linux_SambaScriptingForGlobalManualInstanceEnumeration& instEnum)
  {
    Linux_SambaScriptingForGlobalManualInstance manualInstance;
    
    Linux_SambaScriptingForGlobalInstanceName instName;
    instName.setNamespace(nsp);
    instName.setManagedElement(sourceInst);
    
    Linux_SambaScriptingOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(sourceInst.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
    instName.setSettingData(secInstName);
    
    manualInstance.setInstanceName(instName);
    instEnum.addElement(manualInstance);
  };
    
  void Linux_SambaScriptingForGlobalResourceAccess::associatorsManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaScriptingOptionsInstanceName& sourceInst,
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
    
  void Linux_SambaScriptingForGlobalResourceAccess::associatorsSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalOptionsInstanceName& sourceInst,
   Linux_SambaScriptingOptionsInstanceEnumeration& instEnum)
  {
    Linux_SambaScriptingOptionsInstance instance;
    
    Linux_SambaScriptingOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(sourceInst.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(secInstName);
    
    char *option;
    option = get_global_option(ADD_GROUP_SCRIPT);	
    if ( option )
      instance.setaddGroupScript(option);

    option = get_global_option(ADD_PRINTER_COMMAND);	
    if ( option )
      instance.setaddPrinterCommand(option);
    
    option = get_global_option(ADD_SHARE_COMMAND);	
    if ( option )
      instance.setaddShareCommand(option);
    
    option = get_global_option(ADD_USER_SCRIPT);	
    if ( option )
      instance.setaddUserScript(option);
    
    option = get_global_option(ADD_USER_TO_GROUP_SCRIPT);	
    if ( option )
      instance.setaddUsertoGroupScript(option);
    
    option = get_global_option(DELETE_GROUP_SCRIPT);	
    if ( option )
      instance.setdeleteGrouprScript(option);
    
    option = get_global_option(DELETE_USER_SCRIPT);	
    if ( option )
      instance.setdeleteUserScript(option);
    
    option = get_global_option(DELETE_USER_FROM_GROUP_SCRIPT);	
    if ( option )
      instance.setdeleteUserfromGroupScript(option);
    
    instEnum.addElement(instance);
  }; 

    /* extrinsic methods */
	
}


