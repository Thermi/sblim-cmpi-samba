/**
 *  Linux_SambaValidUsersForGlobalExternal.h
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


#ifndef Linux_SambaValidUsersForGlobalExternal_h
#define Linux_SambaValidUsersForGlobalExternal_h

#include "Linux_SambaValidUsersForGlobalInstance.h"
#include "Linux_SambaUserInstance.h"
#include "Linux_SambaGlobalOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaValidUsersForGlobalExternal {
  	
    public:
    Linux_SambaValidUsersForGlobalExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaValidUsersForGlobalExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaValidUsersForGlobalInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaValidUsersForGlobalInstanceEnumeration&);
     
    virtual Linux_SambaValidUsersForGlobalInstance getInstance(
     const char* *properties,
     const Linux_SambaValidUsersForGlobalInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaValidUsersForGlobalInstance&);
     
    virtual void createInstance(
     const Linux_SambaValidUsersForGlobalInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaValidUsersForGlobalInstanceName&);
    
    //association calls
    
    void referencesPartComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaValidUsersForGlobalInstanceEnumeration& instances);

    void referenceNamesPartComponent( 
     const char *nsp,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaValidUsersForGlobalInstanceNameEnumeration& instanceNames);

    void referencesGroupComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaValidUsersForGlobalInstanceEnumeration& instances);

    void referenceNamesGroupComponent( 
     const char *nsp,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaValidUsersForGlobalInstanceNameEnumeration& instanceNames);

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
