// =======================================================================
// Linux_SambaGuestAccountForGlobalResourceAccess.cpp
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
#include "Linux_SambaGuestAccountForGlobalResourceAccess.h"

#include <string>
#include <list>

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"
#include "smt_smb_array.h"

namespace genProvider {
  
  //----------------------------------------------------------------------------
  // manual written methods

  static bool validUser(const char* user) {
    char ** users = get_samba_users_list();
    if(users){
      for (int i=0; users[i]; i++){
	if(!strcmp(users[i],user))
	  return true;
      }
    }
    return false;
  };

  //----------------------------------------------------------------------------

  
  //----------------------------------------------------------------------------
  //Linux_SambaGuestAccountForGlobalResourceAccess::Linux_SambaGuestAccountForGlobalResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaGuestAccountForGlobalResourceAccess::~Linux_SambaGuestAccountForGlobalResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaGuestAccountForGlobalResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaGuestAccountForGlobalInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(aNameSpaceP);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    
    char* user = get_global_option("guest account");
    
    if(user && validUser(user)){
      Linux_SambaGuestAccountForGlobalInstanceName assocName;
      assocName.setNamespace(aNameSpaceP);
      assocName.setGroupComponent(globalInstName);
      
      Linux_SambaUserInstanceName userInstName;
      userInstName.setNamespace(aNameSpaceP);
      userInstName.setSambaUserName( user );
      
      assocName.setPartComponent(userInstName);
      
      anInstanceNameEnumeration.addElement(assocName);
    }
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaGuestAccountForGlobalResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaGuestAccountForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(aNameSpaceP);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    char* user = get_global_option("guest account");
    
