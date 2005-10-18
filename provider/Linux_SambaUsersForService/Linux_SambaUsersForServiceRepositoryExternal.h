/**
 *  Linux_SambaUsersForServiceRepositoryExternal.h
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


#ifndef Linux_SambaUsersForServiceRepositoryExternal_h
#define Linux_SambaUsersForServiceRepositoryExternal_h

#include "Linux_SambaUsersForServiceInstanceName.h"
#include "Linux_SambaUsersForServiceRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaUsersForServiceRepositoryExternal {
  	
    public:
    Linux_SambaUsersForServiceRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaUsersForServiceRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaUsersForServiceInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaUsersForServiceRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaUsersForServiceRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaUsersForServiceInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaUsersForServiceRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaUsersForServiceRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaUsersForServiceInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
