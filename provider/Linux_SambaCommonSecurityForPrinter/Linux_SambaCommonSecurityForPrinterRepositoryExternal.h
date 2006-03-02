// =======================================================================
// Linux_SambaCommonSecurityForPrinterRepositoryExternal.h
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
#ifndef Linux_SambaCommonSecurityForPrinterRepositoryExternal_h
#define Linux_SambaCommonSecurityForPrinterRepositoryExternal_h

#include "Linux_SambaCommonSecurityForPrinterInstanceName.h"
#include "Linux_SambaCommonSecurityForPrinterRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaCommonSecurityForPrinterRepositoryExternal {
     
    private:
    CmpiBroker  m_broker;
    CmpiContext m_context;
    const static char *s_shadowNameSpaceP;
  	
    public:
    Linux_SambaCommonSecurityForPrinterRepositoryExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaCommonSecurityForPrinterRepositoryExternal();
    
    virtual void enumInstanceNames(
      Linux_SambaCommonSecurityForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char** aPropertiesPP,
      Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumeration& aRepositoryInstanceEnumeration);
     
    virtual Linux_SambaCommonSecurityForPrinterRepositoryInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaCommonSecurityForPrinterInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaCommonSecurityForPrinterRepositoryInstance& aRepositoryInstance);
     
    virtual Linux_SambaCommonSecurityForPrinterInstanceName createInstance(
      const Linux_SambaCommonSecurityForPrinterRepositoryInstance& aRepositoryInstance);
     
    virtual void deleteInstance(
      const Linux_SambaCommonSecurityForPrinterInstanceName& anInstanceName);
  
  };

}
#endif
