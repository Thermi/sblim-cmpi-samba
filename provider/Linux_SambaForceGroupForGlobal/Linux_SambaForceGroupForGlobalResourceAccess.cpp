// =======================================================================
// Linux_SambaForceGroupForGlobalResourceAccess.cpp
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
#include "Linux_SambaForceGroupForGlobalResourceAccess.h"

#include <string>
#include <list>

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"
#include "smt_smb_array.h"

namespace genProvider {
  
  //----------------------------------------------------------------------------
  // manual written methods

  static bool validGroup(const char* group) {
    
    char ** groups = get_samba_groups_list();
    if(groups){
      for (int i=0; groups[i]; i++){
	if(!strcmp(groups[i],group))
	  return true;
      }
    }
    return false;
  };


  //----------------------------------------------------------------------------

  
  //----------------------------------------------------------------------------
  //Linux_SambaForceGroupForGlobalResourceAccess::Linux_SambaForceGroupForGlobalResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaForceGroupForGlobalResourceAccess::~Linux_SambaForceGroupForGlobalResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaForceGroupForGlobalResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaForceGroupForGlobalInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    
    globalInstName.setNamespace(aNameSpaceP);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    
    char* group = get_global_option("force group");
    
    if(group && validGroup(group)){
      Linux_SambaForceGroupForGlobalInstanceName assocName;
      assocName.setNamespace(aNameSpaceP);
      assocName.setGroupComponent(globalInstName);
      
      Linux_SambaGroupInstanceName groupInstName;
      groupInstName.setNamespace(aNameSpaceP);
      groupInstName.setSambaGroupName( group );
      
      assocName.setPartComponent(groupInstName);
      
      anInstanceNameEnumeration.addElement(assocName);
    }
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaForceGroupForGlobalResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaForceGroupForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(aNameSpaceP);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    char* group = get_global_option("force group");
    
    if(group && validGroup(group)){
      Linux_SambaForceGroupForGlobalManualInstance manualInstance;
      
      Linux_SambaForceGroupForGlobalInstanceName instName;
      instName.setNamespace(aNameSpaceP);
      instName.setGroupComponent(globalInstName);
      
      Linux_SambaGroupInstanceName groupInstName;
      groupInstName.setNamespace(aNameSpaceP);
      groupInstName.setSambaGroupName( group );
      
      instName.setPartComponent(groupInstName);
      
      manualInstance.setInstanceName(instName);
      aManualInstanceEnumeration.addElement(manualInstance);
    }
  }

  
  //----------------------------------------------------------------------------

  Linux_SambaForceGroupForGlobalManualInstance 
  Linux_SambaForceGroupForGlobalResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaForceGroupForGlobalInstanceName& anInstanceName) {

    Linux_SambaForceGroupForGlobalManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);

    return aManualInstance;
  }

  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaForceGroupForGlobalResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaForceGroupForGlobalManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------

  Linux_SambaForceGroupForGlobalInstanceName
  Linux_SambaForceGroupForGlobalResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaForceGroupForGlobalManualInstance& aManualInstance) {
    
    if(strcasecmp(aManualInstance.getInstanceName().getGroupComponent().getName(),DEFAULT_GLOBAL_NAME)!=0 ||
       strcasecmp(aManualInstance.getInstanceName().getGroupComponent().getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified global options instance is unknown!");
    }

    if(!validGroup(aManualInstance.getInstanceName().getPartComponent().getSambaGroupName())){
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified Samba Group does not exist!");
    }

    char* global_group = get_global_option("force group");
    char* default_group = get_default_option("force group");

    if (!global_group || (default_group && !strcmp(global_group,default_group))) {
        if (default_group && !strcmp(default_group,aManualInstance.getInstanceName().getPartComponent().getSambaGroupName())) {
            set_global_option("force group", NULL);
        } else {
            set_global_option("force group", aManualInstance.getInstanceName().getPartComponent().getSambaGroupName());
        }
    } else {
        throw CmpiStatus(CMPI_RC_ERR_ALREADY_EXISTS,"Instance already exist!");
    }
    return aManualInstance.getInstanceName();
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaForceGroupForGlobalResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaForceGroupForGlobalInstanceName& anInstanceName) {
    
    if (strcasecmp(anInstanceName.getGroupComponent().getName(),DEFAULT_GLOBAL_NAME)!=0 ||
        strcasecmp(anInstanceName.getGroupComponent().getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified global options instance is unknown!");
    }

    if(!validGroup(anInstanceName.getPartComponent().getSambaGroupName())) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified Samba group does not exist!");
    }

    char* global_group = get_global_option("force group");

    if (!global_group || strcmp(global_group, anInstanceName.getPartComponent().getSambaGroupName())) {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The specified Samba Group is not a 'force group' for 'global'");
    } else {
        set_global_option("force group", NULL);
    }
  }

	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaForceGroupForGlobalResourceAccess::referencesGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGroupInstanceName& aSourceInstanceName,
    Linux_SambaForceGroupForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    if(validGroup(aSourceInstanceName.getSambaGroupName())){
      char * group = get_global_option("force group");
      if(!strcmp(group,aSourceInstanceName.getSambaGroupName())){
	Linux_SambaForceGroupForGlobalManualInstance manualInstance;
	
	Linux_SambaForceGroupForGlobalInstanceName instName;
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
  }
  
  
  //----------------------------------------------------------------------------

  void Linux_SambaForceGroupForGlobalResourceAccess::referencesPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaForceGroupForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    if (strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME) != 0 ||
        strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID) != 0) {
        throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,("The instance does not exist. The specified global options instance is unknown!"));
    }

    char* group = get_option(aSourceInstanceName.getName(),"force group");
    
    if(group && validGroup(group)){
      Linux_SambaForceGroupForGlobalManualInstance manualInstance;
      
      Linux_SambaForceGroupForGlobalInstanceName instName;
      instName.setNamespace(aNameSpaceP);
      instName.setGroupComponent(aSourceInstanceName);
      
      Linux_SambaGroupInstanceName groupInstName;
      groupInstName.setNamespace(aNameSpaceP);
      groupInstName.setSambaGroupName( group );
      
      instName.setPartComponent(groupInstName);
      
      manualInstance.setInstanceName(instName);
      aManualInstanceEnumeration.addElement(manualInstance);
    }
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaForceGroupForGlobalResourceAccess::associatorsGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGroupInstanceName& aSourceInstanceName,
    Linux_SambaGlobalOptionsInstanceEnumeration& anInstanceEnumeration) {
    
    if(validGroup(aSourceInstanceName.getSambaGroupName())){
      char * group = get_global_option("force group");
      if(!strcmp(group,aSourceInstanceName.getSambaGroupName())){
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
    }
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaForceGroupForGlobalResourceAccess::associatorsPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaGroupInstanceEnumeration& anInstanceEnumeration) {
        
    if (strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME) != 0 ||
        strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID) != 0) {
        throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,("The instance does not exist. The specified global options instance is unknown!"));
    }

    char* group = get_option(aSourceInstanceName.getName(),"force group");
    
    if(group && validGroup(group)){
      Linux_SambaGroupInstance instance;
      
      Linux_SambaGroupInstanceName groupInstName;
      groupInstName.setNamespace(aNameSpaceP);
      groupInstName.setSambaGroupName( group );
      
      instance.setInstanceName(groupInstName);
      char* option;
      
      option = get_unix_group_name( group );
      if ( option )
	instance.setSystemGroupName( option );
      
      anInstanceEnumeration.addElement(instance);
    }
  }

   
  
  // extrinsic methods

	
}


