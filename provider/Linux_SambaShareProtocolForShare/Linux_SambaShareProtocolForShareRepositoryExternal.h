/**
 *  Linux_SambaShareProtocolForShareRepositoryExternal.h
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


#ifndef Linux_SambaShareProtocolForShareRepositoryExternal_h
#define Linux_SambaShareProtocolForShareRepositoryExternal_h

#include "Linux_SambaShareProtocolForShareInstanceName.h"
#include "Linux_SambaShareProtocolForShareRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaShareProtocolForShareRepositoryExternal {
  	
    public:
    Linux_SambaShareProtocolForShareRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaShareProtocolForShareRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaShareProtocolForShareInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaShareProtocolForShareRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaShareProtocolForShareRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaShareProtocolForShareInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaShareProtocolForShareRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaShareProtocolForShareRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaShareProtocolForShareInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
