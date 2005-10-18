/**
 *  Linux_SambaPrinterPrintingForPrinterExternal.h
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


#ifndef Linux_SambaPrinterPrintingForPrinterExternal_h
#define Linux_SambaPrinterPrintingForPrinterExternal_h

#include "Linux_SambaPrinterPrintingForPrinterInstance.h"
#include "Linux_SambaPrinterPrintingOptionsInstance.h"
#include "Linux_SambaPrinterOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaPrinterPrintingForPrinterExternal {
  	
    public:
    Linux_SambaPrinterPrintingForPrinterExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaPrinterPrintingForPrinterExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaPrinterPrintingForPrinterInstanceEnumeration&);
     
    virtual Linux_SambaPrinterPrintingForPrinterInstance getInstance(
     const char* *properties,
     const Linux_SambaPrinterPrintingForPrinterInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaPrinterPrintingForPrinterInstance&);
     
    virtual void createInstance(
     const Linux_SambaPrinterPrintingForPrinterInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaPrinterPrintingForPrinterInstanceName&);
    
    //association calls
    
    void referencesSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaPrinterPrintingForPrinterInstanceEnumeration& instances);

    void referenceNamesSettingData( 
     const char *nsp,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration& instanceNames);

    void referencesManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterPrintingOptionsInstanceName& sourceInst,
     Linux_SambaPrinterPrintingForPrinterInstanceEnumeration& instances);

    void referenceNamesManagedElement( 
     const char *nsp,
     const Linux_SambaPrinterPrintingOptionsInstanceName& sourceInst,
     Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration& instanceNames);

    void associatorsSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaPrinterPrintingOptionsInstanceEnumeration& instances);

    void associatorNamesSettingData( 
     const char *nsp,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaPrinterPrintingOptionsInstanceNameEnumeration& instanceNames);

    void associatorsManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterPrintingOptionsInstanceName& sourceInst,
     Linux_SambaPrinterOptionsInstanceEnumeration& instances);

    void associatorNamesManagedElement( 
     const char *nsp,
     const Linux_SambaPrinterPrintingOptionsInstanceName& sourceInst,
     Linux_SambaPrinterOptionsInstanceNameEnumeration& instanceNames);

     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
