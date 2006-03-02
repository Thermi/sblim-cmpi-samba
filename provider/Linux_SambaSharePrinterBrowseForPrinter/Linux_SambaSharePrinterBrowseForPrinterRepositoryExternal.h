// =======================================================================
// Linux_SambaSharePrinterBrowseForPrinterRepositoryExternal.h
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
#ifndef Linux_SambaSharePrinterBrowseForPrinterRepositoryExternal_h
#define Linux_SambaSharePrinterBrowseForPrinterRepositoryExternal_h

#include "Linux_SambaSharePrinterBrowseForPrinterInstanceName.h"
#include "Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaSharePrinterBrowseForPrinterRepositoryExternal {
     
    private:
    CmpiBroker  m_broker;
    CmpiContext m_context;
    const static char *s_shadowNameSpaceP;
  	
    public:
    Linux_SambaSharePrinterBrowseForPrinterRepositoryExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaSharePrinterBrowseForPrinterRepositoryExternal();
    
    virtual void enumInstanceNames(
      Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char** aPropertiesPP,
      Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumeration& aRepositoryInstanceEnumeration);
     
    virtual Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaSharePrinterBrowseForPrinterInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance& aRepositoryInstance);
     
    virtual Linux_SambaSharePrinterBrowseForPrinterInstanceName createInstance(
      const Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance& aRepositoryInstance);
     
    virtual void deleteInstance(
      const Linux_SambaSharePrinterBrowseForPrinterInstanceName& anInstanceName);
  
  };

}
#endif
