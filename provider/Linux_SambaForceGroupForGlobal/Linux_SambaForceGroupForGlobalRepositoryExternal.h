/**
 *  Linux_SambaForceGroupForGlobalRepositoryExternal.h
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


#ifndef Linux_SambaForceGroupForGlobalRepositoryExternal_h
#define Linux_SambaForceGroupForGlobalRepositoryExternal_h

#include "Linux_SambaForceGroupForGlobalInstanceName.h"
#include "Linux_SambaForceGroupForGlobalRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaForceGroupForGlobalRepositoryExternal {
  	
    public:
    Linux_SambaForceGroupForGlobalRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaForceGroupForGlobalRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaForceGroupForGlobalInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaForceGroupForGlobalRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaForceGroupForGlobalInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaForceGroupForGlobalRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaForceGroupForGlobalRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaForceGroupForGlobalInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
