/**
 *  Linux_SambaPrinterSecurityForGlobalRepositoryExternal.h
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


#ifndef Linux_SambaPrinterSecurityForGlobalRepositoryExternal_h
#define Linux_SambaPrinterSecurityForGlobalRepositoryExternal_h

#include "Linux_SambaPrinterSecurityForGlobalInstanceName.h"
#include "Linux_SambaPrinterSecurityForGlobalRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaPrinterSecurityForGlobalRepositoryExternal {
  	
    public:
    Linux_SambaPrinterSecurityForGlobalRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaPrinterSecurityForGlobalRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaPrinterSecurityForGlobalInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaPrinterSecurityForGlobalRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaPrinterSecurityForGlobalRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaPrinterSecurityForGlobalInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaPrinterSecurityForGlobalRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaPrinterSecurityForGlobalRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaPrinterSecurityForGlobalInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
