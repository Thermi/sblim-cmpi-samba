// =======================================================================
// Linux_SambaUserRepositoryExternal.h
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
#ifndef Linux_SambaUserRepositoryExternal_h
#define Linux_SambaUserRepositoryExternal_h

#include "Linux_SambaUserInstanceName.h"
#include "Linux_SambaUserRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaUserRepositoryExternal {
     
    private:
    CmpiBroker  m_broker;
    CmpiContext m_context;
    const static char *s_shadowNameSpaceP;
  	
    public:
    Linux_SambaUserRepositoryExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaUserRepositoryExternal();
    
    virtual void enumInstanceNames(
      Linux_SambaUserInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char** aPropertiesPP,
      Linux_SambaUserRepositoryInstanceEnumeration& aRepositoryInstanceEnumeration);
     
    virtual Linux_SambaUserRepositoryInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaUserInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaUserRepositoryInstance& aRepositoryInstance);
     
    virtual Linux_SambaUserInstanceName createInstance(
      const Linux_SambaUserRepositoryInstance& aRepositoryInstance);
     
    virtual void deleteInstance(
      const Linux_SambaUserInstanceName& anInstanceName);
  
  };

}
#endif
