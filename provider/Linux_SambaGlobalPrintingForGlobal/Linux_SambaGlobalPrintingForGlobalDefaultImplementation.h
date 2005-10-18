/**
 *  Linux_SambaGlobalPrintingForGlobalDefaultImplementation.h
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


#ifndef Linux_SambaGlobalPrintingForGlobalDefaultImplementation_h
#define Linux_SambaGlobalPrintingForGlobalDefaultImplementation_h

#include "Linux_SambaGlobalPrintingForGlobalInstanceName.h"
#include "Linux_SambaGlobalPrintingForGlobalManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaGlobalPrintingOptionsInstance.h"
#include "Linux_SambaGlobalOptionsInstance.h"
#include "Linux_SambaGlobalPrintingOptionsExternal.h"
#include "Linux_SambaGlobalOptionsExternal.h"
#include "Linux_SambaGlobalPrintingForGlobalInterface.h"

namespace genProvider {

  class Linux_SambaGlobalPrintingForGlobalDefaultImplementation:
   public Linux_SambaGlobalPrintingForGlobalInterface {
  	
    public:    
    virtual ~Linux_SambaGlobalPrintingForGlobalDefaultImplementation() { };
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration& instnames);
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration& instances);
  	
    virtual Linux_SambaGlobalPrintingForGlobalManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalPrintingForGlobalInstanceName&);
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalPrintingForGlobalManualInstance&);
  	
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaGlobalPrintingForGlobalManualInstance&);
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaGlobalPrintingForGlobalInstanceName&);
	
    
    /* Association Interface */

    virtual void referencesSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration& instances);

    virtual void referencesManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalPrintingOptionsInstanceName& sourceInst,
     Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration& instances);

    virtual void associatorsSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalPrintingOptionsInstanceEnumeration& instances);

    virtual void associatorsManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalPrintingOptionsInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceEnumeration& instances);

   
    /* extrinsic methods */
	
  };
}
#endif

