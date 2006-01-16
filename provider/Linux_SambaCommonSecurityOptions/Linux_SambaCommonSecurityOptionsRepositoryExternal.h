/**
 *  Linux_SambaCommonSecurityOptionsRepositoryExternal.h
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


#ifndef Linux_SambaCommonSecurityOptionsRepositoryExternal_h
#define Linux_SambaCommonSecurityOptionsRepositoryExternal_h

#include "Linux_SambaCommonSecurityOptionsInstanceName.h"
#include "Linux_SambaCommonSecurityOptionsRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaCommonSecurityOptionsRepositoryExternal {
  	
    public:
    Linux_SambaCommonSecurityOptionsRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaCommonSecurityOptionsRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaCommonSecurityOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaCommonSecurityOptionsRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaCommonSecurityOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaCommonSecurityOptionsRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaCommonSecurityOptionsRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaCommonSecurityOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif