/**
 *  Linux_SambaUserRepositoryExternal.h
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


#ifndef Linux_SambaUserRepositoryExternal_h
#define Linux_SambaUserRepositoryExternal_h

#include "Linux_SambaUserInstanceName.h"
#include "Linux_SambaUserRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaUserRepositoryExternal {
  	
    public:
    Linux_SambaUserRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaUserRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaUserInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaUserRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaUserRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaUserInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaUserRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaUserRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaUserInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
