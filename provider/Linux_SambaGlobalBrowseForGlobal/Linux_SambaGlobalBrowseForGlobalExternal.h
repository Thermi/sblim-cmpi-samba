/**
 *  Linux_SambaGlobalBrowseForGlobalExternal.h
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


#ifndef Linux_SambaGlobalBrowseForGlobalExternal_h
#define Linux_SambaGlobalBrowseForGlobalExternal_h

#include "Linux_SambaGlobalBrowseForGlobalInstance.h"
#include "Linux_SambaGlobalBrowseOptionsInstance.h"
#include "Linux_SambaGlobalOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalBrowseForGlobalExternal {
  	
    public:
    Linux_SambaGlobalBrowseForGlobalExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaGlobalBrowseForGlobalExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaGlobalBrowseForGlobalInstanceEnumeration&);
     
    virtual Linux_SambaGlobalBrowseForGlobalInstance getInstance(
     const char* *properties,
     const Linux_SambaGlobalBrowseForGlobalInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaGlobalBrowseForGlobalInstance&);
     
    virtual void createInstance(
     const Linux_SambaGlobalBrowseForGlobalInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaGlobalBrowseForGlobalInstanceName&);
    
    //association calls
    
    void referencesSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalBrowseForGlobalInstanceEnumeration& instances);

    void referenceNamesSettingData( 
     const char *nsp,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration& instanceNames);

    void referencesManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalBrowseOptionsInstanceName& sourceInst,
     Linux_SambaGlobalBrowseForGlobalInstanceEnumeration& instances);

    void referenceNamesManagedElement( 
     const char *nsp,
     const Linux_SambaGlobalBrowseOptionsInstanceName& sourceInst,
     Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration& instanceNames);

    void associatorsSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalBrowseOptionsInstanceEnumeration& instances);

    void associatorNamesSettingData( 
     const char *nsp,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalBrowseOptionsInstanceNameEnumeration& instanceNames);

    void associatorsManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalBrowseOptionsInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceEnumeration& instances);

    void associatorNamesManagedElement( 
     const char *nsp,
     const Linux_SambaGlobalBrowseOptionsInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceNameEnumeration& instanceNames);

     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
