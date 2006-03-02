// =======================================================================
// Linux_SambaScriptingOptionsExternal.h
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
#ifndef Linux_SambaScriptingOptionsExternal_h
#define Linux_SambaScriptingOptionsExternal_h


#include "Linux_SambaScriptingOptionsInstance.h"

#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaScriptingOptionsExternal {
    
    private:
    CmpiBroker m_broker;
    CmpiContext m_context;
  	
    public:
    Linux_SambaScriptingOptionsExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaScriptingOptionsExternal();
    
    virtual void enumInstanceNames(
      const char *aNameSpaceP,
      Linux_SambaScriptingOptionsInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char *anNameSpaceP,
      const char** aPropertiesPP,
      Linux_SambaScriptingOptionsInstanceEnumeration& anInstanceEnumeration);
     
    virtual Linux_SambaScriptingOptionsInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaScriptingOptionsInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaScriptingOptionsInstance& anInstance);
     
    virtual Linux_SambaScriptingOptionsInstanceName createInstance(
      const Linux_SambaScriptingOptionsInstance& anInstance);
     
    virtual void deleteInstance(
      const Linux_SambaScriptingOptionsInstanceName& anInstanceName);

 
  
  };

}

#endif
