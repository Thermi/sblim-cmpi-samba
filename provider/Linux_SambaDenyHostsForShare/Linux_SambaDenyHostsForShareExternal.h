// =======================================================================
// Linux_SambaDenyHostsForShareExternal.h
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
#ifndef Linux_SambaDenyHostsForShareExternal_h
#define Linux_SambaDenyHostsForShareExternal_h


#include "Linux_SambaDenyHostsForShareInstance.h"
#include "Linux_SambaHostInstance.h"
#include "Linux_SambaShareOptionsInstance.h"

#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaDenyHostsForShareExternal {
    
    private:
    CmpiBroker m_broker;
    CmpiContext m_context;
  	
    public:
    Linux_SambaDenyHostsForShareExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaDenyHostsForShareExternal();
    
    virtual void enumInstanceNames(
      const char *aNameSpaceP,
      Linux_SambaDenyHostsForShareInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char *anNameSpaceP,
      const char** aPropertiesPP,
      Linux_SambaDenyHostsForShareInstanceEnumeration& anInstanceEnumeration);
     
    virtual Linux_SambaDenyHostsForShareInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaDenyHostsForShareInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaDenyHostsForShareInstance& anInstance);
     
    virtual Linux_SambaDenyHostsForShareInstanceName createInstance(
      const Linux_SambaDenyHostsForShareInstance& anInstance);
     
    virtual void deleteInstance(
      const Linux_SambaDenyHostsForShareInstanceName& anInstanceName);


    //association calls

    void referencesPartComponent( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
      Linux_SambaDenyHostsForShareInstanceEnumeration& anInstanceEnumeration);

    void referenceNamesPartComponent( 
      const char *aNameSpaceP,
      const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
      Linux_SambaDenyHostsForShareInstanceNameEnumeration& anInstanceNameEnumeration);

    void referencesGroupComponent( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaHostInstanceName& aSourceInstanceName,
      Linux_SambaDenyHostsForShareInstanceEnumeration& anInstanceEnumeration);

    void referenceNamesGroupComponent( 
      const char *aNameSpaceP,
      const Linux_SambaHostInstanceName& aSourceInstanceName,
      Linux_SambaDenyHostsForShareInstanceNameEnumeration& anInstanceNameEnumeration);

    void associatorsPartComponent( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
      Linux_SambaHostInstanceEnumeration& anInstanceEnumeration);

    void associatorNamesPartComponent( 
      const char *aNameSpaceP,
      const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
      Linux_SambaHostInstanceNameEnumeration& anInstanceNameEnumeration);

    void associatorsGroupComponent( 
      const char *aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaHostInstanceName& aSourceInstanceName,
      Linux_SambaShareOptionsInstanceEnumeration& anInstanceEnumeration);

    void associatorNamesGroupComponent( 
      const char *aNameSpaceP,
      const Linux_SambaHostInstanceName& aSourceInstanceName,
      Linux_SambaShareOptionsInstanceNameEnumeration& anInstanceNameEnumeration); 
  
  };

}

#endif
