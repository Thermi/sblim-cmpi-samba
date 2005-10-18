/**
 *  Linux_SambaUserInterface.h
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


#ifndef Linux_SambaUserInterface_h
#define Linux_SambaUserInterface_h

#include "Linux_SambaUserInstanceName.h"
#include "Linux_SambaUserManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaUserInterface {
  	
    public:    
    virtual ~Linux_SambaUserInterface() { };
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaUserInstanceNameEnumeration& instnames) = 0;
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaUserManualInstanceEnumeration& instances) = 0;
  	
    virtual Linux_SambaUserManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaUserInstanceName&) = 0;
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaUserManualInstance&) = 0;
  	
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaUserManualInstance&) = 0;
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaUserInstanceName&) = 0;
	
    
    /* extrinsic methods */

    virtual char* getAllSystemGroups(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaUserInstanceName&) = 0;

    virtual char* getAllSystemUsers(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaUserInstanceName&) = 0;
	
  };
}
#endif

