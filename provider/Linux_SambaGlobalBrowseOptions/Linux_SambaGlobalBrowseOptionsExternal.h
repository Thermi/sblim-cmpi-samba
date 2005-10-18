/**
 *  Linux_SambaGlobalBrowseOptionsExternal.h
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


#ifndef Linux_SambaGlobalBrowseOptionsExternal_h
#define Linux_SambaGlobalBrowseOptionsExternal_h

#include "Linux_SambaGlobalBrowseOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalBrowseOptionsExternal {
  	
    public:
    Linux_SambaGlobalBrowseOptionsExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaGlobalBrowseOptionsExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaGlobalBrowseOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaGlobalBrowseOptionsInstanceEnumeration&);
     
    virtual Linux_SambaGlobalBrowseOptionsInstance getInstance(
     const char* *properties,
     const Linux_SambaGlobalBrowseOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaGlobalBrowseOptionsInstance&);
     
    virtual void createInstance(
     const Linux_SambaGlobalBrowseOptionsInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaGlobalBrowseOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
