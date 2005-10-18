/**
 *  Linux_SambaGlobalProtocolOptionsResourceAccess.cpp
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


#include "Linux_SambaGlobalProtocolOptionsResourceAccess.h"

namespace genProvider {
  
  void Linux_SambaGlobalProtocolOptionsResourceAccess::setInstanceNameProperties(const char* nsp,     
    Linux_SambaGlobalProtocolOptionsInstanceName& anInstanceName)
  {
    anInstanceName.setNamespace(nsp);
    anInstanceName.setName(DEFAULT_GLOBAL_NAME);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  }

  void Linux_SambaGlobalProtocolOptionsResourceAccess::setInstanceProperties(
   Linux_SambaGlobalProtocolOptionsManualInstance& aManualInstance)
  {
    char *option;
    
    option = get_global_option(ACL_COMPATIBILITY);	
    if ( option )
      if(strcasecmp(option,"Auto") == 0)
	aManualInstance.setAclCompatibility( 0 );
      else 
	if(strcasecmp(option,"winnt") == 0)
	  aManualInstance.setAclCompatibility( 1 );
	else 
	  if(strcasecmp(option,"win2k") == 0)
	    aManualInstance.setAclCompatibility( 2 );
    
    option = get_global_option(EA_SUPPORT);
    if( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setEASupport( true );
      else
	aManualInstance.setEASupport( false );
    
    option = get_global_option(NT_ACL_SUPPORT);
    if( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setNTACLSupport( true );
      else
	aManualInstance.setNTACLSupport( false );
  }
  
    //Linux_SambaGlobalProtocolOptionsResourceAccess::Linux_SambaGlobalProtocolOptionsResourceAccess();
    Linux_SambaGlobalProtocolOptionsResourceAccess::~Linux_SambaGlobalProtocolOptionsResourceAccess() { };
    
    /* intrinsic methods */
    
  void Linux_SambaGlobalProtocolOptionsResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaGlobalProtocolOptionsInstanceNameEnumeration& instnames)
  {
    Linux_SambaGlobalProtocolOptionsInstanceName instanceName;
    setInstanceNameProperties(nsp,instanceName);
    instnames.addElement(instanceName); 
  };
  
    
  void Linux_SambaGlobalProtocolOptionsResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration& instances)
  {
    Linux_SambaGlobalProtocolOptionsManualInstance aManualInstance;
    Linux_SambaGlobalProtocolOptionsInstanceName instanceName;
    
    setInstanceNameProperties(nsp,instanceName);
    aManualInstance.setInstanceName(instanceName);

    setInstanceProperties(aManualInstance);
    
    instances.addElement(aManualInstance);
  };
  	
  
  Linux_SambaGlobalProtocolOptionsManualInstance 
  Linux_SambaGlobalProtocolOptionsResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGlobalProtocolOptionsInstanceName& instanceName)
  {
    Linux_SambaGlobalProtocolOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    
    setInstanceProperties(aManualInstance);
    
    return aManualInstance;  
  };
  
  
  void Linux_SambaGlobalProtocolOptionsResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalProtocolOptionsManualInstance& newInstance)
  {
    if ( newInstance.isAclCompatibilitySet())
      {
	switch(newInstance.getAclCompatibility())
	  {
	  case 0:
	    set_global_option(ACL_COMPATIBILITY, "Auto");
	    break;
	  case 1:
	    set_global_option(ACL_COMPATIBILITY, "winnt");
	    break;
	  case 2:
	    set_global_option(ACL_COMPATIBILITY, "win2k");
	    break;
	  }
      }
    
    if ( newInstance.isEASupportSet())
      if(newInstance.getEASupport())
	set_global_option(EA_SUPPORT,YES);
      else
	set_global_option(EA_SUPPORT,NO);
    
    if ( newInstance.isNTACLSupportSet())
      if(newInstance.getNTACLSupport())
	set_global_option(NT_ACL_SUPPORT,YES);
      else
	set_global_option(NT_ACL_SUPPORT,NO);
  };
    
    
  	/*
    void Linux_SambaGlobalProtocolOptionsResourceAccess::createInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaGlobalProtocolOptionsManualInstance&){};
  	*/
  	/*
    void Linux_SambaGlobalProtocolOptionsResourceAccess::deleteInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaGlobalProtocolOptionsInstanceName&){};
	*/
    
    /* extrinsic methods */
	
}


