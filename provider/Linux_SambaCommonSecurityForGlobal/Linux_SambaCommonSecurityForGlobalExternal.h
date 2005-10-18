/**
 *  Linux_SambaCommonSecurityForGlobalExternal.h
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


#ifndef Linux_SambaCommonSecurityForGlobalExternal_h
#define Linux_SambaCommonSecurityForGlobalExternal_h

#include "Linux_SambaCommonSecurityForGlobalInstance.h"
#include "Linux_SambaCommonSecurityOptionsInstance.h"
#include "Linux_SambaGlobalOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaCommonSecurityForGlobalExternal {
  	
    public:
    Linux_SambaCommonSecurityForGlobalExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaCommonSecurityForGlobalExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaCommonSecurityForGlobalInstanceEnumeration&);
     
    virtual Linux_SambaCommonSecurityForGlobalInstance getInstance(
     const char* *properties,
     const Linux_SambaCommonSecurityForGlobalInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaCommonSecurityForGlobalInstance&);
     
    virtual void createInstance(
     const Linux_SambaCommonSecurityForGlobalInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaCommonSecurityForGlobalInstanceName&);
    
    //association calls
    
    void referencesSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaCommonSecurityForGlobalInstanceEnumeration& instances);

    void referenceNamesSettingData( 
     const char *nsp,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration& instanceNames);

    void referencesManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaCommonSecurityOptionsInstanceName& sourceInst,
     Linux_SambaCommonSecurityForGlobalInstanceEnumeration& instances);

    void referenceNamesManagedElement( 
     const char *nsp,
     const Linux_SambaCommonSecurityOptionsInstanceName& sourceInst,
     Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration& instanceNames);

    void associatorsSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaCommonSecurityOptionsInstanceEnumeration& instances);

    void associatorNamesSettingData( 
     const char *nsp,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaCommonSecurityOptionsInstanceNameEnumeration& instanceNames);

    void associatorsManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaCommonSecurityOptionsInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceEnumeration& instances);

    void associatorNamesManagedElement( 
     const char *nsp,
     const Linux_SambaCommonSecurityOptionsInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceNameEnumeration& instanceNames);

     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
