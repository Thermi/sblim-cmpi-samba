/**
 *  Linux_SambaForceUserForShareRepositoryExternal.h
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


#ifndef Linux_SambaForceUserForShareRepositoryExternal_h
#define Linux_SambaForceUserForShareRepositoryExternal_h

#include "Linux_SambaForceUserForShareInstanceName.h"
#include "Linux_SambaForceUserForShareRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaForceUserForShareRepositoryExternal {
  	
    public:
    Linux_SambaForceUserForShareRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaForceUserForShareRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaForceUserForShareInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaForceUserForShareRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaForceUserForShareRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaForceUserForShareInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaForceUserForShareRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaForceUserForShareRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaForceUserForShareInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
