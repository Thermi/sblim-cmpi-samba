/**
 *  Linux_SambaGlobalSecurityForGlobalResourceAccess.h
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


#ifndef Linux_SambaGlobalSecurityForGlobalResourceAccess_h
#define Linux_SambaGlobalSecurityForGlobalResourceAccess_h

#include "Linux_SambaGlobalSecurityForGlobalInstanceName.h"
#include "Linux_SambaGlobalSecurityForGlobalManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaGlobalSecurityOptionsInstance.h"
#include "Linux_SambaGlobalOptionsInstance.h"
#include "Linux_SambaGlobalSecurityOptionsExternal.h"
#include "Linux_SambaGlobalOptionsExternal.h"
#include "Linux_SambaGlobalSecurityForGlobalDefaultImplementation.h"
#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {

  class Linux_SambaGlobalSecurityForGlobalResourceAccess:
   public Linux_SambaGlobalSecurityForGlobalDefaultImplementation {
  	
    public:
    /*Linux_SambaGlobalSecurityForGlobalResourceAccess();*/    
    virtual ~Linux_SambaGlobalSecurityForGlobalResourceAccess() ;
    
    /* intrinsic methods */
    /*virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaGlobalSecurityForGlobalInstanceNameEnumeration& instnames);*/
  	
    /*virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration& instances);*/
  	
    /*virtual Linux_SambaGlobalSecurityForGlobalManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalSecurityForGlobalInstanceName&);*/
  	
    /*virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalSecurityForGlobalManualInstance&);*/
  	
    /*virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaGlobalSecurityForGlobalManualInstance&);*/
  	
    /*virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaGlobalSecurityForGlobalInstanceName&);*/
	
    
    /* Association Interface */

    virtual void referencesSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration& instances);

    virtual void referencesManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalSecurityOptionsInstanceName& sourceInst,
     Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration& instances);

    virtual void associatorsSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalSecurityOptionsInstanceEnumeration& instances);

   virtual void associatorsManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalSecurityOptionsInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceEnumeration& instances);

   
    /* extrinsic methods */
	
  };
}
#endif

