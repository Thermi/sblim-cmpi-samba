/**
 *  Linux_SambaShareOptionsRepositoryExternal.h
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


#ifndef Linux_SambaShareOptionsRepositoryExternal_h
#define Linux_SambaShareOptionsRepositoryExternal_h

#include "Linux_SambaShareOptionsInstanceName.h"
#include "Linux_SambaShareOptionsRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaShareOptionsRepositoryExternal {
  	
    public:
    Linux_SambaShareOptionsRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaShareOptionsRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaShareOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaShareOptionsRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaShareOptionsRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaShareOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaShareOptionsRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaShareOptionsRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaShareOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
