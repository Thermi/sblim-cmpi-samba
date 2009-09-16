// =======================================================================
// Linux_SambaPrinterSecurityForGlobalExternal.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
// http://www.opensource.org/licenses/eclipse-1.0.php
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
#ifndef Linux_SambaPrinterSecurityForGlobalExternal_h
#define Linux_SambaPrinterSecurityForGlobalExternal_h


#include "Linux_SambaPrinterSecurityForGlobalInstance.h"
#include "Linux_SambaPrinterSecurityOptionsInstance.h"
#include "Linux_SambaGlobalOptionsInstance.h"

#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaPrinterSecurityForGlobalExternal {
    
    private:
    CmpiBroker m_broker;
    CmpiContext m_context;
  	
    public:
    Linux_SambaPrinterSecurityForGlobalExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaPrinterSecurityForGlobalExternal();
    
    virtual void enumInstanceNames(
      const char *aNameSpaceP,
      Linux_SambaPrinterSecurityForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char *anNameSpaceP,
      const char** aPropertiesPP,
      Linux_SambaPrinterSecurityForGlobalInstanceEnumeration& anInstanceEnumeration);
     
    virtual Linux_SambaPrinterSecurityForGlobalInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaPrinterSecurityForGlobalInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaPrinterSecurityForGlobalInstance& anInstance);
     
    virtual Linux_SambaPrinterSecurityForGlobalInstanceName createInstance(
      const Linux_SambaPrinterSecurityForGlobalInstance& anInstance);
     
    virtual void deleteInstance(
      const Linux_SambaPrinterSecurityForGlobalInstanceName& anInstanceName);


    //association calls

    void referencesSettingData( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterSecurityForGlobalInstanceEnumeration& anInstanceEnumeration);

    void referenceNamesSettingData( 
      const char *aNameSpaceP,
      const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterSecurityForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);

    void referencesManagedElement( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterSecurityOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterSecurityForGlobalInstanceEnumeration& anInstanceEnumeration);

    void referenceNamesManagedElement( 
      const char *aNameSpaceP,
      const Linux_SambaPrinterSecurityOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterSecurityForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);

    void associatorsSettingData( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterSecurityOptionsInstanceEnumeration& anInstanceEnumeration);

    void associatorNamesSettingData( 
      const char *aNameSpaceP,
      const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterSecurityOptionsInstanceNameEnumeration& anInstanceNameEnumeration);

    void associatorsManagedElement( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterSecurityOptionsInstanceName& aSourceInstanceName,
      Linux_SambaGlobalOptionsInstanceEnumeration& anInstanceEnumeration);

    void associatorNamesManagedElement( 
      const char *aNameSpaceP,
      const Linux_SambaPrinterSecurityOptionsInstanceName& aSourceInstanceName,
      Linux_SambaGlobalOptionsInstanceNameEnumeration& anInstanceNameEnumeration); 
  
  };

}

#endif
