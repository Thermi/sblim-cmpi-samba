/**
 *  Linux_SambaGlobalFileNameHandlingOptionsExternal.h
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


#ifndef Linux_SambaGlobalFileNameHandlingOptionsExternal_h
#define Linux_SambaGlobalFileNameHandlingOptionsExternal_h

#include "Linux_SambaGlobalFileNameHandlingOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalFileNameHandlingOptionsExternal {
  	
    public:
    Linux_SambaGlobalFileNameHandlingOptionsExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaGlobalFileNameHandlingOptionsExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumeration&);
     
    virtual Linux_SambaGlobalFileNameHandlingOptionsInstance getInstance(
     const char* *properties,
     const Linux_SambaGlobalFileNameHandlingOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaGlobalFileNameHandlingOptionsInstance&);
     
    virtual void createInstance(
     const Linux_SambaGlobalFileNameHandlingOptionsInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaGlobalFileNameHandlingOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
