/**
 *  Linux_SambaShareFileNameHandlingOptionsExternal.h
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


#ifndef Linux_SambaShareFileNameHandlingOptionsExternal_h
#define Linux_SambaShareFileNameHandlingOptionsExternal_h

#include "Linux_SambaShareFileNameHandlingOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaShareFileNameHandlingOptionsExternal {
  	
    public:
    Linux_SambaShareFileNameHandlingOptionsExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaShareFileNameHandlingOptionsExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration&);
     
    virtual Linux_SambaShareFileNameHandlingOptionsInstance getInstance(
     const char* *properties,
     const Linux_SambaShareFileNameHandlingOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaShareFileNameHandlingOptionsInstance&);
     
    virtual void createInstance(
     const Linux_SambaShareFileNameHandlingOptionsInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaShareFileNameHandlingOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
