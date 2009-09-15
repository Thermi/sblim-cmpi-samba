// =======================================================================
// Linux_SambaShareSecurityForShareExternal.h
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
#ifndef Linux_SambaShareSecurityForShareExternal_h
#define Linux_SambaShareSecurityForShareExternal_h


#include "Linux_SambaShareSecurityForShareInstance.h"
#include "Linux_SambaShareSecurityOptionsInstance.h"
#include "Linux_SambaShareOptionsInstance.h"

#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaShareSecurityForShareExternal {
    
    private:
    CmpiBroker m_broker;
    CmpiContext m_context;
  	
    public:
    Linux_SambaShareSecurityForShareExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaShareSecurityForShareExternal();
    
    virtual void enumInstanceNames(
      const char *aNameSpaceP,
      Linux_SambaShareSecurityForShareInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char *anNameSpaceP,
      const char** aPropertiesPP,
      Linux_SambaShareSecurityForShareInstanceEnumeration& anInstanceEnumeration);
     
    virtual Linux_SambaShareSecurityForShareInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaShareSecurityForShareInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaShareSecurityForShareInstance& anInstance);
     
    virtual Linux_SambaShareSecurityForShareInstanceName createInstance(
      const Linux_SambaShareSecurityForShareInstance& anInstance);
     
    virtual void deleteInstance(
      const Linux_SambaShareSecurityForShareInstanceName& anInstanceName);


    //association calls

    void referencesSettingData( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareSecurityForShareInstanceEnumeration& anInstanceEnumeration);

    void referenceNamesSettingData( 
      const char *aNameSpaceP,
      const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareSecurityForShareInstanceNameEnumeration& anInstanceNameEnumeration);

    void referencesManagedElement( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaShareSecurityOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareSecurityForShareInstanceEnumeration& anInstanceEnumeration);

    void referenceNamesManagedElement( 
      const char *aNameSpaceP,
      const Linux_SambaShareSecurityOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareSecurityForShareInstanceNameEnumeration& anInstanceNameEnumeration);

    void associatorsSettingData( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareSecurityOptionsInstanceEnumeration& anInstanceEnumeration);

    void associatorNamesSettingData( 
      const char *aNameSpaceP,
      const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareSecurityOptionsInstanceNameEnumeration& anInstanceNameEnumeration);

    void associatorsManagedElement( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaShareSecurityOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareOptionsInstanceEnumeration& anInstanceEnumeration);

    void associatorNamesManagedElement( 
      const char *aNameSpaceP,
      const Linux_SambaShareSecurityOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareOptionsInstanceNameEnumeration& anInstanceNameEnumeration); 
  
  };

}

#endif
