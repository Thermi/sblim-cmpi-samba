// =======================================================================
// Linux_SambaPrinterBrowseForPrinterInterface.h
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
#ifndef Linux_SambaPrinterBrowseForPrinterInterface_h
#define Linux_SambaPrinterBrowseForPrinterInterface_h

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


namespace genProvider {

  class Linux_SambaPrinterBrowseForPrinterInterface {
  	
    public:    
    virtual ~Linux_SambaPrinterBrowseForPrinterInterface() { };
    
    /* intrinsic methods */
    
    virtual void enumInstanceNames(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration& anInstanceNameEnumeration) = 0;
    
  	
    
    virtual void enumInstances(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
  	  Linux_SambaPrinterBrowseForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) = 0;
  	
  	
    
    virtual Linux_SambaPrinterBrowseForPrinterManualInstance getInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaPrinterBrowseForPrinterInstanceName& anInstanceName) = 0;
    
  	
    
    virtual void setInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaPrinterBrowseForPrinterManualInstance& aManualInstance) = 0;
    
  	
    
    virtual Linux_SambaPrinterBrowseForPrinterInstanceName createInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaPrinterBrowseForPrinterManualInstance& aManualInstance) = 0;
    
  	
    
    virtual void deleteInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaPrinterBrowseForPrinterInstanceName& anInstanceName) = 0;
    
	
    
    /* Association Interface */

    
    virtual void referencesManagedElement( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterBrowseOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterBrowseForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) = 0;
    

    
    virtual void referencesSettingData( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterBrowseForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) = 0;
    

    
    virtual void associatorsManagedElement( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterBrowseOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterOptionsInstanceEnumeration& anInstanceEnumeration) = 0;
    

    
    virtual void associatorsSettingData( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterBrowseOptionsInstanceEnumeration& anInstanceEnumeration) = 0;
    

   
    
    /* extrinsic methods */
    
	
  };
  
}
#endif
