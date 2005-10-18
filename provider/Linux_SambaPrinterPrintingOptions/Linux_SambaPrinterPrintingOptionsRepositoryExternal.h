/**
 *  Linux_SambaPrinterPrintingOptionsRepositoryExternal.h
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


#ifndef Linux_SambaPrinterPrintingOptionsRepositoryExternal_h
#define Linux_SambaPrinterPrintingOptionsRepositoryExternal_h

#include "Linux_SambaPrinterPrintingOptionsInstanceName.h"
#include "Linux_SambaPrinterPrintingOptionsRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaPrinterPrintingOptionsRepositoryExternal {
  	
    public:
    Linux_SambaPrinterPrintingOptionsRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaPrinterPrintingOptionsRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaPrinterPrintingOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaPrinterPrintingOptionsRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaPrinterPrintingOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaPrinterPrintingOptionsRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaPrinterPrintingOptionsRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaPrinterPrintingOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
