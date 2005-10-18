/**
 *  Linux_SambaServiceConfigurationForServiceRepositoryExternal.h
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


#ifndef Linux_SambaServiceConfigurationForServiceRepositoryExternal_h
#define Linux_SambaServiceConfigurationForServiceRepositoryExternal_h

#include "Linux_SambaServiceConfigurationForServiceInstanceName.h"
#include "Linux_SambaServiceConfigurationForServiceRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaServiceConfigurationForServiceRepositoryExternal {
  	
    public:
    Linux_SambaServiceConfigurationForServiceRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaServiceConfigurationForServiceRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaServiceConfigurationForServiceRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaServiceConfigurationForServiceInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaServiceConfigurationForServiceRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaServiceConfigurationForServiceRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaServiceConfigurationForServiceInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
