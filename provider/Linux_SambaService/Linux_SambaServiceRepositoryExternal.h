/**
 *  Linux_SambaServiceRepositoryExternal.h
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


#ifndef Linux_SambaServiceRepositoryExternal_h
#define Linux_SambaServiceRepositoryExternal_h

#include "Linux_SambaServiceInstanceName.h"
#include "Linux_SambaServiceRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaServiceRepositoryExternal {
  	
    public:
    Linux_SambaServiceRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaServiceRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaServiceInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaServiceRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaServiceRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaServiceInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaServiceRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaServiceRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaServiceInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
