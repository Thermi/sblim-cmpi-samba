/**
 *  Linux_SambaShareProtocolOptionsResourceAccess.cpp
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


#include "Linux_SambaShareProtocolOptionsResourceAccess.h"


namespace genProvider {
  
  void Linux_SambaShareProtocolOptionsResourceAccess::setInstanceNameProperties(const char* nsp,
   char *instanceName,
   Linux_SambaShareProtocolOptionsInstanceName& anInstanceName)
  {
    anInstanceName.setNamespace(nsp);
    anInstanceName.setName(instanceName);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  };
  
  void Linux_SambaShareProtocolOptionsResourceAccess::setInstanceProperties(
   Linux_SambaShareProtocolOptionsManualInstance& aManualInstance)
  {
    char *option;
   
    option = get_option(aManualInstance.getInstanceName().getName(),ACL_COMPATIBILITY);	
    if ( option )
      if(strcasecmp(option,"Auto") == 0)
	aManualInstance.setAclCompatibility( 0 );
      else 
	if(strcasecmp(option,"winnt") == 0)
	  aManualInstance.setAclCompatibility( 1 );
	else 
	  if(strcasecmp(option,"win2k") == 0)
	    aManualInstance.setAclCompatibility( 2 );
    
    
    option = get_option(aManualInstance.getInstanceName().getName(),EA_SUPPORT);
    if( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setEASupport( true );
      else
	aManualInstance.setEASupport( false );
    
    option = get_option(aManualInstance.getInstanceName().getName(),NT_ACL_SUPPORT);
    if( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setNTACLSupport( true );
      else
	aManualInstance.setNTACLSupport( false );

  }; 
  
  void Linux_SambaShareProtocolOptionsResourceAccess::setRAProperties(
   Linux_SambaShareProtocolOptionsManualInstance newInstance)
  {
    if ( newInstance.isAclCompatibilitySet())
      {
	switch(newInstance.getAclCompatibility())
	  {
	  case 0:
	    set_share_option(newInstance.getInstanceName().getName(),ACL_COMPATIBILITY, "Auto");
	    break;
	  case 1:
	    set_share_option(newInstance.getInstanceName().getName(),ACL_COMPATIBILITY, "winnt");
	    break;
	  case 2:
	    set_share_option(newInstance.getInstanceName().getName(),ACL_COMPATIBILITY, "win2k");
	    break;
	  }
      }
    
    if ( newInstance.isEASupportSet())
      if(newInstance.getEASupport())
	set_share_option(newInstance.getInstanceName().getName(),EA_SUPPORT,YES);
      else
	set_share_option(newInstance.getInstanceName().getName(),EA_SUPPORT,NO);

    if ( newInstance.isNTACLSupportSet())
      if(newInstance.getNTACLSupport())
	set_share_option(newInstance.getInstanceName().getName(),NT_ACL_SUPPORT,YES);
      else
	set_share_option(newInstance.getInstanceName().getName(),NT_ACL_SUPPORT,NO);
    
  };


    //Linux_SambaShareProtocolOptionsResourceAccess::Linux_SambaShareProtocolOptionsResourceAccess();
    Linux_SambaShareProtocolOptionsResourceAccess::~Linux_SambaShareProtocolOptionsResourceAccess() { };
    
    /* intrinsic methods */
    
  void Linux_SambaShareProtocolOptionsResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaShareProtocolOptionsInstanceNameEnumeration& instnames)
  { 
    char ** shares = get_shares_list();
    
    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaShareProtocolOptionsInstanceName instanceName;
	setInstanceNameProperties(nsp,shares[i],instanceName);
	instnames.addElement(instanceName); 
      }
    }
  };

  void Linux_SambaShareProtocolOptionsResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaShareProtocolOptionsManualInstanceEnumeration& instances)
  {
    char ** shares = get_shares_list();

    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaShareProtocolOptionsManualInstance aManualInstance;
	Linux_SambaShareProtocolOptionsInstanceName instanceName;
	
	setInstanceNameProperties(nsp,shares[i],instanceName);
	aManualInstance.setInstanceName(instanceName);
	
	setInstanceProperties(aManualInstance);
	
	instances.addElement(aManualInstance);
      }
    }
  };
  	
    
  Linux_SambaShareProtocolOptionsManualInstance 
   Linux_SambaShareProtocolOptionsResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaShareProtocolOptionsInstanceName& instanceName)
  {
    Linux_SambaShareProtocolOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    
    setInstanceProperties(aManualInstance);
    
    return aManualInstance;  
  };
  
  	
  void Linux_SambaShareProtocolOptionsResourceAccess::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaShareProtocolOptionsManualInstance& newInstance)
  {
    setRAProperties(newInstance);
  };
  	
  void Linux_SambaShareProtocolOptionsResourceAccess::createInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaShareProtocolOptionsManualInstance& newInstance)
  {
    setRAProperties(newInstance);
  };
  	
  void Linux_SambaShareProtocolOptionsResourceAccess::deleteInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaShareProtocolOptionsInstanceName& instanceName)
  {
    if(service_exists(instanceName.getName())){
      set_share_option(instanceName.getName(),ACL_COMPATIBILITY,NULL);
      set_share_option(instanceName.getName(),EA_SUPPORT,NULL);
      set_share_option(instanceName.getName(),NT_ACL_SUPPORT,NULL);
    }else
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Instance doesn't exist!");
  };
  
  /* extrinsic methods */
	
}


