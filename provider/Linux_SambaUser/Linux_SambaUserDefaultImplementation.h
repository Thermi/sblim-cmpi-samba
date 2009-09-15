// =======================================================================
// Linux_SambaUserDefaultImplementation.h
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
#ifndef Linux_SambaUserDefaultImplementation_h
#define Linux_SambaUserDefaultImplementation_h

#include "Linux_SambaUserInstanceName.h"
#include "Linux_SambaUserManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaUserInterface.h"


namespace genProvider {

  class Linux_SambaUserDefaultImplementation:
   public Linux_SambaUserInterface {
  	
    public:    
    virtual ~Linux_SambaUserDefaultImplementation() { };
    
    /* intrinsic methods */
    
    virtual void enumInstanceNames(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      Linux_SambaUserInstanceNameEnumeration& anInstanceNameEnumeration);
    
  	
    
    virtual void enumInstances(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
  	  Linux_SambaUserManualInstanceEnumeration& aManualInstanceEnumeration);
  	
  	
    
    virtual Linux_SambaUserManualInstance getInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaUserInstanceName& anInstanceName);
    
  	
    
    virtual void setInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaUserManualInstance& aManualInstance);
    
  	
    
    virtual Linux_SambaUserInstanceName createInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaUserManualInstance& aManualInstance);
    
  	
    
    virtual void deleteInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaUserInstanceName& anInstanceName);
    
	
    
    
    /* extrinsic methods */
    
    
    virtual char* getAllSystemGroups(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaUserInstanceName& anInstanceName);
    

    
    virtual char* getAllSystemUsers(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaUserInstanceName& anInstanceName);
    

	
  };
  
}
#endif
