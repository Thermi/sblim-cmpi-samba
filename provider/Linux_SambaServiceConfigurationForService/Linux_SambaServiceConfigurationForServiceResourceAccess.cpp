/**
 *  Linux_SambaServiceConfigurationForServiceResourceAccess.cpp
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


#include "Linux_SambaServiceConfigurationForServiceResourceAccess.h"

namespace genProvider {
  
    //Linux_SambaServiceConfigurationForServiceResourceAccess::Linux_SambaServiceConfigurationForServiceResourceAccess();
    Linux_SambaServiceConfigurationForServiceResourceAccess::~Linux_SambaServiceConfigurationForServiceResourceAccess() { };
    
    /* intrinsic methods */
    /*
    void Linux_SambaServiceConfigurationForServiceResourceAccess::enumInstanceNames(
     const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
     Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration& instnames){
      
      int numInstanceNames=1;
      for(int i=0;i<numInstanceNames;i++){
      
        //place here the code retrieving your instanceName
      
        Linux_SambaServiceConfigurationForServiceInstanceName instanceName;
        
      }      
    }
    */
  	/*
    void Linux_SambaServiceConfigurationForServiceResourceAccess::enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration& instances){};
  	*/
  	/*
    Linux_SambaServiceConfigurationForServiceManualInstance 
     Linux_SambaServiceConfigurationForServiceResourceAccess::getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaServiceConfigurationForServiceInstanceName&){
      Linux_SambaServiceConfigurationForServiceManualInstance instance;
      
    }
  	*/
  	/*
    void Linux_SambaServiceConfigurationForServiceResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaServiceConfigurationForServiceManualInstance&){};
  	*/
  	/*
    void Linux_SambaServiceConfigurationForServiceResourceAccess::createInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaServiceConfigurationForServiceManualInstance&){};
  	*/
  	/*
    void Linux_SambaServiceConfigurationForServiceResourceAccess::deleteInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaServiceConfigurationForServiceInstanceName&){};
	*/
    
    /* Association Interface */
    
    void Linux_SambaServiceConfigurationForServiceResourceAccess::referencesConfiguration( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration& instEnum) 
    {
      
      Linux_SambaServiceConfigurationForServiceManualInstance manualInstance;
      Linux_SambaServiceConfigurationForServiceInstanceName instName;
      instName.setNamespace(nsp);
      instName.setElement(sourceInst);
      
      Linux_SambaServiceConfigurationInstanceName confInstName;
      confInstName.setNamespace(nsp);
      confInstName.setName(DEFAULT_SERVICE_NAME);
      
      instName.setConfiguration(confInstName);

      manualInstance.setInstanceName(instName);
      instEnum.addElement(manualInstance);
    };
    
    
    void Linux_SambaServiceConfigurationForServiceResourceAccess::referencesElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceConfigurationInstanceName& sourceInst,
     Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration& instEnum) 
    { 
      Linux_SambaServiceConfigurationForServiceManualInstance manualInstance;
      Linux_SambaServiceConfigurationForServiceInstanceName instName;
      instName.setNamespace(nsp);
      instName.setConfiguration(sourceInst);
      
      Linux_SambaServiceInstanceName elemInstanceName;
      elemInstanceName.setNamespace(nsp);
      elemInstanceName.setName(DEFAULT_SERVICE_NAME);
      elemInstanceName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
      elemInstanceName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
      elemInstanceName.setSystemName(DEFAULT_SYSTEM_NAME);
      
      instName.setElement(elemInstanceName);

      manualInstance.setInstanceName(instName);
      instEnum.addElement(manualInstance);
    };
    
    
  void Linux_SambaServiceConfigurationForServiceResourceAccess::associatorsConfiguration( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaServiceInstanceName& sourceInst,
   Linux_SambaServiceConfigurationInstanceEnumeration& instEnum) 
  { 
    Linux_SambaServiceConfigurationInstance instance;
    
    Linux_SambaServiceConfigurationInstanceName elemInstanceName;
    elemInstanceName.setNamespace(nsp);
    elemInstanceName.setName(DEFAULT_SERVICE_NAME);
    
    instance.setInstanceName(elemInstanceName);
    instance.setConfigurationFile(DEFAULT_CONFIGURATION_FILE);

    instEnum.addElement(instance);
  };
  
    
  void Linux_SambaServiceConfigurationForServiceResourceAccess::associatorsElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaServiceConfigurationInstanceName& sourceInst,
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


