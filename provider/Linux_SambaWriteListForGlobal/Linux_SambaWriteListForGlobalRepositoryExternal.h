/**
 *  Linux_SambaWriteListForGlobalRepositoryExternal.h
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


#ifndef Linux_SambaWriteListForGlobalRepositoryExternal_h
#define Linux_SambaWriteListForGlobalRepositoryExternal_h

#include "Linux_SambaWriteListForGlobalInstanceName.h"
#include "Linux_SambaWriteListForGlobalRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaWriteListForGlobalRepositoryExternal {
  	
    public:
    Linux_SambaWriteListForGlobalRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaWriteListForGlobalRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaWriteListForGlobalInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaWriteListForGlobalRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaWriteListForGlobalRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaWriteListForGlobalInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaWriteListForGlobalRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaWriteListForGlobalRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaWriteListForGlobalInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
