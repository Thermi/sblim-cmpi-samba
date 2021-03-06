// =======================================================================
// Linux_SambaShareFileNameHandlingForShareResourceAccess.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaShareFileNameHandlingForShareResourceAccess_h
#define Linux_SambaShareFileNameHandlingForShareResourceAccess_h

#include "Linux_SambaShareFileNameHandlingForShareInstanceName.h"
#include "Linux_SambaShareFileNameHandlingForShareManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaShareFileNameHandlingOptionsInstance.h"
#include "Linux_SambaShareOptionsInstance.h"
#include "Linux_SambaShareFileNameHandlingOptionsExternal.h"
#include "Linux_SambaShareOptionsExternal.h"
#include "Linux_SambaShareFileNameHandlingForShareDefaultImplementation.h"


namespace genProvider {

  class Linux_SambaShareFileNameHandlingForShareResourceAccess:
   public Linux_SambaShareFileNameHandlingForShareDefaultImplementation {
  	
    public:
    /*
    Linux_SambaShareFileNameHandlingForShareResourceAccess();
    */    
    virtual ~Linux_SambaShareFileNameHandlingForShareResourceAccess() ;
    
    /* intrinsic methods */
    
    virtual void enumInstanceNames(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration& anInstanceNameEnumeration);
    
  	
    
    virtual void enumInstances(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
  	  Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration& aManualInstanceEnumeration);
  	
  	
    
    virtual Linux_SambaShareFileNameHandlingForShareManualInstance getInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaShareFileNameHandlingForShareInstanceName& anInstanceName);
    
  	
    /*
    virtual void setInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaShareFileNameHandlingForShareManualInstance& aManualInstance);
    */
  	
    /*
    virtual Linux_SambaShareFileNameHandlingForShareInstanceName createInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaShareFileNameHandlingForShareManualInstance& aManualInstance);
    */
  	
    /*
    virtual void deleteInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaShareFileNameHandlingForShareInstanceName& anInstanceName);
    */
	
    
    /* Association Interface */


    virtual void referencesSettingData( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration& aManualInstanceEnumeration);



    virtual void referencesManagedElement( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaShareFileNameHandlingOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration& aManualInstanceEnumeration);



    virtual void associatorsSettingData( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration& anInstanceEnumeration);



    virtual void associatorsManagedElement( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaShareFileNameHandlingOptionsInstanceName& aSourceInstanceName,
      Linux_SambaShareOptionsInstanceEnumeration& anInstanceEnumeration);


   
    
    /* extrinsic methods */
    
	
  };
  
}
#endif
