/**
 *  Linux_SambaGlobalSecurityOptionsRepositoryExternal.h
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


#ifndef Linux_SambaGlobalSecurityOptionsRepositoryExternal_h
#define Linux_SambaGlobalSecurityOptionsRepositoryExternal_h

#include "Linux_SambaGlobalSecurityOptionsInstanceName.h"
#include "Linux_SambaGlobalSecurityOptionsRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalSecurityOptionsRepositoryExternal {
  	
    public:
    Linux_SambaGlobalSecurityOptionsRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaGlobalSecurityOptionsRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaGlobalSecurityOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaGlobalSecurityOptionsRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaGlobalSecurityOptionsRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaGlobalSecurityOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaGlobalSecurityOptionsRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaGlobalSecurityOptionsRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaGlobalSecurityOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
