/**
 *  Linux_SambaShareProtocolOptionsExternal.h
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


#ifndef Linux_SambaShareProtocolOptionsExternal_h
#define Linux_SambaShareProtocolOptionsExternal_h

#include "Linux_SambaShareProtocolOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaShareProtocolOptionsExternal {
  	
    public:
    Linux_SambaShareProtocolOptionsExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaShareProtocolOptionsExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaShareProtocolOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaShareProtocolOptionsInstanceEnumeration&);
     
    virtual Linux_SambaShareProtocolOptionsInstance getInstance(
     const char* *properties,
     const Linux_SambaShareProtocolOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaShareProtocolOptionsInstance&);
     
    virtual void createInstance(
     const Linux_SambaShareProtocolOptionsInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaShareProtocolOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
