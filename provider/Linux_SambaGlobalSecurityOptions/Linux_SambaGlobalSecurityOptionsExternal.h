// =======================================================================
// Linux_SambaGlobalSecurityOptionsExternal.h
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
#ifndef Linux_SambaGlobalSecurityOptionsExternal_h
#define Linux_SambaGlobalSecurityOptionsExternal_h


#include "Linux_SambaGlobalSecurityOptionsInstance.h"

#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalSecurityOptionsExternal {
    
    private:
    CmpiBroker m_broker;
    CmpiContext m_context;
  	
    public:
    Linux_SambaGlobalSecurityOptionsExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaGlobalSecurityOptionsExternal();
    
    virtual void enumInstanceNames(
      const char *aNameSpaceP,
      Linux_SambaGlobalSecurityOptionsInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char *anNameSpaceP,
      const char** aPropertiesPP,
      Linux_SambaGlobalSecurityOptionsInstanceEnumeration& anInstanceEnumeration);
     
    virtual Linux_SambaGlobalSecurityOptionsInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaGlobalSecurityOptionsInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaGlobalSecurityOptionsInstance& anInstance);
     
    virtual Linux_SambaGlobalSecurityOptionsInstanceName createInstance(
      const Linux_SambaGlobalSecurityOptionsInstance& anInstance);
     
    virtual void deleteInstance(
      const Linux_SambaGlobalSecurityOptionsInstanceName& anInstanceName);

 
  
  };

}

#endif
