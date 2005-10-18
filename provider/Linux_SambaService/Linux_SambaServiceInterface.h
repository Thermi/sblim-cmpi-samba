/**
 *  Linux_SambaServiceInterface.h
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


#ifndef Linux_SambaServiceInterface_h
#define Linux_SambaServiceInterface_h

#include "Linux_SambaServiceInstanceName.h"
#include "Linux_SambaServiceManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "CIM_ConcreteJobInstanceName.h"

namespace genProvider {

  class Linux_SambaServiceInterface {
  	
    public:    
    virtual ~Linux_SambaServiceInterface() { };
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaServiceInstanceNameEnumeration& instnames) = 0;
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaServiceManualInstanceEnumeration& instances) = 0;
  	
    virtual Linux_SambaServiceManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaServiceInstanceName&) = 0;
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaServiceManualInstance&) = 0;
  	
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaServiceManualInstance&) = 0;
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaServiceInstanceName&) = 0;
	
    
    /* extrinsic methods */

    virtual CMPIUint32 RequestStateChange(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaServiceInstanceName&,
      const CMPIUint16 &RequestedState,
      int isRequestedStatePresent,
      CIM_ConcreteJobInstanceName &Job,
      const CmpiDateTime &TimeoutPeriod,
      int isTimeoutPeriodPresent) = 0;

    virtual CMPIUint32 StartService(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaServiceInstanceName&) = 0;

    virtual CMPIUint32 StopService(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaServiceInstanceName&) = 0;
	
  };
}
#endif

