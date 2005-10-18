/**
 *  Linux_SambaGlobalForServiceRepositoryExternal.h
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


#ifndef Linux_SambaGlobalForServiceRepositoryExternal_h
#define Linux_SambaGlobalForServiceRepositoryExternal_h

#include "Linux_SambaGlobalForServiceInstanceName.h"
#include "Linux_SambaGlobalForServiceRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalForServiceRepositoryExternal {
  	
    public:
    Linux_SambaGlobalForServiceRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaGlobalForServiceRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaGlobalForServiceInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaGlobalForServiceRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaGlobalForServiceRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaGlobalForServiceInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaGlobalForServiceRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaGlobalForServiceRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaGlobalForServiceInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
