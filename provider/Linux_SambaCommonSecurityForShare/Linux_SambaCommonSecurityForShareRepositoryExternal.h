/**
 *  Linux_SambaCommonSecurityForShareRepositoryExternal.h
 * 
 * (C) Copyright IBM Corp. 2005
 *
 * THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
 * ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
 * CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
 *
 * You can obtain a current copy of the Common Public License from
 * http://www.opensource.org/licenses/cpl1.0.php
 *
 * Author:     Rodrigo Ceron <rceron@br.ibm.com>
 *
 * Contributors:
 *
 */


#ifndef Linux_SambaCommonSecurityForShareRepositoryExternal_h
#define Linux_SambaCommonSecurityForShareRepositoryExternal_h

#include "Linux_SambaCommonSecurityForShareInstanceName.h"
#include "Linux_SambaCommonSecurityForShareRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaCommonSecurityForShareRepositoryExternal {
  	
    public:
    Linux_SambaCommonSecurityForShareRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaCommonSecurityForShareRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaCommonSecurityForShareInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaCommonSecurityForShareRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaCommonSecurityForShareRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaCommonSecurityForShareInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaCommonSecurityForShareRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaCommonSecurityForShareRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaCommonSecurityForShareInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
