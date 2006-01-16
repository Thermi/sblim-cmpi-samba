/**
 *  Linux_SambaCommonSecurityOptionsExternal.h
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


#ifndef Linux_SambaCommonSecurityOptionsExternal_h
#define Linux_SambaCommonSecurityOptionsExternal_h

#include "Linux_SambaCommonSecurityOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaCommonSecurityOptionsExternal {
  	
    public:
    Linux_SambaCommonSecurityOptionsExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaCommonSecurityOptionsExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaCommonSecurityOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaCommonSecurityOptionsInstanceEnumeration&);
     
    virtual Linux_SambaCommonSecurityOptionsInstance getInstance(
     const char* *properties,
     const Linux_SambaCommonSecurityOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaCommonSecurityOptionsInstance&);
     
    virtual void createInstance(
     const Linux_SambaCommonSecurityOptionsInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaCommonSecurityOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif