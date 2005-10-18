/**
 *  Linux_SambaHostRepositoryExternal.h
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


#ifndef Linux_SambaHostRepositoryExternal_h
#define Linux_SambaHostRepositoryExternal_h

#include "Linux_SambaHostInstanceName.h"
#include "Linux_SambaHostRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaHostRepositoryExternal {
  	
    public:
    Linux_SambaHostRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaHostRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaHostInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaHostRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaHostRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaHostInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaHostRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaHostRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaHostInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
