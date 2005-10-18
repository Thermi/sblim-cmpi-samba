/**
 *  Linux_SambaScriptingForGlobalRepositoryExternal.h
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


#ifndef Linux_SambaScriptingForGlobalRepositoryExternal_h
#define Linux_SambaScriptingForGlobalRepositoryExternal_h

#include "Linux_SambaScriptingForGlobalInstanceName.h"
#include "Linux_SambaScriptingForGlobalRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaScriptingForGlobalRepositoryExternal {
  	
    public:
    Linux_SambaScriptingForGlobalRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaScriptingForGlobalRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaScriptingForGlobalInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaScriptingForGlobalRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaScriptingForGlobalRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaScriptingForGlobalInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaScriptingForGlobalRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaScriptingForGlobalRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaScriptingForGlobalInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
