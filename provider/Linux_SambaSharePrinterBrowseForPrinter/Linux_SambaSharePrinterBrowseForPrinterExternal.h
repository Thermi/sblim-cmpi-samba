/**
 *  Linux_SambaSharePrinterBrowseForPrinterExternal.h
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


#ifndef Linux_SambaSharePrinterBrowseForPrinterExternal_h
#define Linux_SambaSharePrinterBrowseForPrinterExternal_h

#include "Linux_SambaSharePrinterBrowseForPrinterInstance.h"
#include "Linux_SambaPrinterOptionsInstance.h"
#include "Linux_SambaSharePrinterBrowseOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaSharePrinterBrowseForPrinterExternal {
  	
    public:
    Linux_SambaSharePrinterBrowseForPrinterExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaSharePrinterBrowseForPrinterExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaSharePrinterBrowseForPrinterInstanceEnumeration&);
     
    virtual Linux_SambaSharePrinterBrowseForPrinterInstance getInstance(
     const char* *properties,
     const Linux_SambaSharePrinterBrowseForPrinterInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaSharePrinterBrowseForPrinterInstance&);
     
    virtual void createInstance(
     const Linux_SambaSharePrinterBrowseForPrinterInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaSharePrinterBrowseForPrinterInstanceName&);
    
    //association calls
    
    void referencesManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaSharePrinterBrowseOptionsInstanceName& sourceInst,
     Linux_SambaSharePrinterBrowseForPrinterInstanceEnumeration& instances);

    void referenceNamesManagedElement( 
     const char *nsp,
     const Linux_SambaSharePrinterBrowseOptionsInstanceName& sourceInst,
     Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration& instanceNames);

    void referencesSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaSharePrinterBrowseForPrinterInstanceEnumeration& instances);

    void referenceNamesSettingData( 
     const char *nsp,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration& instanceNames);

    void associatorsManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaSharePrinterBrowseOptionsInstanceName& sourceInst,
     Linux_SambaPrinterOptionsInstanceEnumeration& instances);

    void associatorNamesManagedElement( 
     const char *nsp,
     const Linux_SambaSharePrinterBrowseOptionsInstanceName& sourceInst,
     Linux_SambaPrinterOptionsInstanceNameEnumeration& instanceNames);

    void associatorsSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration& instances);

    void associatorNamesSettingData( 
     const char *nsp,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaSharePrinterBrowseOptionsInstanceNameEnumeration& instanceNames);

     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
