// =======================================================================
// Linux_SambaCommonSecurityOptionsExternal.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Common Public License from
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
#ifndef Linux_SambaCommonSecurityOptionsExternal_h
#define Linux_SambaCommonSecurityOptionsExternal_h


#include "Linux_SambaCommonSecurityOptionsInstance.h"

#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaCommonSecurityOptionsExternal {
    
    private:
    CmpiBroker m_broker;
    CmpiContext m_context;
  	
    public:
    Linux_SambaCommonSecurityOptionsExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaCommonSecurityOptionsExternal();
    
    virtual void enumInstanceNames(
      const char *aNameSpaceP,
      Linux_SambaCommonSecurityOptionsInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char *anNameSpaceP,
      const char** aPropertiesPP,
      Linux_SambaCommonSecurityOptionsInstanceEnumeration& anInstanceEnumeration);
     
    virtual Linux_SambaCommonSecurityOptionsInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaCommonSecurityOptionsInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaCommonSecurityOptionsInstance& anInstance);
     
    virtual Linux_SambaCommonSecurityOptionsInstanceName createInstance(
      const Linux_SambaCommonSecurityOptionsInstance& anInstance);
     
    virtual void deleteInstance(
      const Linux_SambaCommonSecurityOptionsInstanceName& anInstanceName);

 
  
  };

}

#endif
