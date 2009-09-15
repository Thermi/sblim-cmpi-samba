// =======================================================================
// Linux_SambaShareProtocolOptionsRepositoryExternal.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaShareProtocolOptionsRepositoryExternal_h
#define Linux_SambaShareProtocolOptionsRepositoryExternal_h

#include "Linux_SambaShareProtocolOptionsInstanceName.h"
#include "Linux_SambaShareProtocolOptionsRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaShareProtocolOptionsRepositoryExternal {
     
    private:
    CmpiBroker  m_broker;
    CmpiContext m_context;
    const static char *s_shadowNameSpaceP;
  	
    public:
    Linux_SambaShareProtocolOptionsRepositoryExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaShareProtocolOptionsRepositoryExternal();
    
    virtual void enumInstanceNames(
      Linux_SambaShareProtocolOptionsInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char** aPropertiesPP,
      Linux_SambaShareProtocolOptionsRepositoryInstanceEnumeration& aRepositoryInstanceEnumeration);
     
    virtual Linux_SambaShareProtocolOptionsRepositoryInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaShareProtocolOptionsInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaShareProtocolOptionsRepositoryInstance& aRepositoryInstance);
     
    virtual Linux_SambaShareProtocolOptionsInstanceName createInstance(
      const Linux_SambaShareProtocolOptionsRepositoryInstance& aRepositoryInstance);
     
    virtual void deleteInstance(
      const Linux_SambaShareProtocolOptionsInstanceName& anInstanceName);
  
  };

}
#endif
