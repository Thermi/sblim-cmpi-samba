/**
 *  Linux_SambaPrinterAdminForPrinterRepositoryExternal.h
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


#ifndef Linux_SambaPrinterAdminForPrinterRepositoryExternal_h
#define Linux_SambaPrinterAdminForPrinterRepositoryExternal_h

#include "Linux_SambaPrinterAdminForPrinterInstanceName.h"
#include "Linux_SambaPrinterAdminForPrinterRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaPrinterAdminForPrinterRepositoryExternal {
  	
    public:
    Linux_SambaPrinterAdminForPrinterRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaPrinterAdminForPrinterRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaPrinterAdminForPrinterInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaPrinterAdminForPrinterRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaPrinterAdminForPrinterRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaPrinterAdminForPrinterInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaPrinterAdminForPrinterRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaPrinterAdminForPrinterRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaPrinterAdminForPrinterInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
