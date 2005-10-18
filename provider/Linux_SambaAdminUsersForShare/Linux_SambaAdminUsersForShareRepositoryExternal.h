/**
 *  Linux_SambaAdminUsersForShareRepositoryExternal.h
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


#ifndef Linux_SambaAdminUsersForShareRepositoryExternal_h
#define Linux_SambaAdminUsersForShareRepositoryExternal_h

#include "Linux_SambaAdminUsersForShareInstanceName.h"
#include "Linux_SambaAdminUsersForShareRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaAdminUsersForShareRepositoryExternal {
  	
    public:
    Linux_SambaAdminUsersForShareRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaAdminUsersForShareRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaAdminUsersForShareInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaAdminUsersForShareRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaAdminUsersForShareRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaAdminUsersForShareInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaAdminUsersForShareRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaAdminUsersForShareRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaAdminUsersForShareInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
