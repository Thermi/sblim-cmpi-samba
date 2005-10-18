/**
 *  Linux_SambaCommonSecurityForGlobalResourceAccess.cpp
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


#include "Linux_SambaCommonSecurityForGlobalResourceAccess.h"

namespace genProvider {
  
    //Linux_SambaCommonSecurityForGlobalResourceAccess::Linux_SambaCommonSecurityForGlobalResourceAccess();
    Linux_SambaCommonSecurityForGlobalResourceAccess::~Linux_SambaCommonSecurityForGlobalResourceAccess() { 
      terminator();
    };
    
    /* intrinsic methods */
    /*
    void Linux_SambaCommonSecurityForGlobalResourceAccess::enumInstanceNames(
     const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
     Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration& instnames){
      
      int numInstanceNames=1;
      for(int i=0;i<numInstanceNames;i++){
      
        //place here the code retrieving your instanceName
      
        Linux_SambaCommonSecurityForGlobalInstanceName instanceName;
        
      }      
    }
    */
  	/*
    void Linux_SambaCommonSecurityForGlobalResourceAccess::enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration& instances){};
  	*/
  	/*
    Linux_SambaCommonSecurityForGlobalManualInstance 
     Linux_SambaCommonSecurityForGlobalResourceAccess::getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaCommonSecurityForGlobalInstanceName&){
      Linux_SambaCommonSecurityForGlobalManualInstance instance;
      
    }
  	*/
  	/*
    void Linux_SambaCommonSecurityForGlobalResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaCommonSecurityForGlobalManualInstance&){};
  	*/
  	/*
    void Linux_SambaCommonSecurityForGlobalResourceAccess::createInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaCommonSecurityForGlobalManualInstance&){};
  	*/
  	/*
    void Linux_SambaCommonSecurityForGlobalResourceAccess::deleteInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaCommonSecurityForGlobalInstanceName&){};
	*/
    
  /* Association Interface */
    
  void Linux_SambaCommonSecurityForGlobalResourceAccess::referencesSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalOptionsInstanceName& sourceInst,
   Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration& instEnum)
  {
    Linux_SambaCommonSecurityForGlobalManualInstance manualInstance;
    
    Linux_SambaCommonSecurityForGlobalInstanceName instName;
    instName.setNamespace(nsp);
    instName.setManagedElement(sourceInst);
    
    Linux_SambaCommonSecurityOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(DEFAULT_GLOBAL_NAME);
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instName.setSettingData(secInstName);
    
    manualInstance.setInstanceName(instName);
    instEnum.addElement(manualInstance);
  };
    
  void Linux_SambaCommonSecurityForGlobalResourceAccess::referencesManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaCommonSecurityOptionsInstanceName& sourceInst,
   Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration& instEnum)
  {
    Linux_SambaCommonSecurityForGlobalManualInstance manualInstance;
    
    Linux_SambaCommonSecurityForGlobalInstanceName instName;
    instName.setNamespace(nsp);
    instName.setSettingData(sourceInst);
    
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(nsp);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instName.setManagedElement(globalInstName);
    
    manualInstance.setInstanceName(instName);
    instEnum.addElement(manualInstance);
  };
    
  void Linux_SambaCommonSecurityForGlobalResourceAccess::associatorsSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalOptionsInstanceName& sourceInst,
   Linux_SambaCommonSecurityOptionsInstanceEnumeration& instEnum)
  {
    Linux_SambaCommonSecurityOptionsInstance instance;
    
    Linux_SambaCommonSecurityOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(DEFAULT_GLOBAL_NAME);
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(secInstName);
    char *option;
    
    option = get_global_option(GUEST_OK);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setGuestOK( true );
      else
	instance.setGuestOK( false );
    
    option = get_global_option(GUEST_ONLY);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setGuestOnly( true );
      else
	instance.setGuestOnly( false );
    
    option = get_global_option(HOSTS_ALLOW);	
    if ( option )
      instance.setHostsAllow( option );
    
    option = get_global_option(HOSTS_DENY);	
    if ( option )
      instance.setHostsDeny( option );
    
    option = get_global_option(READ_ONLY);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setReadOnly( true );
      else
	instance.setReadOnly( false );
    
    instEnum.addElement(instance);
  };
  
  void Linux_SambaCommonSecurityForGlobalResourceAccess::associatorsManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaCommonSecurityOptionsInstanceName& sourceInst,
   Linux_SambaGlobalOptionsInstanceEnumeration& instEnum)
  {
    Linux_SambaGlobalOptionsInstance instance;
    
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(nsp);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
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


