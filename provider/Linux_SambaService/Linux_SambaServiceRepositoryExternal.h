// =======================================================================
// Linux_SambaServiceRepositoryExternal.h
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
#ifndef Linux_SambaServiceRepositoryExternal_h
#define Linux_SambaServiceRepositoryExternal_h

#include "Linux_SambaServiceInstanceName.h"
#include "Linux_SambaServiceRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaServiceRepositoryExternal {
     
    private:
    CmpiBroker  m_broker;
    CmpiContext m_context;
    const static char *s_shadowNameSpaceP;
  	
    public:
    Linux_SambaServiceRepositoryExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaServiceRepositoryExternal();
    
    virtual void enumInstanceNames(
      Linux_SambaServiceInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char** aPropertiesPP,
      Linux_SambaServiceRepositoryInstanceEnumeration& aRepositoryInstanceEnumeration);
     
    virtual Linux_SambaServiceRepositoryInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaServiceInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaServiceRepositoryInstance& aRepositoryInstance);
     
    virtual Linux_SambaServiceInstanceName createInstance(
      const Linux_SambaServiceRepositoryInstance& aRepositoryInstance);
     
    virtual void deleteInstance(
      const Linux_SambaServiceInstanceName& anInstanceName);
  
  };

}
#endif
