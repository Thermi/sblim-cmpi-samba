/**
 *  Linux_SambaSharePrinterBrowseOptionsResourceAccess.h
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


#ifndef Linux_SambaSharePrinterBrowseOptionsResourceAccess_h
#define Linux_SambaSharePrinterBrowseOptionsResourceAccess_h

#include "Linux_SambaSharePrinterBrowseOptionsInstanceName.h"
#include "Linux_SambaSharePrinterBrowseOptionsManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaSharePrinterBrowseOptionsDefaultImplementation.h"
#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {

  class Linux_SambaSharePrinterBrowseOptionsResourceAccess:
   public Linux_SambaSharePrinterBrowseOptionsDefaultImplementation {
    
   private:
    void Linux_SambaSharePrinterBrowseOptionsResourceAccess::setInstanceNameProperties(const char* nsp,
     char *instanceName,
     Linux_SambaSharePrinterBrowseOptionsInstanceName& anInstanceName);
  
    void Linux_SambaSharePrinterBrowseOptionsResourceAccess::setInstanceProperties(
     Linux_SambaSharePrinterBrowseOptionsManualInstance& aManualInstance);
   
    void Linux_SambaSharePrinterBrowseOptionsResourceAccess::setRAProperties(
     Linux_SambaSharePrinterBrowseOptionsManualInstance newInstance);

    public:
    /*Linux_SambaSharePrinterBrowseOptionsResourceAccess();*/    
    virtual ~Linux_SambaSharePrinterBrowseOptionsResourceAccess() ;
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaSharePrinterBrowseOptionsInstanceNameEnumeration& instnames);
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumeration& instances);
  	
    virtual Linux_SambaSharePrinterBrowseOptionsManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaSharePrinterBrowseOptionsInstanceName& instanceName);
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaSharePrinterBrowseOptionsManualInstance& newInstance);
  	
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaSharePrinterBrowseOptionsManualInstance& newInstance);
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaSharePrinterBrowseOptionsInstanceName& instanceName);
	
    
    /* extrinsic methods */
	
  };
}
#endif

