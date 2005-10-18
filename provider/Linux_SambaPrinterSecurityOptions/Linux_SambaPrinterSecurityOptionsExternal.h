/**
 *  Linux_SambaPrinterSecurityOptionsExternal.h
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


#ifndef Linux_SambaPrinterSecurityOptionsExternal_h
#define Linux_SambaPrinterSecurityOptionsExternal_h

#include "Linux_SambaPrinterSecurityOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaPrinterSecurityOptionsExternal {
  	
    public:
    Linux_SambaPrinterSecurityOptionsExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaPrinterSecurityOptionsExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaPrinterSecurityOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaPrinterSecurityOptionsInstanceEnumeration&);
     
    virtual Linux_SambaPrinterSecurityOptionsInstance getInstance(
     const char* *properties,
     const Linux_SambaPrinterSecurityOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaPrinterSecurityOptionsInstance&);
     
    virtual void createInstance(
     const Linux_SambaPrinterSecurityOptionsInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaPrinterSecurityOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
