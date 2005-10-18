/**
 *  Linux_SambaPrinterPrintingForPrinterRepositoryExternal.h
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


#ifndef Linux_SambaPrinterPrintingForPrinterRepositoryExternal_h
#define Linux_SambaPrinterPrintingForPrinterRepositoryExternal_h

#include "Linux_SambaPrinterPrintingForPrinterInstanceName.h"
#include "Linux_SambaPrinterPrintingForPrinterRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaPrinterPrintingForPrinterRepositoryExternal {
  	
    public:
    Linux_SambaPrinterPrintingForPrinterRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaPrinterPrintingForPrinterRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaPrinterPrintingForPrinterRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaPrinterPrintingForPrinterInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaPrinterPrintingForPrinterRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaPrinterPrintingForPrinterRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaPrinterPrintingForPrinterInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
