/**
 *  Linux_SambaGroupExternal.h
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


#ifndef Linux_SambaGroupExternal_h
#define Linux_SambaGroupExternal_h

#include "Linux_SambaGroupInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGroupExternal {
  	
    public:
    Linux_SambaGroupExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaGroupExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaGroupInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaGroupInstanceEnumeration&);
     
    virtual Linux_SambaGroupInstance getInstance(
     const char* *properties,
     const Linux_SambaGroupInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaGroupInstance&);
     
    virtual void createInstance(
     const Linux_SambaGroupInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaGroupInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
