/**
 *  Linux_SambaShareSecurityOptionsRepositoryExternal.h
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


#ifndef Linux_SambaShareSecurityOptionsRepositoryExternal_h
#define Linux_SambaShareSecurityOptionsRepositoryExternal_h

#include "Linux_SambaShareSecurityOptionsInstanceName.h"
#include "Linux_SambaShareSecurityOptionsRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaShareSecurityOptionsRepositoryExternal {
  	
    public:
    Linux_SambaShareSecurityOptionsRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaShareSecurityOptionsRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaShareSecurityOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaShareSecurityOptionsRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaShareSecurityOptionsRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaShareSecurityOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaShareSecurityOptionsRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaShareSecurityOptionsRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaShareSecurityOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
