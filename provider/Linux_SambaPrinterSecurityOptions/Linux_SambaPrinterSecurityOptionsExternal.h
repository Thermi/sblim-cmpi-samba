// =======================================================================
// Linux_SambaPrinterSecurityOptionsExternal.h
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
#ifndef Linux_SambaPrinterSecurityOptionsExternal_h
#define Linux_SambaPrinterSecurityOptionsExternal_h


#include "Linux_SambaPrinterSecurityOptionsInstance.h"

#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaPrinterSecurityOptionsExternal {
    
    private:
    CmpiBroker m_broker;
    CmpiContext m_context;
  	
    public:
    Linux_SambaPrinterSecurityOptionsExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaPrinterSecurityOptionsExternal();
    
    virtual void enumInstanceNames(
      const char *aNameSpaceP,
      Linux_SambaPrinterSecurityOptionsInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char *anNameSpaceP,
      const char** aPropertiesPP,
      Linux_SambaPrinterSecurityOptionsInstanceEnumeration& anInstanceEnumeration);
     
    virtual Linux_SambaPrinterSecurityOptionsInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaPrinterSecurityOptionsInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaPrinterSecurityOptionsInstance& anInstance);
     
    virtual Linux_SambaPrinterSecurityOptionsInstanceName createInstance(
      const Linux_SambaPrinterSecurityOptionsInstance& anInstance);
     
    virtual void deleteInstance(
      const Linux_SambaPrinterSecurityOptionsInstanceName& anInstanceName);

 
  
  };

}

#endif
