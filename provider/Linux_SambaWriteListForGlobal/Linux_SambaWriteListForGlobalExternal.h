/**
 *  Linux_SambaWriteListForGlobalExternal.h
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


#ifndef Linux_SambaWriteListForGlobalExternal_h
#define Linux_SambaWriteListForGlobalExternal_h

#include "Linux_SambaWriteListForGlobalInstance.h"
#include "Linux_SambaUserInstance.h"
#include "Linux_SambaGlobalOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaWriteListForGlobalExternal {
  	
    public:
    Linux_SambaWriteListForGlobalExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaWriteListForGlobalExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaWriteListForGlobalInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaWriteListForGlobalInstanceEnumeration&);
     
    virtual Linux_SambaWriteListForGlobalInstance getInstance(
     const char* *properties,
     const Linux_SambaWriteListForGlobalInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaWriteListForGlobalInstance&);
     
    virtual void createInstance(
     const Linux_SambaWriteListForGlobalInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaWriteListForGlobalInstanceName&);
    
    //association calls
    
    void referencesPartComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaWriteListForGlobalInstanceEnumeration& instances);

    void referenceNamesPartComponent( 
     const char *nsp,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaWriteListForGlobalInstanceNameEnumeration& instanceNames);

    void referencesGroupComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaWriteListForGlobalInstanceEnumeration& instances);

    void referenceNamesGroupComponent( 
     const char *nsp,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaWriteListForGlobalInstanceNameEnumeration& instanceNames);

    void associatorsPartComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaUserInstanceEnumeration& instances);

    void associatorNamesPartComponent( 
     const char *nsp,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaUserInstanceNameEnumeration& instanceNames);

    void associatorsGroupComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceEnumeration& instances);

    void associatorNamesGroupComponent( 
     const char *nsp,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceNameEnumeration& instanceNames);

     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
