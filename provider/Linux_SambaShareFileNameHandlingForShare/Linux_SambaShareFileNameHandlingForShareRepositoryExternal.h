/**
 *  Linux_SambaShareFileNameHandlingForShareRepositoryExternal.h
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


#ifndef Linux_SambaShareFileNameHandlingForShareRepositoryExternal_h
#define Linux_SambaShareFileNameHandlingForShareRepositoryExternal_h

#include "Linux_SambaShareFileNameHandlingForShareInstanceName.h"
#include "Linux_SambaShareFileNameHandlingForShareRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaShareFileNameHandlingForShareRepositoryExternal {
  	
    public:
    Linux_SambaShareFileNameHandlingForShareRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaShareFileNameHandlingForShareRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaShareFileNameHandlingForShareRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaShareFileNameHandlingForShareInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaShareFileNameHandlingForShareRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaShareFileNameHandlingForShareRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaShareFileNameHandlingForShareInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
