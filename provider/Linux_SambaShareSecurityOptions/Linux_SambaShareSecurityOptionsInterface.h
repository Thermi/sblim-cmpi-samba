/**
 *  Linux_SambaShareSecurityOptionsInterface.h
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


#ifndef Linux_SambaShareSecurityOptionsInterface_h
#define Linux_SambaShareSecurityOptionsInterface_h

#include "Linux_SambaShareSecurityOptionsInstanceName.h"
#include "Linux_SambaShareSecurityOptionsManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaShareSecurityOptionsInterface {
  	
    public:    
    virtual ~Linux_SambaShareSecurityOptionsInterface() { };
    
    /* intrinsic methods */
    virtual void enumInstanceNames(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     Linux_SambaShareSecurityOptionsInstanceNameEnumeration& instnames) = 0;
  	
    virtual void enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaShareSecurityOptionsManualInstanceEnumeration& instances) = 0;
  	
    virtual Linux_SambaShareSecurityOptionsManualInstance getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaShareSecurityOptionsInstanceName&) = 0;
  	
    virtual void setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaShareSecurityOptionsManualInstance&) = 0;
  	
    virtual void createInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaShareSecurityOptionsManualInstance&) = 0;
  	
    virtual void deleteInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const Linux_SambaShareSecurityOptionsInstanceName&) = 0;
	
    
    /* extrinsic methods */
	
  };
}
#endif

