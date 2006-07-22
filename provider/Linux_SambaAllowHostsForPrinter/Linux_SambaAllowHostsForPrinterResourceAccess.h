// =======================================================================
// Linux_SambaAllowHostsForPrinterResourceAccess.h 
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
#ifndef Linux_SambaAllowHostsForPrinterResourceAccess_h
#define Linux_SambaAllowHostsForPrinterResourceAccess_h

#include "Linux_SambaAllowHostsForPrinterInstanceName.h"
#include "Linux_SambaAllowHostsForPrinterManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaHostInstance.h"
#include "Linux_SambaPrinterOptionsInstance.h"
#include "Linux_SambaHostExternal.h"
#include "Linux_SambaPrinterOptionsExternal.h"
#include "Linux_SambaAllowHostsForPrinterDefaultImplementation.h"


namespace genProvider {

  class Linux_SambaAllowHostsForPrinterResourceAccess:
   public Linux_SambaAllowHostsForPrinterDefaultImplementation {

    public:
    /*
    Linux_SambaAllowHostsForPrinterResourceAccess();
    */
    virtual ~Linux_SambaAllowHostsForPrinterResourceAccess() ;

    /* intrinsic methods */

    virtual void enumInstanceNames(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      Linux_SambaAllowHostsForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);



    virtual void enumInstances(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
  	  Linux_SambaAllowHostsForPrinterManualInstanceEnumeration& aManualInstanceEnumeration);



    virtual Linux_SambaAllowHostsForPrinterManualInstance getInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaAllowHostsForPrinterInstanceName& anInstanceName);


    /*
    virtual void setInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaAllowHostsForPrinterManualInstance& aManualInstance);
    */


    virtual Linux_SambaAllowHostsForPrinterInstanceName createInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaAllowHostsForPrinterManualInstance& aManualInstance);



    virtual void deleteInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaAllowHostsForPrinterInstanceName& anInstanceName);



    /* Association Interface */


    virtual void referencesPartComponent(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaAllowHostsForPrinterManualInstanceEnumeration& aManualInstanceEnumeration);



    virtual void referencesGroupComponent(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaHostInstanceName& aSourceInstanceName,
      Linux_SambaAllowHostsForPrinterManualInstanceEnumeration& aManualInstanceEnumeration);



    virtual void associatorsPartComponent(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaHostInstanceEnumeration& anInstanceEnumeration);



    virtual void associatorsGroupComponent(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaHostInstanceName& aSourceInstanceName,
      Linux_SambaPrinterOptionsInstanceEnumeration& anInstanceEnumeration);




    /* extrinsic methods */


  };

}
#endif
