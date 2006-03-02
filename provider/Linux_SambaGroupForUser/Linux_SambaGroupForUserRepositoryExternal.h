// =======================================================================
// Linux_SambaGroupForUserRepositoryExternal.h
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
#ifndef Linux_SambaGroupForUserRepositoryExternal_h
#define Linux_SambaGroupForUserRepositoryExternal_h

#include "Linux_SambaGroupForUserInstanceName.h"
#include "Linux_SambaGroupForUserRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGroupForUserRepositoryExternal {
     
    private:
    CmpiBroker  m_broker;
    CmpiContext m_context;
    const static char *s_shadowNameSpaceP;
  	
    public:
    Linux_SambaGroupForUserRepositoryExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaGroupForUserRepositoryExternal();
    
    virtual void enumInstanceNames(
      Linux_SambaGroupForUserInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char** aPropertiesPP,
      Linux_SambaGroupForUserRepositoryInstanceEnumeration& aRepositoryInstanceEnumeration);
     
    virtual Linux_SambaGroupForUserRepositoryInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaGroupForUserInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaGroupForUserRepositoryInstance& aRepositoryInstance);
     
    virtual Linux_SambaGroupForUserInstanceName createInstance(
      const Linux_SambaGroupForUserRepositoryInstance& aRepositoryInstance);
     
    virtual void deleteInstance(
      const Linux_SambaGroupForUserInstanceName& anInstanceName);
  
  };

}
#endif
