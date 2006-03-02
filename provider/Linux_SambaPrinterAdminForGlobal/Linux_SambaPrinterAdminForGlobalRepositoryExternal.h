// =======================================================================
// Linux_SambaPrinterAdminForGlobalRepositoryExternal.h
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
#ifndef Linux_SambaPrinterAdminForGlobalRepositoryExternal_h
#define Linux_SambaPrinterAdminForGlobalRepositoryExternal_h

#include "Linux_SambaPrinterAdminForGlobalInstanceName.h"
#include "Linux_SambaPrinterAdminForGlobalRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaPrinterAdminForGlobalRepositoryExternal {
     
    private:
    CmpiBroker  m_broker;
    CmpiContext m_context;
    const static char *s_shadowNameSpaceP;
  	
    public:
    Linux_SambaPrinterAdminForGlobalRepositoryExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaPrinterAdminForGlobalRepositoryExternal();
    
    virtual void enumInstanceNames(
      Linux_SambaPrinterAdminForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char** aPropertiesPP,
      Linux_SambaPrinterAdminForGlobalRepositoryInstanceEnumeration& aRepositoryInstanceEnumeration);
     
    virtual Linux_SambaPrinterAdminForGlobalRepositoryInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaPrinterAdminForGlobalInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaPrinterAdminForGlobalRepositoryInstance& aRepositoryInstance);
     
    virtual Linux_SambaPrinterAdminForGlobalInstanceName createInstance(
      const Linux_SambaPrinterAdminForGlobalRepositoryInstance& aRepositoryInstance);
     
    virtual void deleteInstance(
      const Linux_SambaPrinterAdminForGlobalInstanceName& anInstanceName);
  
  };

}
#endif
