/**
 *  Linux_SambaShareSecurityForGlobalResourceAccess.cpp
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


#include "Linux_SambaShareSecurityForGlobalResourceAccess.h"

namespace genProvider {
  
    //Linux_SambaShareSecurityForGlobalResourceAccess::Linux_SambaShareSecurityForGlobalResourceAccess();
    Linux_SambaShareSecurityForGlobalResourceAccess::~Linux_SambaShareSecurityForGlobalResourceAccess() { };
    
    /* intrinsic methods */
    /*
    void Linux_SambaShareSecurityForGlobalResourceAccess::enumInstanceNames(
     const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
     Linux_SambaShareSecurityForGlobalInstanceNameEnumeration& instnames){
      
      int numInstanceNames=1;
      for(int i=0;i<numInstanceNames;i++){
      
        //place here the code retrieving your instanceName
      
        Linux_SambaShareSecurityForGlobalInstanceName instanceName;
        
      }      
    }
    */
  	/*
    void Linux_SambaShareSecurityForGlobalResourceAccess::enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaShareSecurityForGlobalManualInstanceEnumeration& instances){};
  	*/
  	/*
    Linux_SambaShareSecurityForGlobalManualInstance 
     Linux_SambaShareSecurityForGlobalResourceAccess::getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaShareSecurityForGlobalInstanceName&){
      Linux_SambaShareSecurityForGlobalManualInstance instance;
      
    }
  	*/
  	/*
    void Linux_SambaShareSecurityForGlobalResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaShareSecurityForGlobalManualInstance&){};
  	*/
  	/*
    void Linux_SambaShareSecurityForGlobalResourceAccess::createInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaShareSecurityForGlobalManualInstance&){};
  	*/
  	/*
    void Linux_SambaShareSecurityForGlobalResourceAccess::deleteInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaShareSecurityForGlobalInstanceName&){};
	*/
    
    /* Association Interface */
    
  void Linux_SambaShareSecurityForGlobalResourceAccess::referencesSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalOptionsInstanceName& sourceInst,
   Linux_SambaShareSecurityForGlobalManualInstanceEnumeration& instEnum)
  {
    Linux_SambaShareSecurityForGlobalManualInstance manualInstance;
    
    Linux_SambaShareSecurityForGlobalInstanceName instName;
    instName.setNamespace(nsp);
    instName.setManagedElement(sourceInst);
    
    Linux_SambaShareSecurityOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(DEFAULT_GLOBAL_NAME);
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instName.setSettingData(secInstName);
    
    manualInstance.setInstanceName(instName);
    instEnum.addElement(manualInstance);
  };
    
  void Linux_SambaShareSecurityForGlobalResourceAccess::referencesManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaShareSecurityOptionsInstanceName& sourceInst,
   Linux_SambaShareSecurityForGlobalManualInstanceEnumeration& instEnum)
  {
    Linux_SambaShareSecurityForGlobalManualInstance manualInstance;
    
    Linux_SambaShareSecurityForGlobalInstanceName instName;
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
    
  void Linux_SambaShareSecurityForGlobalResourceAccess::associatorsSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalOptionsInstanceName& sourceInst,
   Linux_SambaShareSecurityOptionsInstanceEnumeration& instEnum)
  {
    Linux_SambaShareSecurityOptionsInstance instance;
    
    Linux_SambaShareSecurityOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(DEFAULT_GLOBAL_NAME);
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(secInstName);
    char *option;
    
    option = get_option(sourceInst.getName(),CREATE_MASK);	
    if ( option )
      instance.setCreateMask( atoi(option) );

    option = get_option(sourceInst.getName(),DIRECTORY_MASK);	
    if ( option )
      instance.setDirectoryMask( atoi(option) );

    option = get_option(sourceInst.getName(),DIRECTORY_SECURITY_MASK);	
    if ( option )
      instance.setDirectorySecurityMask( atoi(option) );

    instEnum.addElement(instance);
  };
    
  void Linux_SambaShareSecurityForGlobalResourceAccess::associatorsManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaShareSecurityOptionsInstanceName& sourceInst,
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


