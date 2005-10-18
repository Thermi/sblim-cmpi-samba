/**
 *  Linux_SambaCommonSecurityOptionsResourceAccess.h
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


#ifndef Linux_SambaCommonSecurityOptionsResourceAccess_h
#define Linux_SambaCommonSecurityOptionsResourceAccess_h

#include "Linux_SambaCommonSecurityOptionsInstanceName.h"
#include "Linux_SambaCommonSecurityOptionsManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaCommonSecurityOptionsDefaultImplementation.h"
#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {

  class Linux_SambaCommonSecurityOptionsResourceAccess:
   public Linux_SambaCommonSecurityOptionsDefaultImplementation {

   private:
    void Linux_SambaCommonSecurityOptionsResourceAccess::setInstanceNameProperties(
     const char* nsp,
     char *instanceName,
     Linux_SambaCommonSecurityOptionsInstanceName& anInstanceName);    
    
    void Linux_SambaCommonSecurityOptionsResourceAccess::setInstanceProperties(
     Linux_SambaCommonSecurityOptionsManualInstance& aManualInstance, bool global);
   
    void Linux_SambaCommonSecurityOptionsResourceAccess::setRAProperties(
     Linux_SambaCommonSecurityOptionsManualInstance newInstance, bool global);
 
   public:
    /*Linux_SambaCommonSecurityOptionsResourceAccess();*/    
    virtual ~Linux_SambaCommonSecurityOptionsResourceAccess() ;
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaCommonSecurityOptionsInstanceNameEnumeration& instnames);
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaCommonSecurityOptionsManualInstanceEnumeration& instances);
  	
    virtual Linux_SambaCommonSecurityOptionsManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaCommonSecurityOptionsInstanceName& instanceName);
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaCommonSecurityOptionsManualInstance& newInstance);
  	
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaCommonSecurityOptionsManualInstance& newInstance);
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaCommonSecurityOptionsInstanceName& instanceName);
	
    
    /* extrinsic methods */
	
  };
}
#endif

