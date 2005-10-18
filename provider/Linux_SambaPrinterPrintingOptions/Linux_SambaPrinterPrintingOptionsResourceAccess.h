/**
 *  Linux_SambaPrinterPrintingOptionsResourceAccess.h
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


#ifndef Linux_SambaPrinterPrintingOptionsResourceAccess_h
#define Linux_SambaPrinterPrintingOptionsResourceAccess_h

#include "Linux_SambaPrinterPrintingOptionsInstanceName.h"
#include "Linux_SambaPrinterPrintingOptionsManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaPrinterPrintingOptionsDefaultImplementation.h"
#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {

  class Linux_SambaPrinterPrintingOptionsResourceAccess:
   public Linux_SambaPrinterPrintingOptionsDefaultImplementation {

   private:
    void Linux_SambaPrinterPrintingOptionsResourceAccess::setInstanceNameProperties(const char* nsp,
     char *instanceName,
     Linux_SambaPrinterPrintingOptionsInstanceName& anInstanceName);

    void Linux_SambaPrinterPrintingOptionsResourceAccess::setInstanceProperties(
     Linux_SambaPrinterPrintingOptionsManualInstance& aManualInstance); 
  
    void Linux_SambaPrinterPrintingOptionsResourceAccess::setRAProperties(
     Linux_SambaPrinterPrintingOptionsManualInstance newInstance); 
   
  	
    public:
    /*Linux_SambaPrinterPrintingOptionsResourceAccess();*/    
    virtual ~Linux_SambaPrinterPrintingOptionsResourceAccess() ;
    
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
     const Linux_SambaPrinterPrintingOptionsInstanceName& instanceName);
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaPrinterPrintingOptionsManualInstance& newInstance);
  	
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaPrinterPrintingOptionsManualInstance& newInstance);
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaPrinterPrintingOptionsInstanceName& instanceName);
	
    
    /* extrinsic methods */
	
  };
}
#endif

