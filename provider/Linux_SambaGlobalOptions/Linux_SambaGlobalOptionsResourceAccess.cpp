/**
 *  Linux_SambaGlobalOptionsResourceAccess.cpp
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


#include "Linux_SambaGlobalOptionsResourceAccess.h"


namespace genProvider {
  
  void Linux_SambaGlobalOptionsResourceAccess::setInstanceNameProperties(const char* nsp,     
    Linux_SambaGlobalOptionsInstanceName& anInstanceName)
  {
    anInstanceName.setNamespace(nsp);
    anInstanceName.setName(DEFAULT_GLOBAL_NAME);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  }
  
  void Linux_SambaGlobalOptionsResourceAccess::setInstanceProperties(
   Linux_SambaGlobalOptionsManualInstance& aManualInstance)
  {
    char *option;
    option = get_global_option(BIND_INTERFACES_ONLY);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setBindInterfacesOnly( true );
      else
	aManualInstance.setBindInterfacesOnly( false );

    option = get_global_option(INTERFACES);	
    if ( option )
      aManualInstance.setInterfaces( option );
    
    option = get_global_option(NETBIOS_ALIASES);	
    if ( option )
      aManualInstance.setNetbiosAlias( option );

    option = get_global_option(NETBIOS_NAME);	
    if ( option )
      aManualInstance.setNetbiosName( option );
    
    option = get_global_option(SERVER_STRING);	
    if ( option )
      aManualInstance.setServerString( option );
    
    option = get_global_option(WORKGROUP);	
    if ( option )
      aManualInstance.setWorkgroup( option );
    	
  } 
  
  //Linux_SambaGlobalOptionsResourceAccess::Linux_SambaGlobalOptionsResourceAccess();
  Linux_SambaGlobalOptionsResourceAccess::~Linux_SambaGlobalOptionsResourceAccess() { };
    
  /* intrinsic methods */
    
  void Linux_SambaGlobalOptionsResourceAccess::enumInstanceNames(
     const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
     Linux_SambaGlobalOptionsInstanceNameEnumeration& instnames)
  {
    Linux_SambaGlobalOptionsInstanceName instanceName;
    setInstanceNameProperties(nsp,instanceName);
    instnames.addElement(instanceName); 
  };
  
  	
  void Linux_SambaGlobalOptionsResourceAccess::enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaGlobalOptionsManualInstanceEnumeration& instances)
  {
    Linux_SambaGlobalOptionsManualInstance aManualInstance;
    Linux_SambaGlobalOptionsInstanceName instanceName;
    
    setInstanceNameProperties(nsp,instanceName);
    aManualInstance.setInstanceName(instanceName);

    setInstanceProperties(aManualInstance);
    
    instances.addElement(aManualInstance);
  };
  
  
  Linux_SambaGlobalOptionsManualInstance 
     Linux_SambaGlobalOptionsResourceAccess::getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalOptionsInstanceName& instanceName)
  {
    Linux_SambaGlobalOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    
    setInstanceProperties(aManualInstance);

    return aManualInstance;      
  };


  void Linux_SambaGlobalOptionsResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalOptionsManualInstance& newInstance)
  {
    
    if ( newInstance.isBindInterfacesOnlySet() )
      {
	if(newInstance.getBindInterfacesOnly())  
	  set_global_option(BIND_INTERFACES_ONLY,YES);
	else
	  set_global_option(BIND_INTERFACES_ONLY,NO);
      }
    
    if ( newInstance.isInterfacesSet() )
      set_global_option(INTERFACES, newInstance.getInterfaces());
		 		     
    if ( newInstance.isNetbiosAliasSet() )
      set_global_option(NETBIOS_ALIASES, newInstance.getNetbiosAlias());
    
    if ( newInstance.isNetbiosNameSet() )
      set_global_option(NETBIOS_NAME, newInstance.getNetbiosName());
    
    if ( newInstance.isServerStringSet() )
      set_global_option(SERVER_STRING, newInstance.getServerString());
    
    if ( newInstance.isWorkgroupSet() )
      set_global_option(WORKGROUP, newInstance.getWorkgroup());
    
    };


        /*
    void Linux_SambaGlobalOptionsResourceAccess::createInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaGlobalOptionsManualInstance&){};
  	*/
  	/*
    void Linux_SambaGlobalOptionsResourceAccess::deleteInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaGlobalOptionsInstanceName&){};
	*/
    
    /* extrinsic methods */
	
}


