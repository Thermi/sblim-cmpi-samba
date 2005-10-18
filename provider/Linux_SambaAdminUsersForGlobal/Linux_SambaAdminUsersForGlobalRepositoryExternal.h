/**
 *  Linux_SambaAdminUsersForGlobalRepositoryExternal.h
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


#ifndef Linux_SambaAdminUsersForGlobalRepositoryExternal_h
#define Linux_SambaAdminUsersForGlobalRepositoryExternal_h

#include "Linux_SambaAdminUsersForGlobalInstanceName.h"
#include "Linux_SambaAdminUsersForGlobalRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaAdminUsersForGlobalRepositoryExternal {
  	
    public:
    Linux_SambaAdminUsersForGlobalRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaAdminUsersForGlobalRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaAdminUsersForGlobalInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaAdminUsersForGlobalRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaAdminUsersForGlobalInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaAdminUsersForGlobalRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaAdminUsersForGlobalRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaAdminUsersForGlobalInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
