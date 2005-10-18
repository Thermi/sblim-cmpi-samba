/**
 *  Linux_SambaInvalidUsersForShareRepositoryExternal.h
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


#ifndef Linux_SambaInvalidUsersForShareRepositoryExternal_h
#define Linux_SambaInvalidUsersForShareRepositoryExternal_h

#include "Linux_SambaInvalidUsersForShareInstanceName.h"
#include "Linux_SambaInvalidUsersForShareRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaInvalidUsersForShareRepositoryExternal {
  	
    public:
    Linux_SambaInvalidUsersForShareRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaInvalidUsersForShareRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaInvalidUsersForShareInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaInvalidUsersForShareRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaInvalidUsersForShareRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaInvalidUsersForShareInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaInvalidUsersForShareRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaInvalidUsersForShareRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaInvalidUsersForShareInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
