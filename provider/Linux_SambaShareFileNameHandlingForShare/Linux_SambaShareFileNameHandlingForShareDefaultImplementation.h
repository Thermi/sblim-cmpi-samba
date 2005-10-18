/**
 *  Linux_SambaShareFileNameHandlingForShareDefaultImplementation.h
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


#ifndef Linux_SambaShareFileNameHandlingForShareDefaultImplementation_h
#define Linux_SambaShareFileNameHandlingForShareDefaultImplementation_h

#include "Linux_SambaShareFileNameHandlingForShareInstanceName.h"
#include "Linux_SambaShareFileNameHandlingForShareManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaShareFileNameHandlingOptionsInstance.h"
#include "Linux_SambaShareOptionsInstance.h"
#include "Linux_SambaShareFileNameHandlingOptionsExternal.h"
#include "Linux_SambaShareOptionsExternal.h"
#include "Linux_SambaShareFileNameHandlingForShareInterface.h"

namespace genProvider {

  class Linux_SambaShareFileNameHandlingForShareDefaultImplementation:
   public Linux_SambaShareFileNameHandlingForShareInterface {
  	
    public:    
    virtual ~Linux_SambaShareFileNameHandlingForShareDefaultImplementation() { };
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration& instnames);
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration& instances);
  	
    virtual Linux_SambaShareFileNameHandlingForShareManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaShareFileNameHandlingForShareInstanceName&);
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaShareFileNameHandlingForShareManualInstance&);
  	
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaShareFileNameHandlingForShareManualInstance&);
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaShareFileNameHandlingForShareInstanceName&);
	
    
    /* Association Interface */

    virtual void referencesSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration& instances);

    virtual void referencesManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareFileNameHandlingOptionsInstanceName& sourceInst,
     Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration& instances);

    virtual void associatorsSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration& instances);

    virtual void associatorsManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareFileNameHandlingOptionsInstanceName& sourceInst,
     Linux_SambaShareOptionsInstanceEnumeration& instances);

   
    /* extrinsic methods */
	
  };
}
#endif

