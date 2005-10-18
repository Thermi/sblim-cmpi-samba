/**
 *  Linux_SambaGlobalFileNameHandlingOptionsDefaultImplementation.h
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


#ifndef Linux_SambaGlobalFileNameHandlingOptionsDefaultImplementation_h
#define Linux_SambaGlobalFileNameHandlingOptionsDefaultImplementation_h

#include "Linux_SambaGlobalFileNameHandlingOptionsInstanceName.h"
#include "Linux_SambaGlobalFileNameHandlingOptionsManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaGlobalFileNameHandlingOptionsInterface.h"

namespace genProvider {

  class Linux_SambaGlobalFileNameHandlingOptionsDefaultImplementation:
   public Linux_SambaGlobalFileNameHandlingOptionsInterface {
  	
    public:    
    virtual ~Linux_SambaGlobalFileNameHandlingOptionsDefaultImplementation() { };
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration& instnames);
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration& instances);
  	
    virtual Linux_SambaGlobalFileNameHandlingOptionsManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalFileNameHandlingOptionsInstanceName&);
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalFileNameHandlingOptionsManualInstance&);
  	
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaGlobalFileNameHandlingOptionsManualInstance&);
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaGlobalFileNameHandlingOptionsInstanceName&);
	
    
    /* extrinsic methods */
	
  };
}
#endif

