/**
 *  Linux_SambaGuestAccountForGlobalRepositoryExternal.h
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


#ifndef Linux_SambaGuestAccountForGlobalRepositoryExternal_h
#define Linux_SambaGuestAccountForGlobalRepositoryExternal_h

#include "Linux_SambaGuestAccountForGlobalInstanceName.h"
#include "Linux_SambaGuestAccountForGlobalRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGuestAccountForGlobalRepositoryExternal {
  	
    public:
    Linux_SambaGuestAccountForGlobalRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaGuestAccountForGlobalRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaGuestAccountForGlobalInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaGuestAccountForGlobalRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaGuestAccountForGlobalInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaGuestAccountForGlobalRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaGuestAccountForGlobalRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaGuestAccountForGlobalInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
