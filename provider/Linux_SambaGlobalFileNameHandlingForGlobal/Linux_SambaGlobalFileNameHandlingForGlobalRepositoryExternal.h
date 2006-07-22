// =======================================================================
// Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal.h
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
#ifndef Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal_h
#define Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal_h

#include "Linux_SambaGlobalFileNameHandlingForGlobalInstanceName.h"
#include "Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal {
     
    private:
    CmpiBroker  m_broker;
    CmpiContext m_context;
    const static char *s_shadowNameSpaceP;
  	
    public:
    Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal();
    
    virtual void enumInstanceNames(
      Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char** aPropertiesPP,
      Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumeration& aRepositoryInstanceEnumeration);
     
    virtual Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance& aRepositoryInstance);
     
    virtual Linux_SambaGlobalFileNameHandlingForGlobalInstanceName createInstance(
      const Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance& aRepositoryInstance);
     
    virtual void deleteInstance(
      const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& anInstanceName);
  
  };

}
#endif
