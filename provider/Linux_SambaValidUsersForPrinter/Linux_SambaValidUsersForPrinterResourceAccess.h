// =======================================================================
// Linux_SambaValidUsersForPrinterResourceAccess.h
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
#ifndef Linux_SambaValidUsersForPrinterResourceAccess_h
#define Linux_SambaValidUsersForPrinterResourceAccess_h

#include "Linux_SambaValidUsersForPrinterInstanceName.h"
#include "Linux_SambaValidUsersForPrinterManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaUserInstance.h"
#include "Linux_SambaPrinterOptionsInstance.h"
#include "Linux_SambaUserExternal.h"
#include "Linux_SambaPrinterOptionsExternal.h"
#include "Linux_SambaValidUsersForPrinterDefaultImplementation.h"


namespace genProvider {

  class Linux_SambaValidUsersForPrinterResourceAccess:
   public Linux_SambaValidUsersForPrinterDefaultImplementation {
  	
    public:
    /*
    Linux_SambaValidUsersForPrinterResourceAccess();
    */    
    virtual ~Linux_SambaValidUsersForPrinterResourceAccess() ;
    
    /* intrinsic methods */

    virtual void enumInstanceNames(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      Linux_SambaValidUsersForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);

  	

    virtual void enumInstances(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
  	  Linux_SambaValidUsersForPrinterManualInstanceEnumeration& aManualInstanceEnumeration);

  	

    virtual Linux_SambaValidUsersForPrinterManualInstance getInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaValidUsersForPrinterInstanceName& anInstanceName);

  	
    /*
    virtual void setInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaValidUsersForPrinterManualInstance& aManualInstance);
    */
  	

    virtual Linux_SambaValidUsersForPrinterInstanceName createInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaValidUsersForPrinterManualInstance& aManualInstance);

  	

    virtual void deleteInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaValidUsersForPrinterInstanceName& anInstanceName);

	
    
    /* Association Interface */


    virtual void referencesPartComponent( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaValidUsersForPrinterManualInstanceEnumeration& aManualInstanceEnumeration);



    virtual void referencesGroupComponent( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaUserInstanceName& aSourceInstanceName,
      Linux_SambaValidUsersForPrinterManualInstanceEnumeration& aManualInstanceEnumeration);



    virtual void associatorsPartComponent( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaUserInstanceEnumeration& anInstanceEnumeration);



    virtual void associatorsGroupComponent( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaUserInstanceName& aSourceInstanceName,
      Linux_SambaPrinterOptionsInstanceEnumeration& anInstanceEnumeration);


   
    
    /* extrinsic methods */
    
	
  };
  
}
#endif
