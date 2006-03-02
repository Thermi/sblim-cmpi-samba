// =======================================================================
// Linux_SambaGlobalPrintingForGlobalRepositoryExternal.h
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
#ifndef Linux_SambaGlobalPrintingForGlobalRepositoryExternal_h
#define Linux_SambaGlobalPrintingForGlobalRepositoryExternal_h

#include "Linux_SambaGlobalPrintingForGlobalInstanceName.h"
#include "Linux_SambaGlobalPrintingForGlobalRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalPrintingForGlobalRepositoryExternal {
     
    private:
    CmpiBroker  m_broker;
    CmpiContext m_context;
    const static char *s_shadowNameSpaceP;
  	
    public:
    Linux_SambaGlobalPrintingForGlobalRepositoryExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaGlobalPrintingForGlobalRepositoryExternal();
    
    virtual void enumInstanceNames(
      Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char** aPropertiesPP,
      Linux_SambaGlobalPrintingForGlobalRepositoryInstanceEnumeration& aRepositoryInstanceEnumeration);
     
    virtual Linux_SambaGlobalPrintingForGlobalRepositoryInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaGlobalPrintingForGlobalInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaGlobalPrintingForGlobalRepositoryInstance& aRepositoryInstance);
     
    virtual Linux_SambaGlobalPrintingForGlobalInstanceName createInstance(
      const Linux_SambaGlobalPrintingForGlobalRepositoryInstance& aRepositoryInstance);
     
    virtual void deleteInstance(
      const Linux_SambaGlobalPrintingForGlobalInstanceName& anInstanceName);
  
  };

}
#endif
