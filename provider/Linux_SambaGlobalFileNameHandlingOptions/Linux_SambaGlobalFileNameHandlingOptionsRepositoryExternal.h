/**
 *  Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal.h
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


#ifndef Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal_h
#define Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal_h

#include "Linux_SambaGlobalFileNameHandlingOptionsInstanceName.h"
#include "Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal {
  	
    public:
    Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaGlobalFileNameHandlingOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaGlobalFileNameHandlingOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
