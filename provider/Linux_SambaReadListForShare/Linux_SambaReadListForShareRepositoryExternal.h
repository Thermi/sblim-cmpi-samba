/**
 *  Linux_SambaReadListForShareRepositoryExternal.h
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


#ifndef Linux_SambaReadListForShareRepositoryExternal_h
#define Linux_SambaReadListForShareRepositoryExternal_h

#include "Linux_SambaReadListForShareInstanceName.h"
#include "Linux_SambaReadListForShareRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaReadListForShareRepositoryExternal {
  	
    public:
    Linux_SambaReadListForShareRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaReadListForShareRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaReadListForShareInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaReadListForShareRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaReadListForShareRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaReadListForShareInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaReadListForShareRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaReadListForShareRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaReadListForShareInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
