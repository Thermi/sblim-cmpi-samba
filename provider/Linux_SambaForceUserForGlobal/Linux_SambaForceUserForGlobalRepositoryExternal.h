/**
 *  Linux_SambaForceUserForGlobalRepositoryExternal.h
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


#ifndef Linux_SambaForceUserForGlobalRepositoryExternal_h
#define Linux_SambaForceUserForGlobalRepositoryExternal_h

#include "Linux_SambaForceUserForGlobalInstanceName.h"
#include "Linux_SambaForceUserForGlobalRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaForceUserForGlobalRepositoryExternal {
  	
    public:
    Linux_SambaForceUserForGlobalRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaForceUserForGlobalRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaForceUserForGlobalInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaForceUserForGlobalRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaForceUserForGlobalRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaForceUserForGlobalInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaForceUserForGlobalRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaForceUserForGlobalRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaForceUserForGlobalInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
