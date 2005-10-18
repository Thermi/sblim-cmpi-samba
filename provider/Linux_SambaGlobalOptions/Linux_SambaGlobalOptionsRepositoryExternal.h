/**
 *  Linux_SambaGlobalOptionsRepositoryExternal.h
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


#ifndef Linux_SambaGlobalOptionsRepositoryExternal_h
#define Linux_SambaGlobalOptionsRepositoryExternal_h

#include "Linux_SambaGlobalOptionsInstanceName.h"
#include "Linux_SambaGlobalOptionsRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalOptionsRepositoryExternal {
  	
    public:
    Linux_SambaGlobalOptionsRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaGlobalOptionsRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaGlobalOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaGlobalOptionsRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaGlobalOptionsRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaGlobalOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaGlobalOptionsRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaGlobalOptionsRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaGlobalOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
