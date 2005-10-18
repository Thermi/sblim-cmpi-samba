/**
 *  Linux_SambaGlobalProtocolForGlobalRepositoryExternal.h
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


#ifndef Linux_SambaGlobalProtocolForGlobalRepositoryExternal_h
#define Linux_SambaGlobalProtocolForGlobalRepositoryExternal_h

#include "Linux_SambaGlobalProtocolForGlobalInstanceName.h"
#include "Linux_SambaGlobalProtocolForGlobalRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalProtocolForGlobalRepositoryExternal {
  	
    public:
    Linux_SambaGlobalProtocolForGlobalRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaGlobalProtocolForGlobalRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaGlobalProtocolForGlobalInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaGlobalProtocolForGlobalRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaGlobalProtocolForGlobalRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaGlobalProtocolForGlobalInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaGlobalProtocolForGlobalRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaGlobalProtocolForGlobalRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaGlobalProtocolForGlobalInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
