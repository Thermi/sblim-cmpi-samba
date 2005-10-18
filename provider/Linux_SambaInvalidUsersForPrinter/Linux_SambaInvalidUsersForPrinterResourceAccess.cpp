/**
 *  Linux_SambaInvalidUsersForPrinterResourceAccess.cpp
 * 
 * (C) Copyright IBM Corp. 2005
 *
 * THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
 * ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
 * CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
 *
 * You can obtain a current copy of the Common Public License from
 * http://www.opensource.org/licenses/cpl1.0.php
 *
 * Author:     Rodrigo Ceron <rceron@br.ibm.com>
 *
 * Contributors:
 *
 */


#include "Linux_SambaInvalidUsersForPrinterResourceAccess.h"

namespace genProvider {
  
  //Linux_SambaInvalidUsersForPrinterResourceAccess::Linux_SambaInvalidUsersForPrinterResourceAccess();
  Linux_SambaInvalidUsersForPrinterResourceAccess::~Linux_SambaInvalidUsersForPrinterResourceAccess() { 
    terminator();
  };
    
    /* intrinsic methods */
    
  void Linux_SambaInvalidUsersForPrinterResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration& instnames)
  {
    char ** printers = get_samba_printers_list();
    if(printers){
      for (int i=0; printers[i]; i++){
	
	Linux_SambaPrinterOptionsInstanceName printerInstName;
	printerInstName.setNamespace(nsp);
	printerInstName.setName(printers[i]);
	printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
	
	char* user_list = get_option(printers[i],"invalid users");
	
	if(user_list){
	  SambaArray array = SambaArray(user_list);
	  SambaArrayConstIterator iter;
	  
	  for ( iter = array.begin(); iter != array.end(); ++iter)
	    {
	      if(validUser((*iter).c_str())){
		Linux_SambaInvalidUsersForPrinterInstanceName assocName;
		assocName.setNamespace(nsp);
		assocName.setGroupComponent(printerInstName);
		
		Linux_SambaUserInstanceName userInstName;
		userInstName.setNamespace(nsp);
		userInstName.setSambaUserName( (*iter).c_str() );
		
		assocName.setPartComponent(userInstName);
		
		instnames.addElement(assocName);
	      }
	    }
	}
      }
    }
  };
  
  void Linux_SambaInvalidUsersForPrinterResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration& instances)
  {
    char ** printers = get_samba_printers_list();
    if(printers){
      for (int i=0; printers[i]; i++){
	
	Linux_SambaPrinterOptionsInstanceName printerInstName;
	printerInstName.setNamespace(nsp);
	printerInstName.setName(printers[i]);
	printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);

	char* user_list = get_option(printers[i],"invalid users");
	
	if(user_list){
	  SambaArray array = SambaArray(user_list);
	  SambaArrayConstIterator iter;
	  
	  for ( iter = array.begin(); iter != array.end(); ++iter)
	    {
	      if(validUser((*iter).c_str())){
		Linux_SambaInvalidUsersForPrinterManualInstance manualInstance;
		
		Linux_SambaInvalidUsersForPrinterInstanceName instName;
		instName.setNamespace(nsp);
		instName.setGroupComponent(printerInstName);
		
		Linux_SambaUserInstanceName userInstName;
		userInstName.setNamespace(nsp);
		userInstName.setSambaUserName( (*iter).c_str() );
		
		instName.setPartComponent(userInstName);
		
		manualInstance.setInstanceName(instName);
		instances.addElement(manualInstance);
	      }
	    }
	}
	
      }      
    }
  };
  	
  Linux_SambaInvalidUsersForPrinterManualInstance 
   Linux_SambaInvalidUsersForPrinterResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaInvalidUsersForPrinterInstanceName& instanceName)
  {
    Linux_SambaInvalidUsersForPrinterManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    return aManualInstance;
  };
  	/*
    void Linux_SambaInvalidUsersForPrinterResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaInvalidUsersForPrinterManualInstance&){};
  	*/
  bool Linux_SambaInvalidUsersForPrinterResourceAccess::validUser(const char* user)
  {
    char ** users = get_samba_users_list();
    if(users){
      for (int i=0; users[i]; i++){
	if(!strcmp(users[i],user))
	  return true;
      }
    }
    return false;
  };

  void Linux_SambaInvalidUsersForPrinterResourceAccess::createInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaInvalidUsersForPrinterManualInstance& newInstance)
  {
    SambaArray array = SambaArray();
    char* user_list = get_option(newInstance.getInstanceName().getGroupComponent().getName(),"invalid users");
    if(user_list)
      array.populate(user_list);
     if(!validUser(newInstance.getInstanceName().getPartComponent().getSambaUserName())){
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Invalid User!");
    }else{
      if(!array.isPresent(string( newInstance.getInstanceName().getPartComponent().getSambaUserName() ))) {
	array.add( string( newInstance.getInstanceName().getPartComponent().getSambaUserName() ) );
	
	set_printer_option(newInstance.getInstanceName().getGroupComponent().getName(),"invalid users",array.toString().c_str());
      } 
    }
  }
  
  void Linux_SambaInvalidUsersForPrinterResourceAccess::deleteInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaInvalidUsersForPrinterInstanceName& instanceName)
  {
    SambaArray array = SambaArray();
    char* user_list = get_option(instanceName.getGroupComponent().getName(),"invalid users");
    if(user_list)
      array.populate(user_list);

    if(array.size() > 1){
      array.remove( string( instanceName.getPartComponent().getSambaUserName() )); 
      set_printer_option(instanceName.getGroupComponent().getName(),"invalid users",array.toString().c_str());
    }
    else
      set_printer_option(instanceName.getGroupComponent().getName(),"invalid users",NULL);
  }
  
    /* Association Interface */
    
  void Linux_SambaInvalidUsersForPrinterResourceAccess::referencesPartComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaPrinterOptionsInstanceName& sourceInst,
   Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration& instEnum)
  {
    char* user_list = get_option(sourceInst.getName(),"invalid users");
    
    if(user_list){
      SambaArray array = SambaArray(user_list);
      
      SambaArrayConstIterator iter;
      
      for ( iter = array.begin(); iter != array.end(); ++iter)
	{
	  if(validUser((*iter).c_str())){
	    Linux_SambaInvalidUsersForPrinterManualInstance manualInstance;
	    
	    Linux_SambaInvalidUsersForPrinterInstanceName instName;
	    instName.setNamespace(nsp);
	    instName.setGroupComponent(sourceInst);
	    
	    Linux_SambaUserInstanceName userInstName;
	    userInstName.setNamespace(nsp);
	    userInstName.setSambaUserName( (*iter).c_str() );
	    
	    instName.setPartComponent(userInstName);
	    
	    manualInstance.setInstanceName(instName);
	    instEnum.addElement(manualInstance);
	  }
	}
    }
  };
  
  void Linux_SambaInvalidUsersForPrinterResourceAccess::referencesGroupComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaUserInstanceName& sourceInst,
   Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration& instEnum)
  {
    if(validUser(sourceInst.getSambaUserName())){
      char ** printers = get_samba_printers_list();
      if(printers){
	for (int i=0; printers[i]; i++){
	  char * user_list = get_option(printers[i],"invalid users");
	  if(user_list){
	    SambaArray array = SambaArray(user_list);
	    SambaArrayConstIterator iter;
	    
	    if(array.isPresent(sourceInst.getSambaUserName())){
	      Linux_SambaInvalidUsersForPrinterManualInstance manualInstance;
	      
	      Linux_SambaInvalidUsersForPrinterInstanceName instName;
	      instName.setNamespace(nsp);
	      instName.setPartComponent(sourceInst);
	      
	      
	      Linux_SambaPrinterOptionsInstanceName printerInstName;
	      printerInstName.setNamespace(nsp);
	      printerInstName.setName(printers[i]);
	      printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	      
	      instName.setGroupComponent(printerInstName);
	      
	      manualInstance.setInstanceName(instName);
	      instEnum.addElement(manualInstance);
	    }
	  }
	}
      }
    }
  };
  
  void Linux_SambaInvalidUsersForPrinterResourceAccess::associatorsPartComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaPrinterOptionsInstanceName& sourceInst,
   Linux_SambaUserInstanceEnumeration& instEnum)
  { 
    char* user_list = get_option(sourceInst.getName(),"invalid users");
    if(user_list){
      SambaArray array = SambaArray(user_list);
      SambaArrayConstIterator iter;
      
      for ( iter = array.begin(); iter != array.end(); ++iter)
	{
	  if(validUser((*iter).c_str())){
	    Linux_SambaUserInstance instance;
	    
	    Linux_SambaUserInstanceName userInstName;
	    userInstName.setNamespace(nsp);
	    userInstName.setSambaUserName( (*iter).c_str() );
	    
	    instance.setInstanceName(userInstName);
	    char *option;
	    
	    option = get_user_unix_name((*iter).c_str() );
	    if ( option )
	      instance.setSystemUserName( option );
	    
	    instEnum.addElement(instance);
	  }
	}
    }
  };
  
  void Linux_SambaInvalidUsersForPrinterResourceAccess::associatorsGroupComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaUserInstanceName& sourceInst,
   Linux_SambaPrinterOptionsInstanceEnumeration& instEnum)
  {
    if(validUser(sourceInst.getSambaUserName())){
      char ** printers = get_samba_printers_list();
      if(printers){
	for (int i=0; printers[i]; i++){
	  char* user_list = get_option(printers[i],"invalid users");
	  if(user_list){
	    SambaArray array = SambaArray(user_list);
	    
	    if(array.isPresent( string( sourceInst.getSambaUserName())))
	      {
		
		Linux_SambaPrinterOptionsInstance instance;
		
		Linux_SambaPrinterOptionsInstanceName printerInstName;
		printerInstName.setNamespace(nsp);
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
		
		instEnum.addElement(instance);
	      }
	  }
	}
      }
    }
  };
  

    /* extrinsic methods */
	
}


