// =======================================================================
// Linux_SambaInvalidUsersForShareResourceAccess.cpp
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
#include "Linux_SambaInvalidUsersForShareResourceAccess.h"

#include <errno.h>
#include <string>
#include <list>

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"
#include "smt_smb_array.h"

extern int errno;

namespace genProvider {
  
  //----------------------------------------------------------------------------
  // manual written methods
  
  static bool validUser(const char* user) {
    char ** users = get_samba_users_list();
    if (!users && errno)
      throw CmpiStatus(CMPI_RC_ERR_FAILED, "Failed to retrieve Samba user list!");
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
  //Linux_SambaInvalidUsersForShareResourceAccess::Linux_SambaInvalidUsersForShareResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForShareResourceAccess::~Linux_SambaInvalidUsersForShareResourceAccess() {
    terminator();
  }

  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaInvalidUsersForShareResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaInvalidUsersForShareInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    char ** shares = get_shares_list();

    if(shares) {
      for (int i=0; shares[i]; i++) {

        Linux_SambaShareOptionsInstanceName shareInstName;
        shareInstName.setNamespace(aNameSpaceP);
        shareInstName.setName(shares[i]);
        shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);


        char* user_list = get_option(shares[i],"invalid users");
        char* g_user_list = get_global_option("invalid users");
        SambaArray array = SambaArray();
        SambaArray g_array = SambaArray();

        if(user_list){
          array.populate(user_list);
          SambaArrayConstIterator iter;

          for ( iter = array.begin(); iter != array.end(); ++iter) {
            if(validUser((*iter).c_str())){
              Linux_SambaInvalidUsersForShareInstanceName assocName;
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
              Linux_SambaInvalidUsersForShareInstanceName assocName;
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
  Linux_SambaInvalidUsersForShareResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaInvalidUsersForShareManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char ** shares = get_shares_list();
    if(shares) {
      for (int i=0; shares[i]; i++){

        Linux_SambaShareOptionsInstanceName shareInstName;
        shareInstName.setNamespace(aNameSpaceP);
        shareInstName.setName(shares[i]);
        shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);

        char* user_list = get_option(shares[i],"invalid users");
        char* g_user_list = get_global_option("invalid users");
        SambaArray array = SambaArray();
        SambaArray g_array = SambaArray();

        if(user_list){
          array.populate(user_list);
          SambaArrayConstIterator iter;

          for ( iter = array.begin(); iter != array.end(); ++iter) {
            if(validUser((*iter).c_str())){
              Linux_SambaInvalidUsersForShareManualInstance manualInstance;

              Linux_SambaInvalidUsersForShareInstanceName instName;
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
              Linux_SambaInvalidUsersForShareManualInstance manualInstance;

              Linux_SambaInvalidUsersForShareInstanceName instName;
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

  Linux_SambaInvalidUsersForShareManualInstance 
  Linux_SambaInvalidUsersForShareResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaInvalidUsersForShareInstanceName& anInstanceName) {

    Linux_SambaInvalidUsersForShareManualInstance aManualInstance;
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
    char* user_list = get_option(anInstanceName.getGroupComponent().getName(),"invalid users");

    if(!user_list) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba user is not an invalid user!");
    }

    array.populate(user_list);
    if(!array.isPresent(anInstanceName.getPartComponent().getSambaUserName())) {
      SambaArray g_array = SambaArray();
      char * g_user_list = get_global_option("invalid users");
      if(!user_list) {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba user is not an invalid user!");
      }
      g_array.populate(g_user_list);

      if(!g_array.isPresent(anInstanceName.getPartComponent().getSambaUserName()))
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba user is not an invalid user!");
    }

    return aManualInstance;
  }

  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaInvalidUsersForShareResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaInvalidUsersForShareManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------

  Linux_SambaInvalidUsersForShareInstanceName
  Linux_SambaInvalidUsersForShareResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaInvalidUsersForShareManualInstance& aManualInstance) {
    
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
    char* g_user_list = get_global_option("invalid users");

    if (g_user_list) {
      g_array.populate(g_user_list);
      if (g_array.isPresent(aManualInstance.getInstanceName().getPartComponent().getSambaUserName()))
        return aManualInstance.getInstanceName();
    }

    SambaArray array = SambaArray();
    char* user_list = get_option(aManualInstance.getInstanceName().getGroupComponent().getName(),"invalid users");

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
    set_share_option(aManualInstance.getInstanceName().getGroupComponent().getName(),"invalid users",array.toString().c_str());

    return aManualInstance.getInstanceName();
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaInvalidUsersForShareResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaInvalidUsersForShareInstanceName& anInstanceName) {

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
    char* g_user_list = get_global_option("invalid users");

    if (g_user_list) {
      g_array.populate(g_user_list);
    }

    SambaArray array = SambaArray();
    char* user_list = get_option(anInstanceName.getGroupComponent().getName(),"invalid users");

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
      set_share_option(anInstanceName.getGroupComponent().getName(),"invalid users",array.toString().c_str());

    } else
      set_share_option(anInstanceName.getGroupComponent().getName(),"invalid users",NULL);
  }
  
  

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaInvalidUsersForShareResourceAccess::referencesPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
    Linux_SambaInvalidUsersForShareManualInstanceEnumeration& aManualInstanceEnumeration) {

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

    char* user_list = get_option(aSourceInstanceName.getName(),"invalid users");
    char* g_user_list = get_global_option("invalid users");
    SambaArray array = SambaArray();
    SambaArray g_array = SambaArray();

    if(user_list){
      array.populate(user_list);
      SambaArrayConstIterator iter;

      for ( iter = array.begin(); iter != array.end(); ++iter) {
        if(validUser((*iter).c_str())){
          Linux_SambaInvalidUsersForShareManualInstance manualInstance;
          Linux_SambaInvalidUsersForShareInstanceName instName;
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
          Linux_SambaInvalidUsersForShareManualInstance manualInstance;

          Linux_SambaInvalidUsersForShareInstanceName instName;
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

  void Linux_SambaInvalidUsersForShareResourceAccess::referencesGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
    Linux_SambaInvalidUsersForShareManualInstanceEnumeration& aManualInstanceEnumeration) {
  
    if(!validUser(aSourceInstanceName.getSambaUserName())) {
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist. The specified Samba user is unknown!");
    }

    char ** shares = get_shares_list();

    if(shares){
      for (int i=0; shares[i]; i++){
        char * user_list = get_option(shares[i],"invalid users");
        char * global_user_list = get_global_option("invalid users");

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
            Linux_SambaInvalidUsersForShareManualInstance manualInstance;

            Linux_SambaInvalidUsersForShareInstanceName instName;
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

  void Linux_SambaInvalidUsersForShareResourceAccess::associatorsPartComponent( 
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

    char* user_list = get_option(aSourceInstanceName.getName(),"invalid users");
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
    char* g_user_list = get_global_option("invalid users");
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

  void Linux_SambaInvalidUsersForShareResourceAccess::associatorsGroupComponent( 
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
        char* user_list = get_option(shares[i],"invalid users");
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

        char* g_user_list = get_global_option("invalid users");
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


