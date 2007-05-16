// =======================================================================
// Linux_SambaValidUsersForShareResourceAccess.cpp
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#include "Linux_SambaValidUsersForShareResourceAccess.h"

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
  //Linux_SambaValidUsersForShareResourceAccess::Linux_SambaValidUsersForShareResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaValidUsersForShareResourceAccess::~Linux_SambaValidUsersForShareResourceAccess() {
    terminator();
  }

    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaValidUsersForShareResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaValidUsersForShareInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    char ** shares = get_shares_list();

    if(shares) {
      for (int i=0; shares[i]; i++) {

        Linux_SambaShareOptionsInstanceName shareInstName;
        shareInstName.setNamespace(aNameSpaceP);
        shareInstName.setName(shares[i]);
        shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);


        char* user_list = get_option(shares[i],"valid users");
        char* g_user_list = get_global_option("valid users");
        SambaArray array = SambaArray();
        SambaArray g_array = SambaArray();

        if(user_list){
          array.populate(user_list);
          SambaArrayConstIterator iter;

          for ( iter = array.begin(); iter != array.end(); ++iter) {
            if(validUser((*iter).c_str())){
              Linux_SambaValidUsersForShareInstanceName assocName;
              assocName.setNamespace(aNameSpaceP);
              assocName.setGroupComponent(shareInstName);

              Linux_SambaUserInstanceName userInstName;
              userInstName.setNamespace(aNameSpaceP);
              userInstName.setSambaUserName( (*iter).c_str() );

              assocName.setPartComponent(userInstName);

              anInstanceNameEnumeration.addElement(assocName);
            }
          }
        }


        if(g_user_list){
          g_array.populate(g_user_list);
          SambaArrayConstIterator iter;

          for ( iter = g_array.begin(); iter != g_array.end(); ++iter) {
            if(validUser((*iter).c_str()) && !array.isPresent((*iter).c_str()) ){
              Linux_SambaValidUsersForShareInstanceName assocName;
              assocName.setNamespace(aNameSpaceP);
              assocName.setGroupComponent(shareInstName);

              Linux_SambaUserInstanceName userInstName;
              userInstName.setNamespace(aNameSpaceP);
              userInstName.setSambaUserName( (*iter).c_str() );

              assocName.setPartComponent(userInstName);

              anInstanceNameEnumeration.addElement(assocName);
            }
          }
        }
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaValidUsersForShareResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaValidUsersForShareManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char ** shares = get_shares_list();
    if(shares) {
      for (int i=0; shares[i]; i++){

        Linux_SambaShareOptionsInstanceName shareInstName;
        shareInstName.setNamespace(aNameSpaceP);
        shareInstName.setName(shares[i]);
        shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);

        char* user_list = get_option(shares[i],"valid users");
        char* g_user_list = get_global_option("valid users");
        SambaArray array = SambaArray();
        SambaArray g_array = SambaArray();

        if(user_list){
          array.populate(user_list);
          SambaArrayConstIterator iter;

          for ( iter = array.begin(); iter != array.end(); ++iter) {
            if(validUser((*iter).c_str())){
              Linux_SambaValidUsersForShareManualInstance manualInstance;

              Linux_SambaValidUsersForShareInstanceName instName;
              instName.setNamespace(aNameSpaceP);
              instName.setGroupComponent(shareInstName);

              Linux_SambaUserInstanceName userInstName;
              userInstName.setNamespace(aNameSpaceP);
              userInstName.setSambaUserName( (*iter).c_str() );

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
            if(validUser((*iter).c_str()) && !array.isPresent((*iter).c_str())){
              Linux_SambaValidUsersForShareManualInstance manualInstance;

              Linux_SambaValidUsersForShareInstanceName instName;
              instName.setNamespace(aNameSpaceP);
              instName.setGroupComponent(shareInstName);

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
    }
  }

  
  //----------------------------------------------------------------------------

  Linux_SambaValidUsersForShareManualInstance 
  Linux_SambaValidUsersForShareResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaValidUsersForShareInstanceName& anInstanceName) {

    Linux_SambaValidUsersForShareManualInstance aManualInstance;
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

    if(!validUser(anInstanceName.getPartComponent().getSambaUserName())) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba user is unknown!");
    }

    SambaArray array = SambaArray();
    char* user_list = get_option(anInstanceName.getGroupComponent().getName(),"valid users");

    if(!user_list) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba user is not a valid user!");
    }

    array.populate(user_list);
    if(!array.isPresent(anInstanceName.getPartComponent().getSambaUserName())) {
      SambaArray g_array = SambaArray();
      char * g_user_list = get_global_option("valid users");
      if(!user_list) {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba user is not an valid user!");
      }
      g_array.populate(g_user_list);

      if(!g_array.isPresent(anInstanceName.getPartComponent().getSambaUserName()))
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba user is not an valid user!");
    }

    return aManualInstance;
  }

  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaValidUsersForShareResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaValidUsersForShareManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------

  Linux_SambaValidUsersForShareInstanceName
  Linux_SambaValidUsersForShareResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaValidUsersForShareManualInstance& aManualInstance) {

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

    if(!validUser(aManualInstance.getInstanceName().getPartComponent().getSambaUserName())) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba user does not exist!");
    }

    SambaArray g_array = SambaArray();
    char* g_user_list = get_global_option("valid users");

    if (g_user_list) {
      g_array.populate(g_user_list);
      if (g_array.isPresent(aManualInstance.getInstanceName().getPartComponent().getSambaUserName()))
        return aManualInstance.getInstanceName();
    }

    SambaArray array = SambaArray();
    char* user_list = get_option(aManualInstance.getInstanceName().getGroupComponent().getName(),"valid users");

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

      if(array.isPresent(aManualInstance.getInstanceName().getPartComponent().getSambaUserName() )) {
        throw CmpiStatus(CMPI_RC_ERR_ALREADY_EXISTS,"Instance already exist");
      }
    }

    array.add(aManualInstance.getInstanceName().getPartComponent().getSambaUserName());
    set_share_option(aManualInstance.getInstanceName().getGroupComponent().getName(),"valid users",array.toString().c_str());

    return aManualInstance.getInstanceName();
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaValidUsersForShareResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaValidUsersForShareInstanceName& anInstanceName) {

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

    if(!validUser(anInstanceName.getPartComponent().getSambaUserName())) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba user does not exist!");
    }

    SambaArray g_array = SambaArray();
    char* g_user_list = get_global_option("valid users");

    if (g_user_list) {
      g_array.populate(g_user_list);
    }

    SambaArray array = SambaArray();
    char* user_list = get_option(anInstanceName.getGroupComponent().getName(),"valid users");

    if (user_list)
      array.populate(user_list);

    SambaArrayConstIterator iter;
    for ( iter = g_array.begin(); iter != g_array.end(); ++iter) {
      if (array.isPresent((*iter).c_str())) {
        array.remove((*iter).c_str());
      }
    }

    if (array.isPresent(anInstanceName.getPartComponent().getSambaUserName())) {
      array.remove( string(anInstanceName.getPartComponent().getSambaUserName() ));
    }

    if(array.size() >= 1){
      set_share_option(anInstanceName.getGroupComponent().getName(),"valid users",array.toString().c_str());

    } else
      set_share_option(anInstanceName.getGroupComponent().getName(),"valid users",NULL);
  }

	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaValidUsersForShareResourceAccess::referencesPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
    Linux_SambaValidUsersForShareManualInstanceEnumeration& aManualInstanceEnumeration) {

    char ** shares = get_shares_list();
    if(shares) {
    int valid_share = false;
        for(int i=0;shares[i];i++) {
           if(strcasecmp(aSourceInstanceName.getName(),shares[i])==0 &&
              strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)==0)
                valid_share = true;
        }
        if(!valid_share) {
           throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The specified instance is not a share!");
        }
    } else {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist!");
    }

    char* user_list = get_option(aSourceInstanceName.getName(),"valid users");
    char* g_user_list = get_global_option("valid users");
    SambaArray array = SambaArray();
    SambaArray g_array = SambaArray();

    if(user_list){
      array.populate(user_list);
      SambaArrayConstIterator iter;

      for ( iter = array.begin(); iter != array.end(); ++iter) {
        if(validUser((*iter).c_str())){
          Linux_SambaValidUsersForShareManualInstance manualInstance;
          Linux_SambaValidUsersForShareInstanceName instName;
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

    if(g_user_list){
      g_array.populate(g_user_list);
      SambaArrayConstIterator iter;

      for ( iter = g_array.begin(); iter != g_array.end(); ++iter) {
        if(validUser((*iter).c_str()) && !array.isPresent((*iter).c_str())){
          Linux_SambaValidUsersForShareManualInstance manualInstance;

          Linux_SambaValidUsersForShareInstanceName instName;
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

  void Linux_SambaValidUsersForShareResourceAccess::referencesGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
    Linux_SambaValidUsersForShareManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    if(!validUser(aSourceInstanceName.getSambaUserName())) {
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist. The specified Samba user is unknown!");
    }

    char ** shares = get_shares_list();

    if(shares){
      for (int i=0; shares[i]; i++){
        char * user_list = get_option(shares[i],"valid users");
        char * global_user_list = get_global_option("valid users");

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

          if(array.isPresent(aSourceInstanceName.getSambaUserName())){
            Linux_SambaValidUsersForShareManualInstance manualInstance;

            Linux_SambaValidUsersForShareInstanceName instName;
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

  void Linux_SambaValidUsersForShareResourceAccess::associatorsPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
    Linux_SambaUserInstanceEnumeration& anInstanceEnumeration) {
   
     
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

    char* user_list = get_option(aSourceInstanceName.getName(),"valid users");
    SambaArray array = SambaArray();
    if(user_list){
      array.populate(user_list);
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
    char* g_user_list = get_global_option("valid users");
    if(g_user_list){
      SambaArray g_array = SambaArray(g_user_list);
      SambaArrayConstIterator iter;

      for ( iter = g_array.begin(); iter != g_array.end(); ++iter) {
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

  void Linux_SambaValidUsersForShareResourceAccess::associatorsGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
    Linux_SambaShareOptionsInstanceEnumeration& anInstanceEnumeration) {
    
    if(!validUser(aSourceInstanceName.getSambaUserName())) {
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist. The specified Samba user is unknown!");
    }

    char ** shares = get_shares_list();
    if(shares){
      for (int i=0; shares[i]; i++){
        char* user_list = get_option(shares[i],"valid users");
        SambaArray array = SambaArray();
        if(user_list){
          array.populate(user_list);
          if(array.isPresent( string(aSourceInstanceName.getSambaUserName()))) {

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

        char* g_user_list = get_global_option("valid users");
        if(g_user_list){
            SambaArray g_array = SambaArray(g_user_list);
            if(g_array.isPresent( string(aSourceInstanceName.getSambaUserName())) && !array.isPresent( string(aSourceInstanceName.getSambaUserName()))) {

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

   
  
  // extrinsic methods

	
}


