// =======================================================================
// Linux_SambaShareForServiceExternal.h
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
#ifndef Linux_SambaShareForServiceExternal_h
#define Linux_SambaShareForServiceExternal_h


#include "Linux_SambaShareForServiceInstance.h"
#include "Linux_SambaShareOptionsInstance.h"
#include "Linux_SambaServiceInstance.h"

#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaShareForServiceExternal {
    
    private:
    CmpiBroker m_broker;
    CmpiContext m_context;
  	
    public:
    Linux_SambaShareForServiceExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaShareForServiceExternal();
    
    virtual void enumInstanceNames(
      const char *aNameSpaceP,
      Linux_SambaShareForServiceInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char *anNameSpaceP,
      const char** aPropertiesPP,
      Linux_SambaShareForServiceInstanceEnumeration& anInstanceEnumeration);
     
    virtual Linux_SambaShareForServiceInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaShareForServiceInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaShareForServiceInstance& anInstance);
     
    virtual Linux_SambaShareForServiceInstanceName createInstance(
      const Linux_SambaShareForServiceInstance& anInstance);
     
    virtual void deleteInstance(
      const Linux_SambaShareForServiceInstanceName& anInstanceName);


    //association calls

    void referencesSettingData( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaServiceInstanceName& aSourceInstanceName,
      Linux_SambaShareForServiceInstanceEnumeration& anInstanceEnumeration);

    void referenceNamesSettingData( 
      const char *aNameSpaceP,
      const Linux_SambaServiceInstanceName& aSourceInstanceName,
      Linux_SambaShareForServiceInstanceNameEnumeration& anInstanceNameEnumeration);

    void referencesManagedElement( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareForServiceInstanceEnumeration& anInstanceEnumeration);

    void referenceNamesManagedElement( 
      const char *aNameSpaceP,
      const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareForServiceInstanceNameEnumeration& anInstanceNameEnumeration);

    void associatorsSettingData( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaServiceInstanceName& aSourceInstanceName,
      Linux_SambaShareOptionsInstanceEnumeration& anInstanceEnumeration);

    void associatorNamesSettingData( 
      const char *aNameSpaceP,
      const Linux_SambaServiceInstanceName& aSourceInstanceName,
      Linux_SambaShareOptionsInstanceNameEnumeration& anInstanceNameEnumeration);

    void associatorsManagedElement( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
      Linux_SambaServiceInstanceEnumeration& anInstanceEnumeration);

    void associatorNamesManagedElement( 
      const char *aNameSpaceP,
      const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
      Linux_SambaServiceInstanceNameEnumeration& anInstanceNameEnumeration); 
  
  };

}

#endif
