/**
 *  Linux_SambaServiceConfigurationExternal.h
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


#ifndef Linux_SambaServiceConfigurationExternal_h
#define Linux_SambaServiceConfigurationExternal_h

#include "Linux_SambaServiceConfigurationInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaServiceConfigurationExternal {
  	
    public:
    Linux_SambaServiceConfigurationExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaServiceConfigurationExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaServiceConfigurationInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaServiceConfigurationInstanceEnumeration&);
     
    virtual Linux_SambaServiceConfigurationInstance getInstance(
     const char* *properties,
     const Linux_SambaServiceConfigurationInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaServiceConfigurationInstance&);
     
    virtual void createInstance(
     const Linux_SambaServiceConfigurationInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaServiceConfigurationInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
