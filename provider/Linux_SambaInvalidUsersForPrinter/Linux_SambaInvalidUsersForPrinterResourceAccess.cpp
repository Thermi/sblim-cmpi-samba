// =======================================================================
// Linux_SambaInvalidUsersForPrinterResourceAccess.cpp
//     created on Fri, 24 Feb 2006 using ECUTE
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
//                Rodrigo Ceron    <rceron@br.ibm.com>
//                Wolfgang Taphorn <taphorn@de.ibm.com>
//
// =======================================================================
//
// 
#include "Linux_SambaInvalidUsersForPrinterResourceAccess.h"

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
  //Linux_SambaInvalidUsersForPrinterResourceAccess::Linux_SambaInvalidUsersForPrinterResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForPrinterResourceAccess::~Linux_SambaInvalidUsersForPrinterResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaInvalidUsersForPrinterResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    char ** printers = get_samba_printers_list();
    
    if(printers){
      for (int i=0; printers[i]; i++){
	
	Linux_SambaPrinterOptionsInstanceName printerInstName;
	printerInstName.setNamespace(aNameSpaceP);
	printerInstName.setName(printers[i]);
	printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
	char* user_list = get_option(printers[i],"invalid users");
	
	if(user_list){
	  SambaArray array = SambaArray(user_list);
	  SambaArrayConstIterator iter;
	  
	  for ( iter = array.begin(); iter != array.end(); ++iter) {
	    if(validUser((*iter).c_str())){
	      Linux_SambaInvalidUsersForPrinterInstanceName assocName;
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
  Linux_SambaInvalidUsersForPrinterResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char ** printers = get_samba_printers_list();
    
    if(printers){
      for (int i=0; printers[i]; i++){
	
	Linux_SambaPrinterOptionsInstanceName printerInstName;
	printerInstName.setNamespace(aNameSpaceP);
	printerInstName.setName(printers[i]);
	printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
	char* user_list = get_option(printers[i],"invalid users");
	
	if(user_list){
	  SambaArray array = SambaArray(user_list);
	  SambaArrayConstIterator iter;
	  
	  for ( iter = array.begin(); iter != array.end(); ++iter) {
	    if(validUser((*iter).c_str())){
	      Linux_SambaInvalidUsersForPrinterManualInstance manualInstance;
	      
	      Linux_SambaInvalidUsersForPrinterInstanceName instName;
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

  Linux_SambaInvalidUsersForPrinterManualInstance 
  Linux_SambaInvalidUsersForPrinterResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaInvalidUsersForPrinterInstanceName& anInstanceName) {

    Linux_SambaInvalidUsersForPrinterManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);
    
    return aManualInstance;
  }

  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaInvalidUsersForPrinterResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaInvalidUsersForPrinterManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------

  Linux_SambaInvalidUsersForPrinterInstanceName
  Linux_SambaInvalidUsersForPrinterResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaInvalidUsersForPrinterManualInstance& aManualInstance) {
    
    SambaArray array = SambaArray();
    char* user_list = get_option(aManualInstance.getInstanceName().getGroupComponent().getName(),"invalid users");
    if(user_list)
      array.populate(user_list);
    if(!validUser(aManualInstance.getInstanceName().getPartComponent().getSambaUserName())){
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Invalid User!");
    }else{
      if(!array.isPresent(string( aManualInstance.getInstanceName().getPartComponent().getSambaUserName() ))) {
	array.add( string( aManualInstance.getInstanceName().getPartComponent().getSambaUserName() ) );
	
	set_printer_option(aManualInstance.getInstanceName().getGroupComponent().getName(),"invalid users",array.toString().c_str());
      } 
    }
    
    return aManualInstance.getInstanceName();
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaInvalidUsersForPrinterResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaInvalidUsersForPrinterInstanceName& anInstanceName) {
    
    SambaArray array = SambaArray();
    char* user_list = get_option(anInstanceName.getGroupComponent().getName(),"invalid users");
    
    if(user_list)
      array.populate(user_list);
    
    if(array.size() > 1){
      array.remove( string( anInstanceName.getPartComponent().getSambaUserName() )); 
      set_printer_option(anInstanceName.getGroupComponent().getName(),"invalid users",array.toString().c_str());
    }
    else
      set_printer_option(anInstanceName.getGroupComponent().getName(),"invalid users",NULL);
  }

	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaInvalidUsersForPrinterResourceAccess::referencesPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
    Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char* user_list = get_option(aSourceInstanceName.getName(),"invalid users");
    
    if(user_list){
      SambaArray array = SambaArray(user_list);
      
      SambaArrayConstIterator iter;
      
      for ( iter = array.begin(); iter != array.end(); ++iter) {
	if(validUser((*iter).c_str())){
	  Linux_SambaInvalidUsersForPrinterManualInstance manualInstance;
	  
	  Linux_SambaInvalidUsersForPrinterInstanceName instName;
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

  void Linux_SambaInvalidUsersForPrinterResourceAccess::referencesGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
    Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    if(validUser(aSourceInstanceName.getSambaUserName())){
      char ** printers = get_samba_printers_list();
      if(printers){
	for (int i=0; printers[i]; i++){
	  char * user_list = get_option(printers[i],"invalid users");
	  if(user_list){
	    SambaArray array = SambaArray(user_list);
	    SambaArrayConstIterator iter;
	    
	    if(array.isPresent(aSourceInstanceName.getSambaUserName())){
	      Linux_SambaInvalidUsersForPrinterManualInstance manualInstance;
	      
	      Linux_SambaInvalidUsersForPrinterInstanceName instName;
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
  }
  
  
  //----------------------------------------------------------------------------

  void Linux_SambaInvalidUsersForPrinterResourceAccess::associatorsPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
    Linux_SambaUserInstanceEnumeration& anInstanceEnumeration) {
    
    char* user_list = get_option(aSourceInstanceName.getName(),"invalid users");
    if(user_list){
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

  void Linux_SambaInvalidUsersForPrinterResourceAccess::associatorsGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
    Linux_SambaPrinterOptionsInstanceEnumeration& anInstanceEnumeration) {
    
    if(validUser(aSourceInstanceName.getSambaUserName())){
      char ** printers = get_samba_printers_list();
      if(printers){
	for (int i=0; printers[i]; i++){
	  char* user_list = get_option(printers[i],"invalid users");
	  if(user_list){
	    SambaArray array = SambaArray(user_list);
	    
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
		instance.setComment(option);
	      
	      option = get_option(printers[i],"path");
	      if ( option )
		instance.setPath(option);
	      
	      option = get_option(printers[i],"printable");	
	      if ( option )
		if(strcasecmp(option,"yes") == 0)
		  instance.setPrintable( true );
		else
		  instance.setPrintable( false );
	      
	      option = get_option(printers[i],"printer name");	
	      if ( option )
		instance.setSystemPrinterName( option );
	      
	      anInstanceEnumeration.addElement(instance);
	    }
	  }
	}
      }
    }
  }

   
  
  // extrinsic methods

	
}


