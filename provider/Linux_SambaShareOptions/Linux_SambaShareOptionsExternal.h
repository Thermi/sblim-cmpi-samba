// =======================================================================
// Linux_SambaShareOptionsExternal.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaShareOptionsExternal_h
#define Linux_SambaShareOptionsExternal_h


#include "Linux_SambaShareOptionsInstance.h"

#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaShareOptionsExternal {
    
    private:
    CmpiBroker m_broker;
    CmpiContext m_context;
  	
    public:
    Linux_SambaShareOptionsExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaShareOptionsExternal();
    
    virtual void enumInstanceNames(
      const char *aNameSpaceP,
      Linux_SambaShareOptionsInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char *anNameSpaceP,
      const char** aPropertiesPP,
      Linux_SambaShareOptionsInstanceEnumeration& anInstanceEnumeration);
     
    virtual Linux_SambaShareOptionsInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaShareOptionsInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaShareOptionsInstance& anInstance);
     
    virtual Linux_SambaShareOptionsInstanceName createInstance(
      const Linux_SambaShareOptionsInstance& anInstance);
     
    virtual void deleteInstance(
      const Linux_SambaShareOptionsInstanceName& anInstanceName);

 
  
  };

}

#endif
