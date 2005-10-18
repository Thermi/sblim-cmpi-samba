/**
 *  Linux_SambaServiceConfigurationResourceAccess.h
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


#ifndef Linux_SambaServiceConfigurationResourceAccess_h
#define Linux_SambaServiceConfigurationResourceAccess_h

#include "Linux_SambaServiceConfigurationInstanceName.h"
#include "Linux_SambaServiceConfigurationManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaServiceConfigurationDefaultImplementation.h"
#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  class Linux_SambaServiceConfigurationResourceAccess:
   public Linux_SambaServiceConfigurationDefaultImplementation {
  
   private:
    void Linux_SambaServiceConfigurationResourceAccess::setInstanceNameProperties(const char* nsp,     
     Linux_SambaServiceConfigurationInstanceName& anInstanceName);

    
    public:
    /*Linux_SambaServiceConfigurationResourceAccess();*/    
    virtual ~Linux_SambaServiceConfigurationResourceAccess() ;
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaServiceConfigurationInstanceNameEnumeration& instnames);
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaServiceConfigurationManualInstanceEnumeration& instances);
  	
    virtual Linux_SambaServiceConfigurationManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaServiceConfigurationInstanceName&);
  	
    /*virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaServiceConfigurationManualInstance&);*/
  	
    /*virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaServiceConfigurationManualInstance&);*/
  	
    /*virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaServiceConfigurationInstanceName&);*/
	
    
    /* extrinsic methods */
	
  };
}
#endif

