/**
 *  Linux_SambaPrinterPrintingOptionsExternal.h
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


#ifndef Linux_SambaPrinterPrintingOptionsExternal_h
#define Linux_SambaPrinterPrintingOptionsExternal_h

#include "Linux_SambaPrinterPrintingOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaPrinterPrintingOptionsExternal {
  	
    public:
    Linux_SambaPrinterPrintingOptionsExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaPrinterPrintingOptionsExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaPrinterPrintingOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaPrinterPrintingOptionsInstanceEnumeration&);
     
    virtual Linux_SambaPrinterPrintingOptionsInstance getInstance(
     const char* *properties,
     const Linux_SambaPrinterPrintingOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaPrinterPrintingOptionsInstance&);
     
    virtual void createInstance(
     const Linux_SambaPrinterPrintingOptionsInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaPrinterPrintingOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
