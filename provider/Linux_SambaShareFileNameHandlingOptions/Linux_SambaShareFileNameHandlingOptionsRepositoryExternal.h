/**
 *  Linux_SambaShareFileNameHandlingOptionsRepositoryExternal.h
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


#ifndef Linux_SambaShareFileNameHandlingOptionsRepositoryExternal_h
#define Linux_SambaShareFileNameHandlingOptionsRepositoryExternal_h

#include "Linux_SambaShareFileNameHandlingOptionsInstanceName.h"
#include "Linux_SambaShareFileNameHandlingOptionsRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaShareFileNameHandlingOptionsRepositoryExternal {
  	
    public:
    Linux_SambaShareFileNameHandlingOptionsRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaShareFileNameHandlingOptionsRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaShareFileNameHandlingOptionsRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaShareFileNameHandlingOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaShareFileNameHandlingOptionsRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaShareFileNameHandlingOptionsRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaShareFileNameHandlingOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
