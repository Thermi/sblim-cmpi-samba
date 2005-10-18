/**
 *  Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal.h
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


#ifndef Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal_h
#define Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal_h

#include "Linux_SambaGlobalFileNameHandlingForGlobalInstanceName.h"
#include "Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal {
  	
    public:
    Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
