/**
 *  Linux_SambaForceGroupForGlobalExternal.h
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


#ifndef Linux_SambaForceGroupForGlobalExternal_h
#define Linux_SambaForceGroupForGlobalExternal_h

#include "Linux_SambaForceGroupForGlobalInstance.h"
#include "Linux_SambaGlobalOptionsInstance.h"
#include "Linux_SambaGroupInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaForceGroupForGlobalExternal {
  	
    public:
    Linux_SambaForceGroupForGlobalExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaForceGroupForGlobalExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaForceGroupForGlobalInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaForceGroupForGlobalInstanceEnumeration&);
     
    virtual Linux_SambaForceGroupForGlobalInstance getInstance(
     const char* *properties,
     const Linux_SambaForceGroupForGlobalInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaForceGroupForGlobalInstance&);
     
    virtual void createInstance(
     const Linux_SambaForceGroupForGlobalInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaForceGroupForGlobalInstanceName&);
    
    //association calls
    
    void referencesGroupComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGroupInstanceName& sourceInst,
     Linux_SambaForceGroupForGlobalInstanceEnumeration& instances);

    void referenceNamesGroupComponent( 
     const char *nsp,
     const Linux_SambaGroupInstanceName& sourceInst,
     Linux_SambaForceGroupForGlobalInstanceNameEnumeration& instanceNames);

    void referencesPartComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaForceGroupForGlobalInstanceEnumeration& instances);

    void referenceNamesPartComponent( 
     const char *nsp,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaForceGroupForGlobalInstanceNameEnumeration& instanceNames);

    void associatorsGroupComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGroupInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceEnumeration& instances);

    void associatorNamesGroupComponent( 
     const char *nsp,
     const Linux_SambaGroupInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceNameEnumeration& instanceNames);

    void associatorsPartComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGroupInstanceEnumeration& instances);

    void associatorNamesPartComponent( 
     const char *nsp,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGroupInstanceNameEnumeration& instanceNames);

     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
