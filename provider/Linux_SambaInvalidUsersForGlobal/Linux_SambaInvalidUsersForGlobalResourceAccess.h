/**
 *  Linux_SambaInvalidUsersForGlobalResourceAccess.h
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


#ifndef Linux_SambaInvalidUsersForGlobalResourceAccess_h
#define Linux_SambaInvalidUsersForGlobalResourceAccess_h

#include "Linux_SambaInvalidUsersForGlobalInstanceName.h"
#include "Linux_SambaInvalidUsersForGlobalManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaUserInstance.h"
#include "Linux_SambaGlobalOptionsInstance.h"
#include "Linux_SambaUserExternal.h"
#include "Linux_SambaGlobalOptionsExternal.h"
#include "Linux_SambaInvalidUsersForGlobalDefaultImplementation.h"

#include <string>
#include <list>

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"
#include "smt_smb_array.h"

namespace genProvider {

  class Linux_SambaInvalidUsersForGlobalResourceAccess:
   public Linux_SambaInvalidUsersForGlobalDefaultImplementation {
  	
    private:
    bool Linux_SambaInvalidUsersForGlobalResourceAccess::validUser(const char* user);
    
    public:
    /*Linux_SambaInvalidUsersForGlobalResourceAccess();*/    
    virtual ~Linux_SambaInvalidUsersForGlobalResourceAccess() ;
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration& instnames);
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaInvalidUsersForGlobalManualInstanceEnumeration& instances);
  	
    virtual Linux_SambaInvalidUsersForGlobalManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaInvalidUsersForGlobalInstanceName&);
  	
    /*virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaInvalidUsersForGlobalManualInstance&);*/
  	
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaInvalidUsersForGlobalManualInstance&);
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaInvalidUsersForGlobalInstanceName&);
	
    
    /* Association Interface */

    virtual void referencesPartComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaInvalidUsersForGlobalManualInstanceEnumeration& instances);

    virtual void referencesGroupComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaInvalidUsersForGlobalManualInstanceEnumeration& instances);

    virtual void associatorsPartComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaUserInstanceEnumeration& instances);

    virtual void associatorsGroupComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceEnumeration& instances);

   
    /* extrinsic methods */
	
  };
}
#endif

