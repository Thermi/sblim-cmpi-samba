/**
 *  Linux_SambaWriteListForShareRepositoryExternal.h
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


#ifndef Linux_SambaWriteListForShareRepositoryExternal_h
#define Linux_SambaWriteListForShareRepositoryExternal_h

#include "Linux_SambaWriteListForShareInstanceName.h"
#include "Linux_SambaWriteListForShareRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaWriteListForShareRepositoryExternal {
  	
    public:
    Linux_SambaWriteListForShareRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaWriteListForShareRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaWriteListForShareInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaWriteListForShareRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaWriteListForShareRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaWriteListForShareInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaWriteListForShareRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaWriteListForShareRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaWriteListForShareInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
