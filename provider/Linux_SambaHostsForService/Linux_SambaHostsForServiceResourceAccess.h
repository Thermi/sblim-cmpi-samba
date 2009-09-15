// =======================================================================
// Linux_SambaHostsForServiceResourceAccess.h 
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
//
//
#ifndef Linux_SambaHostsForServiceResourceAccess_h
#define Linux_SambaHostsForServiceResourceAccess_h

#include "Linux_SambaHostsForServiceInstanceName.h"
#include "Linux_SambaHostsForServiceManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaHostInstance.h"
#include "Linux_SambaServiceInstance.h"
#include "Linux_SambaHostExternal.h"
#include "Linux_SambaServiceExternal.h"
#include "Linux_SambaHostsForServiceDefaultImplementation.h"


namespace genProvider {

  class Linux_SambaHostsForServiceResourceAccess:
   public Linux_SambaHostsForServiceDefaultImplementation {

    public:
    /*
    Linux_SambaHostsForServiceResourceAccess();
    */
    virtual ~Linux_SambaHostsForServiceResourceAccess() ;

    /* intrinsic methods */

    virtual void enumInstanceNames(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      Linux_SambaHostsForServiceInstanceNameEnumeration& anInstanceNameEnumeration);



    virtual void enumInstances(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
  	  Linux_SambaHostsForServiceManualInstanceEnumeration& aManualInstanceEnumeration);



    virtual Linux_SambaHostsForServiceManualInstance getInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaHostsForServiceInstanceName& anInstanceName);


    /*
    virtual void setInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaHostsForServiceManualInstance& aManualInstance);
    */

    /*
    virtual Linux_SambaHostsForServiceInstanceName createInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaHostsForServiceManualInstance& aManualInstance);
    */

    /*
    virtual void deleteInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaHostsForServiceInstanceName& anInstanceName);
    */


    /* Association Interface */


    virtual void referencesPartComponent(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaServiceInstanceName& aSourceInstanceName,
      Linux_SambaHostsForServiceManualInstanceEnumeration& aManualInstanceEnumeration);



    virtual void referencesGroupComponent(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaHostInstanceName& aSourceInstanceName,
      Linux_SambaHostsForServiceManualInstanceEnumeration& aManualInstanceEnumeration);



    virtual void associatorsPartComponent(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaServiceInstanceName& aSourceInstanceName,
      Linux_SambaHostInstanceEnumeration& anInstanceEnumeration);



    virtual void associatorsGroupComponent(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaHostInstanceName& aSourceInstanceName,
      Linux_SambaServiceInstanceEnumeration& anInstanceEnumeration);




    /* extrinsic methods */


  };

}
#endif
