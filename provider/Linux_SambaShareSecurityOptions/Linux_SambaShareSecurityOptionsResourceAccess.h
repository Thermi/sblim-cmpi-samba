/**
 *  Linux_SambaShareSecurityOptionsResourceAccess.h
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


#ifndef Linux_SambaShareSecurityOptionsResourceAccess_h
#define Linux_SambaShareSecurityOptionsResourceAccess_h

#include "Linux_SambaShareSecurityOptionsInstanceName.h"
#include "Linux_SambaShareSecurityOptionsManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaShareSecurityOptionsDefaultImplementation.h"
#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {

  class Linux_SambaShareSecurityOptionsResourceAccess:
   public Linux_SambaShareSecurityOptionsDefaultImplementation {

   private:
    void Linux_SambaShareSecurityOptionsResourceAccess::setInstanceNameProperties(const char* nsp,
     char *instanceName,
     Linux_SambaShareSecurityOptionsInstanceName& anInstanceName);

    void Linux_SambaShareSecurityOptionsResourceAccess::setInstanceProperties(
     Linux_SambaShareSecurityOptionsManualInstance& aManualInstance, bool global); 
  
    void Linux_SambaShareSecurityOptionsResourceAccess::setRAProperties(
     Linux_SambaShareSecurityOptionsManualInstance newInstance, bool global); 
  
    public:
    /*Linux_SambaShareSecurityOptionsResourceAccess();*/    
    virtual ~Linux_SambaShareSecurityOptionsResourceAccess() ;
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaShareSecurityOptionsInstanceNameEnumeration& instnames);
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaShareSecurityOptionsManualInstanceEnumeration& instances);
  	
    virtual Linux_SambaShareSecurityOptionsManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaShareSecurityOptionsInstanceName&);
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaShareSecurityOptionsManualInstance&);
  	
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaShareSecurityOptionsManualInstance&);
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaShareSecurityOptionsInstanceName&);
	
    
    /* extrinsic methods */
	
  };
}
#endif

