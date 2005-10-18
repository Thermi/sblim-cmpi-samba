/**
 *  Linux_SambaForceGroupForPrinterDefaultImplementation.h
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


#ifndef Linux_SambaForceGroupForPrinterDefaultImplementation_h
#define Linux_SambaForceGroupForPrinterDefaultImplementation_h

#include "Linux_SambaForceGroupForPrinterInstanceName.h"
#include "Linux_SambaForceGroupForPrinterManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaPrinterOptionsInstance.h"
#include "Linux_SambaGroupInstance.h"
#include "Linux_SambaPrinterOptionsExternal.h"
#include "Linux_SambaGroupExternal.h"
#include "Linux_SambaForceGroupForPrinterInterface.h"

namespace genProvider {

  class Linux_SambaForceGroupForPrinterDefaultImplementation:
   public Linux_SambaForceGroupForPrinterInterface {
  	
    public:    
    virtual ~Linux_SambaForceGroupForPrinterDefaultImplementation() { };
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaForceGroupForPrinterInstanceNameEnumeration& instnames);
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaForceGroupForPrinterManualInstanceEnumeration& instances);
  	
    virtual Linux_SambaForceGroupForPrinterManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaForceGroupForPrinterInstanceName&);
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaForceGroupForPrinterManualInstance&);
  	
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaForceGroupForPrinterManualInstance&);
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaForceGroupForPrinterInstanceName&);
	
    
    /* Association Interface */

    virtual void referencesGroupComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGroupInstanceName& sourceInst,
     Linux_SambaForceGroupForPrinterManualInstanceEnumeration& instances);

    virtual void referencesPartComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaForceGroupForPrinterManualInstanceEnumeration& instances);

    virtual void associatorsGroupComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGroupInstanceName& sourceInst,
     Linux_SambaPrinterOptionsInstanceEnumeration& instances);

    virtual void associatorsPartComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaGroupInstanceEnumeration& instances);

   
    /* extrinsic methods */
	
  };
}
#endif

