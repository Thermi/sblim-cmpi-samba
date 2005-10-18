/**
 *  Linux_SambaSharePrinterBrowseForShareInterface.h
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


#ifndef Linux_SambaSharePrinterBrowseForShareInterface_h
#define Linux_SambaSharePrinterBrowseForShareInterface_h

#include "Linux_SambaSharePrinterBrowseForShareInstanceName.h"
#include "Linux_SambaSharePrinterBrowseForShareManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaSharePrinterBrowseOptionsInstance.h"
#include "Linux_SambaShareOptionsInstance.h"
#include "Linux_SambaSharePrinterBrowseOptionsExternal.h"
#include "Linux_SambaShareOptionsExternal.h"

namespace genProvider {

  class Linux_SambaSharePrinterBrowseForShareInterface {
  	
    public:    
    virtual ~Linux_SambaSharePrinterBrowseForShareInterface() { };
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration& instnames) = 0;
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration& instances) = 0;
  	
    virtual Linux_SambaSharePrinterBrowseForShareManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaSharePrinterBrowseForShareInstanceName&) = 0;
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaSharePrinterBrowseForShareManualInstance&) = 0;
  	
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaSharePrinterBrowseForShareManualInstance&) = 0;
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaSharePrinterBrowseForShareInstanceName&) = 0;
	
    
    /* Association Interface */

    virtual void referencesSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration& instances) = 0;

    virtual void referencesManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaSharePrinterBrowseOptionsInstanceName& sourceInst,
     Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration& instances) = 0;

    virtual void associatorsSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration& instances) = 0;

    virtual void associatorsManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaSharePrinterBrowseOptionsInstanceName& sourceInst,
     Linux_SambaShareOptionsInstanceEnumeration& instances) = 0;

   
    /* extrinsic methods */
	
  };
}
#endif

