/**
 *  Linux_SambaPrinterForServiceResourceAccess.h
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


#ifndef Linux_SambaPrinterForServiceResourceAccess_h
#define Linux_SambaPrinterForServiceResourceAccess_h

#include "Linux_SambaPrinterForServiceInstanceName.h"
#include "Linux_SambaPrinterForServiceManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaPrinterOptionsInstance.h"
#include "Linux_SambaServiceInstance.h"
#include "Linux_SambaPrinterOptionsExternal.h"
#include "Linux_SambaServiceExternal.h"
#include "Linux_SambaPrinterForServiceDefaultImplementation.h"
#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {

  class Linux_SambaPrinterForServiceResourceAccess:
   public Linux_SambaPrinterForServiceDefaultImplementation {
  	
    public:
    /*Linux_SambaPrinterForServiceResourceAccess();*/    
    virtual ~Linux_SambaPrinterForServiceResourceAccess() ;
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaPrinterForServiceInstanceNameEnumeration& instnames);
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaPrinterForServiceManualInstanceEnumeration& instances);
  	
    virtual Linux_SambaPrinterForServiceManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaPrinterForServiceInstanceName&);
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaPrinterForServiceManualInstance&);
  	
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaPrinterForServiceManualInstance&);
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaPrinterForServiceInstanceName&);
	
    
    /* Association Interface */

    virtual void referencesSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaPrinterForServiceManualInstanceEnumeration& instances);

    virtual void referencesManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaPrinterForServiceManualInstanceEnumeration& instances);

    virtual void associatorsSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaPrinterOptionsInstanceEnumeration& instances);

    virtual void associatorsManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaServiceInstanceEnumeration& instances);
   
    /* extrinsic methods */
	
  };
}
#endif

