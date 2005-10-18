/**
 *  Linux_SambaGlobalProtocolForGlobalExternal.h
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


#ifndef Linux_SambaGlobalProtocolForGlobalExternal_h
#define Linux_SambaGlobalProtocolForGlobalExternal_h

#include "Linux_SambaGlobalProtocolForGlobalInstance.h"
#include "Linux_SambaGlobalProtocolOptionsInstance.h"
#include "Linux_SambaGlobalOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalProtocolForGlobalExternal {
  	
    public:
    Linux_SambaGlobalProtocolForGlobalExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaGlobalProtocolForGlobalExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaGlobalProtocolForGlobalInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaGlobalProtocolForGlobalInstanceEnumeration&);
     
    virtual Linux_SambaGlobalProtocolForGlobalInstance getInstance(
     const char* *properties,
     const Linux_SambaGlobalProtocolForGlobalInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaGlobalProtocolForGlobalInstance&);
     
    virtual void createInstance(
     const Linux_SambaGlobalProtocolForGlobalInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaGlobalProtocolForGlobalInstanceName&);
    
    //association calls
    
    void referencesSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalProtocolForGlobalInstanceEnumeration& instances);

    void referenceNamesSettingData( 
     const char *nsp,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalProtocolForGlobalInstanceNameEnumeration& instanceNames);

    void referencesManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalProtocolOptionsInstanceName& sourceInst,
     Linux_SambaGlobalProtocolForGlobalInstanceEnumeration& instances);

    void referenceNamesManagedElement( 
     const char *nsp,
     const Linux_SambaGlobalProtocolOptionsInstanceName& sourceInst,
     Linux_SambaGlobalProtocolForGlobalInstanceNameEnumeration& instanceNames);

    void associatorsSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalProtocolOptionsInstanceEnumeration& instances);

    void associatorNamesSettingData( 
     const char *nsp,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalProtocolOptionsInstanceNameEnumeration& instanceNames);

    void associatorsManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalProtocolOptionsInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceEnumeration& instances);

    void associatorNamesManagedElement( 
     const char *nsp,
     const Linux_SambaGlobalProtocolOptionsInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceNameEnumeration& instanceNames);

     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
