// =======================================================================
// Linux_SambaGlobalBrowseForGlobalExternal.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
// http://oss.software.ibm.com/developerworks/opensource/license-cpl.html
//
// Author:        generated
//
// Contributors:
//                Wolfgang Taphorn   <taphorn@de.ibm.com>
//                Mukunda Chowdaiah  <cmukunda@in.ibm.com>
//                Ashoka S Rao       <ashoka.rao@in.ibm.com>
//                Rodrigo Ceron      <rceron@br.ibm.com>
//
// =======================================================================
#ifndef Linux_SambaGlobalBrowseForGlobalExternal_h
#define Linux_SambaGlobalBrowseForGlobalExternal_h


#include "Linux_SambaGlobalBrowseForGlobalInstance.h"
#include "Linux_SambaGlobalBrowseOptionsInstance.h"
#include "Linux_SambaGlobalOptionsInstance.h"

#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalBrowseForGlobalExternal {
    
    private:
    CmpiBroker m_broker;
    CmpiContext m_context;
  	
    public:
    Linux_SambaGlobalBrowseForGlobalExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaGlobalBrowseForGlobalExternal();
    
    virtual void enumInstanceNames(
      const char *aNameSpaceP,
      Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char *anNameSpaceP,
      const char** aPropertiesPP,
      Linux_SambaGlobalBrowseForGlobalInstanceEnumeration& anInstanceEnumeration);
     
    virtual Linux_SambaGlobalBrowseForGlobalInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaGlobalBrowseForGlobalInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaGlobalBrowseForGlobalInstance& anInstance);
     
    virtual Linux_SambaGlobalBrowseForGlobalInstanceName createInstance(
      const Linux_SambaGlobalBrowseForGlobalInstance& anInstance);
     
    virtual void deleteInstance(
      const Linux_SambaGlobalBrowseForGlobalInstanceName& anInstanceName);


    //association calls

    void referencesSettingData( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
      Linux_SambaGlobalBrowseForGlobalInstanceEnumeration& anInstanceEnumeration);

    void referenceNamesSettingData( 
      const char *aNameSpaceP,
      const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
      Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);

    void referencesManagedElement( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaGlobalBrowseOptionsInstanceName& aSourceInstanceName,
      Linux_SambaGlobalBrowseForGlobalInstanceEnumeration& anInstanceEnumeration);

    void referenceNamesManagedElement( 
      const char *aNameSpaceP,
      const Linux_SambaGlobalBrowseOptionsInstanceName& aSourceInstanceName,
      Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);

    void associatorsSettingData( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
      Linux_SambaGlobalBrowseOptionsInstanceEnumeration& anInstanceEnumeration);

    void associatorNamesSettingData( 
      const char *aNameSpaceP,
      const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
      Linux_SambaGlobalBrowseOptionsInstanceNameEnumeration& anInstanceNameEnumeration);

    void associatorsManagedElement( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaGlobalBrowseOptionsInstanceName& aSourceInstanceName,
      Linux_SambaGlobalOptionsInstanceEnumeration& anInstanceEnumeration);

    void associatorNamesManagedElement( 
      const char *aNameSpaceP,
      const Linux_SambaGlobalBrowseOptionsInstanceName& aSourceInstanceName,
      Linux_SambaGlobalOptionsInstanceNameEnumeration& anInstanceNameEnumeration); 
  
  };

}

#endif
