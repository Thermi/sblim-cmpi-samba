/**
 *  Linux_SambaPrinterAdminForGlobalResourceAccess.cpp
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


#include "Linux_SambaPrinterAdminForGlobalResourceAccess.h"

namespace genProvider {
  
  bool Linux_SambaPrinterAdminForGlobalResourceAccess::validUser(const char* user)
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
  
  //Linux_SambaPrinterAdminForGlobalResourceAccess::Linux_SambaPrinterAdminForGlobalResourceAccess();
  Linux_SambaPrinterAdminForGlobalResourceAccess::~Linux_SambaPrinterAdminForGlobalResourceAccess() { 
    terminator();
  };
    
    /* intrinsic methods */

   void Linux_SambaPrinterAdminForGlobalResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaPrinterAdminForGlobalInstanceNameEnumeration& instnames)
  {
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(nsp);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    
    char* user_list = get_global_option("printer admin");
    
    if(user_list){
      SambaArray array = SambaArray(user_list);
      SambaArrayConstIterator iter;
      
      for ( iter = array.begin(); iter != array.end(); ++iter)
	{
	  if(validUser((*iter).c_str())){
	    Linux_SambaPrinterAdminForGlobalInstanceName assocName;
	    assocName.setNamespace(nsp);
	    assocName.setGroupComponent(globalInstName);
	    
	    Linux_SambaUserInstanceName userInstName;
	    userInstName.setNamespace(nsp);
	    userInstName.setSambaUserName( (*iter).c_str() );
	    
	    assocName.setPartComponent(userInstName);
	    
	    instnames.addElement(assocName);
	  }
	}
    }
  };
  
  void Linux_SambaPrinterAdminForGlobalResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration& instances)
  {
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(nsp);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    char* user_list = get_global_option("printer admin");
    
    if(user_list){
      SambaArray array = SambaArray(user_list);
      SambaArrayConstIterator iter;
      
      for ( iter = array.begin(); iter != array.end(); ++iter)
	{
	  if(validUser((*iter).c_str())){
	    Linux_SambaPrinterAdminForGlobalManualInstance manualInstance;
	    
	    Linux_SambaPrinterAdminForGlobalInstanceName instName;
	    instName.setNamespace(nsp);
	    instName.setGroupComponent(globalInstName);
	    
	    Linux_SambaUserInstanceName userInstName;
	    userInstName.setNamespace(nsp);
	    userInstName.setSambaUserName( (*iter).c_str() );
	    
	    instName.setPartComponent(userInstName);
	    
	    manualInstance.setInstanceName(instName);
	    instances.addElement(manualInstance);
	  }
	}
    }
  };
  	
  Linux_SambaPrinterAdminForGlobalManualInstance 
   Linux_SambaPrinterAdminForGlobalResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaPrinterAdminForGlobalInstanceName& instanceName)
  {
    Linux_SambaPrinterAdminForGlobalManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    return aManualInstance;
  };
    	/*
    void Linux_SambaPrinterAdminForGlobalResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaPrinterAdminForGlobalManualInstance&){};
  	*/
  	
  void Linux_SambaPrinterAdminForGlobalResourceAccess::createInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaPrinterAdminForGlobalManualInstance& newInstance)
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
	
	set_global_option("printer admin",array.toString().c_str());
      } 
    }
  };
  
  void Linux_SambaPrinterAdminForGlobalResourceAccess::deleteInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaPrinterAdminForGlobalInstanceName& instanceName)
  {
    SambaArray array = SambaArray();
    char* user_list = get_option(instanceName.getGroupComponent().getName(),"printer admin");
    if(user_list)
      array.populate(user_list);
    
    if(array.size() > 1){
      array.remove( string( instanceName.getPartComponent().getSambaUserName() )); 
      set_global_option("printer admin",array.toString().c_str());
    }
    else
      set_global_option("printer admin",NULL);
  }
  
    /* Association Interface */
    
  void Linux_SambaPrinterAdminForGlobalResourceAccess::referencesPartComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalOptionsInstanceName& sourceInst,
   Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration& instEnum)
  {
    char* user_list = get_option(sourceInst.getName(),"printer admin");
    
    if(user_list){
      SambaArray array = SambaArray(user_list);
      SambaArrayConstIterator iter;
      
      for ( iter = array.begin(); iter != array.end(); ++iter)
	{
	  if(validUser((*iter).c_str())){
	    Linux_SambaPrinterAdminForGlobalManualInstance manualInstance;
	    
	    Linux_SambaPrinterAdminForGlobalInstanceName instName;
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
  
  void Linux_SambaPrinterAdminForGlobalResourceAccess::referencesGroupComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaUserInstanceName& sourceInst,
   Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration& instEnum)
  {
    if(validUser(sourceInst.getSambaUserName())){
      char * user_list = get_global_option("printer admin");
      if(user_list){
	SambaArray array = SambaArray(user_list);
	SambaArrayConstIterator iter;
	
	if(array.isPresent(sourceInst.getSambaUserName())){
	  Linux_SambaPrinterAdminForGlobalManualInstance manualInstance;
	  
	  Linux_SambaPrinterAdminForGlobalInstanceName instName;
	  instName.setNamespace(nsp);
	  instName.setPartComponent(sourceInst);
	  
	  
	  Linux_SambaGlobalOptionsInstanceName globalInstName;
	  globalInstName.setNamespace(nsp);
	  globalInstName.setName(DEFAULT_GLOBAL_NAME);
	  globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	  
	  instName.setGroupComponent(globalInstName);
	  
	  manualInstance.setInstanceName(instName);
	  instEnum.addElement(manualInstance);
	}
      }
    }
  };
  
  void Linux_SambaPrinterAdminForGlobalResourceAccess::associatorsPartComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalOptionsInstanceName& sourceInst,
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
    
  void Linux_SambaPrinterAdminForGlobalResourceAccess::associatorsGroupComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaUserInstanceName& sourceInst,
   Linux_SambaGlobalOptionsInstanceEnumeration& instEnum)
  {
    if(validUser(sourceInst.getSambaUserName())){
      char * user_list = get_global_option("printer admin");
      if(user_list){
	SambaArray array = SambaArray(user_list);
	SambaArrayConstIterator iter;
	
	if(array.isPresent(sourceInst.getSambaUserName())){
	  Linux_SambaGlobalOptionsInstance instance;
	  
	  Linux_SambaGlobalOptionsInstanceName globalInstName;
	  globalInstName.setNamespace(nsp);
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
	  
	  
	  instEnum.addElement(instance);
	}
      }
    }
  };
  

    /* extrinsic methods */
	
}


