/**
 *  Linux_SambaUsersForServiceExternal.h
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


#ifndef Linux_SambaUsersForServiceExternal_h
#define Linux_SambaUsersForServiceExternal_h

#include "Linux_SambaUsersForServiceInstance.h"
#include "Linux_SambaUserInstance.h"
#include "Linux_SambaServiceInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaUsersForServiceExternal {
  	
    public:
    Linux_SambaUsersForServiceExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaUsersForServiceExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaUsersForServiceInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaUsersForServiceInstanceEnumeration&);
     
    virtual Linux_SambaUsersForServiceInstance getInstance(
     const char* *properties,
     const Linux_SambaUsersForServiceInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaUsersForServiceInstance&);
     
    virtual void createInstance(
     const Linux_SambaUsersForServiceInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaUsersForServiceInstanceName&);
    
    //association calls
    
    void referencesPartComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaUsersForServiceInstanceEnumeration& instances);

    void referenceNamesPartComponent( 
     const char *nsp,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaUsersForServiceInstanceNameEnumeration& instanceNames);

    void referencesGroupComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaUsersForServiceInstanceEnumeration& instances);

    void referenceNamesGroupComponent( 
     const char *nsp,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaUsersForServiceInstanceNameEnumeration& instanceNames);

    void associatorsPartComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaUserInstanceEnumeration& instances);

    void associatorNamesPartComponent( 
     const char *nsp,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaUserInstanceNameEnumeration& instanceNames);

    void associatorsGroupComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaServiceInstanceEnumeration& instances);

    void associatorNamesGroupComponent( 
     const char *nsp,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaServiceInstanceNameEnumeration& instanceNames);

     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
