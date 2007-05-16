// =======================================================================
// Linux_SambaAdminUsersForGlobalResourceAccess.cpp
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
#include "Linux_SambaAdminUsersForGlobalResourceAccess.h"

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
    if(users) {
      for (int i=0; users[i]; i++) {
	if(!strcmp(users[i],user))
	  return true;
      }
    }
    
    return false;
  };

  //----------------------------------------------------------------------------

  //----------------------------------------------------------------------------
  //Linux_SambaAdminUsersForGlobalResourceAccess::Linux_SambaAdminUsersForGlobalResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaAdminUsersForGlobalResourceAccess::~Linux_SambaAdminUsersForGlobalResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaAdminUsersForGlobalResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaAdminUsersForGlobalInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(aNameSpaceP);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    char* user_list = get_option(DEFAULT_GLOBAL_NAME,"admin users");
    
    if(user_list){
      SambaArray array = SambaArray(user_list);
      SambaArrayConstIterator iter;

      for ( iter = array.begin(); iter != array.end(); ++iter) {
	if(validUser((*iter).c_str())){
	  Linux_SambaAdminUsersForGlobalInstanceName assocName;
	  assocName.setNamespace(aNameSpaceP);
	  assocName.setGroupComponent(globalInstName);
	  
	  Linux_SambaUserInstanceName userInstName;
	  userInstName.setNamespace(aNameSpaceP);
	  userInstName.setSambaUserName( (*iter).c_str() );
	  
	  assocName.setPartComponent(userInstName);
	  
	  anInstanceNameEnumeration.addElement(assocName);
	}
      }
    }
  }
  
  
  //----------------------------------------------------------------------------

  void
  Linux_SambaAdminUsersForGlobalResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaAdminUsersForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(aNameSpaceP);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    char* user_list = get_option(DEFAULT_GLOBAL_NAME,"admin users");
    
    if(user_list){
      SambaArray array = SambaArray(user_list);
      SambaArrayConstIterator iter;
  
      for ( iter = array.begin(); iter != array.end(); ++iter) {
	if(validUser((*iter).c_str())){
	  Linux_SambaAdminUsersForGlobalManualInstance manualInstance;
	  
	  Linux_SambaAdminUsersForGlobalInstanceName instName;
	  instName.setNamespace(aNameSpaceP);
	  instName.setGroupComponent(globalInstName);
	  
	  Linux_SambaUserInstanceName userInstName;
	  userInstName.setNamespace(aNameSpaceP);
	  userInstName.setSambaUserName( (*iter).c_str() );
	  
	  instName.setPartComponent(userInstName);
	  
	  manualInstance.setInstanceName(instName);
	  aManualInstanceEnumeration.addElement(manualInstance);
	}
      }
    }
  }
  
  
  //----------------------------------------------------------------------------

  Linux_SambaAdminUsersForGlobalManualInstance 
  Linux_SambaAdminUsersForGlobalResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaAdminUsersForGlobalInstanceName& anInstanceName) {

    Linux_SambaAdminUsersForGlobalManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);
    
    if (strcasecmp(anInstanceName.getGroupComponent().getName(),DEFAULT_GLOBAL_NAME) != 0 ||
        strcasecmp(anInstanceName.getGroupComponent().getInstanceID(),DEFAULT_INSTANCE_ID) != 0) {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,("The instance does not exist. The specified global options instance is unknown!"));
    }

    SambaArray array = SambaArray();
    char* user_list = get_option(DEFAULT_GLOBAL_NAME,"admin users");

    if(!validUser(anInstanceName.getPartComponent().getSambaUserName())) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba user does not exist!");
    }

    if(!user_list) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba user is not an admin user!");
    }
    array.populate(user_list);
    
    if(!array.isPresent(anInstanceName.getPartComponent().getSambaUserName())) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba user is not an admin user!");
    }

    return aManualInstance;
  }

  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaAdminUsersForGlobalResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaAdminUsersForGlobalManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------

  Linux_SambaAdminUsersForGlobalInstanceName
  Linux_SambaAdminUsersForGlobalResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaAdminUsersForGlobalManualInstance& aManualInstance) { 
    
    if (strcasecmp(aManualInstance.getInstanceName().getGroupComponent().getName(),DEFAULT_GLOBAL_NAME) != 0 ||
        strcasecmp(aManualInstance.getInstanceName().getGroupComponent().getInstanceID(),DEFAULT_INSTANCE_ID) != 0) {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The instance does not exist. The specified global options instance is unknown!");
    }

    SambaArray array = SambaArray();
    char* user_list = get_option(DEFAULT_GLOBAL_NAME,"admin users");


    if(user_list)
      array.populate(user_list);
    
    if(!validUser(aManualInstance.getInstanceName().getPartComponent().getSambaUserName())){
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The specified Samba user does not exist!");

    } else {
      if(!array.isPresent(string( aManualInstance.getInstanceName().getPartComponent().getSambaUserName() ))) {
	array.add( string( aManualInstance.getInstanceName().getPartComponent().getSambaUserName() ) );
	
	set_global_option("admin users",array.toString().c_str());
      } else {
        throw CmpiStatus(CMPI_RC_ERR_ALREADY_EXISTS,"Instance already exist");
      }
    }

    return aManualInstance.getInstanceName();
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaAdminUsersForGlobalResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaAdminUsersForGlobalInstanceName& anInstanceName) {
    
    if (strcasecmp(anInstanceName.getGroupComponent().getName(),DEFAULT_GLOBAL_NAME) != 0 ||
        strcasecmp(anInstanceName.getGroupComponent().getInstanceID(),DEFAULT_INSTANCE_ID) != 0) {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,("The instance does not exist. The specified global options instance is unknown!"));
    }

    if(!validUser(anInstanceName.getPartComponent().getSambaUserName())) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba user does not exist!");
    }

    SambaArray array = SambaArray();
    char* user_list = get_option(DEFAULT_GLOBAL_NAME,"admin users");
    
    if(!user_list) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba user is not an admin user!");
    }
    array.populate(user_list);

    if(!array.isPresent(anInstanceName.getPartComponent().getSambaUserName())) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist: The specified Samba user is not an admin user!");
    }

    array.remove( string( anInstanceName.getPartComponent().getSambaUserName() )); 
    if(array.size() >= 1) {
      set_global_option("admin users",array.toString().c_str());

    } else {
      set_global_option("admin users",NULL);
    }
  }

	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaAdminUsersForGlobalResourceAccess::referencesPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaAdminUsersForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    if (strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME) != 0 ||
        strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID) != 0) {
        throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,("The instance does not exist. The specified global options instance is unknown!"));
    }
    char* user_list = get_option(DEFAULT_GLOBAL_NAME,"admin users");
    
    if(user_list){
      SambaArray array = SambaArray(user_list);
      SambaArrayConstIterator iter; 

      for ( iter = array.begin(); iter != array.end(); ++iter) {
	if(validUser((*iter).c_str())){
	  Linux_SambaAdminUsersForGlobalManualInstance manualInstance;
	  
	  Linux_SambaAdminUsersForGlobalInstanceName instName;
	  instName.setNamespace(aNameSpaceP);
	  instName.setGroupComponent(aSourceInstanceName);
	  
	  Linux_SambaUserInstanceName userInstName;
	  userInstName.setNamespace(aNameSpaceP);
	  userInstName.setSambaUserName( (*iter).c_str() );
	  
	  instName.setPartComponent(userInstName);
	  manualInstance.setInstanceName(instName);
	  aManualInstanceEnumeration.addElement(manualInstance);
	}
      }
    }
  }
  
  
  //----------------------------------------------------------------------------

  void Linux_SambaAdminUsersForGlobalResourceAccess::referencesGroupComponent( 
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
    Linux_SambaAdminUsersForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    if(validUser(aSourceInstanceName.getSambaUserName())) {
      char * user_list = get_option(DEFAULT_GLOBAL_NAME,"admin users");
      if(user_list) {
	SambaArray array = SambaArray(user_list);
	
	if(array.isPresent(aSourceInstanceName.getSambaUserName())) {
	  Linux_SambaAdminUsersForGlobalManualInstance manualInstance;
	  
	  Linux_SambaAdminUsersForGlobalInstanceName instName;
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
      }
    } else {
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,("The instance does not exist. The specified Samba user does not exist!"));
    }
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaAdminUsersForGlobalResourceAccess::associatorsPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaUserInstanceEnumeration& anInstanceEnumeration) { 
    
    if (strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME) != 0 ||
        strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID) != 0) {
        throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,("The instance does not exist. The specified global options instance is unknown!"));
    }

    char* user_list = get_option(DEFAULT_GLOBAL_NAME,"admin users");
    
    if(user_list) {
      SambaArray array = SambaArray(user_list);
      SambaArrayConstIterator iter;
      for ( iter = array.begin(); iter != array.end(); ++iter) {
	if(validUser((*iter).c_str())){
	  Linux_SambaUserInstance instance;
	  
	  Linux_SambaUserInstanceName userInstName;
	  userInstName.setNamespace(aNameSpaceP);
	  userInstName.setSambaUserName( (*iter).c_str() );
	  
	  instance.setInstanceName(userInstName);
	  char *option;
	  
	  option = get_user_unix_name((*iter).c_str() );
	  if ( option )
	    instance.setSystemUserName( option );
	  anInstanceEnumeration.addElement(instance);
	}
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaAdminUsersForGlobalResourceAccess::associatorsGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
    Linux_SambaGlobalOptionsInstanceEnumeration& anInstanceEnumeration) {
    
    if(validUser(aSourceInstanceName.getSambaUserName())) {
      char * user_list = get_global_option("admin users");
      if(user_list) {
	SambaArray array = SambaArray(user_list);
	
	if(array.isPresent(aSourceInstanceName.getSambaUserName())) {
	  Linux_SambaGlobalOptionsInstance instance;
	  
	  Linux_SambaGlobalOptionsInstanceName globalInstName;
	  globalInstName.setNamespace(aNameSpaceP);
	  globalInstName.setName(DEFAULT_GLOBAL_NAME);
	  globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	  
	  instance.setInstanceName(globalInstName);
	  
	  char *option;
	  option = get_option(DEFAULT_GLOBAL_NAME,"bind interfaces only");	
	  if ( option )
	    if(strcasecmp(option,"yes") == 0)
	      instance.setBindInterfacesOnly( true );
	    else
	      instance.setBindInterfacesOnly( false );
	  
	  option = get_option(DEFAULT_GLOBAL_NAME,"interfaces");	
	  if ( option )
	    instance.setInterfaces( option );
	  
	  option = get_option(DEFAULT_GLOBAL_NAME,"netbios aliases");	
	  if ( option )
	    instance.setNetbiosAlias( option );
	  
	  option = get_option(DEFAULT_GLOBAL_NAME,"netbios name");	
	  if ( option )
	    instance.setNetbiosName( option );
	  
	  option = get_option(DEFAULT_GLOBAL_NAME,"server string");	
	  if ( option )
	    instance.setServerString( option );
	  
	  option = get_option(DEFAULT_GLOBAL_NAME,"workgroup");	
	  if ( option )
	    instance.setWorkgroup( option );
	  
	  anInstanceEnumeration.addElement(instance);
	}
      }
    } else {
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,("The instance does not exist. The specified Samba user does not exist!"));
    }
  }
  
   
  
  // extrinsic methods

	
}


