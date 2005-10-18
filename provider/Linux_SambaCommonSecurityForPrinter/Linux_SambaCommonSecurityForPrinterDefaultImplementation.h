/**
 *  Linux_SambaCommonSecurityForPrinterDefaultImplementation.h
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


#ifndef Linux_SambaCommonSecurityForPrinterDefaultImplementation_h
#define Linux_SambaCommonSecurityForPrinterDefaultImplementation_h

#include "Linux_SambaCommonSecurityForPrinterInstanceName.h"
#include "Linux_SambaCommonSecurityForPrinterManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaCommonSecurityOptionsInstance.h"
#include "Linux_SambaPrinterOptionsInstance.h"
#include "Linux_SambaCommonSecurityOptionsExternal.h"
#include "Linux_SambaPrinterOptionsExternal.h"
#include "Linux_SambaCommonSecurityForPrinterInterface.h"

namespace genProvider {

  class Linux_SambaCommonSecurityForPrinterDefaultImplementation:
   public Linux_SambaCommonSecurityForPrinterInterface {
  	
    public:    
    virtual ~Linux_SambaCommonSecurityForPrinterDefaultImplementation() { };
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaCommonSecurityForPrinterInstanceNameEnumeration& instnames);
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration& instances);
  	
    virtual Linux_SambaCommonSecurityForPrinterManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaCommonSecurityForPrinterInstanceName&);
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaCommonSecurityForPrinterManualInstance&);
  	
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaCommonSecurityForPrinterManualInstance&);
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaCommonSecurityForPrinterInstanceName&);
	
    
    /* Association Interface */

    virtual void referencesSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration& instances);

    virtual void referencesManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaCommonSecurityOptionsInstanceName& sourceInst,
     Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration& instances);

    virtual void associatorsSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaCommonSecurityOptionsInstanceEnumeration& instances);

    virtual void associatorsManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaCommonSecurityOptionsInstanceName& sourceInst,
     Linux_SambaPrinterOptionsInstanceEnumeration& instances);

   
    /* extrinsic methods */
	
  };
}
#endif

