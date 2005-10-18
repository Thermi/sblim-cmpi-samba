/**
 *  Linux_SambaGlobalBrowseOptionsRepositoryExternal.h
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


#ifndef Linux_SambaGlobalBrowseOptionsRepositoryExternal_h
#define Linux_SambaGlobalBrowseOptionsRepositoryExternal_h

#include "Linux_SambaGlobalBrowseOptionsInstanceName.h"
#include "Linux_SambaGlobalBrowseOptionsRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalBrowseOptionsRepositoryExternal {
  	
    public:
    Linux_SambaGlobalBrowseOptionsRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaGlobalBrowseOptionsRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaGlobalBrowseOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaGlobalBrowseOptionsRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaGlobalBrowseOptionsRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaGlobalBrowseOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaGlobalBrowseOptionsRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaGlobalBrowseOptionsRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaGlobalBrowseOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
