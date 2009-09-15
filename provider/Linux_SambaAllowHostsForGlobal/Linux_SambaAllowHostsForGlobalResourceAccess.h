// =======================================================================
// Linux_SambaAllowHostsForGlobalResourceAccess.h 
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
#ifndef Linux_SambaAllowHostsForGlobalResourceAccess_h
#define Linux_SambaAllowHostsForGlobalResourceAccess_h

#include "Linux_SambaAllowHostsForGlobalInstanceName.h"
#include "Linux_SambaAllowHostsForGlobalManualInstance.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiDateTime.h"
#include "CmpiBroker.h"
#include "Linux_SambaHostInstance.h"
#include "Linux_SambaGlobalOptionsInstance.h"
#include "Linux_SambaHostExternal.h"
#include "Linux_SambaGlobalOptionsExternal.h"
#include "Linux_SambaAllowHostsForGlobalDefaultImplementation.h"


namespace genProvider {

  class Linux_SambaAllowHostsForGlobalResourceAccess:
   public Linux_SambaAllowHostsForGlobalDefaultImplementation {

    public:
    /*
    Linux_SambaAllowHostsForGlobalResourceAccess();
    */
    virtual ~Linux_SambaAllowHostsForGlobalResourceAccess() ;

    /* intrinsic methods */

    virtual void enumInstanceNames(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      Linux_SambaAllowHostsForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);



    virtual void enumInstances(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
  	  Linux_SambaAllowHostsForGlobalManualInstanceEnumeration& aManualInstanceEnumeration);



    virtual Linux_SambaAllowHostsForGlobalManualInstance getInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaAllowHostsForGlobalInstanceName& anInstanceName);


    /*
    virtual void setInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char** aPropertiesPP,
      const Linux_SambaAllowHostsForGlobalManualInstance& aManualInstance);
    */


    virtual Linux_SambaAllowHostsForGlobalInstanceName createInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaAllowHostsForGlobalManualInstance& aManualInstance);



    virtual void deleteInstance(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const Linux_SambaAllowHostsForGlobalInstanceName& anInstanceName);



    /* Association Interface */


    virtual void referencesPartComponent(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
      Linux_SambaAllowHostsForGlobalManualInstanceEnumeration& aManualInstanceEnumeration);



    virtual void referencesGroupComponent(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaHostInstanceName& aSourceInstanceName,
      Linux_SambaAllowHostsForGlobalManualInstanceEnumeration& aManualInstanceEnumeration);



    virtual void associatorsPartComponent(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
      Linux_SambaHostInstanceEnumeration& anInstanceEnumeration);



    virtual void associatorsGroupComponent(
      const CmpiContext& aContext,
      const CmpiBroker& aBroker,
      const char* aNameSpaceP,
      const char** aPropertiesPP,
      const Linux_SambaHostInstanceName& aSourceInstanceName,
      Linux_SambaGlobalOptionsInstanceEnumeration& anInstanceEnumeration);




    /* extrinsic methods */


  };

}
#endif
