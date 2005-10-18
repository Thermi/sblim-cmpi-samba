/**
 *  Linux_SambaCommonSecurityForShareInterface.h
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


#ifndef Linux_SambaCommonSecurityForShareInterface_h
#define Linux_SambaCommonSecurityForShareInterface_h

#include "Linux_SambaCommonSecurityForShareInstanceName.h"
#include "Linux_SambaCommonSecurityForShareManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaCommonSecurityOptionsInstance.h"
#include "Linux_SambaShareOptionsInstance.h"
#include "Linux_SambaCommonSecurityOptionsExternal.h"
#include "Linux_SambaShareOptionsExternal.h"

namespace genProvider {

  class Linux_SambaCommonSecurityForShareInterface {
  	
    public:    
    virtual ~Linux_SambaCommonSecurityForShareInterface() { };
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaCommonSecurityForShareInstanceNameEnumeration& instnames) = 0;
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaCommonSecurityForShareManualInstanceEnumeration& instances) = 0;
  	
    virtual Linux_SambaCommonSecurityForShareManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaCommonSecurityForShareInstanceName&) = 0;
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaCommonSecurityForShareManualInstance&) = 0;
  	
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaCommonSecurityForShareManualInstance&) = 0;
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaCommonSecurityForShareInstanceName&) = 0;
	
    
    /* Association Interface */

    virtual void referencesSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaCommonSecurityForShareManualInstanceEnumeration& instances) = 0;

    virtual void referencesManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaCommonSecurityOptionsInstanceName& sourceInst,
     Linux_SambaCommonSecurityForShareManualInstanceEnumeration& instances) = 0;

    virtual void associatorsSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaCommonSecurityOptionsInstanceEnumeration& instances) = 0;

    virtual void associatorsManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaCommonSecurityOptionsInstanceName& sourceInst,
     Linux_SambaShareOptionsInstanceEnumeration& instances) = 0;

   
    /* extrinsic methods */
	
  };
}
#endif

