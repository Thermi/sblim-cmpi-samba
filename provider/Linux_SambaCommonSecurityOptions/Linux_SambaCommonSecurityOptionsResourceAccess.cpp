/**
 *  Linux_SambaCommonSecurityOptionsResourceAccess.cpp
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


#include "Linux_SambaCommonSecurityOptionsResourceAccess.h"

namespace genProvider {
  
   void Linux_SambaCommonSecurityOptionsResourceAccess::setInstanceNameProperties(const char* nsp,
   char *instanceName,
   Linux_SambaCommonSecurityOptionsInstanceName& anInstanceName)
  {
    anInstanceName.setNamespace(nsp);
    anInstanceName.setName(instanceName);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  };
  
  void Linux_SambaCommonSecurityOptionsResourceAccess::setInstanceProperties(
   Linux_SambaCommonSecurityOptionsManualInstance& aManualInstance,bool global)
  {
    if(!global){
      char *option;
      
      option = get_option(aManualInstance.getInstanceName().getName(),GUEST_OK);	
      if ( option )
	if(strcasecmp(option,YES) == 0)
	  aManualInstance.setGuestOK( true );
	else
	  aManualInstance.setGuestOK( false );
      
      option = get_option(aManualInstance.getInstanceName().getName(),GUEST_ONLY);	
      if ( option )
	if(strcasecmp(option,YES) == 0)
	  aManualInstance.setGuestOnly( true );
	else
	  aManualInstance.setGuestOnly( false );
      
      option = get_option(aManualInstance.getInstanceName().getName(),HOSTS_ALLOW);	
      if ( option )
	aManualInstance.setHostsAllow( option );
      
      option = get_option(aManualInstance.getInstanceName().getName(),HOSTS_DENY);	
      if ( option )
	aManualInstance.setHostsDeny( option );
      
      option = get_option(aManualInstance.getInstanceName().getName(),READ_ONLY);	
      if ( option )
	if(strcasecmp(option,YES) == 0)
	  aManualInstance.setReadOnly( true );
	else
	  aManualInstance.setReadOnly( false );
      
    }else{
      char *option;
      
      option = get_global_option(GUEST_OK);	
      if ( option )
	if(strcasecmp(option,YES) == 0)
	  aManualInstance.setGuestOK( true );
	else
	  aManualInstance.setGuestOK( false );
      
      option = get_global_option(GUEST_ONLY);	
      if ( option )
	if(strcasecmp(option,YES) == 0)
	  aManualInstance.setGuestOnly( true );
	else
	  aManualInstance.setGuestOnly( false );
      
      option = get_global_option(HOSTS_ALLOW);	
      if ( option )
	aManualInstance.setHostsAllow( option );
      
      option = get_global_option(HOSTS_DENY);	
      if ( option )
	aManualInstance.setHostsDeny( option );
      
      option = get_global_option(READ_ONLY);	
      if ( option )
	if(strcasecmp(option,YES) == 0)
	  aManualInstance.setReadOnly( true );
	else
	  aManualInstance.setReadOnly( false );
      
    }
    
  };
  
  void Linux_SambaCommonSecurityOptionsResourceAccess::setRAProperties(
   Linux_SambaCommonSecurityOptionsManualInstance newInstance, bool global)
  {
    if(!global){
    if ( newInstance.isGuestOKSet() )
      if(newInstance.getGuestOK())  
	set_printer_option(newInstance.getInstanceName().getName(),GUEST_OK,YES);
      else
	set_printer_option(newInstance.getInstanceName().getName(),GUEST_OK,NO);

    if ( newInstance.isGuestOnlySet() )
      if(newInstance.getGuestOnly())  
	set_printer_option(newInstance.getInstanceName().getName(),GUEST_ONLY,YES);
      else
	set_printer_option(newInstance.getInstanceName().getName(),GUEST_ONLY,NO);

     if ( newInstance.isHostsAllowSet() )
      set_printer_option(newInstance.getInstanceName().getName(),HOSTS_ALLOW,newInstance.getHostsAllow());

     if ( newInstance.isHostsDenySet() )
       set_printer_option(newInstance.getInstanceName().getName(),HOSTS_DENY,newInstance.getHostsDeny());

     if ( newInstance.isReadOnlySet() )
      if(newInstance.getReadOnly())  
	set_printer_option(newInstance.getInstanceName().getName(),READ_ONLY,YES);
      else
	set_printer_option(newInstance.getInstanceName().getName(),READ_ONLY,NO);

    }else{
      if ( newInstance.isGuestOKSet() )
      if(newInstance.getGuestOK())  
	set_global_option(GUEST_OK,YES);
      else
	set_global_option(GUEST_OK,NO);

    if ( newInstance.isGuestOnlySet() )
      if(newInstance.getGuestOnly())  
	set_global_option(GUEST_ONLY,YES);
      else
	set_global_option(GUEST_ONLY,NO);

     if ( newInstance.isHostsAllowSet() )
      set_global_option(HOSTS_ALLOW,newInstance.getHostsAllow());

     if ( newInstance.isHostsDenySet() )
       set_global_option(HOSTS_DENY,newInstance.getHostsDeny());

     if ( newInstance.isReadOnlySet() )
      if(newInstance.getReadOnly())  
	set_global_option(READ_ONLY,YES);
      else
	set_global_option(READ_ONLY,NO);
    }
  };

  
  //Linux_SambaCommonSecurityOptionsResourceAccess::Linux_SambaCommonSecurityOptionsResourceAccess();
  Linux_SambaCommonSecurityOptionsResourceAccess::~Linux_SambaCommonSecurityOptionsResourceAccess() { };
    
  /* intrinsic methods */
    
  void Linux_SambaCommonSecurityOptionsResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaCommonSecurityOptionsInstanceNameEnumeration& instnames)
{ 
    char ** printers = get_samba_printers_list();
    char ** shares = get_shares_list();

    Linux_SambaCommonSecurityOptionsInstanceName instanceName;
    setInstanceNameProperties(nsp,DEFAULT_GLOBAL_NAME,instanceName);
    instnames.addElement(instanceName); 

    if(printers){
      for (int i=0; printers[i]; i++){
	Linux_SambaCommonSecurityOptionsInstanceName instanceName;
	setInstanceNameProperties(nsp,printers[i],instanceName);
	instnames.addElement(instanceName); 
      }
    }
    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaCommonSecurityOptionsInstanceName instanceName;
	setInstanceNameProperties(nsp,shares[i],instanceName);
	instnames.addElement(instanceName); 
      }
    }
  };
  	
  void Linux_SambaCommonSecurityOptionsResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaCommonSecurityOptionsManualInstanceEnumeration& instances)
   {
    char ** printers = get_samba_printers_list();
    char ** shares = get_shares_list();
    
    Linux_SambaCommonSecurityOptionsManualInstance aManualInstance;
    Linux_SambaCommonSecurityOptionsInstanceName instanceName;
    
    setInstanceNameProperties(nsp,DEFAULT_GLOBAL_NAME,instanceName);
    aManualInstance.setInstanceName(instanceName);
    
    setInstanceProperties(aManualInstance,true);
    
    instances.addElement(aManualInstance);
    
    if(printers){
      for (int i=0; printers[i]; i++){
	Linux_SambaCommonSecurityOptionsManualInstance aManualInstance;
	Linux_SambaCommonSecurityOptionsInstanceName instanceName;
	
	setInstanceNameProperties(nsp,printers[i],instanceName);
	aManualInstance.setInstanceName(instanceName);
	
	setInstanceProperties(aManualInstance,false);
	
	instances.addElement(aManualInstance);
      }
    }
    
    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaCommonSecurityOptionsManualInstance aManualInstance;
	Linux_SambaCommonSecurityOptionsInstanceName instanceName;
	
	setInstanceNameProperties(nsp,shares[i],instanceName);
	aManualInstance.setInstanceName(instanceName);
	
	setInstanceProperties(aManualInstance,false);
	
	instances.addElement(aManualInstance);
      }
    }
  };
  
  Linux_SambaCommonSecurityOptionsManualInstance 
   Linux_SambaCommonSecurityOptionsResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaCommonSecurityOptionsInstanceName& instanceName)
  {
    Linux_SambaCommonSecurityOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    
    if(!strcasecmp(DEFAULT_GLOBAL_NAME,instanceName.getName()))
      setInstanceProperties(aManualInstance,true);
    else
      setInstanceProperties(aManualInstance,false);
    
    return aManualInstance;  
  };
  	
  void Linux_SambaCommonSecurityOptionsResourceAccess::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaCommonSecurityOptionsManualInstance& newInstance)
  {
    if(!strcasecmp(DEFAULT_GLOBAL_NAME,newInstance.getInstanceName().getName()))
      setRAProperties(newInstance,true);
    else
      setRAProperties(newInstance,false);
  };

  void Linux_SambaCommonSecurityOptionsResourceAccess::createInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaCommonSecurityOptionsManualInstance& newInstance)
  {
    if(!strcasecmp(DEFAULT_GLOBAL_NAME,newInstance.getInstanceName().getName()))
      setRAProperties(newInstance,true);
    else
      setRAProperties(newInstance,false);
  };
  	
  void Linux_SambaCommonSecurityOptionsResourceAccess::deleteInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaCommonSecurityOptionsInstanceName& instanceName)
  {
    if(!strcasecmp(DEFAULT_GLOBAL_NAME,instanceName.getName())){
      set_global_option(GUEST_OK,NULL);
      set_global_option(GUEST_ONLY,NULL);
      set_global_option(HOSTS_ALLOW,NULL);
      set_global_option(HOSTS_DENY,NULL);
      set_global_option(READ_ONLY,NULL);
    }else{
      set_printer_option(instanceName.getName(),GUEST_OK,NULL);
      set_printer_option(instanceName.getName(),GUEST_ONLY,NULL);
      set_printer_option(instanceName.getName(),HOSTS_ALLOW,NULL);
      set_printer_option(instanceName.getName(),HOSTS_DENY,NULL);
      set_printer_option(instanceName.getName(),READ_ONLY,NULL);
    }
  };
    
    /* extrinsic methods */
	
}


