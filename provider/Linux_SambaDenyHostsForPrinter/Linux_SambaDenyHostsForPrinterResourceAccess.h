// =======================================================================
// Linux_SambaDenyHostsForPrinterResourceAccess.h 
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
// =======================================================================
//
//
#ifndef Linux_SambaDenyHostsForPrinterResourceAccess_h
#define Linux_SambaDenyHostsForPrinterResourceAccess_h

#include "Linux_SambaDenyHostsForPrinterInstanceName.h"
#include "Linux_SambaDenyHostsForPrinterManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaHostInstance.h"
#include "Linux_SambaPrinterOptionsInstance.h"
#include "Linux_SambaHostExternal.h"
#include "Linux_SambaPrinterOptionsExternal.h"
#include "Linux_SambaDenyHostsForPrinterDefaultImplementation.h"


namespace genProvider {

  class Linux_SambaDenyHostsForPrinterResourceAccess:
   public Linux_SambaDenyHostsForPrinterDefaultImplementation {

    public:
    /*
    Linux_SambaDenyHostsForPrinterResourceAccess();
    */
    virtual ~Linux_SambaDenyHostsForPrinterResourceAccess() ;

    /* intrinsic methods */

    virtual void enumInstanceNames(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      Linux_SambaDenyHostsForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);



    virtual void enumInstances(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
  	  Linux_SambaDenyHostsForPrinterManualInstanceEnumeration& aManualInstanceEnumeration);



    virtual Linux_SambaDenyHostsForPrinterManualInstance getInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaDenyHostsForPrinterInstanceName& anInstanceName);


    /*
    virtual void setInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaDenyHostsForPrinterManualInstance& aManualInstance);
    */


    virtual Linux_SambaDenyHostsForPrinterInstanceName createInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaDenyHostsForPrinterManualInstance& aManualInstance);



    virtual void deleteInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaDenyHostsForPrinterInstanceName& anInstanceName);



    /* Association Interface */


    virtual void referencesPartComponent(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
      Linux_SambaDenyHostsForPrinterManualInstanceEnumeration& aManualInstanceEnumeration);



    virtual void referencesGroupComponent(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaHostInstanceName& aSourceInstanceName,
      Linux_SambaDenyHostsForPrinterManualInstanceEnumeration& aManualInstanceEnumeration);



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
