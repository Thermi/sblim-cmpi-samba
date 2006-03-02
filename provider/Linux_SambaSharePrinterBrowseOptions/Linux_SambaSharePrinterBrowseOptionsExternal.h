// =======================================================================
// Linux_SambaSharePrinterBrowseOptionsExternal.h
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
#ifndef Linux_SambaSharePrinterBrowseOptionsExternal_h
#define Linux_SambaSharePrinterBrowseOptionsExternal_h


#include "Linux_SambaSharePrinterBrowseOptionsInstance.h"

#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaSharePrinterBrowseOptionsExternal {
    
    private:
    CmpiBroker m_broker;
    CmpiContext m_context;
  	
    public:
    Linux_SambaSharePrinterBrowseOptionsExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaSharePrinterBrowseOptionsExternal();
    
    virtual void enumInstanceNames(
      const char *aNameSpaceP,
      Linux_SambaSharePrinterBrowseOptionsInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char *anNameSpaceP,
      const char** aPropertiesPP,
      Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration& anInstanceEnumeration);
     
    virtual Linux_SambaSharePrinterBrowseOptionsInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaSharePrinterBrowseOptionsInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaSharePrinterBrowseOptionsInstance& anInstance);
     
    virtual Linux_SambaSharePrinterBrowseOptionsInstanceName createInstance(
      const Linux_SambaSharePrinterBrowseOptionsInstance& anInstance);
     
    virtual void deleteInstance(
      const Linux_SambaSharePrinterBrowseOptionsInstanceName& anInstanceName);

 
  
  };

}

#endif
