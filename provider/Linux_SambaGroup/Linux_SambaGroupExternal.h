// =======================================================================
// Linux_SambaGroupExternal.h
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
#ifndef Linux_SambaGroupExternal_h
#define Linux_SambaGroupExternal_h


#include "Linux_SambaGroupInstance.h"

#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGroupExternal {
    
    private:
    CmpiBroker m_broker;
    CmpiContext m_context;
  	
    public:
    Linux_SambaGroupExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaGroupExternal();
    
    virtual void enumInstanceNames(
      const char *aNameSpaceP,
      Linux_SambaGroupInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char *anNameSpaceP,
      const char** aPropertiesPP,
      Linux_SambaGroupInstanceEnumeration& anInstanceEnumeration);
     
    virtual Linux_SambaGroupInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaGroupInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaGroupInstance& anInstance);
     
    virtual Linux_SambaGroupInstanceName createInstance(
      const Linux_SambaGroupInstance& anInstance);
     
    virtual void deleteInstance(
      const Linux_SambaGroupInstanceName& anInstanceName);

 
  
  };

}

#endif
