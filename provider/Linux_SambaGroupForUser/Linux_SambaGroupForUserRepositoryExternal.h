/**
 *  Linux_SambaGroupForUserRepositoryExternal.h
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


#ifndef Linux_SambaGroupForUserRepositoryExternal_h
#define Linux_SambaGroupForUserRepositoryExternal_h

#include "Linux_SambaGroupForUserInstanceName.h"
#include "Linux_SambaGroupForUserRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGroupForUserRepositoryExternal {
  	
    public:
    Linux_SambaGroupForUserRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaGroupForUserRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaGroupForUserInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaGroupForUserRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaGroupForUserRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaGroupForUserInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaGroupForUserRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaGroupForUserRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaGroupForUserInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
