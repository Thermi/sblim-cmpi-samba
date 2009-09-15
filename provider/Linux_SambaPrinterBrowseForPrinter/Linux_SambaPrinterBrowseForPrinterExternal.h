// =======================================================================
// Linux_SambaPrinterBrowseForPrinterExternal.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaPrinterBrowseForPrinterExternal_h
#define Linux_SambaPrinterBrowseForPrinterExternal_h


#include "Linux_SambaPrinterBrowseForPrinterInstance.h"
#include "Linux_SambaPrinterOptionsInstance.h"
#include "Linux_SambaPrinterBrowseOptionsInstance.h"

#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaPrinterBrowseForPrinterExternal {
    
    private:
    CmpiBroker m_broker;
    CmpiContext m_context;
  	
    public:
    Linux_SambaPrinterBrowseForPrinterExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaPrinterBrowseForPrinterExternal();
    
    virtual void enumInstanceNames(
      const char *aNameSpaceP,
      Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char *anNameSpaceP,
      const char** aPropertiesPP,
      Linux_SambaPrinterBrowseForPrinterInstanceEnumeration& anInstanceEnumeration);
     
    virtual Linux_SambaPrinterBrowseForPrinterInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaPrinterBrowseForPrinterInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaPrinterBrowseForPrinterInstance& anInstance);
     
    virtual Linux_SambaPrinterBrowseForPrinterInstanceName createInstance(
      const Linux_SambaPrinterBrowseForPrinterInstance& anInstance);
     
    virtual void deleteInstance(
      const Linux_SambaPrinterBrowseForPrinterInstanceName& anInstanceName);


    //association calls

    void referencesManagedElement( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterBrowseOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterBrowseForPrinterInstanceEnumeration& anInstanceEnumeration);

    void referenceNamesManagedElement( 
      const char *aNameSpaceP,
      const Linux_SambaPrinterBrowseOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);

    void referencesSettingData( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterBrowseForPrinterInstanceEnumeration& anInstanceEnumeration);

    void referenceNamesSettingData( 
      const char *aNameSpaceP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);

    void associatorsManagedElement( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterBrowseOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterOptionsInstanceEnumeration& anInstanceEnumeration);

    void associatorNamesManagedElement( 
      const char *aNameSpaceP,
      const Linux_SambaPrinterBrowseOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterOptionsInstanceNameEnumeration& anInstanceNameEnumeration);

    void associatorsSettingData( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterBrowseOptionsInstanceEnumeration& anInstanceEnumeration);

    void associatorNamesSettingData( 
      const char *aNameSpaceP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterBrowseOptionsInstanceNameEnumeration& anInstanceNameEnumeration); 
  
  };

}

#endif
