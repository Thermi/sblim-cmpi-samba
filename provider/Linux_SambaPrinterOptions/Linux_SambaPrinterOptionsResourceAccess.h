/**
 *  Linux_SambaPrinterOptionsResourceAccess.h
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


#ifndef Linux_SambaPrinterOptionsResourceAccess_h
#define Linux_SambaPrinterOptionsResourceAccess_h

#include "Linux_SambaPrinterOptionsInstanceName.h"
#include "Linux_SambaPrinterOptionsManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaPrinterOptionsDefaultImplementation.h"
#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {

  class Linux_SambaPrinterOptionsResourceAccess:
   public Linux_SambaPrinterOptionsDefaultImplementation {
  	
    private:
    void Linux_SambaPrinterOptionsResourceAccess::setInstanceNameProperties(const char* nsp,
     char *instanceName,
     Linux_SambaPrinterOptionsInstanceName& anInstanceName);

    void Linux_SambaPrinterOptionsResourceAccess::setInstanceProperties(
     Linux_SambaPrinterOptionsManualInstance& aManualInstance); 
  
    void Linux_SambaPrinterOptionsResourceAccess::setRAProperties(
     Linux_SambaPrinterOptionsManualInstance newInstance); 


    public:
    /*Linux_SambaPrinterOptionsResourceAccess();*/    
    virtual ~Linux_SambaPrinterOptionsResourceAccess() ;
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaPrinterOptionsInstanceNameEnumeration& instnames);
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaPrinterOptionsManualInstanceEnumeration& instances);
  	
    virtual Linux_SambaPrinterOptionsManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaPrinterOptionsInstanceName&);
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaPrinterOptionsManualInstance&);
  	
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaPrinterOptionsManualInstance&);
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaPrinterOptionsInstanceName&);
	
    
    /* extrinsic methods */

    virtual char* getAllSystemDefinedPrinters(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaPrinterOptionsInstanceName&);
	
  };
}
#endif

