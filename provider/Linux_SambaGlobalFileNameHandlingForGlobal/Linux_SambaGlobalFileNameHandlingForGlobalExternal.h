/**
 *  Linux_SambaGlobalFileNameHandlingForGlobalExternal.h
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


#ifndef Linux_SambaGlobalFileNameHandlingForGlobalExternal_h
#define Linux_SambaGlobalFileNameHandlingForGlobalExternal_h

#include "Linux_SambaGlobalFileNameHandlingForGlobalInstance.h"
#include "Linux_SambaGlobalOptionsInstance.h"
#include "Linux_SambaGlobalFileNameHandlingOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalFileNameHandlingForGlobalExternal {
  	
    public:
    Linux_SambaGlobalFileNameHandlingForGlobalExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaGlobalFileNameHandlingForGlobalExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaGlobalFileNameHandlingForGlobalInstanceEnumeration&);
     
    virtual Linux_SambaGlobalFileNameHandlingForGlobalInstance getInstance(
     const char* *properties,
     const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaGlobalFileNameHandlingForGlobalInstance&);
     
    virtual void createInstance(
     const Linux_SambaGlobalFileNameHandlingForGlobalInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName&);
    
    //association calls
    
    void referencesManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& sourceInst,
     Linux_SambaGlobalFileNameHandlingForGlobalInstanceEnumeration& instances);

    void referenceNamesManagedElement( 
     const char *nsp,
     const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& sourceInst,
     Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration& instanceNames);

    void referencesSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalFileNameHandlingForGlobalInstanceEnumeration& instances);

    void referenceNamesSettingData( 
     const char *nsp,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration& instanceNames);

    void associatorsManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceEnumeration& instances);

    void associatorNamesManagedElement( 
     const char *nsp,
     const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceNameEnumeration& instanceNames);

    void associatorsSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumeration& instances);

    void associatorNamesSettingData( 
     const char *nsp,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration& instanceNames);

     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
