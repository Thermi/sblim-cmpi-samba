/**
 *  Linux_SambaServiceExternal.h
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


#ifndef Linux_SambaServiceExternal_h
#define Linux_SambaServiceExternal_h

#include "Linux_SambaServiceInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaServiceExternal {
  	
    public:
    Linux_SambaServiceExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaServiceExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaServiceInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaServiceInstanceEnumeration&);
     
    virtual Linux_SambaServiceInstance getInstance(
     const char* *properties,
     const Linux_SambaServiceInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaServiceInstance&);
     
    virtual void createInstance(
     const Linux_SambaServiceInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaServiceInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
