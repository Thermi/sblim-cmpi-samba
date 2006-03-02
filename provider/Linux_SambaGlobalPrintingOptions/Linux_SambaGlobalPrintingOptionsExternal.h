// =======================================================================
// Linux_SambaGlobalPrintingOptionsExternal.h
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
#ifndef Linux_SambaGlobalPrintingOptionsExternal_h
#define Linux_SambaGlobalPrintingOptionsExternal_h


#include "Linux_SambaGlobalPrintingOptionsInstance.h"

#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalPrintingOptionsExternal {
    
    private:
    CmpiBroker m_broker;
    CmpiContext m_context;
  	
    public:
    Linux_SambaGlobalPrintingOptionsExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaGlobalPrintingOptionsExternal();
    
    virtual void enumInstanceNames(
      const char *aNameSpaceP,
      Linux_SambaGlobalPrintingOptionsInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char *anNameSpaceP,
      const char** aPropertiesPP,
      Linux_SambaGlobalPrintingOptionsInstanceEnumeration& anInstanceEnumeration);
     
    virtual Linux_SambaGlobalPrintingOptionsInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaGlobalPrintingOptionsInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaGlobalPrintingOptionsInstance& anInstance);
     
    virtual Linux_SambaGlobalPrintingOptionsInstanceName createInstance(
      const Linux_SambaGlobalPrintingOptionsInstance& anInstance);
     
    virtual void deleteInstance(
      const Linux_SambaGlobalPrintingOptionsInstanceName& anInstanceName);

 
  
  };

}

#endif
