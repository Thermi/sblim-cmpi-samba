// =======================================================================
// Linux_SambaShareProtocolOptionsResourceAccess.h
//     created on Fri, 24 Feb 2006 using ECUTE
// 
// Copyright (c) 2006, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE 
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Common Public License from
// http://oss.software.ibm.com/developerworks/opensource/license-cpl.html
//
// Author:        generated
//
// Contributors:
//                Rodrigo Ceron    <rceron@br.ibm.com>
//                Wolfgang Taphorn <taphorn@de.ibm.com>
//
// =======================================================================
//
// 
#ifndef Linux_SambaShareProtocolOptionsResourceAccess_h
#define Linux_SambaShareProtocolOptionsResourceAccess_h

#include "Linux_SambaShareProtocolOptionsInstanceName.h"
#include "Linux_SambaShareProtocolOptionsManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaShareProtocolOptionsDefaultImplementation.h"


namespace genProvider {

  class Linux_SambaShareProtocolOptionsResourceAccess:
   public Linux_SambaShareProtocolOptionsDefaultImplementation {
  	
    public:
    /*
    Linux_SambaShareProtocolOptionsResourceAccess();
    */    
    virtual ~Linux_SambaShareProtocolOptionsResourceAccess() ;
    
    /* intrinsic methods */

    virtual void enumInstanceNames(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      Linux_SambaShareProtocolOptionsInstanceNameEnumeration& anInstanceNameEnumeration);

  	

    virtual void enumInstances(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
  	  Linux_SambaShareProtocolOptionsManualInstanceEnumeration& aManualInstanceEnumeration);

  	

    virtual Linux_SambaShareProtocolOptionsManualInstance getInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaShareProtocolOptionsInstanceName& anInstanceName);

  	

    virtual void setInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaShareProtocolOptionsManualInstance& aManualInstance);

  	

    virtual Linux_SambaShareProtocolOptionsInstanceName createInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaShareProtocolOptionsManualInstance& aManualInstance);

  	

    virtual void deleteInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaShareProtocolOptionsInstanceName& anInstanceName);

	
    
    
    /* extrinsic methods */
    
	
  };
  
}
#endif
