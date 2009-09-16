// =======================================================================
// Linux_SambaGlobalFileNameHandlingOptionsExternal.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaGlobalFileNameHandlingOptionsExternal_h
#define Linux_SambaGlobalFileNameHandlingOptionsExternal_h


#include "Linux_SambaGlobalFileNameHandlingOptionsInstance.h"

#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalFileNameHandlingOptionsExternal {
    
    private:
    CmpiBroker m_broker;
    CmpiContext m_context;
  	
    public:
    Linux_SambaGlobalFileNameHandlingOptionsExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaGlobalFileNameHandlingOptionsExternal();
    
    virtual void enumInstanceNames(
      const char *aNameSpaceP,
      Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char *anNameSpaceP,
      const char** aPropertiesPP,
      Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumeration& anInstanceEnumeration);
     
    virtual Linux_SambaGlobalFileNameHandlingOptionsInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaGlobalFileNameHandlingOptionsInstance& anInstance);
     
    virtual Linux_SambaGlobalFileNameHandlingOptionsInstanceName createInstance(
      const Linux_SambaGlobalFileNameHandlingOptionsInstance& anInstance);
     
    virtual void deleteInstance(
      const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& anInstanceName);

 
  
  };

}

#endif
