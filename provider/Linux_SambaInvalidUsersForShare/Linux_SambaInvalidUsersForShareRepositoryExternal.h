// =======================================================================
// Linux_SambaInvalidUsersForShareRepositoryExternal.h
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
#ifndef Linux_SambaInvalidUsersForShareRepositoryExternal_h
#define Linux_SambaInvalidUsersForShareRepositoryExternal_h

#include "Linux_SambaInvalidUsersForShareInstanceName.h"
#include "Linux_SambaInvalidUsersForShareRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaInvalidUsersForShareRepositoryExternal {
     
    private:
    CmpiBroker  m_broker;
    CmpiContext m_context;
    const static char *s_shadowNameSpaceP;
  	
    public:
    Linux_SambaInvalidUsersForShareRepositoryExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaInvalidUsersForShareRepositoryExternal();
    
    virtual void enumInstanceNames(
      Linux_SambaInvalidUsersForShareInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char** aPropertiesPP,
      Linux_SambaInvalidUsersForShareRepositoryInstanceEnumeration& aRepositoryInstanceEnumeration);
     
    virtual Linux_SambaInvalidUsersForShareRepositoryInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaInvalidUsersForShareInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaInvalidUsersForShareRepositoryInstance& aRepositoryInstance);
     
    virtual Linux_SambaInvalidUsersForShareInstanceName createInstance(
      const Linux_SambaInvalidUsersForShareRepositoryInstance& aRepositoryInstance);
     
    virtual void deleteInstance(
      const Linux_SambaInvalidUsersForShareInstanceName& anInstanceName);
  
  };

}
#endif
