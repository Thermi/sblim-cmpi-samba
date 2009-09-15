// =======================================================================
// Linux_SambaDenyHostsForShareDefaultImplementation.h
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
#ifndef Linux_SambaDenyHostsForShareDefaultImplementation_h
#define Linux_SambaDenyHostsForShareDefaultImplementation_h

#include "Linux_SambaDenyHostsForShareInstanceName.h"
#include "Linux_SambaDenyHostsForShareManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaHostInstance.h"
#include "Linux_SambaShareOptionsInstance.h"
#include "Linux_SambaHostExternal.h"
#include "Linux_SambaShareOptionsExternal.h"
#include "Linux_SambaDenyHostsForShareInterface.h"


namespace genProvider {

  class Linux_SambaDenyHostsForShareDefaultImplementation:
   public Linux_SambaDenyHostsForShareInterface {
  	
    public:    
    virtual ~Linux_SambaDenyHostsForShareDefaultImplementation() { };
    
    /* intrinsic methods */
    
    virtual void enumInstanceNames(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      Linux_SambaDenyHostsForShareInstanceNameEnumeration& anInstanceNameEnumeration);
    
  	
    
    virtual void enumInstances(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
  	  Linux_SambaDenyHostsForShareManualInstanceEnumeration& aManualInstanceEnumeration);
  	
  	
    
    virtual Linux_SambaDenyHostsForShareManualInstance getInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaDenyHostsForShareInstanceName& anInstanceName);
    
  	
    
    virtual void setInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaDenyHostsForShareManualInstance& aManualInstance);
    
  	
    
    virtual Linux_SambaDenyHostsForShareInstanceName createInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaDenyHostsForShareManualInstance& aManualInstance);
    
  	
    
    virtual void deleteInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaDenyHostsForShareInstanceName& anInstanceName);
    
	
    
    /* Association Interface */

    
    virtual void referencesPartComponent( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
      Linux_SambaDenyHostsForShareManualInstanceEnumeration& aManualInstanceEnumeration);
    

    
    virtual void referencesGroupComponent( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaHostInstanceName& aSourceInstanceName,
      Linux_SambaDenyHostsForShareManualInstanceEnumeration& aManualInstanceEnumeration);
    

    
    virtual void associatorsPartComponent( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
      Linux_SambaHostInstanceEnumeration& anInstanceEnumeration);
    

    
    virtual void associatorsGroupComponent( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaHostInstanceName& aSourceInstanceName,
      Linux_SambaShareOptionsInstanceEnumeration& anInstanceEnumeration);
    

   
    
    /* extrinsic methods */
    
	
  };
  
}
#endif
