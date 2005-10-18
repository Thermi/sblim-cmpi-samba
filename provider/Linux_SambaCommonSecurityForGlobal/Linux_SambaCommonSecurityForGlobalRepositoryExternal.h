/**
 *  Linux_SambaCommonSecurityForGlobalRepositoryExternal.h
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


#ifndef Linux_SambaCommonSecurityForGlobalRepositoryExternal_h
#define Linux_SambaCommonSecurityForGlobalRepositoryExternal_h

#include "Linux_SambaCommonSecurityForGlobalInstanceName.h"
#include "Linux_SambaCommonSecurityForGlobalRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaCommonSecurityForGlobalRepositoryExternal {
  	
    public:
    Linux_SambaCommonSecurityForGlobalRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaCommonSecurityForGlobalRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaCommonSecurityForGlobalRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaCommonSecurityForGlobalRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaCommonSecurityForGlobalInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaCommonSecurityForGlobalRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaCommonSecurityForGlobalRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaCommonSecurityForGlobalInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
