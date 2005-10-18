/**
 *  Linux_SambaValidUsersForShareRepositoryExternal.h
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


#ifndef Linux_SambaValidUsersForShareRepositoryExternal_h
#define Linux_SambaValidUsersForShareRepositoryExternal_h

#include "Linux_SambaValidUsersForShareInstanceName.h"
#include "Linux_SambaValidUsersForShareRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaValidUsersForShareRepositoryExternal {
  	
    public:
    Linux_SambaValidUsersForShareRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaValidUsersForShareRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaValidUsersForShareInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaValidUsersForShareRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaValidUsersForShareRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaValidUsersForShareInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaValidUsersForShareRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaValidUsersForShareRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaValidUsersForShareInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
