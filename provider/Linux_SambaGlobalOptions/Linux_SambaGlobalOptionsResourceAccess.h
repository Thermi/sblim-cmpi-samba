/**
 *  Linux_SambaGlobalOptionsResourceAccess.h
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


#ifndef Linux_SambaGlobalOptionsResourceAccess_h
#define Linux_SambaGlobalOptionsResourceAccess_h

#include "Linux_SambaGlobalOptionsInstanceName.h"
#include "Linux_SambaGlobalOptionsManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaGlobalOptionsDefaultImplementation.h"
#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {

  class Linux_SambaGlobalOptionsResourceAccess:
   public Linux_SambaGlobalOptionsDefaultImplementation {
    
   private:
    virtual void Linux_SambaGlobalOptionsResourceAccess::setInstanceNameProperties(const char* nsp,     
	     Linux_SambaGlobalOptionsInstanceName& anInstanceName);
    
    virtual void Linux_SambaGlobalOptionsResourceAccess::setInstanceProperties(
             Linux_SambaGlobalOptionsManualInstance& aManualInstance);
    public:
    /*Linux_SambaGlobalOptionsResourceAccess();*/    
    virtual ~Linux_SambaGlobalOptionsResourceAccess() ;
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaGlobalOptionsInstanceNameEnumeration& instnames);
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaGlobalOptionsManualInstanceEnumeration& instances);
  	
    virtual Linux_SambaGlobalOptionsManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalOptionsInstanceName&);
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalOptionsManualInstance&);
  	
    /*virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaGlobalOptionsManualInstance&);*/
  	
    /*virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaGlobalOptionsInstanceName&);*/
	
    
    /* extrinsic methods */
	
  };
}
#endif

