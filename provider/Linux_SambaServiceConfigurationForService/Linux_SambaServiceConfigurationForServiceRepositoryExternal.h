// =======================================================================
// Linux_SambaServiceConfigurationForServiceRepositoryExternal.h
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
#ifndef Linux_SambaServiceConfigurationForServiceRepositoryExternal_h
#define Linux_SambaServiceConfigurationForServiceRepositoryExternal_h

#include "Linux_SambaServiceConfigurationForServiceInstanceName.h"
#include "Linux_SambaServiceConfigurationForServiceRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaServiceConfigurationForServiceRepositoryExternal {
     
    private:
    CmpiBroker  m_broker;
    CmpiContext m_context;
    const static char *s_shadowNameSpaceP;
  	
    public:
    Linux_SambaServiceConfigurationForServiceRepositoryExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaServiceConfigurationForServiceRepositoryExternal();
    
    virtual void enumInstanceNames(
      Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char** aPropertiesPP,
      Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumeration& aRepositoryInstanceEnumeration);
     
    virtual Linux_SambaServiceConfigurationForServiceRepositoryInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaServiceConfigurationForServiceInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaServiceConfigurationForServiceRepositoryInstance& aRepositoryInstance);
     
    virtual Linux_SambaServiceConfigurationForServiceInstanceName createInstance(
      const Linux_SambaServiceConfigurationForServiceRepositoryInstance& aRepositoryInstance);
     
    virtual void deleteInstance(
      const Linux_SambaServiceConfigurationForServiceInstanceName& anInstanceName);
  
  };

}
#endif
