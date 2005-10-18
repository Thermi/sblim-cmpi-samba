/**
 *  Linux_SambaShareProtocolOptionsResourceAccess.h
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


#ifndef Linux_SambaShareProtocolOptionsResourceAccess_h
#define Linux_SambaShareProtocolOptionsResourceAccess_h

#include "Linux_SambaShareProtocolOptionsInstanceName.h"
#include "Linux_SambaShareProtocolOptionsManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaShareProtocolOptionsDefaultImplementation.h"
#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {

  class Linux_SambaShareProtocolOptionsResourceAccess:
   public Linux_SambaShareProtocolOptionsDefaultImplementation {

   private:
    void Linux_SambaShareProtocolOptionsResourceAccess::setInstanceNameProperties(const char* nsp,
     char *instanceName,
     Linux_SambaShareProtocolOptionsInstanceName& anInstanceName);

    void Linux_SambaShareProtocolOptionsResourceAccess::setInstanceProperties(
     Linux_SambaShareProtocolOptionsManualInstance& aManualInstance); 
  
    void Linux_SambaShareProtocolOptionsResourceAccess::setRAProperties(
     Linux_SambaShareProtocolOptionsManualInstance newInstance); 
  
    public:
    /*Linux_SambaShareProtocolOptionsResourceAccess();*/    
    virtual ~Linux_SambaShareProtocolOptionsResourceAccess() ;
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaShareProtocolOptionsInstanceNameEnumeration& instnames);
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaShareProtocolOptionsManualInstanceEnumeration& instances);
  	
    virtual Linux_SambaShareProtocolOptionsManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaShareProtocolOptionsInstanceName&);
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaShareProtocolOptionsManualInstance&);
  	
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaShareProtocolOptionsManualInstance&);
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaShareProtocolOptionsInstanceName&);
	
    
    /* extrinsic methods */
	
  };
}
#endif

