// =======================================================================
// Linux_SambaForceUserForShareRepositoryExternal.h
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
#ifndef Linux_SambaForceUserForShareRepositoryExternal_h
#define Linux_SambaForceUserForShareRepositoryExternal_h

#include "Linux_SambaForceUserForShareInstanceName.h"
#include "Linux_SambaForceUserForShareRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaForceUserForShareRepositoryExternal {
     
    private:
    CmpiBroker  m_broker;
    CmpiContext m_context;
    const static char *s_shadowNameSpaceP;
  	
    public:
    Linux_SambaForceUserForShareRepositoryExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaForceUserForShareRepositoryExternal();
    
    virtual void enumInstanceNames(
      Linux_SambaForceUserForShareInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char** aPropertiesPP,
      Linux_SambaForceUserForShareRepositoryInstanceEnumeration& aRepositoryInstanceEnumeration);
     
    virtual Linux_SambaForceUserForShareRepositoryInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaForceUserForShareInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaForceUserForShareRepositoryInstance& aRepositoryInstance);
     
    virtual Linux_SambaForceUserForShareInstanceName createInstance(
      const Linux_SambaForceUserForShareRepositoryInstance& aRepositoryInstance);
     
    virtual void deleteInstance(
      const Linux_SambaForceUserForShareInstanceName& anInstanceName);
  
  };

}
#endif
