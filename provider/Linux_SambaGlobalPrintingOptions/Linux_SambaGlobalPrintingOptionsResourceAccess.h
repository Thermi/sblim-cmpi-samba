/**
 *  Linux_SambaGlobalPrintingOptionsResourceAccess.h
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


#ifndef Linux_SambaGlobalPrintingOptionsResourceAccess_h
#define Linux_SambaGlobalPrintingOptionsResourceAccess_h

#include "Linux_SambaGlobalPrintingOptionsInstanceName.h"
#include "Linux_SambaGlobalPrintingOptionsManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaGlobalPrintingOptionsDefaultImplementation.h"
#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {

  class Linux_SambaGlobalPrintingOptionsResourceAccess:
   public Linux_SambaGlobalPrintingOptionsDefaultImplementation {
  	
   private:
    
    void Linux_SambaGlobalPrintingOptionsResourceAccess::setInstanceNameProperties(const char* nsp,     
     Linux_SambaGlobalPrintingOptionsInstanceName& anInstanceName);

    void Linux_SambaGlobalPrintingOptionsResourceAccess::setInstanceProperties(
     Linux_SambaGlobalPrintingOptionsManualInstance& aManualInstance);

    public:
    /*Linux_SambaGlobalPrintingOptionsResourceAccess();*/    
    virtual ~Linux_SambaGlobalPrintingOptionsResourceAccess() ;
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaGlobalPrintingOptionsInstanceNameEnumeration& instnames);
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaGlobalPrintingOptionsManualInstanceEnumeration& instances);
  	
    virtual Linux_SambaGlobalPrintingOptionsManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalPrintingOptionsInstanceName&);
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalPrintingOptionsManualInstance&);
  	
    /*virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaGlobalPrintingOptionsManualInstance&);*/
  	
    /*virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaGlobalPrintingOptionsInstanceName&);*/
	
    
    /* extrinsic methods */
	
  };
}
#endif

