// =======================================================================
// Linux_SambaInvalidUsersForShareInterface.h
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
#ifndef Linux_SambaInvalidUsersForShareInterface_h
#define Linux_SambaInvalidUsersForShareInterface_h

#include "Linux_SambaInvalidUsersForShareInstanceName.h"
#include "Linux_SambaInvalidUsersForShareManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaUserInstance.h"
#include "Linux_SambaShareOptionsInstance.h"
#include "Linux_SambaUserExternal.h"
#include "Linux_SambaShareOptionsExternal.h"


namespace genProvider {

  class Linux_SambaInvalidUsersForShareInterface {
  	
    public:    
    virtual ~Linux_SambaInvalidUsersForShareInterface() { };
    
    /* intrinsic methods */
    
    virtual void enumInstanceNames(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      Linux_SambaInvalidUsersForShareInstanceNameEnumeration& anInstanceNameEnumeration) = 0;
    
  	
    
    virtual void enumInstances(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
  	  Linux_SambaInvalidUsersForShareManualInstanceEnumeration& aManualInstanceEnumeration) = 0;
  	
  	
    
    virtual Linux_SambaInvalidUsersForShareManualInstance getInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaInvalidUsersForShareInstanceName& anInstanceName) = 0;
    
  	
    
    virtual void setInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaInvalidUsersForShareManualInstance& aManualInstance) = 0;
    
  	
    
    virtual Linux_SambaInvalidUsersForShareInstanceName createInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaInvalidUsersForShareManualInstance& aManualInstance) = 0;
    
  	
    
    virtual void deleteInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaInvalidUsersForShareInstanceName& anInstanceName) = 0;
    
	
    
    /* Association Interface */

    
    virtual void referencesPartComponent( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
      Linux_SambaInvalidUsersForShareManualInstanceEnumeration& aManualInstanceEnumeration) = 0;
    

    
    virtual void referencesGroupComponent( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaUserInstanceName& aSourceInstanceName,
      Linux_SambaInvalidUsersForShareManualInstanceEnumeration& aManualInstanceEnumeration) = 0;
    

    
    virtual void associatorsPartComponent( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
      Linux_SambaUserInstanceEnumeration& anInstanceEnumeration) = 0;
    

    
    virtual void associatorsGroupComponent( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaUserInstanceName& aSourceInstanceName,
      Linux_SambaShareOptionsInstanceEnumeration& anInstanceEnumeration) = 0;
    

   
    
    /* extrinsic methods */
    
	
  };
  
}
#endif
