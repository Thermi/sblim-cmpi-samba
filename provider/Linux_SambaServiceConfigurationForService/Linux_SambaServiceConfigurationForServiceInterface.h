/**
 *  Linux_SambaServiceConfigurationForServiceInterface.h
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


#ifndef Linux_SambaServiceConfigurationForServiceInterface_h
#define Linux_SambaServiceConfigurationForServiceInterface_h

#include "Linux_SambaServiceConfigurationForServiceInstanceName.h"
#include "Linux_SambaServiceConfigurationForServiceManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaServiceConfigurationInstance.h"
#include "Linux_SambaServiceInstance.h"
#include "Linux_SambaServiceConfigurationExternal.h"
#include "Linux_SambaServiceExternal.h"

namespace genProvider {

  class Linux_SambaServiceConfigurationForServiceInterface {
  	
    public:    
    virtual ~Linux_SambaServiceConfigurationForServiceInterface() { };
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration& instnames) = 0;
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration& instances) = 0;
  	
    virtual Linux_SambaServiceConfigurationForServiceManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaServiceConfigurationForServiceInstanceName&) = 0;
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaServiceConfigurationForServiceManualInstance&) = 0;
  	
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaServiceConfigurationForServiceManualInstance&) = 0;
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaServiceConfigurationForServiceInstanceName&) = 0;
	
    
    /* Association Interface */

    virtual void referencesConfiguration( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration& instances) = 0;

    virtual void referencesElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceConfigurationInstanceName& sourceInst,
     Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration& instances) = 0;

    virtual void associatorsConfiguration( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaServiceConfigurationInstanceEnumeration& instances) = 0;

    virtual void associatorsElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceConfigurationInstanceName& sourceInst,
     Linux_SambaServiceInstanceEnumeration& instances) = 0;

   
    /* extrinsic methods */
	
  };
}
#endif

