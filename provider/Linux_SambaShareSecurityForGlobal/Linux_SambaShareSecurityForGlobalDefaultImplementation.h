// =======================================================================
// Linux_SambaShareSecurityForGlobalDefaultImplementation.h
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
#ifndef Linux_SambaShareSecurityForGlobalDefaultImplementation_h
#define Linux_SambaShareSecurityForGlobalDefaultImplementation_h

#include "Linux_SambaShareSecurityForGlobalInstanceName.h"
#include "Linux_SambaShareSecurityForGlobalManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaShareSecurityOptionsInstance.h"
#include "Linux_SambaGlobalOptionsInstance.h"
#include "Linux_SambaShareSecurityOptionsExternal.h"
#include "Linux_SambaGlobalOptionsExternal.h"
#include "Linux_SambaShareSecurityForGlobalInterface.h"


namespace genProvider {

  class Linux_SambaShareSecurityForGlobalDefaultImplementation:
   public Linux_SambaShareSecurityForGlobalInterface {
  	
    public:    
    virtual ~Linux_SambaShareSecurityForGlobalDefaultImplementation() { };
    
    /* intrinsic methods */
    
    virtual void enumInstanceNames(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      Linux_SambaShareSecurityForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
    
  	
    
    virtual void enumInstances(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
  	  Linux_SambaShareSecurityForGlobalManualInstanceEnumeration& aManualInstanceEnumeration);
  	
  	
    
    virtual Linux_SambaShareSecurityForGlobalManualInstance getInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaShareSecurityForGlobalInstanceName& anInstanceName);
    
  	
    
    virtual void setInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaShareSecurityForGlobalManualInstance& aManualInstance);
    
  	
    
    virtual Linux_SambaShareSecurityForGlobalInstanceName createInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaShareSecurityForGlobalManualInstance& aManualInstance);
    
  	
    
    virtual void deleteInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaShareSecurityForGlobalInstanceName& anInstanceName);
    
	
    
    /* Association Interface */

    
    virtual void referencesSettingData( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareSecurityForGlobalManualInstanceEnumeration& aManualInstanceEnumeration);
    

    
    virtual void referencesManagedElement( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaShareSecurityOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareSecurityForGlobalManualInstanceEnumeration& aManualInstanceEnumeration);
    

    
    virtual void associatorsSettingData( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareSecurityOptionsInstanceEnumeration& anInstanceEnumeration);
    

    
    virtual void associatorsManagedElement( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaShareSecurityOptionsInstanceName& aSourceInstanceName,
      Linux_SambaGlobalOptionsInstanceEnumeration& anInstanceEnumeration);
    

   
    
    /* extrinsic methods */
    
	
  };
  
}
#endif
