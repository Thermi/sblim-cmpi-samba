// =======================================================================
// Linux_SambaShareBrowseForShareInterface.h
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
#ifndef Linux_SambaShareBrowseForShareInterface_h
#define Linux_SambaShareBrowseForShareInterface_h

#include "Linux_SambaShareBrowseForShareInstanceName.h"
#include "Linux_SambaShareBrowseForShareManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaShareBrowseOptionsInstance.h"
#include "Linux_SambaShareOptionsInstance.h"
#include "Linux_SambaShareBrowseOptionsExternal.h"
#include "Linux_SambaShareOptionsExternal.h"


namespace genProvider {

  class Linux_SambaShareBrowseForShareInterface {
  	
    public:    
    virtual ~Linux_SambaShareBrowseForShareInterface() { };
    
    /* intrinsic methods */
    
    virtual void enumInstanceNames(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      Linux_SambaShareBrowseForShareInstanceNameEnumeration& anInstanceNameEnumeration) = 0;
    
  	
    
    virtual void enumInstances(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
  	  Linux_SambaShareBrowseForShareManualInstanceEnumeration& aManualInstanceEnumeration) = 0;
  	
  	
    
    virtual Linux_SambaShareBrowseForShareManualInstance getInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaShareBrowseForShareInstanceName& anInstanceName) = 0;
    
  	
    
    virtual void setInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaShareBrowseForShareManualInstance& aManualInstance) = 0;
    
  	
    
    virtual Linux_SambaShareBrowseForShareInstanceName createInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaShareBrowseForShareManualInstance& aManualInstance) = 0;
    
  	
    
    virtual void deleteInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaShareBrowseForShareInstanceName& anInstanceName) = 0;
    
	
    
    /* Association Interface */

    
    virtual void referencesSettingData( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareBrowseForShareManualInstanceEnumeration& aManualInstanceEnumeration) = 0;
    

    
    virtual void referencesManagedElement( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaShareBrowseOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareBrowseForShareManualInstanceEnumeration& aManualInstanceEnumeration) = 0;
    

    
    virtual void associatorsSettingData( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareBrowseOptionsInstanceEnumeration& anInstanceEnumeration) = 0;
    

    
    virtual void associatorsManagedElement( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaShareBrowseOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareOptionsInstanceEnumeration& anInstanceEnumeration) = 0;
    

   
    
    /* extrinsic methods */
    
	
  };
  
}
#endif
