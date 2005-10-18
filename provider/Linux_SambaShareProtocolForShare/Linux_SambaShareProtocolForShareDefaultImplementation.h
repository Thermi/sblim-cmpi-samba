/**
 *  Linux_SambaShareProtocolForShareDefaultImplementation.h
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


#ifndef Linux_SambaShareProtocolForShareDefaultImplementation_h
#define Linux_SambaShareProtocolForShareDefaultImplementation_h

#include "Linux_SambaShareProtocolForShareInstanceName.h"
#include "Linux_SambaShareProtocolForShareManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaShareOptionsInstance.h"
#include "Linux_SambaShareProtocolOptionsInstance.h"
#include "Linux_SambaShareOptionsExternal.h"
#include "Linux_SambaShareProtocolOptionsExternal.h"
#include "Linux_SambaShareProtocolForShareInterface.h"

namespace genProvider {

  class Linux_SambaShareProtocolForShareDefaultImplementation:
   public Linux_SambaShareProtocolForShareInterface {
  	
    public:    
    virtual ~Linux_SambaShareProtocolForShareDefaultImplementation() { };
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaShareProtocolForShareInstanceNameEnumeration& instnames);
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaShareProtocolForShareManualInstanceEnumeration& instances);
  	
    virtual Linux_SambaShareProtocolForShareManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaShareProtocolForShareInstanceName&);
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaShareProtocolForShareManualInstance&);
  	
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaShareProtocolForShareManualInstance&);
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaShareProtocolForShareInstanceName&);
	
    
    /* Association Interface */

    virtual void referencesManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareProtocolOptionsInstanceName& sourceInst,
     Linux_SambaShareProtocolForShareManualInstanceEnumeration& instances);

    virtual void referencesSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareProtocolForShareManualInstanceEnumeration& instances);

    virtual void associatorsManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareProtocolOptionsInstanceName& sourceInst,
     Linux_SambaShareOptionsInstanceEnumeration& instances);

    virtual void associatorsSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareProtocolOptionsInstanceEnumeration& instances);

   
    /* extrinsic methods */
	
  };
}
#endif

