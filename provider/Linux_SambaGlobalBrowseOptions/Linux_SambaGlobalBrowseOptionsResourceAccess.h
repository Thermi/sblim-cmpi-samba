/**
 *  Linux_SambaGlobalBrowseOptionsResourceAccess.h
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


#ifndef Linux_SambaGlobalBrowseOptionsResourceAccess_h
#define Linux_SambaGlobalBrowseOptionsResourceAccess_h

#include "Linux_SambaGlobalBrowseOptionsInstanceName.h"
#include "Linux_SambaGlobalBrowseOptionsManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaGlobalBrowseOptionsDefaultImplementation.h"
#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {

  class Linux_SambaGlobalBrowseOptionsResourceAccess:
   public Linux_SambaGlobalBrowseOptionsDefaultImplementation {
  	
   private:
    virtual void Linux_SambaGlobalBrowseOptionsResourceAccess::setInstanceNameProperties(const char* nsp,     
	     Linux_SambaGlobalBrowseOptionsInstanceName& anInstanceName);
    
    virtual void Linux_SambaGlobalBrowseOptionsResourceAccess::setInstanceProperties(
             Linux_SambaGlobalBrowseOptionsManualInstance& aManualInstance);

    public:
    /*Linux_SambaGlobalBrowseOptionsResourceAccess();*/    
    virtual ~Linux_SambaGlobalBrowseOptionsResourceAccess() ;
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaGlobalBrowseOptionsInstanceNameEnumeration& instnames);
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration& instances);
  	
    virtual Linux_SambaGlobalBrowseOptionsManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalBrowseOptionsInstanceName&);
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalBrowseOptionsManualInstance&);
  	
    /*virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaGlobalBrowseOptionsManualInstance&);*/
  	
    /*virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaGlobalBrowseOptionsInstanceName&);*/
	
    
    /* extrinsic methods */
	
  };
}
#endif

