// =======================================================================
// Linux_SambaInvalidUsersForPrinterExternal.h
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
#ifndef Linux_SambaInvalidUsersForPrinterExternal_h
#define Linux_SambaInvalidUsersForPrinterExternal_h


#include "Linux_SambaInvalidUsersForPrinterInstance.h"
#include "Linux_SambaUserInstance.h"
#include "Linux_SambaPrinterOptionsInstance.h"

#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaInvalidUsersForPrinterExternal {
    
    private:
    CmpiBroker m_broker;
    CmpiContext m_context;
  	
    public:
    Linux_SambaInvalidUsersForPrinterExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaInvalidUsersForPrinterExternal();
    
    virtual void enumInstanceNames(
      const char *aNameSpaceP,
      Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char *anNameSpaceP,
      const char** aPropertiesPP,
      Linux_SambaInvalidUsersForPrinterInstanceEnumeration& anInstanceEnumeration);
     
    virtual Linux_SambaInvalidUsersForPrinterInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaInvalidUsersForPrinterInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaInvalidUsersForPrinterInstance& anInstance);
     
    virtual Linux_SambaInvalidUsersForPrinterInstanceName createInstance(
      const Linux_SambaInvalidUsersForPrinterInstance& anInstance);
     
    virtual void deleteInstance(
      const Linux_SambaInvalidUsersForPrinterInstanceName& anInstanceName);


    //association calls

    void referencesPartComponent( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaInvalidUsersForPrinterInstanceEnumeration& anInstanceEnumeration);

    void referenceNamesPartComponent( 
      const char *aNameSpaceP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);

    void referencesGroupComponent( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaUserInstanceName& aSourceInstanceName,
      Linux_SambaInvalidUsersForPrinterInstanceEnumeration& anInstanceEnumeration);

    void referenceNamesGroupComponent( 
      const char *aNameSpaceP,
      const Linux_SambaUserInstanceName& aSourceInstanceName,
      Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);

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
