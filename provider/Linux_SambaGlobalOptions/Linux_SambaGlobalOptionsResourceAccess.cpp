// =======================================================================
// Linux_SambaGlobalOptionsResourceAccess.cpp
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
#include "Linux_SambaGlobalOptionsResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  //----------------------------------------------------------------------------
  // manual written methods

  static void setInstanceNameProperties(
      const char* aNameSpaceP,
      Linux_SambaGlobalOptionsInstanceName& anInstanceName) {
    
    anInstanceName.setNamespace(aNameSpaceP);
    anInstanceName.setName(DEFAULT_GLOBAL_NAME);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  }

  
  //----------------------------------------------------------------------------


  static void setInstanceProperties(
      Linux_SambaGlobalOptionsManualInstance& aManualInstance) {

    char *option;
    option = get_global_option(BIND_INTERFACES_ONLY);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setBindInterfacesOnly( true );
      else
	aManualInstance.setBindInterfacesOnly( false );
    
    option = get_global_option(INTERFACES);	
    if ( option )
      aManualInstance.setInterfaces( option );
    
    option = get_global_option(NETBIOS_ALIASES);	
    if ( option )
      aManualInstance.setNetbiosAlias( option );
    
    option = get_global_option(NETBIOS_NAME);	
    if ( option )
      aManualInstance.setNetbiosName( option );
    
    option = get_global_option(SERVER_STRING);	
    if ( option )
      aManualInstance.setServerString( option );
    
    option = get_global_option(WORKGROUP);	
    if ( option )
      aManualInstance.setWorkgroup( option );
  }

  //----------------------------------------------------------------------------

  
  //----------------------------------------------------------------------------
  //Linux_SambaGlobalOptionsResourceAccess::Linux_SambaGlobalOptionsResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaGlobalOptionsResourceAccess::~Linux_SambaGlobalOptionsResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalOptionsResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaGlobalOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    Linux_SambaGlobalOptionsInstanceName instanceName;
    setInstanceNameProperties(aNameSpaceP,instanceName);
    anInstanceNameEnumeration.addElement(instanceName);
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaGlobalOptionsResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaGlobalOptionsManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    Linux_SambaGlobalOptionsManualInstance aManualInstance;
    Linux_SambaGlobalOptionsInstanceName instanceName;
    
    setInstanceNameProperties(aNameSpaceP,instanceName);
    aManualInstance.setInstanceName(instanceName);
    
    setInstanceProperties(aManualInstance);
    
    aManualInstanceEnumeration.addElement(aManualInstance);
  }

  
  //----------------------------------------------------------------------------

  Linux_SambaGlobalOptionsManualInstance 
  Linux_SambaGlobalOptionsResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& anInstanceName) {

    if (strcasecmp(DEFAULT_GLOBAL_NAME,anInstanceName.getName())!=0 ||
        strcasecmp(anInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }

    Linux_SambaGlobalOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);
    
    setInstanceProperties(aManualInstance);
    
    return aManualInstance;
  }

  //----------------------------------------------------------------------------

  void
  Linux_SambaGlobalOptionsResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaGlobalOptionsManualInstance& aManualInstance) {
    
    if (strcasecmp(DEFAULT_GLOBAL_NAME,aManualInstance.getInstanceName().getName())!=0 ||
        strcasecmp(aManualInstance.getInstanceName().getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }

    if ( aManualInstance.isBindInterfacesOnlySet() ) {
      if(aManualInstance.getBindInterfacesOnly())  
	set_global_option(BIND_INTERFACES_ONLY,YES);
      else
	set_global_option(BIND_INTERFACES_ONLY,NO);
    }
    
    if ( aManualInstance.isInterfacesSet() )
      set_global_option(INTERFACES, aManualInstance.getInterfaces());
    
    if ( aManualInstance.isNetbiosAliasSet() )
      set_global_option(NETBIOS_ALIASES, aManualInstance.getNetbiosAlias());
    
    if ( aManualInstance.isNetbiosNameSet() )
      set_global_option(NETBIOS_NAME, aManualInstance.getNetbiosName());
    
    if ( aManualInstance.isServerStringSet() )
      set_global_option(SERVER_STRING, aManualInstance.getServerString());
    
    if ( aManualInstance.isWorkgroupSet() )
      set_global_option(WORKGROUP, aManualInstance.getWorkgroup());
  }

  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaGlobalOptionsInstanceName
  Linux_SambaGlobalOptionsResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaGlobalOptionsManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaGlobalOptionsResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaGlobalOptionsInstanceName& anInstanceName) { }
	*/
	

  
  // extrinsic methods

	
}


