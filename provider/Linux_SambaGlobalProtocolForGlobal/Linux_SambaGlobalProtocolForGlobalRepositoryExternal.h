// =======================================================================
// Linux_SambaGlobalProtocolForGlobalRepositoryExternal.h
//     created on Fri, 24 Feb 2006 using ECUTE
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
//                Rodrigo Ceron    <rceron@br.ibm.com>
//                Wolfgang Taphorn <taphorn@de.ibm.com>
//
// =======================================================================
//
// 
#ifndef Linux_SambaGlobalProtocolForGlobalRepositoryExternal_h
#define Linux_SambaGlobalProtocolForGlobalRepositoryExternal_h

#include "Linux_SambaGlobalProtocolForGlobalInstanceName.h"
#include "Linux_SambaGlobalProtocolForGlobalRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalProtocolForGlobalRepositoryExternal {
     
    private:
    CmpiBroker  m_broker;
    CmpiContext m_context;
    const static char *s_shadowNameSpaceP;
  	
    public:
    Linux_SambaGlobalProtocolForGlobalRepositoryExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaGlobalProtocolForGlobalRepositoryExternal();
    
    virtual void enumInstanceNames(
      Linux_SambaGlobalProtocolForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char** aPropertiesPP,
      Linux_SambaGlobalProtocolForGlobalRepositoryInstanceEnumeration& aRepositoryInstanceEnumeration);
     
    virtual Linux_SambaGlobalProtocolForGlobalRepositoryInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaGlobalProtocolForGlobalInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaGlobalProtocolForGlobalRepositoryInstance& aRepositoryInstance);
     
    virtual Linux_SambaGlobalProtocolForGlobalInstanceName createInstance(
      const Linux_SambaGlobalProtocolForGlobalRepositoryInstance& aRepositoryInstance);
     
    virtual void deleteInstance(
      const Linux_SambaGlobalProtocolForGlobalInstanceName& anInstanceName);
  
  };

}
#endif
