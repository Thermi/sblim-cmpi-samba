// =======================================================================
// Linux_SambaDenyHostsForGlobalRepositoryExternal.h
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
#ifndef Linux_SambaDenyHostsForGlobalRepositoryExternal_h
#define Linux_SambaDenyHostsForGlobalRepositoryExternal_h

#include "Linux_SambaDenyHostsForGlobalInstanceName.h"
#include "Linux_SambaDenyHostsForGlobalRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaDenyHostsForGlobalRepositoryExternal {
     
    private:
    CmpiBroker  m_broker;
    CmpiContext m_context;
    const static char *s_shadowNameSpaceP;
  	
    public:
    Linux_SambaDenyHostsForGlobalRepositoryExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaDenyHostsForGlobalRepositoryExternal();
    
    virtual void enumInstanceNames(
      Linux_SambaDenyHostsForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char** aPropertiesPP,
      Linux_SambaDenyHostsForGlobalRepositoryInstanceEnumeration& aRepositoryInstanceEnumeration);
     
    virtual Linux_SambaDenyHostsForGlobalRepositoryInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaDenyHostsForGlobalInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaDenyHostsForGlobalRepositoryInstance& aRepositoryInstance);
     
    virtual Linux_SambaDenyHostsForGlobalInstanceName createInstance(
      const Linux_SambaDenyHostsForGlobalRepositoryInstance& aRepositoryInstance);
     
    virtual void deleteInstance(
      const Linux_SambaDenyHostsForGlobalInstanceName& anInstanceName);
  
  };

}
#endif