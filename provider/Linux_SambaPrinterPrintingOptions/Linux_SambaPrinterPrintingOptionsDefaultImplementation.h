/**
 *  Linux_SambaPrinterPrintingOptionsDefaultImplementation.h
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


#ifndef Linux_SambaPrinterPrintingOptionsDefaultImplementation_h
#define Linux_SambaPrinterPrintingOptionsDefaultImplementation_h

#include "Linux_SambaPrinterPrintingOptionsInstanceName.h"
#include "Linux_SambaPrinterPrintingOptionsManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaPrinterPrintingOptionsInterface.h"

namespace genProvider {

  class Linux_SambaPrinterPrintingOptionsDefaultImplementation:
   public Linux_SambaPrinterPrintingOptionsInterface {
  	
    public:    
    virtual ~Linux_SambaPrinterPrintingOptionsDefaultImplementation() { };
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaPrinterPrintingOptionsInstanceNameEnumeration& instnames);
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration& instances);
  	
    virtual Linux_SambaPrinterPrintingOptionsManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaPrinterPrintingOptionsInstanceName&);
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaPrinterPrintingOptionsManualInstance&);
  	
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaPrinterPrintingOptionsManualInstance&);
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaPrinterPrintingOptionsInstanceName&);
	
    
    /* extrinsic methods */
	
  };
}
#endif

