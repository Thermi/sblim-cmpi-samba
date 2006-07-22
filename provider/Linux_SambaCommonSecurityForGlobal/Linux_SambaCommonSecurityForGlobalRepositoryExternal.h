// =======================================================================
// Linux_SambaCommonSecurityForGlobalRepositoryExternal.h
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
#ifndef Linux_SambaCommonSecurityForGlobalRepositoryExternal_h
#define Linux_SambaCommonSecurityForGlobalRepositoryExternal_h

#include "Linux_SambaCommonSecurityForGlobalInstanceName.h"
#include "Linux_SambaCommonSecurityForGlobalRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaCommonSecurityForGlobalRepositoryExternal {
     
    private:
    CmpiBroker  m_broker;
    CmpiContext m_context;
    const static char *s_shadowNameSpaceP;
  	
    public:
    Linux_SambaCommonSecurityForGlobalRepositoryExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaCommonSecurityForGlobalRepositoryExternal();
    
    virtual void enumInstanceNames(
      Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char** aPropertiesPP,
      Linux_SambaCommonSecurityForGlobalRepositoryInstanceEnumeration& aRepositoryInstanceEnumeration);
     
    virtual Linux_SambaCommonSecurityForGlobalRepositoryInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaCommonSecurityForGlobalInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaCommonSecurityForGlobalRepositoryInstance& aRepositoryInstance);
     
    virtual Linux_SambaCommonSecurityForGlobalInstanceName createInstance(
      const Linux_SambaCommonSecurityForGlobalRepositoryInstance& aRepositoryInstance);
     
    virtual void deleteInstance(
      const Linux_SambaCommonSecurityForGlobalInstanceName& anInstanceName);
  
  };

}
#endif
