// =======================================================================
// Linux_SambaSharePrinterBrowseOptionsRepositoryExternal.h
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
#ifndef Linux_SambaSharePrinterBrowseOptionsRepositoryExternal_h
#define Linux_SambaSharePrinterBrowseOptionsRepositoryExternal_h

#include "Linux_SambaSharePrinterBrowseOptionsInstanceName.h"
#include "Linux_SambaSharePrinterBrowseOptionsRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaSharePrinterBrowseOptionsRepositoryExternal {
     
    private:
    CmpiBroker  m_broker;
    CmpiContext m_context;
    const static char *s_shadowNameSpaceP;
  	
    public:
    Linux_SambaSharePrinterBrowseOptionsRepositoryExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaSharePrinterBrowseOptionsRepositoryExternal();
    
    virtual void enumInstanceNames(
      Linux_SambaSharePrinterBrowseOptionsInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char** aPropertiesPP,
      Linux_SambaSharePrinterBrowseOptionsRepositoryInstanceEnumeration& aRepositoryInstanceEnumeration);
     
    virtual Linux_SambaSharePrinterBrowseOptionsRepositoryInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaSharePrinterBrowseOptionsInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaSharePrinterBrowseOptionsRepositoryInstance& aRepositoryInstance);
     
    virtual Linux_SambaSharePrinterBrowseOptionsInstanceName createInstance(
      const Linux_SambaSharePrinterBrowseOptionsRepositoryInstance& aRepositoryInstance);
     
    virtual void deleteInstance(
      const Linux_SambaSharePrinterBrowseOptionsInstanceName& anInstanceName);
  
  };

}
#endif
