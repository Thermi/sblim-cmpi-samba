/**
 *  Linux_SambaShareSecurityForGlobalRepositoryExternal.h
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


#ifndef Linux_SambaShareSecurityForGlobalRepositoryExternal_h
#define Linux_SambaShareSecurityForGlobalRepositoryExternal_h

#include "Linux_SambaShareSecurityForGlobalInstanceName.h"
#include "Linux_SambaShareSecurityForGlobalRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaShareSecurityForGlobalRepositoryExternal {
  	
    public:
    Linux_SambaShareSecurityForGlobalRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaShareSecurityForGlobalRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaShareSecurityForGlobalInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaShareSecurityForGlobalRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaShareSecurityForGlobalRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaShareSecurityForGlobalInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaShareSecurityForGlobalRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaShareSecurityForGlobalRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaShareSecurityForGlobalInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
