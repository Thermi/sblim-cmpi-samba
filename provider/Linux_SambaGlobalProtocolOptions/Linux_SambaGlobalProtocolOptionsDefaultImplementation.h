/**
 *  Linux_SambaGlobalProtocolOptionsDefaultImplementation.h
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


#ifndef Linux_SambaGlobalProtocolOptionsDefaultImplementation_h
#define Linux_SambaGlobalProtocolOptionsDefaultImplementation_h

#include "Linux_SambaGlobalProtocolOptionsInstanceName.h"
#include "Linux_SambaGlobalProtocolOptionsManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaGlobalProtocolOptionsInterface.h"

namespace genProvider {

  class Linux_SambaGlobalProtocolOptionsDefaultImplementation:
   public Linux_SambaGlobalProtocolOptionsInterface {
  	
    public:    
    virtual ~Linux_SambaGlobalProtocolOptionsDefaultImplementation() { };
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaGlobalProtocolOptionsInstanceNameEnumeration& instnames);
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration& instances);
  	
    virtual Linux_SambaGlobalProtocolOptionsManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalProtocolOptionsInstanceName&);
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalProtocolOptionsManualInstance&);
  	
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaGlobalProtocolOptionsManualInstance&);
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaGlobalProtocolOptionsInstanceName&);
	
    
    /* extrinsic methods */
	
  };
}
#endif

