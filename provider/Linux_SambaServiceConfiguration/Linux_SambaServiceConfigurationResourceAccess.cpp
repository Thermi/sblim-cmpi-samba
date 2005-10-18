/**
 *  Linux_SambaServiceConfigurationResourceAccess.cpp
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


#include "Linux_SambaServiceConfigurationResourceAccess.h"

namespace genProvider {

  void Linux_SambaServiceConfigurationResourceAccess::setInstanceNameProperties(const char* nsp,     
    Linux_SambaServiceConfigurationInstanceName& anInstanceName)
  {
    anInstanceName.setNamespace(nsp);
    anInstanceName.setName(DEFAULT_SERVICE_NAME);
  };
  
    //Linux_SambaServiceConfigurationResourceAccess::Linux_SambaServiceConfigurationResourceAccess();
    Linux_SambaServiceConfigurationResourceAccess::~Linux_SambaServiceConfigurationResourceAccess() { };
    
    /* intrinsic methods */
    

  void Linux_SambaServiceConfigurationResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaServiceConfigurationInstanceNameEnumeration& instnames)
  {
    Linux_SambaServiceConfigurationInstanceName instanceName;
    setInstanceNameProperties(nsp,instanceName);
    instnames.addElement(instanceName); 
  };
    
  void Linux_SambaServiceConfigurationResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaServiceConfigurationManualInstanceEnumeration& instances)
  {
    Linux_SambaServiceConfigurationManualInstance aManualInstance;
    Linux_SambaServiceConfigurationInstanceName instanceName;
    
    setInstanceNameProperties(nsp,instanceName);
    aManualInstance.setInstanceName(instanceName);
    aManualInstance.setConfigurationFile(DEFAULT_CONFIGURATION_FILE);
    
    instances.addElement(aManualInstance);
  }; 

  Linux_SambaServiceConfigurationManualInstance 
   Linux_SambaServiceConfigurationResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaServiceConfigurationInstanceName& instanceName)
  {
    Linux_SambaServiceConfigurationManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    aManualInstance.setConfigurationFile(DEFAULT_CONFIGURATION_FILE);

    return aManualInstance;
  };

        /*
    void Linux_SambaServiceConfigurationResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaServiceConfigurationManualInstance&)
        */

  	/*
    void Linux_SambaServiceConfigurationResourceAccess::createInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaServiceConfigurationManualInstance&){};
  	*/
  	/*
    void Linux_SambaServiceConfigurationResourceAccess::deleteInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaServiceConfigurationInstanceName&){};
	*/
    
    /* extrinsic methods */
	
}


