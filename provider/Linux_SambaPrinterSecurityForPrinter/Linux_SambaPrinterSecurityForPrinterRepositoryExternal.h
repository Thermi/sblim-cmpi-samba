/**
 *  Linux_SambaPrinterSecurityForPrinterRepositoryExternal.h
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


#ifndef Linux_SambaPrinterSecurityForPrinterRepositoryExternal_h
#define Linux_SambaPrinterSecurityForPrinterRepositoryExternal_h

#include "Linux_SambaPrinterSecurityForPrinterInstanceName.h"
#include "Linux_SambaPrinterSecurityForPrinterRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaPrinterSecurityForPrinterRepositoryExternal {
  	
    public:
    Linux_SambaPrinterSecurityForPrinterRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaPrinterSecurityForPrinterRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaPrinterSecurityForPrinterInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaPrinterSecurityForPrinterRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaPrinterSecurityForPrinterInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaPrinterSecurityForPrinterRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaPrinterSecurityForPrinterRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaPrinterSecurityForPrinterInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
