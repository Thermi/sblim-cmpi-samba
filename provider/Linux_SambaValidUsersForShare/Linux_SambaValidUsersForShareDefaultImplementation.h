/**
 *  Linux_SambaValidUsersForShareDefaultImplementation.h
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


#ifndef Linux_SambaValidUsersForShareDefaultImplementation_h
#define Linux_SambaValidUsersForShareDefaultImplementation_h

#include "Linux_SambaValidUsersForShareInstanceName.h"
#include "Linux_SambaValidUsersForShareManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaUserInstance.h"
#include "Linux_SambaShareOptionsInstance.h"
#include "Linux_SambaUserExternal.h"
#include "Linux_SambaShareOptionsExternal.h"
#include "Linux_SambaValidUsersForShareInterface.h"

namespace genProvider {

  class Linux_SambaValidUsersForShareDefaultImplementation:
   public Linux_SambaValidUsersForShareInterface {
  	
    public:    
    virtual ~Linux_SambaValidUsersForShareDefaultImplementation() { };
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaValidUsersForShareInstanceNameEnumeration& instnames);
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaValidUsersForShareManualInstanceEnumeration& instances);
  	
    virtual Linux_SambaValidUsersForShareManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaValidUsersForShareInstanceName&);
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaValidUsersForShareManualInstance&);
  	
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaValidUsersForShareManualInstance&);
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaValidUsersForShareInstanceName&);
	
    
    /* Association Interface */

    virtual void referencesPartComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaValidUsersForShareManualInstanceEnumeration& instances);

    virtual void referencesGroupComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaValidUsersForShareManualInstanceEnumeration& instances);

    virtual void associatorsPartComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaUserInstanceEnumeration& instances);

    virtual void associatorsGroupComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaShareOptionsInstanceEnumeration& instances);

   
    /* extrinsic methods */
	
  };
}
#endif

