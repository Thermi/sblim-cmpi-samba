/**
 *  Linux_SambaValidUsersForGlobalRepositoryExternal.h
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


#ifndef Linux_SambaValidUsersForGlobalRepositoryExternal_h
#define Linux_SambaValidUsersForGlobalRepositoryExternal_h

#include "Linux_SambaValidUsersForGlobalInstanceName.h"
#include "Linux_SambaValidUsersForGlobalRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaValidUsersForGlobalRepositoryExternal {
  	
    public:
    Linux_SambaValidUsersForGlobalRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaValidUsersForGlobalRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaValidUsersForGlobalInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaValidUsersForGlobalRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaValidUsersForGlobalRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaValidUsersForGlobalInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaValidUsersForGlobalRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaValidUsersForGlobalRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaValidUsersForGlobalInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
