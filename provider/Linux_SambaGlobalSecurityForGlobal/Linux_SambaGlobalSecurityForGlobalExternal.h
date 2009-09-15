// =======================================================================
// Linux_SambaGlobalSecurityForGlobalExternal.h
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
#ifndef Linux_SambaGlobalSecurityForGlobalExternal_h
#define Linux_SambaGlobalSecurityForGlobalExternal_h


#include "Linux_SambaGlobalSecurityForGlobalInstance.h"
#include "Linux_SambaGlobalSecurityOptionsInstance.h"
#include "Linux_SambaGlobalOptionsInstance.h"

#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalSecurityForGlobalExternal {
    
    private:
    CmpiBroker m_broker;
    CmpiContext m_context;
  	
    public:
    Linux_SambaGlobalSecurityForGlobalExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaGlobalSecurityForGlobalExternal();
    
    virtual void enumInstanceNames(
      const char *aNameSpaceP,
      Linux_SambaGlobalSecurityForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char *anNameSpaceP,
      const char** aPropertiesPP,
      Linux_SambaGlobalSecurityForGlobalInstanceEnumeration& anInstanceEnumeration);
     
    virtual Linux_SambaGlobalSecurityForGlobalInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaGlobalSecurityForGlobalInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaGlobalSecurityForGlobalInstance& anInstance);
     
    virtual Linux_SambaGlobalSecurityForGlobalInstanceName createInstance(
      const Linux_SambaGlobalSecurityForGlobalInstance& anInstance);
     
    virtual void deleteInstance(
      const Linux_SambaGlobalSecurityForGlobalInstanceName& anInstanceName);


    //association calls

    void referencesSettingData( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
      Linux_SambaGlobalSecurityForGlobalInstanceEnumeration& anInstanceEnumeration);

    void referenceNamesSettingData( 
      const char *aNameSpaceP,
      const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
      Linux_SambaGlobalSecurityForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);

    void referencesManagedElement( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaGlobalSecurityOptionsInstanceName& aSourceInstanceName,
      Linux_SambaGlobalSecurityForGlobalInstanceEnumeration& anInstanceEnumeration);

    void referenceNamesManagedElement( 
      const char *aNameSpaceP,
      const Linux_SambaGlobalSecurityOptionsInstanceName& aSourceInstanceName,
      Linux_SambaGlobalSecurityForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);

    void associatorsSettingData( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
      Linux_SambaGlobalSecurityOptionsInstanceEnumeration& anInstanceEnumeration);

    void associatorNamesSettingData( 
      const char *aNameSpaceP,
      const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
      Linux_SambaGlobalSecurityOptionsInstanceNameEnumeration& anInstanceNameEnumeration);

    void associatorsManagedElement( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaGlobalSecurityOptionsInstanceName& aSourceInstanceName,
      Linux_SambaGlobalOptionsInstanceEnumeration& anInstanceEnumeration);

    void associatorNamesManagedElement( 
      const char *aNameSpaceP,
      const Linux_SambaGlobalSecurityOptionsInstanceName& aSourceInstanceName,
      Linux_SambaGlobalOptionsInstanceNameEnumeration& anInstanceNameEnumeration); 
  
  };

}

#endif
