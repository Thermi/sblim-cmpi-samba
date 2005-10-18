/**
 *  Linux_SambaScriptingOptionsResourceAccess.h
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


#ifndef Linux_SambaScriptingOptionsResourceAccess_h
#define Linux_SambaScriptingOptionsResourceAccess_h

#include "Linux_SambaScriptingOptionsInstanceName.h"
#include "Linux_SambaScriptingOptionsManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaScriptingOptionsDefaultImplementation.h"
#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {

  class Linux_SambaScriptingOptionsResourceAccess:
   public Linux_SambaScriptingOptionsDefaultImplementation {
  	
   private:
    void Linux_SambaScriptingOptionsResourceAccess::setInstanceNameProperties(const char* nsp,
     Linux_SambaScriptingOptionsInstanceName& anInstanceName);
    
    void Linux_SambaScriptingOptionsResourceAccess::setInstanceProperties(
     Linux_SambaScriptingOptionsManualInstance& aManualInstance);
  
    public:
    /*Linux_SambaScriptingOptionsResourceAccess();*/    
    virtual ~Linux_SambaScriptingOptionsResourceAccess() ;
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaScriptingOptionsInstanceNameEnumeration& instnames);
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaScriptingOptionsManualInstanceEnumeration& instances);
  	
    virtual Linux_SambaScriptingOptionsManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaScriptingOptionsInstanceName&);
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaScriptingOptionsManualInstance&);
  	
    /*virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaScriptingOptionsManualInstance&);*/
  	
    /*virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaScriptingOptionsInstanceName&);*/
	
    
    /* extrinsic methods */
	
  };
}
#endif

