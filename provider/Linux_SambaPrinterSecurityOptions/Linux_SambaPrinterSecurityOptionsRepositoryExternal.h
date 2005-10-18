/**
 *  Linux_SambaPrinterSecurityOptionsRepositoryExternal.h
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


#ifndef Linux_SambaPrinterSecurityOptionsRepositoryExternal_h
#define Linux_SambaPrinterSecurityOptionsRepositoryExternal_h

#include "Linux_SambaPrinterSecurityOptionsInstanceName.h"
#include "Linux_SambaPrinterSecurityOptionsRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaPrinterSecurityOptionsRepositoryExternal {
  	
    public:
    Linux_SambaPrinterSecurityOptionsRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaPrinterSecurityOptionsRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaPrinterSecurityOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaPrinterSecurityOptionsRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaPrinterSecurityOptionsRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaPrinterSecurityOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaPrinterSecurityOptionsRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaPrinterSecurityOptionsRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaPrinterSecurityOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
