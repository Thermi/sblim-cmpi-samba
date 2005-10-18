/**
 *  Linux_SambaGlobalSecurityOptionsExternal.h
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


#ifndef Linux_SambaGlobalSecurityOptionsExternal_h
#define Linux_SambaGlobalSecurityOptionsExternal_h

#include "Linux_SambaGlobalSecurityOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalSecurityOptionsExternal {
  	
    public:
    Linux_SambaGlobalSecurityOptionsExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaGlobalSecurityOptionsExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaGlobalSecurityOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaGlobalSecurityOptionsInstanceEnumeration&);
     
    virtual Linux_SambaGlobalSecurityOptionsInstance getInstance(
     const char* *properties,
     const Linux_SambaGlobalSecurityOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaGlobalSecurityOptionsInstance&);
     
    virtual void createInstance(
     const Linux_SambaGlobalSecurityOptionsInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaGlobalSecurityOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
