/**
 *  Linux_SambaGlobalProtocolOptionsRepositoryExternal.h
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


#ifndef Linux_SambaGlobalProtocolOptionsRepositoryExternal_h
#define Linux_SambaGlobalProtocolOptionsRepositoryExternal_h

#include "Linux_SambaGlobalProtocolOptionsInstanceName.h"
#include "Linux_SambaGlobalProtocolOptionsRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalProtocolOptionsRepositoryExternal {
  	
    public:
    Linux_SambaGlobalProtocolOptionsRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaGlobalProtocolOptionsRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaGlobalProtocolOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaGlobalProtocolOptionsRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaGlobalProtocolOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaGlobalProtocolOptionsRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaGlobalProtocolOptionsRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaGlobalProtocolOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
