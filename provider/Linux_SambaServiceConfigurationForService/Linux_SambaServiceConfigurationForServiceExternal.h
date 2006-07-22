// =======================================================================
// Linux_SambaServiceConfigurationForServiceExternal.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
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
//                Wolfgang Taphorn   <taphorn@de.ibm.com>
//                Mukunda Chowdaiah  <cmukunda@in.ibm.com>
//                Ashoka S Rao       <ashoka.rao@in.ibm.com>
//                Rodrigo Ceron      <rceron@br.ibm.com>
//
// =======================================================================
#ifndef Linux_SambaServiceConfigurationForServiceExternal_h
#define Linux_SambaServiceConfigurationForServiceExternal_h


#include "Linux_SambaServiceConfigurationForServiceInstance.h"
#include "Linux_SambaServiceConfigurationInstance.h"
#include "Linux_SambaServiceInstance.h"

#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaServiceConfigurationForServiceExternal {
    
    private:
    CmpiBroker m_broker;
    CmpiContext m_context;
  	
    public:
    Linux_SambaServiceConfigurationForServiceExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaServiceConfigurationForServiceExternal();
    
    virtual void enumInstanceNames(
      const char *aNameSpaceP,
      Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char *anNameSpaceP,
      const char** aPropertiesPP,
      Linux_SambaServiceConfigurationForServiceInstanceEnumeration& anInstanceEnumeration);
     
    virtual Linux_SambaServiceConfigurationForServiceInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaServiceConfigurationForServiceInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaServiceConfigurationForServiceInstance& anInstance);
     
    virtual Linux_SambaServiceConfigurationForServiceInstanceName createInstance(
      const Linux_SambaServiceConfigurationForServiceInstance& anInstance);
     
    virtual void deleteInstance(
      const Linux_SambaServiceConfigurationForServiceInstanceName& anInstanceName);


    //association calls

    void referencesConfiguration( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaServiceInstanceName& aSourceInstanceName,
      Linux_SambaServiceConfigurationForServiceInstanceEnumeration& anInstanceEnumeration);

    void referenceNamesConfiguration( 
      const char *aNameSpaceP,
      const Linux_SambaServiceInstanceName& aSourceInstanceName,
      Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration& anInstanceNameEnumeration);

    void referencesElement( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaServiceConfigurationInstanceName& aSourceInstanceName,
      Linux_SambaServiceConfigurationForServiceInstanceEnumeration& anInstanceEnumeration);

    void referenceNamesElement( 
      const char *aNameSpaceP,
      const Linux_SambaServiceConfigurationInstanceName& aSourceInstanceName,
      Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration& anInstanceNameEnumeration);

    void associatorsConfiguration( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaServiceInstanceName& aSourceInstanceName,
      Linux_SambaServiceConfigurationInstanceEnumeration& anInstanceEnumeration);

    void associatorNamesConfiguration( 
      const char *aNameSpaceP,
      const Linux_SambaServiceInstanceName& aSourceInstanceName,
      Linux_SambaServiceConfigurationInstanceNameEnumeration& anInstanceNameEnumeration);

    void associatorsElement( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaServiceConfigurationInstanceName& aSourceInstanceName,
      Linux_SambaServiceInstanceEnumeration& anInstanceEnumeration);

    void associatorNamesElement( 
      const char *aNameSpaceP,
      const Linux_SambaServiceConfigurationInstanceName& aSourceInstanceName,
      Linux_SambaServiceInstanceNameEnumeration& anInstanceNameEnumeration); 
  
  };

}

#endif
