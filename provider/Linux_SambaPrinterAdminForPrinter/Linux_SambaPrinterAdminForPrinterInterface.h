/**
 *  Linux_SambaPrinterAdminForPrinterInterface.h
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


#ifndef Linux_SambaPrinterAdminForPrinterInterface_h
#define Linux_SambaPrinterAdminForPrinterInterface_h

#include "Linux_SambaPrinterAdminForPrinterInstanceName.h"
#include "Linux_SambaPrinterAdminForPrinterManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaUserInstance.h"
#include "Linux_SambaPrinterOptionsInstance.h"
#include "Linux_SambaUserExternal.h"
#include "Linux_SambaPrinterOptionsExternal.h"

namespace genProvider {

  class Linux_SambaPrinterAdminForPrinterInterface {
  	
    public:    
    virtual ~Linux_SambaPrinterAdminForPrinterInterface() { };
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaPrinterAdminForPrinterInstanceNameEnumeration& instnames) = 0;
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration& instances) = 0;
  	
    virtual Linux_SambaPrinterAdminForPrinterManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaPrinterAdminForPrinterInstanceName&) = 0;
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaPrinterAdminForPrinterManualInstance&) = 0;
  	
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaPrinterAdminForPrinterManualInstance&) = 0;
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaPrinterAdminForPrinterInstanceName&) = 0;
	
    
    /* Association Interface */

    virtual void referencesPartComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration& instances) = 0;

    virtual void referencesGroupComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration& instances) = 0;

    virtual void associatorsPartComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaUserInstanceEnumeration& instances) = 0;

    virtual void associatorsGroupComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaPrinterOptionsInstanceEnumeration& instances) = 0;

   
    /* extrinsic methods */
	
  };
}
#endif

