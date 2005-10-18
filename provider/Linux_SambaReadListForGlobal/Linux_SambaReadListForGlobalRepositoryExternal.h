/**
 *  Linux_SambaReadListForGlobalRepositoryExternal.h
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


#ifndef Linux_SambaReadListForGlobalRepositoryExternal_h
#define Linux_SambaReadListForGlobalRepositoryExternal_h

#include "Linux_SambaReadListForGlobalInstanceName.h"
#include "Linux_SambaReadListForGlobalRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaReadListForGlobalRepositoryExternal {
  	
    public:
    Linux_SambaReadListForGlobalRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaReadListForGlobalRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaReadListForGlobalInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaReadListForGlobalRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaReadListForGlobalRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaReadListForGlobalInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaReadListForGlobalRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaReadListForGlobalRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaReadListForGlobalInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
