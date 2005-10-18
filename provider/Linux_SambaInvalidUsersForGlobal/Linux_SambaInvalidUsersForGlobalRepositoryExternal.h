/**
 *  Linux_SambaInvalidUsersForGlobalRepositoryExternal.h
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


#ifndef Linux_SambaInvalidUsersForGlobalRepositoryExternal_h
#define Linux_SambaInvalidUsersForGlobalRepositoryExternal_h

#include "Linux_SambaInvalidUsersForGlobalInstanceName.h"
#include "Linux_SambaInvalidUsersForGlobalRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaInvalidUsersForGlobalRepositoryExternal {
  	
    public:
    Linux_SambaInvalidUsersForGlobalRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaInvalidUsersForGlobalRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaInvalidUsersForGlobalRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaInvalidUsersForGlobalInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaInvalidUsersForGlobalRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaInvalidUsersForGlobalRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaInvalidUsersForGlobalInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
