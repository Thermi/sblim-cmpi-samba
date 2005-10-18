/**
 *  Linux_SambaGroupResourceAccess.h
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


#ifndef Linux_SambaGroupResourceAccess_h
#define Linux_SambaGroupResourceAccess_h

#include "Linux_SambaGroupInstanceName.h"
#include "Linux_SambaGroupManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaGroupDefaultImplementation.h"
#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

#include <errno.h>

namespace genProvider {

  class Linux_SambaGroupResourceAccess:
   public Linux_SambaGroupDefaultImplementation {
  	
   private:
    void Linux_SambaGroupResourceAccess::setInstanceNameProperties(const char* nsp,
     char *instanceName,
     Linux_SambaGroupInstanceName& anInstanceName);
    
   public:
    /*Linux_SambaGroupResourceAccess();*/    
    virtual ~Linux_SambaGroupResourceAccess() ;
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaGroupInstanceNameEnumeration& instnames);
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaGroupManualInstanceEnumeration& instances);
  	
    
    virtual Linux_SambaGroupManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGroupInstanceName&);
    
    /*
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGroupManualInstance&);
    */
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaGroupManualInstance&);
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaGroupInstanceName&);
	
    
    /* extrinsic methods */

    virtual char* getAllSystemGroups(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaGroupInstanceName&);
	
  };
}
#endif

