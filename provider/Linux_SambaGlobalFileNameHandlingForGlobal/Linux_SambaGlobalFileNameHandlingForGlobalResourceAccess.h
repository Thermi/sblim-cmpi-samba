/**
 *  Linux_SambaGlobalFileNameHandlingForGlobalResourceAccess.h
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


#ifndef Linux_SambaGlobalFileNameHandlingForGlobalResourceAccess_h
#define Linux_SambaGlobalFileNameHandlingForGlobalResourceAccess_h

#include "Linux_SambaGlobalFileNameHandlingForGlobalInstanceName.h"
#include "Linux_SambaGlobalFileNameHandlingForGlobalManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaGlobalOptionsInstance.h"
#include "Linux_SambaGlobalFileNameHandlingOptionsInstance.h"
#include "Linux_SambaGlobalOptionsExternal.h"
#include "Linux_SambaGlobalFileNameHandlingOptionsExternal.h"
#include "Linux_SambaGlobalFileNameHandlingForGlobalDefaultImplementation.h"
#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {

  class Linux_SambaGlobalFileNameHandlingForGlobalResourceAccess:
   public Linux_SambaGlobalFileNameHandlingForGlobalDefaultImplementation {
  	
    public:
    /*Linux_SambaGlobalFileNameHandlingForGlobalResourceAccess();*/    
    virtual ~Linux_SambaGlobalFileNameHandlingForGlobalResourceAccess() ;
    
    /* intrinsic methods */
    /*virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration& instnames);*/
  	
    /*virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration& instances);*/
  	
    /*virtual Linux_SambaGlobalFileNameHandlingForGlobalManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName&);*/
  	
    /*virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance&);*/
  	
    /*virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance&);*/
  	
    /*virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName&);*/
	
    
    /* Association Interface */

    virtual void referencesManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& sourceInst,
     Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration& instances);

    virtual void referencesSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration& instances);

    virtual void associatorsManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceEnumeration& instances);

    virtual void associatorsSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumeration& instances);

   
    /* extrinsic methods */
	
  };
}
#endif

