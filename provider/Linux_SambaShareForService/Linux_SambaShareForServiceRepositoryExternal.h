/**
 *  Linux_SambaShareForServiceRepositoryExternal.h
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


#ifndef Linux_SambaShareForServiceRepositoryExternal_h
#define Linux_SambaShareForServiceRepositoryExternal_h

#include "Linux_SambaShareForServiceInstanceName.h"
#include "Linux_SambaShareForServiceRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaShareForServiceRepositoryExternal {
  	
    public:
    Linux_SambaShareForServiceRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaShareForServiceRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaShareForServiceInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaShareForServiceRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaShareForServiceRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaShareForServiceInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaShareForServiceRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaShareForServiceRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaShareForServiceInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
