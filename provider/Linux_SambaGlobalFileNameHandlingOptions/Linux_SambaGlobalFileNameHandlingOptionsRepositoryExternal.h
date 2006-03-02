// =======================================================================
// Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal.h
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
#ifndef Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal_h
#define Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal_h

#include "Linux_SambaGlobalFileNameHandlingOptionsInstanceName.h"
#include "Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal {
     
    private:
    CmpiBroker  m_broker;
    CmpiContext m_context;
    const static char *s_shadowNameSpaceP;
  	
    public:
    Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal();
    
    virtual void enumInstanceNames(
      Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char** aPropertiesPP,
      Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstanceEnumeration& aRepositoryInstanceEnumeration);
     
    virtual Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance& aRepositoryInstance);
     
    virtual Linux_SambaGlobalFileNameHandlingOptionsInstanceName createInstance(
      const Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance& aRepositoryInstance);
     
    virtual void deleteInstance(
      const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& anInstanceName);
  
  };

}
#endif
