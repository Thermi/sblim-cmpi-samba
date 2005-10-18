/**
 *  Linux_SambaGlobalBrowseForGlobalResourceAccess.cpp
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


#include "Linux_SambaGlobalBrowseForGlobalResourceAccess.h"

namespace genProvider {
  
    //Linux_SambaGlobalBrowseForGlobalResourceAccess::Linux_SambaGlobalBrowseForGlobalResourceAccess();
    Linux_SambaGlobalBrowseForGlobalResourceAccess::~Linux_SambaGlobalBrowseForGlobalResourceAccess() { };
    
    /* intrinsic methods */
    /*
    void Linux_SambaGlobalBrowseForGlobalResourceAccess::enumInstanceNames(
     const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
     Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration& instnames){
      
      int numInstanceNames=1;
      for(int i=0;i<numInstanceNames;i++){
      
        //place here the code retrieving your instanceName
      
        Linux_SambaGlobalBrowseForGlobalInstanceName instanceName;
        
      }      
    }
    */
  	/*
    void Linux_SambaGlobalBrowseForGlobalResourceAccess::enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration& instances){};
  	*/
  	/*
    Linux_SambaGlobalBrowseForGlobalManualInstance 
     Linux_SambaGlobalBrowseForGlobalResourceAccess::getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalBrowseForGlobalInstanceName&){
      Linux_SambaGlobalBrowseForGlobalManualInstance instance;
      
    }
  	*/
  	/*
    void Linux_SambaGlobalBrowseForGlobalResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalBrowseForGlobalManualInstance&){};
  	*/
  	/*
    void Linux_SambaGlobalBrowseForGlobalResourceAccess::createInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaGlobalBrowseForGlobalManualInstance&){};
  	*/
  	/*
    void Linux_SambaGlobalBrowseForGlobalResourceAccess::deleteInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaGlobalBrowseForGlobalInstanceName&){};
	*/
    
    /* Association Interface */
    
  void Linux_SambaGlobalBrowseForGlobalResourceAccess::referencesSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalOptionsInstanceName& sourceInst,
   Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration& instEnum)
  {
    Linux_SambaGlobalBrowseForGlobalManualInstance manualInstance;
    
    Linux_SambaGlobalBrowseForGlobalInstanceName instName;
    instName.setNamespace(nsp);
    instName.setManagedElement(sourceInst);
    
    Linux_SambaGlobalBrowseOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(sourceInst.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
    instName.setSettingData(secInstName);
    
    manualInstance.setInstanceName(instName);
    instEnum.addElement(manualInstance);
  };
    
  void Linux_SambaGlobalBrowseForGlobalResourceAccess::referencesManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalBrowseOptionsInstanceName& sourceInst,
   Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration& instEnum)
  {
    Linux_SambaGlobalBrowseForGlobalManualInstance manualInstance;
    
    Linux_SambaGlobalBrowseForGlobalInstanceName instName;
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
    
  void Linux_SambaGlobalBrowseForGlobalResourceAccess::associatorsSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalOptionsInstanceName& sourceInst,
   Linux_SambaGlobalBrowseOptionsInstanceEnumeration& instEnum)
  {
    Linux_SambaGlobalBrowseOptionsInstance instance;
    
    Linux_SambaGlobalBrowseOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(sourceInst.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(secInstName);
    
    char *option;
     option = get_global_option(BROWSEABLE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setBrowsable( true );
      else
	instance.setBrowsable( false );

    option = get_global_option(DOMAIN_MASTER);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setDomainMaster( 1 );
      else
	if(strcasecmp(option,NO) == 0)
	  instance.setDomainMaster( 0 );
	else
	  instance.setDomainMaster( 2 );
    
    instEnum.addElement(instance);
  };

  void Linux_SambaGlobalBrowseForGlobalResourceAccess::associatorsManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalBrowseOptionsInstanceName& sourceInst,
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


