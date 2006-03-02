// =======================================================================
// Linux_SambaSharePrinterBrowseForShareRepositoryExternal.h
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
#ifndef Linux_SambaSharePrinterBrowseForShareRepositoryExternal_h
#define Linux_SambaSharePrinterBrowseForShareRepositoryExternal_h

#include "Linux_SambaSharePrinterBrowseForShareInstanceName.h"
#include "Linux_SambaSharePrinterBrowseForShareRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaSharePrinterBrowseForShareRepositoryExternal {
     
    private:
    CmpiBroker  m_broker;
    CmpiContext m_context;
    const static char *s_shadowNameSpaceP;
  	
    public:
    Linux_SambaSharePrinterBrowseForShareRepositoryExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaSharePrinterBrowseForShareRepositoryExternal();
    
    virtual void enumInstanceNames(
      Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char** aPropertiesPP,
      Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumeration& aRepositoryInstanceEnumeration);
     
    virtual Linux_SambaSharePrinterBrowseForShareRepositoryInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaSharePrinterBrowseForShareInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaSharePrinterBrowseForShareRepositoryInstance& aRepositoryInstance);
     
    virtual Linux_SambaSharePrinterBrowseForShareInstanceName createInstance(
      const Linux_SambaSharePrinterBrowseForShareRepositoryInstance& aRepositoryInstance);
     
    virtual void deleteInstance(
      const Linux_SambaSharePrinterBrowseForShareInstanceName& anInstanceName);
  
  };

}
#endif
