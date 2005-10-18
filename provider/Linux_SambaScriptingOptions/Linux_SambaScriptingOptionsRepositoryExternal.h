/**
 *  Linux_SambaScriptingOptionsRepositoryExternal.h
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


#ifndef Linux_SambaScriptingOptionsRepositoryExternal_h
#define Linux_SambaScriptingOptionsRepositoryExternal_h

#include "Linux_SambaScriptingOptionsInstanceName.h"
#include "Linux_SambaScriptingOptionsRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaScriptingOptionsRepositoryExternal {
  	
    public:
    Linux_SambaScriptingOptionsRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaScriptingOptionsRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaScriptingOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaScriptingOptionsRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaScriptingOptionsRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaScriptingOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaScriptingOptionsRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaScriptingOptionsRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaScriptingOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
