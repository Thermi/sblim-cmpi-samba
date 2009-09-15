// =======================================================================
// Linux_SambaServiceConfigurationForServiceResourceAccess.h
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
#ifndef Linux_SambaServiceConfigurationForServiceResourceAccess_h
#define Linux_SambaServiceConfigurationForServiceResourceAccess_h

#include "Linux_SambaServiceConfigurationForServiceInstanceName.h"
#include "Linux_SambaServiceConfigurationForServiceManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaServiceConfigurationInstance.h"
#include "Linux_SambaServiceInstance.h"
#include "Linux_SambaServiceConfigurationExternal.h"
#include "Linux_SambaServiceExternal.h"
#include "Linux_SambaServiceConfigurationForServiceDefaultImplementation.h"


namespace genProvider {

  class Linux_SambaServiceConfigurationForServiceResourceAccess:
   public Linux_SambaServiceConfigurationForServiceDefaultImplementation {
  	
    public:
    /*
    Linux_SambaServiceConfigurationForServiceResourceAccess();
    */    
    virtual ~Linux_SambaServiceConfigurationForServiceResourceAccess() ;
    
    /* intrinsic methods */
    
    virtual void enumInstanceNames(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration& anInstanceNameEnumeration);
    
  	
    
    virtual void enumInstances(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
  	  Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration& aManualInstanceEnumeration);
  	
  	
    
    virtual Linux_SambaServiceConfigurationForServiceManualInstance getInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaServiceConfigurationForServiceInstanceName& anInstanceName);
    
  	
    /*
    virtual void setInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaServiceConfigurationForServiceManualInstance& aManualInstance);
    */
  	
    /*
    virtual Linux_SambaServiceConfigurationForServiceInstanceName createInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaServiceConfigurationForServiceManualInstance& aManualInstance);
    */
  	
    /*
    virtual void deleteInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaServiceConfigurationForServiceInstanceName& anInstanceName);
    */
	
    
    /* Association Interface */


    virtual void referencesConfiguration( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaServiceInstanceName& aSourceInstanceName,
      Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration& aManualInstanceEnumeration);



    virtual void referencesElement( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaServiceConfigurationInstanceName& aSourceInstanceName,
      Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration& aManualInstanceEnumeration);



    virtual void associatorsConfiguration( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaServiceInstanceName& aSourceInstanceName,
      Linux_SambaServiceConfigurationInstanceEnumeration& anInstanceEnumeration);



    virtual void associatorsElement( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaServiceConfigurationInstanceName& aSourceInstanceName,
      Linux_SambaServiceInstanceEnumeration& anInstanceEnumeration);


   
    
    /* extrinsic methods */
    
	
  };
  
}
#endif
