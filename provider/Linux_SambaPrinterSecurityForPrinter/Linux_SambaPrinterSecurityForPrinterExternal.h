// =======================================================================
// Linux_SambaPrinterSecurityForPrinterExternal.h
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
#ifndef Linux_SambaPrinterSecurityForPrinterExternal_h
#define Linux_SambaPrinterSecurityForPrinterExternal_h


#include "Linux_SambaPrinterSecurityForPrinterInstance.h"
#include "Linux_SambaPrinterSecurityOptionsInstance.h"
#include "Linux_SambaPrinterOptionsInstance.h"

#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaPrinterSecurityForPrinterExternal {
    
    private:
    CmpiBroker m_broker;
    CmpiContext m_context;
  	
    public:
    Linux_SambaPrinterSecurityForPrinterExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaPrinterSecurityForPrinterExternal();
    
    virtual void enumInstanceNames(
      const char *aNameSpaceP,
      Linux_SambaPrinterSecurityForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char *anNameSpaceP,
      const char** aPropertiesPP,
      Linux_SambaPrinterSecurityForPrinterInstanceEnumeration& anInstanceEnumeration);
     
    virtual Linux_SambaPrinterSecurityForPrinterInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaPrinterSecurityForPrinterInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaPrinterSecurityForPrinterInstance& anInstance);
     
    virtual Linux_SambaPrinterSecurityForPrinterInstanceName createInstance(
      const Linux_SambaPrinterSecurityForPrinterInstance& anInstance);
     
    virtual void deleteInstance(
      const Linux_SambaPrinterSecurityForPrinterInstanceName& anInstanceName);


    //association calls

    void referencesSettingData( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterSecurityForPrinterInstanceEnumeration& anInstanceEnumeration);

    void referenceNamesSettingData( 
      const char *aNameSpaceP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterSecurityForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);

    void referencesManagedElement( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterSecurityOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterSecurityForPrinterInstanceEnumeration& anInstanceEnumeration);

    void referenceNamesManagedElement( 
      const char *aNameSpaceP,
      const Linux_SambaPrinterSecurityOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterSecurityForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);

    void associatorsSettingData( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterSecurityOptionsInstanceEnumeration& anInstanceEnumeration);

    void associatorNamesSettingData( 
      const char *aNameSpaceP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterSecurityOptionsInstanceNameEnumeration& anInstanceNameEnumeration);

    void associatorsManagedElement( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterSecurityOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterOptionsInstanceEnumeration& anInstanceEnumeration);

    void associatorNamesManagedElement( 
      const char *aNameSpaceP,
      const Linux_SambaPrinterSecurityOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterOptionsInstanceNameEnumeration& anInstanceNameEnumeration); 
  
  };

}

#endif
