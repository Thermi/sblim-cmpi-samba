/**
 *  Linux_SambaServiceResourceAccess.h
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


#ifndef Linux_SambaServiceResourceAccess_h
#define Linux_SambaServiceResourceAccess_h

#include "Linux_SambaServiceInstanceName.h"
#include "Linux_SambaServiceManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "CIM_ConcreteJobInstanceName.h"
#include "Linux_SambaServiceDefaultImplementation.h"
#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {

  class Linux_SambaServiceResourceAccess:
   public Linux_SambaServiceDefaultImplementation {
    
   private:
    void Linux_SambaServiceResourceAccess::setInstanceNameProperties(const char* nsp,     
     Linux_SambaServiceInstanceName& anInstanceName);
    
    public:
    /*Linux_SambaServiceResourceAccess();*/    
    virtual ~Linux_SambaServiceResourceAccess() ;
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaServiceInstanceNameEnumeration& instnames);
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaServiceManualInstanceEnumeration& instances);
  	
    virtual Linux_SambaServiceManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaServiceInstanceName&);
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaServiceManualInstance&);
  	
    /*virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaServiceManualInstance&);*/
  	
    /*virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaServiceInstanceName&);*/
	
    
    /* extrinsic methods */
    /*
    virtual CMPIUint32 RequestStateChange(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaServiceInstanceName&,
      const CMPIUint16 &RequestedState,
      int isRequestedStatePresent,
      CIM_ConcreteJobInstanceName &Job,
      const CmpiDateTime &TimeoutPeriod,
      int isTimeoutPeriodPresent);
    */
        
    virtual CMPIUint32 StartService(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaServiceInstanceName&);
    
    virtual CMPIUint32 StopService(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaServiceInstanceName&);
    
  };
}
#endif

