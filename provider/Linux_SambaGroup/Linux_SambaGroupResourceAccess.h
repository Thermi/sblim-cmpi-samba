// =======================================================================
// Linux_SambaGroupResourceAccess.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
// http://www.opensource.org/licenses/eclipse-1.0.php
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
#ifndef Linux_SambaGroupResourceAccess_h
#define Linux_SambaGroupResourceAccess_h

#include "Linux_SambaGroupInstanceName.h"
#include "Linux_SambaGroupManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaGroupDefaultImplementation.h"


namespace genProvider {

  class Linux_SambaGroupResourceAccess:
   public Linux_SambaGroupDefaultImplementation {
  	
    public:
    /*
    Linux_SambaGroupResourceAccess();
    */    
    virtual ~Linux_SambaGroupResourceAccess() ;
    
    /* intrinsic methods */

    virtual void enumInstanceNames(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      Linux_SambaGroupInstanceNameEnumeration& anInstanceNameEnumeration);

  	

    virtual void enumInstances(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
  	  Linux_SambaGroupManualInstanceEnumeration& aManualInstanceEnumeration);

  	

    virtual Linux_SambaGroupManualInstance getInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaGroupInstanceName& anInstanceName);

  	
    
    virtual void setInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaGroupManualInstance& aManualInstance);
    
  	

    virtual Linux_SambaGroupInstanceName createInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaGroupManualInstance& aManualInstance);

  	

    virtual void deleteInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaGroupInstanceName& anInstanceName);

	
    
    
    /* extrinsic methods */
    

    virtual char* getAllSystemGroups(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaGroupInstanceName& anInstanceName);


	
  };
  
}
#endif
