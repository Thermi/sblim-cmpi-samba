/**
 *  Linux_SambaPrinterSecurityForPrinterDefaultImplementation.h
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


#ifndef Linux_SambaPrinterSecurityForPrinterDefaultImplementation_h
#define Linux_SambaPrinterSecurityForPrinterDefaultImplementation_h

#include "Linux_SambaPrinterSecurityForPrinterInstanceName.h"
#include "Linux_SambaPrinterSecurityForPrinterManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaPrinterSecurityOptionsInstance.h"
#include "Linux_SambaPrinterOptionsInstance.h"
#include "Linux_SambaPrinterSecurityOptionsExternal.h"
#include "Linux_SambaPrinterOptionsExternal.h"
#include "Linux_SambaPrinterSecurityForPrinterInterface.h"

namespace genProvider {

  class Linux_SambaPrinterSecurityForPrinterDefaultImplementation:
   public Linux_SambaPrinterSecurityForPrinterInterface {
  	
    public:    
    virtual ~Linux_SambaPrinterSecurityForPrinterDefaultImplementation() { };
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaPrinterSecurityForPrinterInstanceNameEnumeration& instnames);
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration& instances);
  	
    virtual Linux_SambaPrinterSecurityForPrinterManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaPrinterSecurityForPrinterInstanceName&);
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaPrinterSecurityForPrinterManualInstance&);
  	
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaPrinterSecurityForPrinterManualInstance&);
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaPrinterSecurityForPrinterInstanceName&);
	
    
    /* Association Interface */

    virtual void referencesSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration& instances);

    virtual void referencesManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterSecurityOptionsInstanceName& sourceInst,
     Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration& instances);

    virtual void associatorsSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaPrinterSecurityOptionsInstanceEnumeration& instances);

    virtual void associatorsManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterSecurityOptionsInstanceName& sourceInst,
     Linux_SambaPrinterOptionsInstanceEnumeration& instances);

   
    /* extrinsic methods */
	
  };
}
#endif

