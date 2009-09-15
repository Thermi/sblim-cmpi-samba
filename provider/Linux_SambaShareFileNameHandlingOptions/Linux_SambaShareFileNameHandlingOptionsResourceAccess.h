// =======================================================================
// Linux_SambaShareFileNameHandlingOptionsResourceAccess.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
// http://oss.software.ibm.com/developerworks/opensource/license-cpl.html
//
// Author:        generated
//
// Contributors:
//                Wolfgang Taphorn   <taphorn@de.ibm.com>
//                Mukunda Chowdaiah  <cmukunda@in.ibm.com>
//                Ashoka S Rao       <ashoka.rao@in.ibm.com>
//                Rodrigo Ceron      <rceron@br.ibm.com>
//
// =======================================================================
//
// 
#ifndef Linux_SambaShareFileNameHandlingOptionsResourceAccess_h
#define Linux_SambaShareFileNameHandlingOptionsResourceAccess_h

#include "Linux_SambaShareFileNameHandlingOptionsInstanceName.h"
#include "Linux_SambaShareFileNameHandlingOptionsManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaShareFileNameHandlingOptionsDefaultImplementation.h"


namespace genProvider {

  class Linux_SambaShareFileNameHandlingOptionsResourceAccess:
   public Linux_SambaShareFileNameHandlingOptionsDefaultImplementation {
  	
    public:
    /*
    Linux_SambaShareFileNameHandlingOptionsResourceAccess();
    */    
    virtual ~Linux_SambaShareFileNameHandlingOptionsResourceAccess() ;
    
    /* intrinsic methods */

    virtual void enumInstanceNames(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration& anInstanceNameEnumeration);

  	

    virtual void enumInstances(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
  	  Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration& aManualInstanceEnumeration);

  	

    virtual Linux_SambaShareFileNameHandlingOptionsManualInstance getInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaShareFileNameHandlingOptionsInstanceName& anInstanceName);

  	

    virtual void setInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaShareFileNameHandlingOptionsManualInstance& aManualInstance);

  	
    /*
    virtual Linux_SambaShareFileNameHandlingOptionsInstanceName createInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaShareFileNameHandlingOptionsManualInstance& aManualInstance);
    */
  	
    /*
    virtual void deleteInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaShareFileNameHandlingOptionsInstanceName& anInstanceName);
    */
	
    
    
    /* extrinsic methods */
    
	
  };
  
}
#endif
