/**
 *  Linux_SambaGlobalOptionsExternal.h
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


#ifndef Linux_SambaGlobalOptionsExternal_h
#define Linux_SambaGlobalOptionsExternal_h

#include "Linux_SambaGlobalOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalOptionsExternal {
  	
    public:
    Linux_SambaGlobalOptionsExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaGlobalOptionsExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaGlobalOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaGlobalOptionsInstanceEnumeration&);
     
    virtual Linux_SambaGlobalOptionsInstance getInstance(
     const char* *properties,
     const Linux_SambaGlobalOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaGlobalOptionsInstance&);
     
    virtual void createInstance(
     const Linux_SambaGlobalOptionsInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaGlobalOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
