/**
 *  Linux_SambaGlobalProtocolForGlobalInterface.h
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


#ifndef Linux_SambaGlobalProtocolForGlobalInterface_h
#define Linux_SambaGlobalProtocolForGlobalInterface_h

#include "Linux_SambaGlobalProtocolForGlobalInstanceName.h"
#include "Linux_SambaGlobalProtocolForGlobalManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaGlobalProtocolOptionsInstance.h"
#include "Linux_SambaGlobalOptionsInstance.h"
#include "Linux_SambaGlobalProtocolOptionsExternal.h"
#include "Linux_SambaGlobalOptionsExternal.h"

namespace genProvider {

  class Linux_SambaGlobalProtocolForGlobalInterface {
  	
    public:    
    virtual ~Linux_SambaGlobalProtocolForGlobalInterface() { };
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaGlobalProtocolForGlobalInstanceNameEnumeration& instnames) = 0;
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration& instances) = 0;
  	
    virtual Linux_SambaGlobalProtocolForGlobalManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalProtocolForGlobalInstanceName&) = 0;
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalProtocolForGlobalManualInstance&) = 0;
  	
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaGlobalProtocolForGlobalManualInstance&) = 0;
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaGlobalProtocolForGlobalInstanceName&) = 0;
	
    
    /* Association Interface */

    virtual void referencesSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration& instances) = 0;

    virtual void referencesManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalProtocolOptionsInstanceName& sourceInst,
     Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration& instances) = 0;

    virtual void associatorsSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalProtocolOptionsInstanceEnumeration& instances) = 0;

    virtual void associatorsManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalProtocolOptionsInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceEnumeration& instances) = 0;

   
    /* extrinsic methods */
	
  };
}
#endif
