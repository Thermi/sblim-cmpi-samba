/**
 *  Linux_SambaServiceConfigurationRepositoryExternal.h
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


#ifndef Linux_SambaServiceConfigurationRepositoryExternal_h
#define Linux_SambaServiceConfigurationRepositoryExternal_h

#include "Linux_SambaServiceConfigurationInstanceName.h"
#include "Linux_SambaServiceConfigurationRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaServiceConfigurationRepositoryExternal {
  	
    public:
    Linux_SambaServiceConfigurationRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaServiceConfigurationRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaServiceConfigurationInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaServiceConfigurationRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaServiceConfigurationRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaServiceConfigurationInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaServiceConfigurationRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaServiceConfigurationRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaServiceConfigurationInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
