// =======================================================================
// Linux_SambaServiceConfigurationExternal.h
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
#ifndef Linux_SambaServiceConfigurationExternal_h
#define Linux_SambaServiceConfigurationExternal_h


#include "Linux_SambaServiceConfigurationInstance.h"

#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaServiceConfigurationExternal {
    
    private:
    CmpiBroker m_broker;
    CmpiContext m_context;
  	
    public:
    Linux_SambaServiceConfigurationExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaServiceConfigurationExternal();
    
    virtual void enumInstanceNames(
      const char *aNameSpaceP,
      Linux_SambaServiceConfigurationInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char *anNameSpaceP,
      const char** aPropertiesPP,
      Linux_SambaServiceConfigurationInstanceEnumeration& anInstanceEnumeration);
     
    virtual Linux_SambaServiceConfigurationInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaServiceConfigurationInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaServiceConfigurationInstance& anInstance);
     
    virtual Linux_SambaServiceConfigurationInstanceName createInstance(
      const Linux_SambaServiceConfigurationInstance& anInstance);
     
    virtual void deleteInstance(
      const Linux_SambaServiceConfigurationInstanceName& anInstanceName);

 
  
  };

}

#endif
