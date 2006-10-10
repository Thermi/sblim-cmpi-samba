// =======================================================================
// Linux_SambaPrinterPrintingForPrinterResourceAccess.h
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
#ifndef Linux_SambaPrinterPrintingForPrinterResourceAccess_h
#define Linux_SambaPrinterPrintingForPrinterResourceAccess_h

#include "Linux_SambaPrinterPrintingForPrinterInstanceName.h"
#include "Linux_SambaPrinterPrintingForPrinterManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaPrinterPrintingOptionsInstance.h"
#include "Linux_SambaPrinterOptionsInstance.h"
#include "Linux_SambaPrinterPrintingOptionsExternal.h"
#include "Linux_SambaPrinterOptionsExternal.h"
#include "Linux_SambaPrinterPrintingForPrinterDefaultImplementation.h"


namespace genProvider {

  class Linux_SambaPrinterPrintingForPrinterResourceAccess:
   public Linux_SambaPrinterPrintingForPrinterDefaultImplementation {
  	
    public:
    /*
    Linux_SambaPrinterPrintingForPrinterResourceAccess();
    */    
    virtual ~Linux_SambaPrinterPrintingForPrinterResourceAccess() ;
    
    /* intrinsic methods */
    
    virtual void enumInstanceNames(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);
    
  	
    
    virtual void enumInstances(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
  	  Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration& aManualInstanceEnumeration);
  	
  	
    
    virtual Linux_SambaPrinterPrintingForPrinterManualInstance getInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaPrinterPrintingForPrinterInstanceName& anInstanceName);
    
  	
    /*
    virtual void setInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaPrinterPrintingForPrinterManualInstance& aManualInstance);
    */
  	
    /*
    virtual Linux_SambaPrinterPrintingForPrinterInstanceName createInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaPrinterPrintingForPrinterManualInstance& aManualInstance);
    */
  	
    /*
    virtual void deleteInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaPrinterPrintingForPrinterInstanceName& anInstanceName);
    */
	
    
    /* Association Interface */


    virtual void referencesSettingData( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration& aManualInstanceEnumeration);



    virtual void referencesManagedElement( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterPrintingOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration& aManualInstanceEnumeration);



    virtual void associatorsSettingData( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterPrintingOptionsInstanceEnumeration& anInstanceEnumeration);



    virtual void associatorsManagedElement( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterPrintingOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterOptionsInstanceEnumeration& anInstanceEnumeration);


   
    
    /* extrinsic methods */
    
	
  };
  
}
#endif
