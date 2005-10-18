/**
 *  Linux_SambaUserResourceAccess.h
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


#ifndef Linux_SambaUserResourceAccess_h
#define Linux_SambaUserResourceAccess_h

#include "Linux_SambaUserInstanceName.h"
#include "Linux_SambaUserManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaUserDefaultImplementation.h"
#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

#include <errno.h>

namespace genProvider {

  class Linux_SambaUserResourceAccess:
   public Linux_SambaUserDefaultImplementation {
  	
   private:
    void Linux_SambaUserResourceAccess::setInstanceNameProperties(const char* nsp,
     char *instanceName,
     Linux_SambaUserInstanceName& anInstanceName);

    bool Linux_SambaUserResourceAccess::validUser(const char* user);
    
   public:
    /*Linux_SambaUserResourceAccess();*/    
    virtual ~Linux_SambaUserResourceAccess() ;
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaUserInstanceNameEnumeration& instnames);
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaUserManualInstanceEnumeration& instances);
  	
    
    virtual Linux_SambaUserManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaUserInstanceName&);
    
    /*
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaUserManualInstance&);
    */
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaUserManualInstance&);
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaUserInstanceName&);
	
    
    /* extrinsic methods */

    virtual char* getAllSystemGroups(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaUserInstanceName&);

    virtual char* getAllSystemUsers(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaUserInstanceName&);
	
  };
}
#endif

