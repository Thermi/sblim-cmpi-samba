// =======================================================================
// Linux_SambaShareFileNameHandlingForShareRepositoryExternal.h
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
#ifndef Linux_SambaShareFileNameHandlingForShareRepositoryExternal_h
#define Linux_SambaShareFileNameHandlingForShareRepositoryExternal_h

#include "Linux_SambaShareFileNameHandlingForShareInstanceName.h"
#include "Linux_SambaShareFileNameHandlingForShareRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaShareFileNameHandlingForShareRepositoryExternal {
     
    private:
    CmpiBroker  m_broker;
    CmpiContext m_context;
    const static char *s_shadowNameSpaceP;
  	
    public:
    Linux_SambaShareFileNameHandlingForShareRepositoryExternal(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);
    virtual ~Linux_SambaShareFileNameHandlingForShareRepositoryExternal();
    
    virtual void enumInstanceNames(
      Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration& anInstanceNameEnumeration);
     
    virtual void enumInstances(
      const char** aPropertiesPP,
      Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumeration& aRepositoryInstanceEnumeration);
     
    virtual Linux_SambaShareFileNameHandlingForShareRepositoryInstance getInstance(
      const char** aPropertiesPP,
      const Linux_SambaShareFileNameHandlingForShareInstanceName& anInstanceName);
     
    virtual void setInstance(
      const char** aPropertiesPP,
      const Linux_SambaShareFileNameHandlingForShareRepositoryInstance& aRepositoryInstance);
     
    virtual Linux_SambaShareFileNameHandlingForShareInstanceName createInstance(
      const Linux_SambaShareFileNameHandlingForShareRepositoryInstance& aRepositoryInstance);
     
    virtual void deleteInstance(
      const Linux_SambaShareFileNameHandlingForShareInstanceName& anInstanceName);
  
  };

}
#endif
