/**
 *  Linux_SambaSharePrinterBrowseForShareResourceAccess.h
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


#ifndef Linux_SambaSharePrinterBrowseForShareResourceAccess_h
#define Linux_SambaSharePrinterBrowseForShareResourceAccess_h

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
#include "Linux_SambaSharePrinterBrowseForShareDefaultImplementation.h"
#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {

  class Linux_SambaSharePrinterBrowseForShareResourceAccess:
   public Linux_SambaSharePrinterBrowseForShareDefaultImplementation {
  	
    public:
    /*Linux_SambaSharePrinterBrowseForShareResourceAccess();*/    
    virtual ~Linux_SambaSharePrinterBrowseForShareResourceAccess() ;
    
    /* intrinsic methods */
    /*virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration& instnames);*/
  	
    /*virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration& instances);*/
  	
    /*virtual Linux_SambaSharePrinterBrowseForShareManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaSharePrinterBrowseForShareInstanceName&);*/
  	
    /*virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaSharePrinterBrowseForShareManualInstance&);*/
  	
    /*virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaSharePrinterBrowseForShareManualInstance&);*/
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaSharePrinterBrowseForShareInstanceName&);
	
    
    /* Association Interface */

    virtual void referencesSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration& instances);

    virtual void referencesManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaSharePrinterBrowseOptionsInstanceName& sourceInst,
     Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration& instances);

    virtual void associatorsSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration& instances);

    virtual void associatorsManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaSharePrinterBrowseOptionsInstanceName& sourceInst,
     Linux_SambaShareOptionsInstanceEnumeration& instances);

   
    /* extrinsic methods */
	
  };
}
#endif

