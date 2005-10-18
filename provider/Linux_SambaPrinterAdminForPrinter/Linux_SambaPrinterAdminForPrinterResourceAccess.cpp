/**
 *  Linux_SambaPrinterAdminForPrinterResourceAccess.cpp
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


#include "Linux_SambaPrinterAdminForPrinterResourceAccess.h"

namespace genProvider {
  

  bool Linux_SambaPrinterAdminForPrinterResourceAccess::validUser(const char* user)
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


  //Linux_SambaPrinterAdminForPrinterResourceAccess::Linux_SambaPrinterAdminForPrinterResourceAccess();
  Linux_SambaPrinterAdminForPrinterResourceAccess::~Linux_SambaPrinterAdminForPrinterResourceAccess() { 
    terminator();
  };
    
    /* intrinsic methods */
  
  void Linux_SambaPrinterAdminForPrinterResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaPrinterAdminForPrinterInstanceNameEnumeration& instnames)
  {
    char ** printers = get_samba_printers_list();
    if(printers){
      for (int i=0; printers[i]; i++){
	
	Linux_SambaPrinterOptionsInstanceName printerInstName;
	printerInstName.setNamespace(nsp);
	printerInstName.setName(printers[i]);
	printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
	
	char* user_list = get_option(printers[i],"printer admin");
	
	if(user_list){
	  SambaArray array = SambaArray(user_list);
	  SambaArrayConstIterator iter;
	  
	  for ( iter = array.begin(); iter != array.end(); ++iter)
	    {
	      if(validUser((*iter).c_str())){
		Linux_SambaPrinterAdminForPrinterInstanceName assocName;
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
  
  void Linux_SambaPrinterAdminForPrinterResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration& instances)
  {
    char ** printers = get_samba_printers_list();
    if(printers){
      for (int i=0; printers[i]; i++){
	
	Linux_SambaPrinterOptionsInstanceName printerInstName;
	printerInstName.setNamespace(nsp);
	printerInstName.setName(printers[i]);
	printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);

	char* user_list = get_option(printers[i],"printer admin");
	
	if(user_list){
	  SambaArray array = SambaArray(user_list);
	  SambaArrayConstIterator iter;
	  
	  for ( iter = array.begin(); iter != array.end(); ++iter)
	    {
	      if(validUser((*iter).c_str())){
		Linux_SambaPrinterAdminForPrinterManualInstance manualInstance;
		
		Linux_SambaPrinterAdminForPrinterInstanceName instName;
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
  	
  Linux_SambaPrinterAdminForPrinterManualInstance 
   Linux_SambaPrinterAdminForPrinterResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaPrinterAdminForPrinterInstanceName& instanceName)
  {
    Linux_SambaPrinterAdminForPrinterManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    return aManualInstance;
  };
  
  /*
  void Linux_SambaPrinterAdminForPrinterResourceAccess::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaPrinterAdminForPrinterManualInstance& newInstance){};
  */
  	
  void Linux_SambaPrinterAdminForPrinterResourceAccess::createInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaPrinterAdminForPrinterManualInstance& newInstance)
  {
    SambaArray array = SambaArray();
    char* user_list = get_option(newInstance.getInstanceName().getGroupComponent().getName(),"printer admin");
    if(user_list)
      array.populate(user_list);
    if(!validUser(newInstance.getInstanceName().getPartComponent().getSambaUserName())){
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Invalid User!");
    }else{
      if(!array.isPresent(string( newInstance.getInstanceName().getPartComponent().getSambaUserName() ))) {
	array.add( string( newInstance.getInstanceName().getPartComponent().getSambaUserName() ) );
	
	set_printer_option(newInstance.getInstanceName().getGroupComponent().getName(),"printer admin",array.toString().c_str());
      } 
    }
  };
  
  void Linux_SambaPrinterAdminForPrinterResourceAccess::deleteInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaPrinterAdminForPrinterInstanceName& instanceName)
  {
    SambaArray array = SambaArray();
    char* user_list = get_option(instanceName.getGroupComponent().getName(),"printer admin");
    if(user_list)
      array.populate(user_list);

    if(array.size() > 1){
      array.remove( string( instanceName.getPartComponent().getSambaUserName() )); 
      set_printer_option(instanceName.getGroupComponent().getName(),"printer admin",array.toString().c_str());
    }
    else
      set_printer_option(instanceName.getGroupComponent().getName(),"printer admin",NULL);
  }
  
    /* Association Interface */
    
  void Linux_SambaPrinterAdminForPrinterResourceAccess::referencesPartComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaPrinterOptionsInstanceName& sourceInst,
   Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration& instEnum)
  {
    char* user_list = get_option(sourceInst.getName(),"printer admin");
    
    if(user_list){
      SambaArray array = SambaArray(user_list);
      SambaArrayConstIterator iter;
      
      for ( iter = array.begin(); iter != array.end(); ++iter)
	{
	  if(validUser((*iter).c_str())){
	    Linux_SambaPrinterAdminForPrinterManualInstance manualInstance;
	    
	    Linux_SambaPrinterAdminForPrinterInstanceName instName;
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
  
  void Linux_SambaPrinterAdminForPrinterResourceAccess::referencesGroupComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaUserInstanceName& sourceInst,
   Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration& instEnum)
  {
    char ** printers = get_samba_printers_list();
    if(printers){
      for (int i=0; printers[i]; i++){
	char * user_list = get_option(printers[i],"printer admin");
	if(user_list){
	  SambaArray array = SambaArray(user_list);
	  SambaArrayConstIterator iter;
	  
	  if(array.isPresent(sourceInst.getSambaUserName())){
	    Linux_SambaPrinterAdminForPrinterManualInstance manualInstance;
	    
	    Linux_SambaPrinterAdminForPrinterInstanceName instName;
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
  
  void Linux_SambaPrinterAdminForPrinterResourceAccess::associatorsPartComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaPrinterOptionsInstanceName& sourceInst,
   Linux_SambaUserInstanceEnumeration& instEnum)
  { 
    char* user_list = get_option(sourceInst.getName(),"printer admin");
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
    
  void Linux_SambaPrinterAdminForPrinterResourceAccess::associatorsGroupComponent( 
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
	char* user_list = get_option(printers[i],"printer admin");
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
	      
	      
	      instEnum.addElement(instance);
	    }
	}
      }
    }
  };
  

    /* extrinsic methods */
	
}


