/**
 *  Linux_SambaUserExternal.h
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


#ifndef Linux_SambaUserExternal_h
#define Linux_SambaUserExternal_h

#include "Linux_SambaUserInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaUserExternal {
  	
    public:
    Linux_SambaUserExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaUserExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaUserInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaUserInstanceEnumeration&);
     
    virtual Linux_SambaUserInstance getInstance(
     const char* *properties,
     const Linux_SambaUserInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaUserInstance&);
     
    virtual void createInstance(
     const Linux_SambaUserInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaUserInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
