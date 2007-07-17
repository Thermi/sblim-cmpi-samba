// =======================================================================
// Linux_SambaValidUsersForPrinterResourceAccess.cpp
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
#include "Linux_SambaValidUsersForPrinterResourceAccess.h"

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
  //Linux_SambaValidUsersForPrinterResourceAccess::Linux_SambaValidUsersForPrinterResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaValidUsersForPrinterResourceAccess::~Linux_SambaValidUsersForPrinterResourceAccess() { }


  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaValidUsersForPrinterResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaValidUsersForPrinterInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    char ** printers = get_samba_printers_list();

    if(printers){
      for (int i=0; printers[i]; i++){

        Linux_SambaPrinterOptionsInstanceName printerInstName;
        printerInstName.setNamespace(aNameSpaceP);
        printerInstName.setName(printers[i]);
        printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);


        char* user_list = get_option(printers[i],"valid users");
        char* g_user_list = get_global_option("valid users");
        SambaArray array = SambaArray();
        SambaArray g_array = SambaArray();


        if(user_list){
          array.populate(user_list);
          SambaArrayConstIterator iter;

          for ( iter = array.begin(); iter != array.end(); ++iter) {
            if(validUser((*iter).c_str())){
              Linux_SambaValidUsersForPrinterInstanceName assocName;
              assocName.setNamespace(aNameSpaceP);
              assocName.setGroupComponent(printerInstName);

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
              Linux_SambaValidUsersForPrinterInstanceName assocName;
              assocName.setNamespace(aNameSpaceP);
              assocName.setGroupComponent(printerInstName);

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
  Linux_SambaValidUsersForPrinterResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaValidUsersForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char ** printers = get_samba_printers_list();

    if(printers){
      for (int i=0; printers[i]; i++){

        Linux_SambaPrinterOptionsInstanceName printerInstName;
        printerInstName.setNamespace(aNameSpaceP);
        printerInstName.setName(printers[i]);
        printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);

        char* user_list = get_option(printers[i],"valid users");
        char* g_user_list = get_global_option("valid users");
        SambaArray array = SambaArray();
        SambaArray g_array = SambaArray();

        if(user_list){
          array.populate(user_list);
          SambaArrayConstIterator iter;

          for ( iter = array.begin(); iter != array.end(); ++iter) {
            if(validUser((*iter).c_str())){
              Linux_SambaValidUsersForPrinterManualInstance manualInstance;

              Linux_SambaValidUsersForPrinterInstanceName instName;
              instName.setNamespace(aNameSpaceP);
              instName.setGroupComponent(printerInstName);

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
              Linux_SambaValidUsersForPrinterManualInstance manualInstance;

              Linux_SambaValidUsersForPrinterInstanceName instName;
              instName.setNamespace(aNameSpaceP);
              instName.setGroupComponent(printerInstName);

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

  Linux_SambaValidUsersForPrinterManualInstance 
  Linux_SambaValidUsersForPrinterResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaValidUsersForPrinterInstanceName& anInstanceName) {

    Linux_SambaValidUsersForPrinterManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);

    char ** printers = get_samba_printers_list();
    if(printers) {
    int valid_printer = false;
        for(int i=0;printers[i];i++) {
           if(strcasecmp(anInstanceName.getGroupComponent().getName(),printers[i])==0 &&
              strcasecmp(anInstanceName.getGroupComponent().getInstanceID(),DEFAULT_INSTANCE_ID)==0)
                valid_printer = true;
        }
        if(!valid_printer) {
           throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The specified instance is not a printer!");
        }
    } else {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist!");
    }

    if(!validUser(anInstanceName.getPartComponent().getSambaUserName())) {
       throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified Samba user is unknown!");
    }

    SambaArray array = SambaArray();
    char * user_list = get_option(anInstanceName.getGroupComponent().getName(),"valid users");

    if(!user_list) {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified Samba user is not in the valid users list!");
    }

    array.populate(user_list);
    if(!array.isPresent(anInstanceName.getPartComponent().getSambaUserName())) {
      SambaArray g_array = SambaArray();
      char * g_user_list = get_global_option("valid users");
      if(!user_list) {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba user is not in the valid users list!");
      }
      g_array.populate(g_user_list);

      if(!g_array.isPresent(anInstanceName.getPartComponent().getSambaUserName()))
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba user is not in the valid users list!");
    }

    return aManualInstance;
  }

  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaValidUsersForPrinterResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaValidUsersForPrinterManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------

  Linux_SambaValidUsersForPrinterInstanceName
  Linux_SambaValidUsersForPrinterResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaValidUsersForPrinterManualInstance& aManualInstance) {

    char ** printers = get_samba_printers_list();
    if(printers) {
    int valid_printer = false;
        for(int i=0;printers[i];i++) {
           if(strcasecmp(aManualInstance.getInstanceName().getGroupComponent().getName(),printers[i])==0 &&
              strcasecmp(aManualInstance.getInstanceName().getGroupComponent().getInstanceID(),DEFAULT_INSTANCE_ID)==0)
                valid_printer = true;
        }
        if(!valid_printer) {
           throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The specified instance is not a printer!");
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
    set_printer_option(aManualInstance.getInstanceName().getGroupComponent().getName(),"valid users",array.toString().c_str());

    return aManualInstance.getInstanceName();
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaValidUsersForPrinterResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaValidUsersForPrinterInstanceName& anInstanceName) {

    char ** printers = get_samba_printers_list();
    if(printers) {
    int valid_printer = false;
        for(int i=0;printers[i];i++) {
           if(strcasecmp(anInstanceName.getGroupComponent().getName(),printers[i])==0 &&
              strcasecmp(anInstanceName.getGroupComponent().getInstanceID(),DEFAULT_INSTANCE_ID)==0)
                valid_printer = true;
        }
        if(!valid_printer) {
           throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The specified instance is not a printer!");
        }
    } else {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist!");
    }

    if(!validUser(anInstanceName.getPartComponent().getSambaUserName())) {
       throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified Samba user is unknown!");
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
      set_printer_option(anInstanceName.getGroupComponent().getName(),"valid users",array.toString().c_str());

    } else
      set_printer_option(anInstanceName.getGroupComponent().getName(),"valid users",NULL);
  }

	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaValidUsersForPrinterResourceAccess::referencesPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
    Linux_SambaValidUsersForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {

    char ** printers = get_samba_printers_list();
    if(printers) {
    int valid_printer = false;
        for(int i=0;printers[i];i++) {
           if(strcasecmp(aSourceInstanceName.getName(),printers[i])==0 &&
              strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)==0)
                valid_printer = true;
        }
        if(!valid_printer) {
           throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The specified instance is not a printer!");
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
          Linux_SambaValidUsersForPrinterManualInstance manualInstance;

          Linux_SambaValidUsersForPrinterInstanceName instName;
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
          Linux_SambaValidUsersForPrinterManualInstance manualInstance;

          Linux_SambaValidUsersForPrinterInstanceName instName;
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

  void Linux_SambaValidUsersForPrinterResourceAccess::referencesGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
    Linux_SambaValidUsersForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    if(!validUser(aSourceInstanceName.getSambaUserName())) {
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist. The specified Samba user is unknown!");
    }

    char ** printers = get_samba_printers_list();

    if(printers){
      for (int i=0; printers[i]; i++){
        char * user_list = get_option(printers[i],"valid users");
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
            Linux_SambaValidUsersForPrinterManualInstance manualInstance;

            Linux_SambaValidUsersForPrinterInstanceName instName;
            instName.setNamespace(aNameSpaceP);
            instName.setPartComponent(aSourceInstanceName);

            Linux_SambaPrinterOptionsInstanceName printerInstName;
            printerInstName.setNamespace(aNameSpaceP);
            printerInstName.setName(printers[i]);
            printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);

            instName.setGroupComponent(printerInstName);

            manualInstance.setInstanceName(instName);
            aManualInstanceEnumeration.addElement(manualInstance);
          }
        }
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaValidUsersForPrinterResourceAccess::associatorsPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
    Linux_SambaUserInstanceEnumeration& anInstanceEnumeration) {

    char ** printers = get_samba_printers_list();
    if(printers) {
    int valid_printer = false;
        for(int i=0;printers[i];i++) {
           if(strcasecmp(aSourceInstanceName.getName(),printers[i])==0 &&
              strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)==0)
                valid_printer = true;
        }
        if(!valid_printer) {
           throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist. The specified printer is unknown!");
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

  void Linux_SambaValidUsersForPrinterResourceAccess::associatorsGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
    Linux_SambaPrinterOptionsInstanceEnumeration& anInstanceEnumeration) {
    
    if(!validUser(aSourceInstanceName.getSambaUserName())) {
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist. The specified Samba user is unknown!");
    }

    char ** printers = get_samba_printers_list();
    if(printers){
      for (int i=0; printers[i]; i++){
        char* user_list = get_option(printers[i],"valid users");
        SambaArray array = SambaArray();
        if(user_list){
          array.populate(user_list);
          if(array.isPresent( string( aSourceInstanceName.getSambaUserName()))) {

            Linux_SambaPrinterOptionsInstance instance;

            Linux_SambaPrinterOptionsInstanceName printerInstName;
            printerInstName.setNamespace(aNameSpaceP);
            printerInstName.setName(printers[i]);
            printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);

            instance.setInstanceName(printerInstName);

            char *option;

            option = get_option(printers[i],"available");
            if ( option )
              if(strcasecmp(option,"yes") == 0)
                instance.setAvailable( true );
              else
                instance.setAvailable( false );

            option = get_option(printers[i],"comment");
            if ( option )
              instance.setComment( option );

            option = get_option(printers[i],"printable");
            if ( option )
              if(strcasecmp(option,"yes") == 0)
                instance.setPrintable( true );
              else
                instance.setPrintable( false );

            option = get_option(printers[i],"path");
            if ( option )
              instance.setPath( option );

            option = get_option(printers[i],"printer name");
            if ( option )
              instance.setSystemPrinterName( option );

            anInstanceEnumeration.addElement(instance);
          }
        }

        char* g_user_list = get_global_option("valid users");
        if(g_user_list){
          SambaArray g_array = SambaArray(g_user_list);
          if(g_array.isPresent( string(aSourceInstanceName.getSambaUserName())) && !array.isPresent( string(aSourceInstanceName.getSambaUserName()))) {

            Linux_SambaPrinterOptionsInstance instance;

            Linux_SambaPrinterOptionsInstanceName printerInstName;
            printerInstName.setNamespace(aNameSpaceP);
            printerInstName.setName(printers[i]);
            printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);

            instance.setInstanceName(printerInstName);

            char *option;

            option = get_option(printers[i],"available");
            if ( option )
              if(strcasecmp(option,"yes") == 0)
                instance.setAvailable( true );
              else
                instance.setAvailable( false );

            option = get_option(printers[i],"comment");
            if ( option )
              instance.setComment( option );

            option = get_option(printers[i],"printable");
            if ( option )
              if(strcasecmp(option,"yes") == 0)
                instance.setPrintable( true );
              else
                instance.setPrintable( false );

            option = get_option(printers[i],"path");
            if ( option )
              instance.setPath( option );

            option = get_option(printers[i],"printer name");
            if ( option )
              instance.setSystemPrinterName( option );

            anInstanceEnumeration.addElement(instance);
          }
        }
      }
    }
  }

   
  
  // extrinsic methods

	
}


