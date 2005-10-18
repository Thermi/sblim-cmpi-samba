/**
 *  Linux_SambaShareOptionsExternal.h
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


#ifndef Linux_SambaShareOptionsExternal_h
#define Linux_SambaShareOptionsExternal_h

#include "Linux_SambaShareOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaShareOptionsExternal {
  	
    public:
    Linux_SambaShareOptionsExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaShareOptionsExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaShareOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaShareOptionsInstanceEnumeration&);
     
    virtual Linux_SambaShareOptionsInstance getInstance(
     const char* *properties,
     const Linux_SambaShareOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaShareOptionsInstance&);
     
    virtual void createInstance(
     const Linux_SambaShareOptionsInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaShareOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
