/**
 *  Linux_SambaHostExternal.h
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


#ifndef Linux_SambaHostExternal_h
#define Linux_SambaHostExternal_h

#include "Linux_SambaHostInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaHostExternal {
  	
    public:
    Linux_SambaHostExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaHostExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaHostInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaHostInstanceEnumeration&);
     
    virtual Linux_SambaHostInstance getInstance(
     const char* *properties,
     const Linux_SambaHostInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaHostInstance&);
     
    virtual void createInstance(
     const Linux_SambaHostInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaHostInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
