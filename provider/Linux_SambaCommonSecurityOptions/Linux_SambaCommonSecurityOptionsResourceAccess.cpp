// =======================================================================
// Linux_SambaCommonSecurityOptionsResourceAccess.cpp
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
#include "Linux_SambaCommonSecurityOptionsResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  //----------------------------------------------------------------------------
  // manual written methods

  static void setInstanceNameProperties(
      const char* aNameSpaceP,
      char *instanceName,
      Linux_SambaCommonSecurityOptionsInstanceName& anInstanceName) {

    anInstanceName.setNamespace(aNameSpaceP);
    anInstanceName.setName(instanceName);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  };

  
  //----------------------------------------------------------------------------
  
  static void setInstanceProperties(Linux_SambaCommonSecurityOptionsManualInstance& aManualInstance) {

    char *option;
    
    option = get_option(aManualInstance.getInstanceName().getName(),GUEST_OK);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
        aManualInstance.setGuestOK( true );
      else
        aManualInstance.setGuestOK( false );
      
    option = get_option(aManualInstance.getInstanceName().getName(),GUEST_ONLY);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
        aManualInstance.setGuestOnly( true );
      else
        aManualInstance.setGuestOnly( false );
      
    option = get_option(aManualInstance.getInstanceName().getName(),HOSTS_ALLOW);	
    if ( option )
      aManualInstance.setHostsAllow( option );
      
    option = get_option(aManualInstance.getInstanceName().getName(),HOSTS_DENY);	
    if ( option )
      aManualInstance.setHostsDeny( option );
      
    option = get_option(aManualInstance.getInstanceName().getName(),READ_ONLY);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
        aManualInstance.setReadOnly( true );
      else
        aManualInstance.setReadOnly( false );
  }


  //----------------------------------------------------------------------------

  static void setRAProperties(Linux_SambaCommonSecurityOptionsManualInstance aManualInstance) {

    if ( aManualInstance.isGuestOKSet() )
      if(aManualInstance.getGuestOK())  
        set_option(aManualInstance.getInstanceName().getName(),GUEST_OK,YES);
      else
        set_option(aManualInstance.getInstanceName().getName(),GUEST_OK,NO);
      
    if ( aManualInstance.isGuestOnlySet() )
      if(aManualInstance.getGuestOnly())  
        set_option(aManualInstance.getInstanceName().getName(),GUEST_ONLY,YES);
      else
        set_option(aManualInstance.getInstanceName().getName(),GUEST_ONLY,NO);
      
    if ( aManualInstance.isHostsAllowSet() )
      set_option(aManualInstance.getInstanceName().getName(),HOSTS_ALLOW,aManualInstance.getHostsAllow());
      
    if ( aManualInstance.isHostsDenySet() )
      set_option(aManualInstance.getInstanceName().getName(),HOSTS_DENY,aManualInstance.getHostsDeny());
      
    if ( aManualInstance.isReadOnlySet() )
      if(aManualInstance.getReadOnly())  
        set_option(aManualInstance.getInstanceName().getName(),READ_ONLY,YES);
      else
        set_option(aManualInstance.getInstanceName().getName(),READ_ONLY,NO);
      
  }
  

  //----------------------------------------------------------------------------
  //Linux_SambaCommonSecurityOptionsResourceAccess::Linux_SambaCommonSecurityOptionsResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityOptionsResourceAccess::~Linux_SambaCommonSecurityOptionsResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaCommonSecurityOptionsResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaCommonSecurityOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    char ** printers = get_samba_printers_list();
    char ** shares = get_shares_list();
    
    Linux_SambaCommonSecurityOptionsInstanceName instanceName;
    setInstanceNameProperties(aNameSpaceP,DEFAULT_GLOBAL_NAME,instanceName);
    anInstanceNameEnumeration.addElement(instanceName); 
    
    if(printers){
      for (int i=0; printers[i]; i++){
	Linux_SambaCommonSecurityOptionsInstanceName instanceName;
	setInstanceNameProperties(aNameSpaceP,printers[i],instanceName);
	anInstanceNameEnumeration.addElement(instanceName); 
      }
    }
    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaCommonSecurityOptionsInstanceName instanceName;
	setInstanceNameProperties(aNameSpaceP,shares[i],instanceName);
	anInstanceNameEnumeration.addElement(instanceName); 
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaCommonSecurityOptionsResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaCommonSecurityOptionsManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char ** printers = get_samba_printers_list();
    char ** shares = get_shares_list();
    
    Linux_SambaCommonSecurityOptionsManualInstance aManualInstance;
    Linux_SambaCommonSecurityOptionsInstanceName instanceName;
    
    setInstanceNameProperties(aNameSpaceP,DEFAULT_GLOBAL_NAME,instanceName);
    aManualInstance.setInstanceName(instanceName);
    
    setInstanceProperties(aManualInstance);
    
    aManualInstanceEnumeration.addElement(aManualInstance);
    
    if(printers){
      for (int i=0; printers[i]; i++){
	Linux_SambaCommonSecurityOptionsManualInstance aManualInstance;
	Linux_SambaCommonSecurityOptionsInstanceName instanceName;
	
	setInstanceNameProperties(aNameSpaceP,printers[i],instanceName);
	aManualInstance.setInstanceName(instanceName);
	
	setInstanceProperties(aManualInstance);
	
	aManualInstanceEnumeration.addElement(aManualInstance);
      }
    }
    
    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaCommonSecurityOptionsManualInstance aManualInstance;
	Linux_SambaCommonSecurityOptionsInstanceName instanceName;
	
	setInstanceNameProperties(aNameSpaceP,shares[i],instanceName);
	aManualInstance.setInstanceName(instanceName);
	
	setInstanceProperties(aManualInstance);
	
	aManualInstanceEnumeration.addElement(aManualInstance);
      }
    }
  }
  
  
  //----------------------------------------------------------------------------

  Linux_SambaCommonSecurityOptionsManualInstance 
  Linux_SambaCommonSecurityOptionsResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaCommonSecurityOptionsInstanceName& anInstanceName) {

    if (!service_exists(anInstanceName.getName()) ||
        strcasecmp(anInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }

    Linux_SambaCommonSecurityOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);
    
    setInstanceProperties(aManualInstance);
    
    return aManualInstance;
  }

  //----------------------------------------------------------------------------

  void
  Linux_SambaCommonSecurityOptionsResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaCommonSecurityOptionsManualInstance& aManualInstance) {
    
    if (!service_exists(aManualInstance.getInstanceName().getName()) ||
        strcasecmp(aManualInstance.getInstanceName().getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }

    setRAProperties(aManualInstance);
  }

  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaCommonSecurityOptionsInstanceName
  Linux_SambaCommonSecurityOptionsResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaCommonSecurityOptionsManualInstance& aManualInstance) {
    
  }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaCommonSecurityOptionsResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaCommonSecurityOptionsInstanceName& anInstanceName) {
    
  }
  */
	

  
  // extrinsic methods

	
}


