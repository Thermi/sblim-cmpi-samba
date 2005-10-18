/**
 *  Linux_SambaGlobalSecurityForGlobalRepositoryExternal.h
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


#ifndef Linux_SambaGlobalSecurityForGlobalRepositoryExternal_h
#define Linux_SambaGlobalSecurityForGlobalRepositoryExternal_h

#include "Linux_SambaGlobalSecurityForGlobalInstanceName.h"
#include "Linux_SambaGlobalSecurityForGlobalRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalSecurityForGlobalRepositoryExternal {
  	
    public:
    Linux_SambaGlobalSecurityForGlobalRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaGlobalSecurityForGlobalRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaGlobalSecurityForGlobalInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaGlobalSecurityForGlobalRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaGlobalSecurityForGlobalInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaGlobalSecurityForGlobalRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaGlobalSecurityForGlobalRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaGlobalSecurityForGlobalInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
