/**
 *  Linux_SambaGlobalSecurityOptionsResourceAccess.h
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


#ifndef Linux_SambaGlobalSecurityOptionsResourceAccess_h
#define Linux_SambaGlobalSecurityOptionsResourceAccess_h

#include "Linux_SambaGlobalSecurityOptionsInstanceName.h"
#include "Linux_SambaGlobalSecurityOptionsManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaGlobalSecurityOptionsDefaultImplementation.h"
#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {

  class Linux_SambaGlobalSecurityOptionsResourceAccess:
   public Linux_SambaGlobalSecurityOptionsDefaultImplementation {
  
   private:
    virtual void Linux_SambaGlobalSecurityOptionsResourceAccess::setInstanceNameProperties(const char* nsp,     
	     Linux_SambaGlobalSecurityOptionsInstanceName& anInstanceName);
    
    virtual void Linux_SambaGlobalSecurityOptionsResourceAccess::setInstanceProperties(
             Linux_SambaGlobalSecurityOptionsManualInstance& aManualInstance);
    
	
    public:
    /*Linux_SambaGlobalSecurityOptionsResourceAccess();*/    
    virtual ~Linux_SambaGlobalSecurityOptionsResourceAccess() ;
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaGlobalSecurityOptionsInstanceNameEnumeration& instnames);
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration& instances);
  	
    virtual Linux_SambaGlobalSecurityOptionsManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalSecurityOptionsInstanceName& instanceName);
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalSecurityOptionsManualInstance& newInstance);
  	
    /*virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaGlobalSecurityOptionsManualInstance&);*/
  	
    /*virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaGlobalSecurityOptionsInstanceName&);*/
	
    
    /* extrinsic methods */
	
  };
}
#endif

