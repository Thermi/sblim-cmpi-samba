/**
 *  Linux_SambaAdminUsersForShareExternal.h
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


#ifndef Linux_SambaAdminUsersForShareExternal_h
#define Linux_SambaAdminUsersForShareExternal_h

#include "Linux_SambaAdminUsersForShareInstance.h"
#include "Linux_SambaUserInstance.h"
#include "Linux_SambaShareOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaAdminUsersForShareExternal {
  	
    public:
    Linux_SambaAdminUsersForShareExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaAdminUsersForShareExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaAdminUsersForShareInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaAdminUsersForShareInstanceEnumeration&);
     
    virtual Linux_SambaAdminUsersForShareInstance getInstance(
     const char* *properties,
     const Linux_SambaAdminUsersForShareInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaAdminUsersForShareInstance&);
     
    virtual void createInstance(
     const Linux_SambaAdminUsersForShareInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaAdminUsersForShareInstanceName&);
    
    //association calls
    
    void referencesPartComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaAdminUsersForShareInstanceEnumeration& instances);

    void referenceNamesPartComponent( 
     const char *nsp,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaAdminUsersForShareInstanceNameEnumeration& instanceNames);

    void referencesGroupComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaAdminUsersForShareInstanceEnumeration& instances);

    void referenceNamesGroupComponent( 
     const char *nsp,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaAdminUsersForShareInstanceNameEnumeration& instanceNames);

    void associatorsPartComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaUserInstanceEnumeration& instances);

    void associatorNamesPartComponent( 
     const char *nsp,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaUserInstanceNameEnumeration& instanceNames);

    void associatorsGroupComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaShareOptionsInstanceEnumeration& instances);

    void associatorNamesGroupComponent( 
     const char *nsp,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaShareOptionsInstanceNameEnumeration& instanceNames);

     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
