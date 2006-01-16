/**
 *  Linux_SambaShareFileNameHandlingOptionsResourceAccess.h
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


#ifndef Linux_SambaShareFileNameHandlingOptionsResourceAccess_h
#define Linux_SambaShareFileNameHandlingOptionsResourceAccess_h

#include "Linux_SambaShareFileNameHandlingOptionsInstanceName.h"
#include "Linux_SambaShareFileNameHandlingOptionsManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaShareFileNameHandlingOptionsDefaultImplementation.h"
#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {

  class Linux_SambaShareFileNameHandlingOptionsResourceAccess:
   public Linux_SambaShareFileNameHandlingOptionsDefaultImplementation {
  	
   private:
    void Linux_SambaShareFileNameHandlingOptionsResourceAccess::setInstanceNameProperties(const char* nsp,
     char *instanceName,
     Linux_SambaShareFileNameHandlingOptionsInstanceName& anInstanceName);

    void Linux_SambaShareFileNameHandlingOptionsResourceAccess::setInstanceProperties(
     Linux_SambaShareFileNameHandlingOptionsManualInstance& aManualInstance); 
  
    void Linux_SambaShareFileNameHandlingOptionsResourceAccess::setRAProperties(
     Linux_SambaShareFileNameHandlingOptionsManualInstance newInstance); 
  
    public:
    /*Linux_SambaShareFileNameHandlingOptionsResourceAccess();*/    
    virtual ~Linux_SambaShareFileNameHandlingOptionsResourceAccess() ;
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration& instnames);
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration& instances);
  	
    virtual Linux_SambaShareFileNameHandlingOptionsManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaShareFileNameHandlingOptionsInstanceName&);
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaShareFileNameHandlingOptionsManualInstance&);
  	
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaShareFileNameHandlingOptionsManualInstance&);
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaShareFileNameHandlingOptionsInstanceName&);
	
    
    /* extrinsic methods */
	
  };
}
#endif
