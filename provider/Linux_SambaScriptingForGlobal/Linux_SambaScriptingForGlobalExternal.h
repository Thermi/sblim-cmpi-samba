/**
 *  Linux_SambaScriptingForGlobalExternal.h
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


#ifndef Linux_SambaScriptingForGlobalExternal_h
#define Linux_SambaScriptingForGlobalExternal_h

#include "Linux_SambaScriptingForGlobalInstance.h"
#include "Linux_SambaGlobalOptionsInstance.h"
#include "Linux_SambaScriptingOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaScriptingForGlobalExternal {
  	
    public:
    Linux_SambaScriptingForGlobalExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaScriptingForGlobalExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaScriptingForGlobalInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaScriptingForGlobalInstanceEnumeration&);
     
    virtual Linux_SambaScriptingForGlobalInstance getInstance(
     const char* *properties,
     const Linux_SambaScriptingForGlobalInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaScriptingForGlobalInstance&);
     
    virtual void createInstance(
     const Linux_SambaScriptingForGlobalInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaScriptingForGlobalInstanceName&);
    
    //association calls
    
    void referencesManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaScriptingOptionsInstanceName& sourceInst,
     Linux_SambaScriptingForGlobalInstanceEnumeration& instances);

    void referenceNamesManagedElement( 
     const char *nsp,
     const Linux_SambaScriptingOptionsInstanceName& sourceInst,
     Linux_SambaScriptingForGlobalInstanceNameEnumeration& instanceNames);

    void referencesSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaScriptingForGlobalInstanceEnumeration& instances);

    void referenceNamesSettingData( 
     const char *nsp,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaScriptingForGlobalInstanceNameEnumeration& instanceNames);

    void associatorsManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaScriptingOptionsInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceEnumeration& instances);

    void associatorNamesManagedElement( 
     const char *nsp,
     const Linux_SambaScriptingOptionsInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceNameEnumeration& instanceNames);

    void associatorsSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaScriptingOptionsInstanceEnumeration& instances);

    void associatorNamesSettingData( 
     const char *nsp,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaScriptingOptionsInstanceNameEnumeration& instanceNames);

     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
