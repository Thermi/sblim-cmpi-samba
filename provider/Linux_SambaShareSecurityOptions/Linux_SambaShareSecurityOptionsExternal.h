/**
 *  Linux_SambaShareSecurityOptionsExternal.h
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


#ifndef Linux_SambaShareSecurityOptionsExternal_h
#define Linux_SambaShareSecurityOptionsExternal_h

#include "Linux_SambaShareSecurityOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaShareSecurityOptionsExternal {
  	
    public:
    Linux_SambaShareSecurityOptionsExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaShareSecurityOptionsExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaShareSecurityOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaShareSecurityOptionsInstanceEnumeration&);
     
    virtual Linux_SambaShareSecurityOptionsInstance getInstance(
     const char* *properties,
     const Linux_SambaShareSecurityOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaShareSecurityOptionsInstance&);
     
    virtual void createInstance(
     const Linux_SambaShareSecurityOptionsInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaShareSecurityOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
