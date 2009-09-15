// =======================================================================
// Linux_SambaShareFileNameHandlingForShareExternal.h
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
#ifndef Linux_SambaShareFileNameHandlingForShareExternal_h
#define Linux_SambaShareFileNameHandlingForShareExternal_h


#include "Linux_SambaShareFileNameHandlingForShareInstance.h"
#include "Linux_SambaShareFileNameHandlingOptionsInstance.h"
#include "Linux_SambaShareOptionsInstance.h"

#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaShareFileNameHandlingForShareExternal {
    
    private:
    CmpiBroker m_broker;
    CmpiContext m_context;
  	
    public:
    Linux_SambaShareFileNameHandlingForShareExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaShareFileNameHandlingForShareExternal();
    
    virtual void enumInstanceNames(
      const char *aNameSpaceP,
      Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char *anNameSpaceP,
      const char** aPropertiesPP,
      Linux_SambaShareFileNameHandlingForShareInstanceEnumeration& anInstanceEnumeration);
     
    virtual Linux_SambaShareFileNameHandlingForShareInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaShareFileNameHandlingForShareInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaShareFileNameHandlingForShareInstance& anInstance);
     
    virtual Linux_SambaShareFileNameHandlingForShareInstanceName createInstance(
      const Linux_SambaShareFileNameHandlingForShareInstance& anInstance);
     
    virtual void deleteInstance(
      const Linux_SambaShareFileNameHandlingForShareInstanceName& anInstanceName);


    //association calls

    void referencesSettingData( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareFileNameHandlingForShareInstanceEnumeration& anInstanceEnumeration);

    void referenceNamesSettingData( 
      const char *aNameSpaceP,
      const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration& anInstanceNameEnumeration);

    void referencesManagedElement( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaShareFileNameHandlingOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareFileNameHandlingForShareInstanceEnumeration& anInstanceEnumeration);

    void referenceNamesManagedElement( 
      const char *aNameSpaceP,
      const Linux_SambaShareFileNameHandlingOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration& anInstanceNameEnumeration);

    void associatorsSettingData( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration& anInstanceEnumeration);

    void associatorNamesSettingData( 
      const char *aNameSpaceP,
      const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration& anInstanceNameEnumeration);

    void associatorsManagedElement( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaShareFileNameHandlingOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareOptionsInstanceEnumeration& anInstanceEnumeration);

    void associatorNamesManagedElement( 
      const char *aNameSpaceP,
      const Linux_SambaShareFileNameHandlingOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareOptionsInstanceNameEnumeration& anInstanceNameEnumeration); 
  
  };

}

#endif
