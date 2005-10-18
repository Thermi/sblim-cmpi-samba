/**
 *  Linux_SambaGlobalBrowseForGlobalRepositoryExternal.h
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


#ifndef Linux_SambaGlobalBrowseForGlobalRepositoryExternal_h
#define Linux_SambaGlobalBrowseForGlobalRepositoryExternal_h

#include "Linux_SambaGlobalBrowseForGlobalInstanceName.h"
#include "Linux_SambaGlobalBrowseForGlobalRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalBrowseForGlobalRepositoryExternal {
  	
    public:
    Linux_SambaGlobalBrowseForGlobalRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaGlobalBrowseForGlobalRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaGlobalBrowseForGlobalRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaGlobalBrowseForGlobalInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaGlobalBrowseForGlobalRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaGlobalBrowseForGlobalRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaGlobalBrowseForGlobalInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