    if(user && validUser(user)){
      Linux_SambaGuestAccountForGlobalManualInstance manualInstance;
      
      Linux_SambaGuestAccountForGlobalInstanceName instName;
      instName.setNamespace(aNameSpaceP);
      instName.setGroupComponent(globalInstName);
      
      Linux_SambaUserInstanceName userInstName;
      userInstName.setNamespace(aNameSpaceP);
      userInstName.setSambaUserName( user );
      
      instName.setPartComponent(userInstName);
      
      manualInstance.setInstanceName(instName);
      aManualInstanceEnumeration.addElement(manualInstance);
    }
  }

  
  //----------------------------------------------------------------------------

  Linux_SambaGuestAccountForGlobalManualInstance 
  Linux_SambaGuestAccountForGlobalResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaGuestAccountForGlobalInstanceName& anInstanceName) {

    Linux_SambaGuestAccountForGlobalManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);
    
    if(strcasecmp(anInstanceName.getGroupComponent().getName(),DEFAULT_GLOBAL_NAME)!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified global options instance is unknown!");
    }
     
    if(!validUser(anInstanceName.getPartComponent().getSambaUserName())){
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified Samba user does not exist!");
    }

    SambaArray array = SambaArray();
    char * user_list = get_option(DEFAULT_GLOBAL_NAME,"guest account");

    if(!user_list) {
       throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified Samba user is not guest account for the specified global options instance!");
    }
     
    array.populate(user_list);
    if(!array.isPresent(anInstanceName.getPartComponent().getSambaUserName())) {
       throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified Samba user is not guest account for the specified global options instance!");
    }

  
    return aManualInstance;
  }

  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaGuestAccountForGlobalResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaGuestAccountForGlobalManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------

  Linux_SambaGuestAccountForGlobalInstanceName
  Linux_SambaGuestAccountForGlobalResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaGuestAccountForGlobalManualInstance& aManualInstance) {
    
    if(strcasecmp(aManualInstance.getInstanceName().getGroupComponent().getName(),DEFAULT_GLOBAL_NAME)!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified global options instance is unknown!");
    }

    if(!validUser(aManualInstance.getInstanceName().getPartComponent().getSambaUserName())){
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified Samba user does not exist!");
    }

    char* global_user = get_global_option("guest account");
    char* default_user = get_default_option("guest account");

    if (!global_user || (default_user && !strcmp(global_user,default_user))) {
        if (default_user && !strcmp(default_user,aManualInstance.getInstanceName().getPartComponent().getSambaUserName())) {
            set_global_option("guest account", NULL);
        } else {
            set_global_option("guest account", aManualInstance.getInstanceName().getPartComponent().getSambaUserName());
        }
    } else {
        throw CmpiStatus(CMPI_RC_ERR_ALREADY_EXISTS,"Instance already exist!");
    }

    return aManualInstance.getInstanceName();
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaGuestAccountForGlobalResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaGuestAccountForGlobalInstanceName& anInstanceName) {
    
    if (strcasecmp(anInstanceName.getGroupComponent().getName(),DEFAULT_GLOBAL_NAME)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified global options instance is unknown!");
    }

    if(!validUser(anInstanceName.getPartComponent().getSambaUserName())) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified Samba user does not exist!");
    }

    char* global_user = get_global_option("guest account");

    if (!global_user || strcmp(global_user, anInstanceName.getPartComponent().getSambaUserName())) {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The specified Samba User is not a 'guest account' for 'global'");
    } else {
        set_global_option("guest account", NULL);
    }
  }

	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaGuestAccountForGlobalResourceAccess::referencesPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaGuestAccountForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME)!=0) {
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist. The specified global options instance is unknown!");
    }   
 
    char* user = get_option(aSourceInstanceName.getName(),"guest account");
    
    if(user && validUser(user)){
      Linux_SambaGuestAccountForGlobalManualInstance manualInstance;
      
      Linux_SambaGuestAccountForGlobalInstanceName instName;
      instName.setNamespace(aNameSpaceP);
      instName.setGroupComponent(aSourceInstanceName);
      
      Linux_SambaUserInstanceName userInstName;
      userInstName.setNamespace(aNameSpaceP);
      userInstName.setSambaUserName( user );
      
      instName.setPartComponent(userInstName);
      
      manualInstance.setInstanceName(instName);
      aManualInstanceEnumeration.addElement(manualInstance);
    }
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaGuestAccountForGlobalResourceAccess::referencesGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
    Linux_SambaGuestAccountForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    if(validUser(aSourceInstanceName.getSambaUserName())){
      char * user = get_global_option("guest account");
      if(!strcmp(user,aSourceInstanceName.getSambaUserName())){
	Linux_SambaGuestAccountForGlobalManualInstance manualInstance;
	
	Linux_SambaGuestAccountForGlobalInstanceName instName;
	instName.setNamespace(aNameSpaceP);
	instName.setPartComponent(aSourceInstanceName);
	
	Linux_SambaGlobalOptionsInstanceName globalInstName;
	globalInstName.setNamespace(aNameSpaceP);
	globalInstName.setName(DEFAULT_GLOBAL_NAME);
	globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
	instName.setGroupComponent(globalInstName);
	
	manualInstance.setInstanceName(instName);
	aManualInstanceEnumeration.addElement(manualInstance);
      }
    } else {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist. The speicified Samba user is not guest account for the specified global options instance!");
    }
  }
  
  
  //----------------------------------------------------------------------------

  void Linux_SambaGuestAccountForGlobalResourceAccess::associatorsPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaUserInstanceEnumeration& anInstanceEnumeration) {

    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME)!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified global options instance is unknown!");
    }
    
    char* user = get_option(aSourceInstanceName.getName(),"guest account");
    
    if(user && validUser(user)){
      Linux_SambaUserInstance instance;
      
      Linux_SambaUserInstanceName userInstName;
      userInstName.setNamespace(aNameSpaceP);
      userInstName.setSambaUserName( user );
      
      instance.setInstanceName(userInstName);
      char* option;
      
      option = get_user_unix_name( user );
      if ( option )
	instance.setSystemUserName( option );
      
      anInstanceEnumeration.addElement(instance);
    }
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaGuestAccountForGlobalResourceAccess::associatorsGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
    Linux_SambaGlobalOptionsInstanceEnumeration& anInstanceEnumeration) {
    
    if(validUser(aSourceInstanceName.getSambaUserName())){
      char * user = get_global_option("guest account");
      if(!strcmp(user,aSourceInstanceName.getSambaUserName())){
	Linux_SambaGlobalOptionsInstance instance;
	
	Linux_SambaGlobalOptionsInstanceName globalInstName;
	globalInstName.setNamespace(aNameSpaceP);
	globalInstName.setName(DEFAULT_GLOBAL_NAME);
	globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
	instance.setInstanceName(globalInstName);
	
	char *option;
	option = get_global_option("bind interfaces only");	
	if ( option )
	  if(strcasecmp(option,"yes") == 0)
	    instance.setBindInterfacesOnly( true );
	  else
	    instance.setBindInterfacesOnly( false );
	
	option = get_global_option("interfaces");	
	if ( option )
	  instance.setInterfaces( option );
	
	option = get_global_option("netbios aliases");	
	if ( option )
	  instance.setNetbiosAlias( option );
	
	option = get_global_option("netbios name");	
	if ( option )
	  instance.setNetbiosName( option );
	
	option = get_global_option("server string");	
	if ( option )
	  instance.setServerString( option );
	
	option = get_global_option("workgroup");	
	if ( option )
	  instance.setWorkgroup( option );
    	
	anInstanceEnumeration.addElement(instance);
      }
    } else {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist. The speicified Samba user is not guest account for the specified global options instance!");
    }
  }

   
  
  // extrinsic methods

	
}


