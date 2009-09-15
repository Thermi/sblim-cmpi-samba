// =======================================================================
// Linux_SambaValidUsersForPrinterExternal.h
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
#ifndef Linux_SambaValidUsersForPrinterExternal_h
#define Linux_SambaValidUsersForPrinterExternal_h


#include "Linux_SambaValidUsersForPrinterInstance.h"
#include "Linux_SambaUserInstance.h"
#include "Linux_SambaPrinterOptionsInstance.h"

#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaValidUsersForPrinterExternal {
    
    private:
    CmpiBroker m_broker;
    CmpiContext m_context;
  	
    public:
    Linux_SambaValidUsersForPrinterExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaValidUsersForPrinterExternal();
    
    virtual void enumInstanceNames(
      const char *aNameSpaceP,
      Linux_SambaValidUsersForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char *anNameSpaceP,
      const char** aPropertiesPP,
      Linux_SambaValidUsersForPrinterInstanceEnumeration& anInstanceEnumeration);
     
    virtual Linux_SambaValidUsersForPrinterInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaValidUsersForPrinterInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaValidUsersForPrinterInstance& anInstance);
     
    virtual Linux_SambaValidUsersForPrinterInstanceName createInstance(
      const Linux_SambaValidUsersForPrinterInstance& anInstance);
     
    virtual void deleteInstance(
      const Linux_SambaValidUsersForPrinterInstanceName& anInstanceName);


    //association calls

    void referencesPartComponent( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaValidUsersForPrinterInstanceEnumeration& anInstanceEnumeration);

    void referenceNamesPartComponent( 
      const char *aNameSpaceP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaValidUsersForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);

    void referencesGroupComponent( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaUserInstanceName& aSourceInstanceName,
      Linux_SambaValidUsersForPrinterInstanceEnumeration& anInstanceEnumeration);

    void referenceNamesGroupComponent( 
      const char *aNameSpaceP,
      const Linux_SambaUserInstanceName& aSourceInstanceName,
      Linux_SambaValidUsersForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);

    void associatorsPartComponent( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaUserInstanceEnumeration& anInstanceEnumeration);

    void associatorNamesPartComponent( 
      const char *aNameSpaceP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaUserInstanceNameEnumeration& anInstanceNameEnumeration);

    void associatorsGroupComponent( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaUserInstanceName& aSourceInstanceName,
      Linux_SambaPrinterOptionsInstanceEnumeration& anInstanceEnumeration);

    void associatorNamesGroupComponent( 
      const char *aNameSpaceP,
      const Linux_SambaUserInstanceName& aSourceInstanceName,
      Linux_SambaPrinterOptionsInstanceNameEnumeration& anInstanceNameEnumeration); 
  
  };

}

#endif
