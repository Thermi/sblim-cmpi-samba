// =======================================================================
// Linux_SambaPrinterBrowseForPrinterResourceAccess.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
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
//                Wolfgang Taphorn   <taphorn@de.ibm.com>
//                Mukunda Chowdaiah  <cmukunda@in.ibm.com>
//                Ashoka S Rao       <ashoka.rao@in.ibm.com>
//                Rodrigo Ceron      <rceron@br.ibm.com>
//
// =======================================================================
//
// 
#ifndef Linux_SambaPrinterBrowseForPrinterResourceAccess_h
#define Linux_SambaPrinterBrowseForPrinterResourceAccess_h

#include "Linux_SambaPrinterBrowseForPrinterInstanceName.h"
#include "Linux_SambaPrinterBrowseForPrinterManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaPrinterOptionsInstance.h"
#include "Linux_SambaPrinterBrowseOptionsInstance.h"
#include "Linux_SambaPrinterOptionsExternal.h"
#include "Linux_SambaPrinterBrowseOptionsExternal.h"
#include "Linux_SambaPrinterBrowseForPrinterDefaultImplementation.h"


namespace genProvider {

  class Linux_SambaPrinterBrowseForPrinterResourceAccess:
   public Linux_SambaPrinterBrowseForPrinterDefaultImplementation {
  	
    public:
    /*
    Linux_SambaPrinterBrowseForPrinterResourceAccess();
    */    
    virtual ~Linux_SambaPrinterBrowseForPrinterResourceAccess() ;
    
    /* intrinsic methods */
    /*
    virtual void enumInstanceNames(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);
    */
  	
    /*
    virtual void enumInstances(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
  	  Linux_SambaPrinterBrowseForPrinterManualInstanceEnumeration& aManualInstanceEnumeration);
  	*/
  	
    /*
    virtual Linux_SambaPrinterBrowseForPrinterManualInstance getInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaPrinterBrowseForPrinterInstanceName& anInstanceName);
    */
  	
    /*
    virtual void setInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaPrinterBrowseForPrinterManualInstance& aManualInstance);
    */
  	
    /*
    virtual Linux_SambaPrinterBrowseForPrinterInstanceName createInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaPrinterBrowseForPrinterManualInstance& aManualInstance);
    */
  	
    /*
    virtual void deleteInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaPrinterBrowseForPrinterInstanceName& anInstanceName);
    */
	
    
    /* Association Interface */


    virtual void referencesManagedElement( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterBrowseOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterBrowseForPrinterManualInstanceEnumeration& aManualInstanceEnumeration);



    virtual void referencesSettingData( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterBrowseForPrinterManualInstanceEnumeration& aManualInstanceEnumeration);



    virtual void associatorsManagedElement( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterBrowseOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterOptionsInstanceEnumeration& anInstanceEnumeration);



    virtual void associatorsSettingData( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterBrowseOptionsInstanceEnumeration& anInstanceEnumeration);


   
    
    /* extrinsic methods */
    
	
  };
  
}
#endif
