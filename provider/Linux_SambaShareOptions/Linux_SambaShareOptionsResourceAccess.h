/**
 *  Linux_SambaShareOptionsResourceAccess.h
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


#ifndef Linux_SambaShareOptionsResourceAccess_h
#define Linux_SambaShareOptionsResourceAccess_h

#include "Linux_SambaShareOptionsInstanceName.h"
#include "Linux_SambaShareOptionsManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaShareOptionsDefaultImplementation.h"
#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {

  class Linux_SambaShareOptionsResourceAccess:
   public Linux_SambaShareOptionsDefaultImplementation {
  	
   private:
    void Linux_SambaShareOptionsResourceAccess::setInstanceNameProperties(const char* nsp,
     char *instanceName,
     Linux_SambaShareOptionsInstanceName& anInstanceName);

    void Linux_SambaShareOptionsResourceAccess::setInstanceProperties(
     Linux_SambaShareOptionsManualInstance& aManualInstance); 
  
    void Linux_SambaShareOptionsResourceAccess::setRAProperties(
     Linux_SambaShareOptionsManualInstance newInstance); 
  

    public:
    /*Linux_SambaShareOptionsResourceAccess();*/    
    virtual ~Linux_SambaShareOptionsResourceAccess() ;
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaShareOptionsInstanceNameEnumeration& instnames);
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaShareOptionsManualInstanceEnumeration& instances);
  	
    virtual Linux_SambaShareOptionsManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaShareOptionsInstanceName& instanceName);
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaShareOptionsManualInstance& newInstance);
  	
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaShareOptionsManualInstance& newInstance);
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaShareOptionsInstanceName& instanceName);
	
    
    /* extrinsic methods */
	
  };
}
#endif

