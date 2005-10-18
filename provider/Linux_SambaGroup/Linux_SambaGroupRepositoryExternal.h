/**
 *  Linux_SambaGroupRepositoryExternal.h
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


#ifndef Linux_SambaGroupRepositoryExternal_h
#define Linux_SambaGroupRepositoryExternal_h

#include "Linux_SambaGroupInstanceName.h"
#include "Linux_SambaGroupRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGroupRepositoryExternal {
  	
    public:
    Linux_SambaGroupRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaGroupRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaGroupInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaGroupRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaGroupRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaGroupInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaGroupRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaGroupRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaGroupInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
