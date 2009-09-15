// =======================================================================
// Linux_SambaShareBrowseOptionsResourceAccess.h
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
#ifndef Linux_SambaShareBrowseOptionsResourceAccess_h
#define Linux_SambaShareBrowseOptionsResourceAccess_h

#include "Linux_SambaShareBrowseOptionsInstanceName.h"
#include "Linux_SambaShareBrowseOptionsManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaShareBrowseOptionsDefaultImplementation.h"


namespace genProvider {

  class Linux_SambaShareBrowseOptionsResourceAccess:
   public Linux_SambaShareBrowseOptionsDefaultImplementation {
  	
    public:
    /*
    Linux_SambaShareBrowseOptionsResourceAccess();
    */    
    virtual ~Linux_SambaShareBrowseOptionsResourceAccess() ;
    
    /* intrinsic methods */

    virtual void enumInstanceNames(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      Linux_SambaShareBrowseOptionsInstanceNameEnumeration& anInstanceNameEnumeration);

  	

    virtual void enumInstances(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
  	  Linux_SambaShareBrowseOptionsManualInstanceEnumeration& aManualInstanceEnumeration);

  	

    virtual Linux_SambaShareBrowseOptionsManualInstance getInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaShareBrowseOptionsInstanceName& anInstanceName);

  	

    virtual void setInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaShareBrowseOptionsManualInstance& aManualInstance);

  	
    /*
    virtual Linux_SambaShareBrowseOptionsInstanceName createInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaShareBrowseOptionsManualInstance& aManualInstance);
    */
  	
    /*
    virtual void deleteInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaShareBrowseOptionsInstanceName& anInstanceName);
    */
	
    
    
    /* extrinsic methods */
    
	
  };
  
}
#endif
