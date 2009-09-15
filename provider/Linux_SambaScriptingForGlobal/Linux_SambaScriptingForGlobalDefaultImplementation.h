// =======================================================================
// Linux_SambaScriptingForGlobalDefaultImplementation.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaScriptingForGlobalDefaultImplementation_h
#define Linux_SambaScriptingForGlobalDefaultImplementation_h

#include "Linux_SambaScriptingForGlobalInstanceName.h"
#include "Linux_SambaScriptingForGlobalManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaGlobalOptionsInstance.h"
#include "Linux_SambaScriptingOptionsInstance.h"
#include "Linux_SambaGlobalOptionsExternal.h"
#include "Linux_SambaScriptingOptionsExternal.h"
#include "Linux_SambaScriptingForGlobalInterface.h"


namespace genProvider {

  class Linux_SambaScriptingForGlobalDefaultImplementation:
   public Linux_SambaScriptingForGlobalInterface {
  	
    public:    
    virtual ~Linux_SambaScriptingForGlobalDefaultImplementation() { };
    
    /* intrinsic methods */
    
    virtual void enumInstanceNames(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      Linux_SambaScriptingForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
    
  	
    
    virtual void enumInstances(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
  	  Linux_SambaScriptingForGlobalManualInstanceEnumeration& aManualInstanceEnumeration);
  	
  	
    
    virtual Linux_SambaScriptingForGlobalManualInstance getInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaScriptingForGlobalInstanceName& anInstanceName);
    
  	
    
    virtual void setInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaScriptingForGlobalManualInstance& aManualInstance);
    
  	
    
    virtual Linux_SambaScriptingForGlobalInstanceName createInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaScriptingForGlobalManualInstance& aManualInstance);
    
  	
    
    virtual void deleteInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaScriptingForGlobalInstanceName& anInstanceName);
    
	
    
    /* Association Interface */

    
    virtual void referencesManagedElement( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaScriptingOptionsInstanceName& aSourceInstanceName,
      Linux_SambaScriptingForGlobalManualInstanceEnumeration& aManualInstanceEnumeration);
    

    
    virtual void referencesSettingData( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
      Linux_SambaScriptingForGlobalManualInstanceEnumeration& aManualInstanceEnumeration);
    

    
    virtual void associatorsManagedElement( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaScriptingOptionsInstanceName& aSourceInstanceName,
      Linux_SambaGlobalOptionsInstanceEnumeration& anInstanceEnumeration);
    

    
    virtual void associatorsSettingData( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
      Linux_SambaScriptingOptionsInstanceEnumeration& anInstanceEnumeration);
    

   
    
    /* extrinsic methods */
    
	
  };
  
}
#endif
