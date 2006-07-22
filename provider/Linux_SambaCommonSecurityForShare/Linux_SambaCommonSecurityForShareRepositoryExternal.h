// =======================================================================
// Linux_SambaCommonSecurityForShareRepositoryExternal.h
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
#ifndef Linux_SambaCommonSecurityForShareRepositoryExternal_h
#define Linux_SambaCommonSecurityForShareRepositoryExternal_h

#include "Linux_SambaCommonSecurityForShareInstanceName.h"
#include "Linux_SambaCommonSecurityForShareRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaCommonSecurityForShareRepositoryExternal {
     
    private:
    CmpiBroker  m_broker;
    CmpiContext m_context;
    const static char *s_shadowNameSpaceP;
  	
    public:
    Linux_SambaCommonSecurityForShareRepositoryExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaCommonSecurityForShareRepositoryExternal();
    
    virtual void enumInstanceNames(
      Linux_SambaCommonSecurityForShareInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char** aPropertiesPP,
      Linux_SambaCommonSecurityForShareRepositoryInstanceEnumeration& aRepositoryInstanceEnumeration);
     
    virtual Linux_SambaCommonSecurityForShareRepositoryInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaCommonSecurityForShareInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaCommonSecurityForShareRepositoryInstance& aRepositoryInstance);
     
    virtual Linux_SambaCommonSecurityForShareInstanceName createInstance(
      const Linux_SambaCommonSecurityForShareRepositoryInstance& aRepositoryInstance);
     
    virtual void deleteInstance(
      const Linux_SambaCommonSecurityForShareInstanceName& anInstanceName);
  
  };

}
#endif
