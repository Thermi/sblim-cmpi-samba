/**
 *  Linux_SambaGlobalForServiceResourceAccess.cpp
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


#include "Linux_SambaGlobalForServiceResourceAccess.h"

namespace genProvider {
  
    //Linux_SambaGlobalForServiceResourceAccess::Linux_SambaGlobalForServiceResourceAccess();
    Linux_SambaGlobalForServiceResourceAccess::~Linux_SambaGlobalForServiceResourceAccess() { };
    
    /* intrinsic methods */
    
  void Linux_SambaGlobalForServiceResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaGlobalForServiceInstanceNameEnumeration& instnames)
  {
    Linux_SambaGlobalForServiceInstanceName instName;
    instName.setNamespace(nsp);


    Linux_SambaServiceInstanceName elemInstanceName;
    elemInstanceName.setNamespace(nsp);
    elemInstanceName.setName(DEFAULT_SERVICE_NAME);
    elemInstanceName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
    elemInstanceName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
    elemInstanceName.setSystemName(DEFAULT_SYSTEM_NAME);
    
    instName.setManagedElement(elemInstanceName);
    
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(nsp);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
    instName.setSettingData(globalInstName);
    
    instnames.addElement(instName);
  };
    
  	
  void Linux_SambaGlobalForServiceResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaGlobalForServiceManualInstanceEnumeration& instances)
  {
    Linux_SambaGlobalForServiceManualInstance manualInstance;
    
    Linux_SambaGlobalForServiceInstanceName instName;
    instName.setNamespace(nsp);


    Linux_SambaServiceInstanceName elemInstanceName;
    elemInstanceName.setNamespace(nsp);
    elemInstanceName.setName(DEFAULT_SERVICE_NAME);
    elemInstanceName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
    elemInstanceName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
    elemInstanceName.setSystemName(DEFAULT_SYSTEM_NAME);
    instName.setManagedElement(elemInstanceName);
    
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(nsp);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    instName.setSettingData(globalInstName);
    
    manualInstance.setInstanceName(instName);
    instances.addElement(manualInstance);
  };
  
  	
  Linux_SambaGlobalForServiceManualInstance 
   Linux_SambaGlobalForServiceResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGlobalForServiceInstanceName& instanceName)
  {
    Linux_SambaGlobalForServiceManualInstance instance;
    instance.setInstanceName(instanceName);
    return instance;
  }
  	
  	
  void Linux_SambaGlobalForServiceResourceAccess::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGlobalForServiceManualInstance&){};
  
  	
  void Linux_SambaGlobalForServiceResourceAccess::createInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaGlobalForServiceManualInstance&){};
  	
  	
  void Linux_SambaGlobalForServiceResourceAccess::deleteInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaGlobalForServiceInstanceName&){};
	
    
    /* Association Interface */
  
  void Linux_SambaGlobalForServiceResourceAccess::referencesSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaServiceInstanceName& sourceInst,
   Linux_SambaGlobalForServiceManualInstanceEnumeration& instEnum) 
  {
    Linux_SambaGlobalForServiceManualInstance manualInstance;
    
    Linux_SambaGlobalForServiceInstanceName instName;
    instName.setNamespace(nsp);
    instName.setManagedElement(sourceInst);
    
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(nsp);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
    instName.setSettingData(globalInstName);
    
    manualInstance.setInstanceName(instName);
    instEnum.addElement(manualInstance);
    
  };
    
    
  void Linux_SambaGlobalForServiceResourceAccess::referencesManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalOptionsInstanceName& sourceInst,
   Linux_SambaGlobalForServiceManualInstanceEnumeration& instEnum) 
  { 
    Linux_SambaGlobalForServiceManualInstance manualInstance;
    
    Linux_SambaGlobalForServiceInstanceName instName;
    instName.setNamespace(nsp);
    instName.setSettingData(sourceInst);
    
    Linux_SambaServiceInstanceName elemInstanceName;
    elemInstanceName.setNamespace(nsp);
    elemInstanceName.setName(DEFAULT_SERVICE_NAME);
    elemInstanceName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
    elemInstanceName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
    elemInstanceName.setSystemName(DEFAULT_SYSTEM_NAME);
    
    instName.setManagedElement(elemInstanceName);
    
    manualInstance.setInstanceName(instName);
    instEnum.addElement(manualInstance);
  };
    
  
  void Linux_SambaGlobalForServiceResourceAccess::associatorsSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaServiceInstanceName& sourceInst,
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
  
    
  void Linux_SambaGlobalForServiceResourceAccess::associatorsManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalOptionsInstanceName& sourceInst,
   Linux_SambaServiceInstanceEnumeration& instEnum) 
  { 
    Linux_SambaServiceInstance instance;
    
    Linux_SambaServiceInstanceName elemInstanceName;
    elemInstanceName.setNamespace(nsp);
    elemInstanceName.setName(DEFAULT_SERVICE_NAME);
    elemInstanceName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
    elemInstanceName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
    elemInstanceName.setSystemName(DEFAULT_SYSTEM_NAME);
    
    instance.setInstanceName(elemInstanceName);
    
    instEnum.addElement(instance);
  };
  

    /* extrinsic methods */
	
}


