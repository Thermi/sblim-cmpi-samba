// =======================================================================
// Linux_SambaPrinterOptionsRepositoryExternal.h
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
#ifndef Linux_SambaPrinterOptionsRepositoryExternal_h
#define Linux_SambaPrinterOptionsRepositoryExternal_h

#include "Linux_SambaPrinterOptionsInstanceName.h"
#include "Linux_SambaPrinterOptionsRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaPrinterOptionsRepositoryExternal {
     
    private:
    CmpiBroker  m_broker;
    CmpiContext m_context;
    const static char *s_shadowNameSpaceP;
  	
    public:
    Linux_SambaPrinterOptionsRepositoryExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaPrinterOptionsRepositoryExternal();
    
    virtual void enumInstanceNames(
      Linux_SambaPrinterOptionsInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char** aPropertiesPP,
      Linux_SambaPrinterOptionsRepositoryInstanceEnumeration& aRepositoryInstanceEnumeration);
     
    virtual Linux_SambaPrinterOptionsRepositoryInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaPrinterOptionsInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaPrinterOptionsRepositoryInstance& aRepositoryInstance);
     
    virtual Linux_SambaPrinterOptionsInstanceName createInstance(
      const Linux_SambaPrinterOptionsRepositoryInstance& aRepositoryInstance);
     
    virtual void deleteInstance(
      const Linux_SambaPrinterOptionsInstanceName& anInstanceName);
  
  };

}
#endif
