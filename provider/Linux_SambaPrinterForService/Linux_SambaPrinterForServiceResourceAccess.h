// =======================================================================
// Linux_SambaPrinterForServiceResourceAccess.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaPrinterForServiceResourceAccess_h
#define Linux_SambaPrinterForServiceResourceAccess_h

#include "Linux_SambaPrinterForServiceInstanceName.h"
#include "Linux_SambaPrinterForServiceManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaPrinterOptionsInstance.h"
#include "Linux_SambaServiceInstance.h"
#include "Linux_SambaPrinterOptionsExternal.h"
#include "Linux_SambaServiceExternal.h"
#include "Linux_SambaPrinterForServiceDefaultImplementation.h"


namespace genProvider {

  class Linux_SambaPrinterForServiceResourceAccess:
   public Linux_SambaPrinterForServiceDefaultImplementation {
  	
    public:
    /*
    Linux_SambaPrinterForServiceResourceAccess();
    */    
    virtual ~Linux_SambaPrinterForServiceResourceAccess() ;
    
    /* intrinsic methods */

    virtual void enumInstanceNames(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      Linux_SambaPrinterForServiceInstanceNameEnumeration& anInstanceNameEnumeration);

  	

    virtual void enumInstances(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
  	  Linux_SambaPrinterForServiceManualInstanceEnumeration& aManualInstanceEnumeration);

  	

    virtual Linux_SambaPrinterForServiceManualInstance getInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaPrinterForServiceInstanceName& anInstanceName);

  	
    /*
    virtual void setInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaPrinterForServiceManualInstance& aManualInstance);
    */
  	
    /*
    virtual Linux_SambaPrinterForServiceInstanceName createInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaPrinterForServiceManualInstance& aManualInstance);
    */
  	
    /*
    virtual void deleteInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaPrinterForServiceInstanceName& anInstanceName);
    */
	
    
    /* Association Interface */


    virtual void referencesSettingData( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaServiceInstanceName& aSourceInstanceName,
      Linux_SambaPrinterForServiceManualInstanceEnumeration& aManualInstanceEnumeration);



    virtual void referencesManagedElement( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterForServiceManualInstanceEnumeration& aManualInstanceEnumeration);



    virtual void associatorsSettingData( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaServiceInstanceName& aSourceInstanceName,
      Linux_SambaPrinterOptionsInstanceEnumeration& anInstanceEnumeration);



    virtual void associatorsManagedElement( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaServiceInstanceEnumeration& anInstanceEnumeration);


   
    
    /* extrinsic methods */
    
	
  };
  
}
#endif
