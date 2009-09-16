// =======================================================================
// Linux_SambaUserExternal.h
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
#ifndef Linux_SambaUserExternal_h
#define Linux_SambaUserExternal_h


#include "Linux_SambaUserInstance.h"

#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaUserExternal {
    
    private:
    CmpiBroker m_broker;
    CmpiContext m_context;
  	
    public:
    Linux_SambaUserExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaUserExternal();
    
    virtual void enumInstanceNames(
      const char *aNameSpaceP,
      Linux_SambaUserInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char *anNameSpaceP,
      const char** aPropertiesPP,
      Linux_SambaUserInstanceEnumeration& anInstanceEnumeration);
     
    virtual Linux_SambaUserInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaUserInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaUserInstance& anInstance);
     
    virtual Linux_SambaUserInstanceName createInstance(
      const Linux_SambaUserInstance& anInstance);
     
    virtual void deleteInstance(
      const Linux_SambaUserInstanceName& anInstanceName);

 
  
  };

}

#endif
