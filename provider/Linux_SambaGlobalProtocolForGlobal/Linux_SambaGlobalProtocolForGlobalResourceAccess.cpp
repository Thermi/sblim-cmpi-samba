/**
 *  Linux_SambaGlobalProtocolForGlobalResourceAccess.cpp
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


#include "Linux_SambaGlobalProtocolForGlobalResourceAccess.h"

namespace genProvider {
  
    //Linux_SambaGlobalProtocolForGlobalResourceAccess::Linux_SambaGlobalProtocolForGlobalResourceAccess();
    Linux_SambaGlobalProtocolForGlobalResourceAccess::~Linux_SambaGlobalProtocolForGlobalResourceAccess() { };
    
    /* intrinsic methods */
    /*
    void Linux_SambaGlobalProtocolForGlobalResourceAccess::enumInstanceNames(
     const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
     Linux_SambaGlobalProtocolForGlobalInstanceNameEnumeration& instnames){
      
      int numInstanceNames=1;
      for(int i=0;i<numInstanceNames;i++){
      
        //place here the code retrieving your instanceName
      
        Linux_SambaGlobalProtocolForGlobalInstanceName instanceName;
        
      }      
    }
    */
  	/*
    void Linux_SambaGlobalProtocolForGlobalResourceAccess::enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration& instances){};
  	*/
  	/*
    Linux_SambaGlobalProtocolForGlobalManualInstance 
     Linux_SambaGlobalProtocolForGlobalResourceAccess::getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalProtocolForGlobalInstanceName&){
      Linux_SambaGlobalProtocolForGlobalManualInstance instance;
      
    }
  	*/
  	/*
    void Linux_SambaGlobalProtocolForGlobalResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalProtocolForGlobalManualInstance&){};
  	*/
  	/*
    void Linux_SambaGlobalProtocolForGlobalResourceAccess::createInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaGlobalProtocolForGlobalManualInstance&){};
  	*/
  	/*
    void Linux_SambaGlobalProtocolForGlobalResourceAccess::deleteInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaGlobalProtocolForGlobalInstanceName&){};
	*/
    
    /* Association Interface */
    
  void Linux_SambaGlobalProtocolForGlobalResourceAccess::referencesSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalOptionsInstanceName& sourceInst,
   Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration& instEnum)
  {
    Linux_SambaGlobalProtocolForGlobalManualInstance manualInstance;
    
    Linux_SambaGlobalProtocolForGlobalInstanceName instName;
    instName.setNamespace(nsp);
    instName.setManagedElement(sourceInst);
    
    Linux_SambaGlobalProtocolOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(sourceInst.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
    instName.setSettingData(secInstName);
    
    manualInstance.setInstanceName(instName);
    instEnum.addElement(manualInstance);
  };
    
  void Linux_SambaGlobalProtocolForGlobalResourceAccess::referencesManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalProtocolOptionsInstanceName& sourceInst,
   Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration& instEnum)
  {
    Linux_SambaGlobalProtocolForGlobalManualInstance manualInstance;
    
    Linux_SambaGlobalProtocolForGlobalInstanceName instName;
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
    
  void Linux_SambaGlobalProtocolForGlobalResourceAccess::associatorsSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalOptionsInstanceName& sourceInst,
   Linux_SambaGlobalProtocolOptionsInstanceEnumeration& instEnum)
  {
    Linux_SambaGlobalProtocolOptionsInstance instance;
    
    Linux_SambaGlobalProtocolOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(sourceInst.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(secInstName);
    
    char *option;
    
    option = get_global_option(ACL_COMPATIBILITY);	
    if ( option )
      if(strcasecmp(option,"Auto") == 0)
	instance.setAclCompatibility( 0 );
      else 
	if(strcasecmp(option,"winnt") == 0)
	  instance.setAclCompatibility( 1 );
	else 
	  if(strcasecmp(option,"win2k") == 0)
	    instance.setAclCompatibility( 2 );
    
    option = get_global_option(EA_SUPPORT);
    if( option )
      if(strcasecmp(option,YES) == 0)
	instance.setEASupport( true );
      else
	instance.setEASupport( false );
    
    option = get_global_option(NT_ACL_SUPPORT);
    if( option )
      if(strcasecmp(option,YES) == 0)
	instance.setNTACLSupport( true );
      else
	instance.setNTACLSupport( false );
    
    instEnum.addElement(instance);
  };
  
  void Linux_SambaGlobalProtocolForGlobalResourceAccess::associatorsManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalProtocolOptionsInstanceName& sourceInst,
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

    /* extrinsic methods */
	
}


