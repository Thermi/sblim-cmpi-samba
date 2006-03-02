// =======================================================================
// Linux_SambaAdminUsersForGlobalExternal.h
//     created on Fri, 24 Feb 2006 using ECUTE
// 
// Copyright (c) 2006, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE 
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Common Public License from
// http://oss.software.ibm.com/developerworks/opensource/license-cpl.html
//
// Author:        generated
//
// Contributors:
//                Rodrigo Ceron    <rceron@br.ibm.com>
//                Wolfgang Taphorn <taphorn@de.ibm.com>
//
// =======================================================================
//
// 
#ifndef Linux_SambaAdminUsersForGlobalExternal_h
#define Linux_SambaAdminUsersForGlobalExternal_h


#include "Linux_SambaAdminUsersForGlobalInstance.h"
#include "Linux_SambaUserInstance.h"
#include "Linux_SambaGlobalOptionsInstance.h"

#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaAdminUsersForGlobalExternal {
    
    private:
    CmpiBroker m_broker;
    CmpiContext m_context;
  	
    public:
    Linux_SambaAdminUsersForGlobalExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaAdminUsersForGlobalExternal();
    
    virtual void enumInstanceNames(
      const char *aNameSpaceP,
      Linux_SambaAdminUsersForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char *anNameSpaceP,
      const char** aPropertiesPP,
      Linux_SambaAdminUsersForGlobalInstanceEnumeration& anInstanceEnumeration);
     
    virtual Linux_SambaAdminUsersForGlobalInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaAdminUsersForGlobalInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaAdminUsersForGlobalInstance& anInstance);
     
    virtual Linux_SambaAdminUsersForGlobalInstanceName createInstance(
      const Linux_SambaAdminUsersForGlobalInstance& anInstance);
     
    virtual void deleteInstance(
      const Linux_SambaAdminUsersForGlobalInstanceName& anInstanceName);


    //association calls

    void referencesPartComponent( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
      Linux_SambaAdminUsersForGlobalInstanceEnumeration& anInstanceEnumeration);

    void referenceNamesPartComponent( 
      const char *aNameSpaceP,
      const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
      Linux_SambaAdminUsersForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);

    void referencesGroupComponent( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaUserInstanceName& aSourceInstanceName,
      Linux_SambaAdminUsersForGlobalInstanceEnumeration& anInstanceEnumeration);

    void referenceNamesGroupComponent( 
      const char *aNameSpaceP,
      const Linux_SambaUserInstanceName& aSourceInstanceName,
      Linux_SambaAdminUsersForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);

    void associatorsPartComponent( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
      Linux_SambaUserInstanceEnumeration& anInstanceEnumeration);

    void associatorNamesPartComponent( 
      const char *aNameSpaceP,
      const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
      Linux_SambaUserInstanceNameEnumeration& anInstanceNameEnumeration);

    void associatorsGroupComponent( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaUserInstanceName& aSourceInstanceName,
      Linux_SambaGlobalOptionsInstanceEnumeration& anInstanceEnumeration);

    void associatorNamesGroupComponent( 
      const char *aNameSpaceP,
      const Linux_SambaUserInstanceName& aSourceInstanceName,
      Linux_SambaGlobalOptionsInstanceNameEnumeration& anInstanceNameEnumeration); 
  
  };

}

#endif
