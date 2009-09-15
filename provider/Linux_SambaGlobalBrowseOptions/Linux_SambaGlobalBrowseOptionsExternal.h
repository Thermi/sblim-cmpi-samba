// =======================================================================
// Linux_SambaGlobalBrowseOptionsExternal.h
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
#ifndef Linux_SambaGlobalBrowseOptionsExternal_h
#define Linux_SambaGlobalBrowseOptionsExternal_h


#include "Linux_SambaGlobalBrowseOptionsInstance.h"

#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalBrowseOptionsExternal {
    
    private:
    CmpiBroker m_broker;
    CmpiContext m_context;
  	
    public:
    Linux_SambaGlobalBrowseOptionsExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaGlobalBrowseOptionsExternal();
    
    virtual void enumInstanceNames(
      const char *aNameSpaceP,
      Linux_SambaGlobalBrowseOptionsInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char *anNameSpaceP,
      const char** aPropertiesPP,
      Linux_SambaGlobalBrowseOptionsInstanceEnumeration& anInstanceEnumeration);
     
    virtual Linux_SambaGlobalBrowseOptionsInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaGlobalBrowseOptionsInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaGlobalBrowseOptionsInstance& anInstance);
     
    virtual Linux_SambaGlobalBrowseOptionsInstanceName createInstance(
      const Linux_SambaGlobalBrowseOptionsInstance& anInstance);
     
    virtual void deleteInstance(
      const Linux_SambaGlobalBrowseOptionsInstanceName& anInstanceName);

 
  
  };

}

#endif
