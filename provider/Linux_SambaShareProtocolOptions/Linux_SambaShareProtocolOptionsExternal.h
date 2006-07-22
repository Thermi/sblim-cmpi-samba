// =======================================================================
// Linux_SambaShareProtocolOptionsExternal.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaShareProtocolOptionsExternal_h
#define Linux_SambaShareProtocolOptionsExternal_h


#include "Linux_SambaShareProtocolOptionsInstance.h"

#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaShareProtocolOptionsExternal {
    
    private:
    CmpiBroker m_broker;
    CmpiContext m_context;
  	
    public:
    Linux_SambaShareProtocolOptionsExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaShareProtocolOptionsExternal();
    
    virtual void enumInstanceNames(
      const char *aNameSpaceP,
      Linux_SambaShareProtocolOptionsInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char *anNameSpaceP,
      const char** aPropertiesPP,
      Linux_SambaShareProtocolOptionsInstanceEnumeration& anInstanceEnumeration);
     
    virtual Linux_SambaShareProtocolOptionsInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaShareProtocolOptionsInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaShareProtocolOptionsInstance& anInstance);
     
    virtual Linux_SambaShareProtocolOptionsInstanceName createInstance(
      const Linux_SambaShareProtocolOptionsInstance& anInstance);
     
    virtual void deleteInstance(
      const Linux_SambaShareProtocolOptionsInstanceName& anInstanceName);

 
  
  };

}

#endif
