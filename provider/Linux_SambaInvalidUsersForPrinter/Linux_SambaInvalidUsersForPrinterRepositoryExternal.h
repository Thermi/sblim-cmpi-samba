// =======================================================================
// Linux_SambaInvalidUsersForPrinterRepositoryExternal.h
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
#ifndef Linux_SambaInvalidUsersForPrinterRepositoryExternal_h
#define Linux_SambaInvalidUsersForPrinterRepositoryExternal_h

#include "Linux_SambaInvalidUsersForPrinterInstanceName.h"
#include "Linux_SambaInvalidUsersForPrinterRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaInvalidUsersForPrinterRepositoryExternal {
     
    private:
    CmpiBroker  m_broker;
    CmpiContext m_context;
    const static char *s_shadowNameSpaceP;
  	
    public:
    Linux_SambaInvalidUsersForPrinterRepositoryExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaInvalidUsersForPrinterRepositoryExternal();
    
    virtual void enumInstanceNames(
      Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char** aPropertiesPP,
      Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumeration& aRepositoryInstanceEnumeration);
     
    virtual Linux_SambaInvalidUsersForPrinterRepositoryInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaInvalidUsersForPrinterInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaInvalidUsersForPrinterRepositoryInstance& aRepositoryInstance);
     
    virtual Linux_SambaInvalidUsersForPrinterInstanceName createInstance(
      const Linux_SambaInvalidUsersForPrinterRepositoryInstance& aRepositoryInstance);
     
    virtual void deleteInstance(
      const Linux_SambaInvalidUsersForPrinterInstanceName& anInstanceName);
  
  };

}
#endif
