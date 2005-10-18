/**
 *  Linux_SambaShareProtocolOptionsRepositoryExternal.h
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


#ifndef Linux_SambaShareProtocolOptionsRepositoryExternal_h
#define Linux_SambaShareProtocolOptionsRepositoryExternal_h

#include "Linux_SambaShareProtocolOptionsInstanceName.h"
#include "Linux_SambaShareProtocolOptionsRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaShareProtocolOptionsRepositoryExternal {
  	
    public:
    Linux_SambaShareProtocolOptionsRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaShareProtocolOptionsRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaShareProtocolOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaShareProtocolOptionsRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaShareProtocolOptionsRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaShareProtocolOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaShareProtocolOptionsRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaShareProtocolOptionsRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaShareProtocolOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
