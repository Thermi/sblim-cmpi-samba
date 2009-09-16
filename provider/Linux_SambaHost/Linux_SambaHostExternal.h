// =======================================================================
// Linux_SambaHostExternal.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
// http://www.opensource.org/licenses/eclipse-1.0.php
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
#ifndef Linux_SambaHostExternal_h
#define Linux_SambaHostExternal_h


#include "Linux_SambaHostInstance.h"

#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaHostExternal {
    
    private:
    CmpiBroker m_broker;
    CmpiContext m_context;
  	
    public:
    Linux_SambaHostExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaHostExternal();
    
    virtual void enumInstanceNames(
      const char *aNameSpaceP,
      Linux_SambaHostInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char *anNameSpaceP,
      const char** aPropertiesPP,
      Linux_SambaHostInstanceEnumeration& anInstanceEnumeration);
     
    virtual Linux_SambaHostInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaHostInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaHostInstance& anInstance);
     
    virtual Linux_SambaHostInstanceName createInstance(
      const Linux_SambaHostInstance& anInstance);
     
    virtual void deleteInstance(
      const Linux_SambaHostInstanceName& anInstanceName);

 
  
  };

}

#endif
