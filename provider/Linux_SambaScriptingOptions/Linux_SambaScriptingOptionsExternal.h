/**
 *  Linux_SambaScriptingOptionsExternal.h
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


#ifndef Linux_SambaScriptingOptionsExternal_h
#define Linux_SambaScriptingOptionsExternal_h

#include "Linux_SambaScriptingOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaScriptingOptionsExternal {
  	
    public:
    Linux_SambaScriptingOptionsExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaScriptingOptionsExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaScriptingOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaScriptingOptionsInstanceEnumeration&);
     
    virtual Linux_SambaScriptingOptionsInstance getInstance(
     const char* *properties,
     const Linux_SambaScriptingOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaScriptingOptionsInstance&);
     
    virtual void createInstance(
     const Linux_SambaScriptingOptionsInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaScriptingOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
