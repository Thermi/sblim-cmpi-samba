/**
 *  Linux_SambaForceGroupForShareRepositoryExternal.h
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


#ifndef Linux_SambaForceGroupForShareRepositoryExternal_h
#define Linux_SambaForceGroupForShareRepositoryExternal_h

#include "Linux_SambaForceGroupForShareInstanceName.h"
#include "Linux_SambaForceGroupForShareRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaForceGroupForShareRepositoryExternal {
  	
    public:
    Linux_SambaForceGroupForShareRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaForceGroupForShareRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaForceGroupForShareInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaForceGroupForShareRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaForceGroupForShareRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaForceGroupForShareInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaForceGroupForShareRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaForceGroupForShareRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaForceGroupForShareInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
