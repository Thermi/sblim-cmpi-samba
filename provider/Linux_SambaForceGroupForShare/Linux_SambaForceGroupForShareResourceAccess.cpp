// =======================================================================
// Linux_SambaForceGroupForShareResourceAccess.cpp
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
#include "Linux_SambaForceGroupForShareResourceAccess.h"

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
  //Linux_SambaForceGroupForShareResourceAccess::Linux_SambaForceGroupForShareResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaForceGroupForShareResourceAccess::~Linux_SambaForceGroupForShareResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaForceGroupForShareResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaForceGroupForShareInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    char ** shares = get_shares_list();
    if(shares){
      for (int i=0; shares[i]; i++){
	
	Linux_SambaShareOptionsInstanceName shareInstName;
	shareInstName.setNamespace(aNameSpaceP);
	shareInstName.setName(shares[i]);
	shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
	char* group = get_option(shares[i],"force group");
	
	if(group && validGroup(group)){
	  Linux_SambaForceGroupForShareInstanceName assocName;
	  assocName.setNamespace(aNameSpaceP);
	  assocName.setGroupComponent(shareInstName);
	  
	  Linux_SambaGroupInstanceName groupInstName;
	  groupInstName.setNamespace(aNameSpaceP);
	  groupInstName.setSambaGroupName( group );
	  
	  assocName.setPartComponent(groupInstName);
	  
	  anInstanceNameEnumeration.addElement(assocName);
	}
      }
    }
  }
  
  
  //----------------------------------------------------------------------------

  void
  Linux_SambaForceGroupForShareResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaForceGroupForShareManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char ** shares = get_shares_list();
    if(shares){
      for (int i=0; shares[i]; i++){
	
	Linux_SambaShareOptionsInstanceName shareInstName;
	shareInstName.setNamespace(aNameSpaceP);
	shareInstName.setName(shares[i]);
	shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
	char* group = get_option(shares[i],"force group");
	
	if(group && validGroup( group )){
	  Linux_SambaForceGroupForShareManualInstance manualInstance;
	  
	  Linux_SambaForceGroupForShareInstanceName instName;
	  instName.setNamespace(aNameSpaceP);
	  instName.setGroupComponent(shareInstName);
	  
	  Linux_SambaGroupInstanceName groupInstName;
	  groupInstName.setNamespace(aNameSpaceP);
	  groupInstName.setSambaGroupName( group );
	  
	  instName.setPartComponent(groupInstName);
	  
	  manualInstance.setInstanceName(instName);
	  aManualInstanceEnumeration.addElement(manualInstance);
	}
      }      
    }
  }
  
  
  //----------------------------------------------------------------------------

  Linux_SambaForceGroupForShareManualInstance 
  Linux_SambaForceGroupForShareResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaForceGroupForShareInstanceName& anInstanceName) {

    Linux_SambaForceGroupForShareManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);

    return aManualInstance;
  }

  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaForceGroupForShareResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaForceGroupForShareManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------

  Linux_SambaForceGroupForShareInstanceName
  Linux_SambaForceGroupForShareResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaForceGroupForShareManualInstance& aManualInstance) {
    
    char* group = get_option(aManualInstance.getInstanceName().getGroupComponent().getName(),"force group");
    if(group && validGroup(group))
      set_share_option(aManualInstance.getInstanceName().getGroupComponent().getName(),"force group",group);
    
    return aManualInstance.getInstanceName();
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaForceGroupForShareResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaForceGroupForShareInstanceName& anInstanceName) {
    
    set_share_option(anInstanceName.getGroupComponent().getName(),"force group",NULL);
  }

	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaForceGroupForShareResourceAccess::referencesGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGroupInstanceName& aSourceInstanceName,
    Linux_SambaForceGroupForShareManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char ** shares = get_shares_list();
    
    if(shares){
      for (int i=0; shares[i]; i++){
	char* group = get_option(shares[i],"force group");
	
	if(group && validGroup(group)){
	  if(!strcmp(group,aSourceInstanceName.getSambaGroupName())){
	    Linux_SambaForceGroupForShareManualInstance manualInstance;
	    
	    Linux_SambaForceGroupForShareInstanceName instName;
	    instName.setNamespace(aNameSpaceP);
	    instName.setPartComponent(aSourceInstanceName);
	    
	    Linux_SambaShareOptionsInstanceName shareInstName;
	    shareInstName.setNamespace(aNameSpaceP);
	    shareInstName.setName(shares[i]);
	    shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	    
	    instName.setGroupComponent(shareInstName);
	    
	    manualInstance.setInstanceName(instName);
	    aManualInstanceEnumeration.addElement(manualInstance);
	  }
	}
      }
    }
  }
  
  
  //----------------------------------------------------------------------------

  void Linux_SambaForceGroupForShareResourceAccess::referencesPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
    Linux_SambaForceGroupForShareManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char* group = get_option(aSourceInstanceName.getName(),"force group");
    
    if(group && validGroup(group)){
      Linux_SambaForceGroupForShareManualInstance manualInstance;
      
      Linux_SambaForceGroupForShareInstanceName instName;
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

  void Linux_SambaForceGroupForShareResourceAccess::associatorsGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGroupInstanceName& aSourceInstanceName,
    Linux_SambaShareOptionsInstanceEnumeration& anInstanceEnumeration) {
    
    char ** shares = get_shares_list();
    
    if(shares){
      for (int i=0; shares[i]; i++){
	char* group = get_option(shares[i],"force group");
	if(group && validGroup(group)){
	  if(!strcmp(group,aSourceInstanceName.getSambaGroupName())){
	    Linux_SambaShareOptionsInstance instance;
	    
	    Linux_SambaShareOptionsInstanceName shareInstName;
	    shareInstName.setNamespace(aNameSpaceP);
	    shareInstName.setName(shares[i]);
	    shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	    
	    instance.setInstanceName(shareInstName);
	    
	    char *option;
	    
	    option = get_option(shares[i],"available");	
	    if ( option )
	      if(strcasecmp(option,"yes") == 0)
		instance.setAvailable( true );
	      else
		instance.setAvailable( false );
	    
	    option = get_option(shares[i],"comment");
	    if ( option )
	      instance.setComment(option);
	    
	    option = get_option(shares[i],"path");
	    if ( option )
	      instance.setPath(option);
	    
	    option = get_option(shares[i],"printable");	
	    if ( option )
	      if(strcasecmp(option,"yes") == 0)
		instance.setPrintable( true );
	      else
		instance.setPrintable( false );
	    
	    
	    anInstanceEnumeration.addElement(instance);
	  }
	}
      }
    }
  }
  
  
  //----------------------------------------------------------------------------

  void Linux_SambaForceGroupForShareResourceAccess::associatorsPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
    Linux_SambaGroupInstanceEnumeration& anInstanceEnumeration) {
    
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


