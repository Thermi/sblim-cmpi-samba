// =======================================================================
// Linux_SambaGlobalOptionsRepositoryExternal.h
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
#ifndef Linux_SambaGlobalOptionsRepositoryExternal_h
#define Linux_SambaGlobalOptionsRepositoryExternal_h

#include "Linux_SambaGlobalOptionsInstanceName.h"
#include "Linux_SambaGlobalOptionsRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalOptionsRepositoryExternal {
     
    private:
    CmpiBroker  m_broker;
    CmpiContext m_context;
    const static char *s_shadowNameSpaceP;
  	
    public:
    Linux_SambaGlobalOptionsRepositoryExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaGlobalOptionsRepositoryExternal();
    
    virtual void enumInstanceNames(
      Linux_SambaGlobalOptionsInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char** aPropertiesPP,
      Linux_SambaGlobalOptionsRepositoryInstanceEnumeration& aRepositoryInstanceEnumeration);
     
    virtual Linux_SambaGlobalOptionsRepositoryInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaGlobalOptionsInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaGlobalOptionsRepositoryInstance& aRepositoryInstance);
     
    virtual Linux_SambaGlobalOptionsInstanceName createInstance(
      const Linux_SambaGlobalOptionsRepositoryInstance& aRepositoryInstance);
     
    virtual void deleteInstance(
      const Linux_SambaGlobalOptionsInstanceName& anInstanceName);
  
  };

}
#endif
