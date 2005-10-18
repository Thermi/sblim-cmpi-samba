/**
 *  Linux_SambaForceUserForPrinterResourceAccess.cpp
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


#include "Linux_SambaForceUserForPrinterResourceAccess.h"

namespace genProvider {
  
  //Linux_SambaForceUserForPrinterResourceAccess::Linux_SambaForceUserForPrinterResourceAccess();
  Linux_SambaForceUserForPrinterResourceAccess::~Linux_SambaForceUserForPrinterResourceAccess() { 
    terminator();
  };
    
    /* intrinsic methods */
 void Linux_SambaForceUserForPrinterResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaForceUserForPrinterInstanceNameEnumeration& instnames)
  {
    char ** printers = get_samba_printers_list();
    if(printers){
      for (int i=0; printers[i]; i++){
	
	Linux_SambaPrinterOptionsInstanceName printerInstName;
	printerInstName.setNamespace(nsp);
	printerInstName.setName(printers[i]);
	printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
	
	char* user = get_option(printers[i],"force user");
	
	if(user && validUser(user)){
	  Linux_SambaForceUserForPrinterInstanceName assocName;
	  assocName.setNamespace(nsp);
	  assocName.setGroupComponent(printerInstName);
	  
	  Linux_SambaUserInstanceName userInstName;
	  userInstName.setNamespace(nsp);
	  userInstName.setSambaUserName( user );
	  
	  assocName.setPartComponent(userInstName);
	  
	  instnames.addElement(assocName);
	}
      }
    }
  };
  
  void Linux_SambaForceUserForPrinterResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaForceUserForPrinterManualInstanceEnumeration& instances)
  {
    char ** printers = get_samba_printers_list();
    if(printers){
      for (int i=0; printers[i]; i++){
	
	Linux_SambaPrinterOptionsInstanceName printerInstName;
	printerInstName.setNamespace(nsp);
	printerInstName.setName(printers[i]);
	printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);

	char* user = get_option(printers[i],"force user");
	
	if(user && validUser(user)){
	  Linux_SambaForceUserForPrinterManualInstance manualInstance;
	  
	  Linux_SambaForceUserForPrinterInstanceName instName;
	  instName.setNamespace(nsp);
	  instName.setGroupComponent(printerInstName);
	  
	  Linux_SambaUserInstanceName userInstName;
	  userInstName.setNamespace(nsp);
	  userInstName.setSambaUserName( user );
		
	  instName.setPartComponent(userInstName);
	  
	  manualInstance.setInstanceName(instName);
	  instances.addElement(manualInstance);
	}
	
      }      
    }
  };
  	
  Linux_SambaForceUserForPrinterManualInstance 
   Linux_SambaForceUserForPrinterResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaForceUserForPrinterInstanceName& instanceName)
  {
    Linux_SambaForceUserForPrinterManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    return aManualInstance;
  };
  
  	/*
    void Linux_SambaForceUserForPrinterResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaForceUserForPrinterManualInstance&){};
  	*/

  bool Linux_SambaForceUserForPrinterResourceAccess::validUser(const char* user)
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
	
  void Linux_SambaForceUserForPrinterResourceAccess::createInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaForceUserForPrinterManualInstance& newInstance)
  {
    char* user = get_option(newInstance.getInstanceName().getGroupComponent().getName(),"force user");
    if(user && validUser(user))
      set_printer_option(newInstance.getInstanceName().getGroupComponent().getName(),"force user",user);
  } 
  
  void Linux_SambaForceUserForPrinterResourceAccess::deleteInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaForceUserForPrinterInstanceName& instanceName)
  {
    set_printer_option(instanceName.getGroupComponent().getName(),"force user",NULL);
  }
  
    /* Association Interface */
    
  void Linux_SambaForceUserForPrinterResourceAccess::referencesPartComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaPrinterOptionsInstanceName& sourceInst,
   Linux_SambaForceUserForPrinterManualInstanceEnumeration& instEnum)
  {
    char* user = get_option(sourceInst.getName(),"force user");
    if(user && validUser(user)){
      Linux_SambaForceUserForPrinterManualInstance manualInstance;
      
      Linux_SambaForceUserForPrinterInstanceName instName;
      instName.setNamespace(nsp);
      instName.setGroupComponent(sourceInst);
      
      Linux_SambaUserInstanceName userInstName;
      userInstName.setNamespace(nsp);
      userInstName.setSambaUserName( user );
      
      instName.setPartComponent(userInstName);
      
      manualInstance.setInstanceName(instName);
      instEnum.addElement(manualInstance);
    }
  };
  
  void Linux_SambaForceUserForPrinterResourceAccess::referencesGroupComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaUserInstanceName& sourceInst,
   Linux_SambaForceUserForPrinterManualInstanceEnumeration& instEnum)
  {
    char ** printers = get_samba_printers_list();
    if(printers){
      for (int i=0; printers[i]; i++){
	char* user = get_option(printers[i],"force user");
	
	if(user && validUser(user)){
	  if(!strcmp(user,sourceInst.getSambaUserName())){
	    Linux_SambaForceUserForPrinterManualInstance manualInstance;
	    
	    Linux_SambaForceUserForPrinterInstanceName instName;
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
  };
  
  void Linux_SambaForceUserForPrinterResourceAccess::associatorsPartComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaPrinterOptionsInstanceName& sourceInst,
   Linux_SambaUserInstanceEnumeration& instEnum)
  { 
    char* user = get_option(sourceInst.getName(),"force user");
    if(user && validUser(user)){
      Linux_SambaUserInstance instance;
      
      Linux_SambaUserInstanceName userInstName;
      userInstName.setNamespace(nsp);
      userInstName.setSambaUserName( user );
      
      instance.setInstanceName(userInstName);
      char* option;
      
      option = get_user_unix_name( user );
      if ( option )
	instance.setSystemUserName( option );
      
      instEnum.addElement(instance);
    }
  };
    
  void Linux_SambaForceUserForPrinterResourceAccess::associatorsGroupComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaUserInstanceName& sourceInst,
   Linux_SambaPrinterOptionsInstanceEnumeration& instEnum)
  {
    char ** printers = get_samba_printers_list();
    if(printers){
      for (int i=0; printers[i]; i++){
	char* user = get_option(printers[i],"force user");
	if(user && validUser(user)){
	  if(!strcmp(user,sourceInst.getSambaUserName()))
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
  };
  

    /* extrinsic methods */
	
}


