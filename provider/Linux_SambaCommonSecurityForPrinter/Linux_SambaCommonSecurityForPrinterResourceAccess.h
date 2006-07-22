// =======================================================================
// Linux_SambaCommonSecurityForPrinterResourceAccess.h
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
#ifndef Linux_SambaCommonSecurityForPrinterResourceAccess_h
#define Linux_SambaCommonSecurityForPrinterResourceAccess_h

#include "Linux_SambaCommonSecurityForPrinterInstanceName.h"
#include "Linux_SambaCommonSecurityForPrinterManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaCommonSecurityOptionsInstance.h"
#include "Linux_SambaPrinterOptionsInstance.h"
#include "Linux_SambaCommonSecurityOptionsExternal.h"
#include "Linux_SambaPrinterOptionsExternal.h"
#include "Linux_SambaCommonSecurityForPrinterDefaultImplementation.h"


namespace genProvider {

  class Linux_SambaCommonSecurityForPrinterResourceAccess:
   public Linux_SambaCommonSecurityForPrinterDefaultImplementation {
  	
    public:
    /*
    Linux_SambaCommonSecurityForPrinterResourceAccess();
    */    
    virtual ~Linux_SambaCommonSecurityForPrinterResourceAccess() ;
    
    /* intrinsic methods */
    /*
    virtual void enumInstanceNames(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      Linux_SambaCommonSecurityForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);
    */
  	
    /*
    virtual void enumInstances(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
  	  Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration& aManualInstanceEnumeration);
  	*/
  	
    /*
    virtual Linux_SambaCommonSecurityForPrinterManualInstance getInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaCommonSecurityForPrinterInstanceName& anInstanceName);
    */
  	
    /*
    virtual void setInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaCommonSecurityForPrinterManualInstance& aManualInstance);
    */
  	
    /*
    virtual Linux_SambaCommonSecurityForPrinterInstanceName createInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaCommonSecurityForPrinterManualInstance& aManualInstance);
    */
  	
    /*
    virtual void deleteInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaCommonSecurityForPrinterInstanceName& anInstanceName);
    */
	
    
    /* Association Interface */


    virtual void referencesSettingData( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration& aManualInstanceEnumeration);



    virtual void referencesManagedElement( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaCommonSecurityOptionsInstanceName& aSourceInstanceName,
      Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration& aManualInstanceEnumeration);



    virtual void associatorsSettingData( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaCommonSecurityOptionsInstanceEnumeration& anInstanceEnumeration);



    virtual void associatorsManagedElement( 
      const CmpiContext& aContext,  
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaCommonSecurityOptionsInstanceName& aSourceInstanceName,
      Linux_SambaPrinterOptionsInstanceEnumeration& anInstanceEnumeration);


   
    
    /* extrinsic methods */
    
	
  };
  
}
#endif
