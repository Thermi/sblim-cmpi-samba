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

    char ** shares = get_shares_list();
    if(shares) {
    int valid_share = false;
        for(int i=0;shares[i];i++) {
           if(strcasecmp(anInstanceName.getGroupComponent().getName(),shares[i])==0 &&
              strcasecmp(anInstanceName.getGroupComponent().getInstanceID(),DEFAULT_INSTANCE_ID)==0)
                valid_share = true;
        }
        if(!valid_share) {
           throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The specified instance is not a share!");
        }
    } else {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist!");
    }

    if(!validGroup(anInstanceName.getPartComponent().getSambaGroupName())) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba user is unknown!");
    }

    SambaArray array = SambaArray();
    char* user_list = get_option(anInstanceName.getGroupComponent().getName(),"force group");

    if(!user_list) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba group is not a force group!");
    }

    array.populate(user_list);
    if(!array.isPresent(anInstanceName.getPartComponent().getSambaGroupName())) {
      SambaArray g_array = SambaArray();
      char * g_user_list = get_global_option("force group");
      if(!user_list) {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba group is not a force group!");
      }
      g_array.populate(g_user_list);

      if(!g_array.isPresent(anInstanceName.getPartComponent().getSambaGroupName()))
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba group is not a force group!");
    }

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
    
    char ** shares = get_shares_list();
    if(shares) {
    int valid_share = false;
        for(int i=0;shares[i];i++) {
           if(strcasecmp(aManualInstance.getInstanceName().getGroupComponent().getName(),shares[i])==0 &&
              strcasecmp(aManualInstance.getInstanceName().getGroupComponent().getInstanceID(),DEFAULT_INSTANCE_ID)==0)
                valid_share = true;
        }
        if(!valid_share) {
           throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The specified instance is not a share!");
        }
    } else {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist!");
    }

    if(!validGroup(aManualInstance.getInstanceName().getPartComponent().getSambaGroupName())) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba user does not exist!");
    }

    SambaArray g_array = SambaArray();
    char* g_user_list = get_global_option("force group");

    if (g_user_list) {
      g_array.populate(g_user_list);
      if (g_array.isPresent(aManualInstance.getInstanceName().getPartComponent().getSambaGroupName()))
        return aManualInstance.getInstanceName();
    }

    SambaArray array = SambaArray();
    char* user_list = get_option(aManualInstance.getInstanceName().getGroupComponent().getName(),"force group");

    if(user_list) {
      array.populate(user_list);
      if(g_user_list) {
        SambaArrayConstIterator iter;
        for ( iter = g_array.begin(); iter != g_array.end(); ++iter) {
          if (array.isPresent((*iter).c_str())) {
            array.remove((*iter).c_str());
          }
        }
      }
      if(array.isPresent(aManualInstance.getInstanceName().getPartComponent().getSambaGroupName() )) {
        throw CmpiStatus(CMPI_RC_ERR_ALREADY_EXISTS,"Instance already exist");
      }
    }

    array.add(aManualInstance.getInstanceName().getPartComponent().getSambaGroupName());
    set_share_option(aManualInstance.getInstanceName().getGroupComponent().getName(),"force group",array.toString().c_str());

    return aManualInstance.getInstanceName();
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaForceGroupForShareResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaForceGroupForShareInstanceName& anInstanceName) {
    
    char ** shares = get_shares_list();
    if(shares) {
    int valid_share = false;
        for(int i=0;shares[i];i++) {
           if(strcasecmp(anInstanceName.getGroupComponent().getName(),shares[i])==0 &&
              strcasecmp(anInstanceName.getGroupComponent().getInstanceID(),DEFAULT_INSTANCE_ID)==0)
                valid_share = true;
        }
        if(!valid_share) {
           throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The specified instance is not a share!");
        }
    } else {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist!");
    }

    if(!validGroup(anInstanceName.getPartComponent().getSambaGroupName())) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba user does not exist!");
    }

    SambaArray g_array = SambaArray();
    char* g_user_list = get_global_option("force group");

    if (g_user_list) {
      g_array.populate(g_user_list);
    }

    SambaArray array = SambaArray();
    char* user_list = get_option(anInstanceName.getGroupComponent().getName(),"force group");

    if (user_list)
      array.populate(user_list);

    SambaArrayConstIterator iter;
    for ( iter = g_array.begin(); iter != g_array.end(); ++iter) {
      if (array.isPresent((*iter).c_str())) {
        array.remove((*iter).c_str());
      }
    }

    if (array.isPresent(anInstanceName.getPartComponent().getSambaGroupName())) {
      array.remove( string(anInstanceName.getPartComponent().getSambaGroupName() ));
    }

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
    
    if(!validGroup(aSourceInstanceName.getSambaGroupName())) {
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist. The specified Samba group is unknown!");
    }

    char ** shares = get_shares_list();

    if(shares){
      for (int i=0; shares[i]; i++){
        char * user_list = get_option(shares[i],"force group");
        char * global_user_list = get_global_option("force group");

        if(user_list){
          SambaArray array = SambaArray(user_list);
          if (global_user_list) {
            SambaArray g_array = SambaArray(global_user_list);
            SambaArrayConstIterator iter;

            for ( iter = g_array.begin(); iter != g_array.end(); ++iter) {
              if(!array.isPresent((*iter).c_str())) {
                array.add((*iter).c_str());
              }
            }
          }

          if(array.isPresent(aSourceInstanceName.getSambaGroupName())){
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
    
    char ** shares = get_shares_list();
    if(shares) {
    int valid_share = false;
        for(int i=0;shares[i];i++) {
           if(strcasecmp(aSourceInstanceName.getName(),shares[i])==0&&
              strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)==0)
                valid_share = true;
        }
        if(!valid_share) {
           throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The specified instance is not a valid share!");
        }
    } else {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist!");
    }

    char* user_list = get_option(aSourceInstanceName.getName(),"force group");
    char* g_user_list = get_global_option("force group");
    SambaArray array = SambaArray();
    SambaArray g_array = SambaArray();

    if(user_list){
      array.populate(user_list);
      SambaArrayConstIterator iter;

      for ( iter = array.begin(); iter != array.end(); ++iter) {
        if(validGroup((*iter).c_str())){
          Linux_SambaForceGroupForShareManualInstance manualInstance;
          Linux_SambaForceGroupForShareInstanceName instName;
          instName.setNamespace(aNameSpaceP);
          instName.setGroupComponent(aSourceInstanceName);

          Linux_SambaGroupInstanceName userInstName;
          userInstName.setNamespace(aNameSpaceP);
          userInstName.setSambaGroupName( (*iter).c_str() );

          instName.setPartComponent(userInstName);

          manualInstance.setInstanceName(instName);
          aManualInstanceEnumeration.addElement(manualInstance);
        }
      }
    }

    if(g_user_list){
      g_array.populate(g_user_list);
      SambaArrayConstIterator iter;

      for ( iter = g_array.begin(); iter != g_array.end(); ++iter) {
        if(validGroup((*iter).c_str()) && !array.isPresent((*iter).c_str())){
          Linux_SambaForceGroupForShareManualInstance manualInstance;

          Linux_SambaForceGroupForShareInstanceName instName;
          instName.setNamespace(aNameSpaceP);
          instName.setGroupComponent(aSourceInstanceName);

          Linux_SambaGroupInstanceName userInstName;
          userInstName.setNamespace(aNameSpaceP);
          userInstName.setSambaGroupName( (*iter).c_str() );

          instName.setPartComponent(userInstName);

          manualInstance.setInstanceName(instName);
          aManualInstanceEnumeration.addElement(manualInstance);
        }
      }
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
    
    if(!validGroup(aSourceInstanceName.getSambaGroupName())) {
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist. The specified Samba group is unknown!");
    }

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
    
    char ** shares = get_shares_list();
    if(shares) {
    int valid_share = false;
        for(int i=0;shares[i];i++) {
           if(strcasecmp(aSourceInstanceName.getName(),shares[i])==0 &&
              strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)==0)
                valid_share = true;
        }
        if(!valid_share) {
           throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The specified instance is not a share!");
        }
    } else {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist!");
    }

    char* user_list = get_option(aSourceInstanceName.getName(),"force group");
    SambaArray array = SambaArray();
    if(user_list){
      array.populate(user_list);
      SambaArrayConstIterator iter;

      for ( iter = array.begin(); iter != array.end(); ++iter) {
        if(validGroup((*iter).c_str())){
          Linux_SambaGroupInstance instance;

          Linux_SambaGroupInstanceName userInstName;
          userInstName.setNamespace(aNameSpaceP);
          userInstName.setSambaGroupName( (*iter).c_str() );

          instance.setInstanceName(userInstName);
          char *option;

          option = get_user_unix_name((*iter).c_str() );
          if ( option )
            instance.setSystemGroupName( option );

          anInstanceEnumeration.addElement(instance);
        }
      }
    }

    char* g_user_list = get_global_option("force group");
    if(g_user_list){
      SambaArray g_array = SambaArray(g_user_list);
      SambaArrayConstIterator iter;

      for ( iter = g_array.begin(); iter != g_array.end(); ++iter) {
        if(validGroup((*iter).c_str())){
          Linux_SambaGroupInstance instance;

          Linux_SambaGroupInstanceName userInstName;
          userInstName.setNamespace(aNameSpaceP);
          userInstName.setSambaGroupName( (*iter).c_str() );

          instance.setInstanceName(userInstName);
          char *option;

          option = get_user_unix_name((*iter).c_str() );
          if ( option )
            instance.setSystemGroupName( option );

          anInstanceEnumeration.addElement(instance);
        }
      }
    }
  }
  
   
  
  // extrinsic methods

	
}


