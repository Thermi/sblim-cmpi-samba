/**
 *  Linux_SambaGlobalBrowseOptionsResourceAccess.cpp
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


#include "Linux_SambaGlobalBrowseOptionsResourceAccess.h"

namespace genProvider {
  
  void Linux_SambaGlobalBrowseOptionsResourceAccess::setInstanceNameProperties(const char* nsp,     
    Linux_SambaGlobalBrowseOptionsInstanceName& anInstanceName)
  {
    anInstanceName.setNamespace(nsp);
    anInstanceName.setName(DEFAULT_GLOBAL_NAME);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  }
  
  void Linux_SambaGlobalBrowseOptionsResourceAccess::setInstanceProperties(
   Linux_SambaGlobalBrowseOptionsManualInstance& aManualInstance)
  {
    char *option;
    option = get_global_option(BROWSEABLE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setBrowsable( true );
      else
	aManualInstance.setBrowsable( false );

    option = get_global_option(DOMAIN_MASTER);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setDomainMaster( 1 );
      else
	if(strcasecmp(option,NO) == 0)
	  aManualInstance.setDomainMaster( 0 );
	else
	  aManualInstance.setDomainMaster( 2 );
  }

    //Linux_SambaGlobalBrowseOptionsResourceAccess::Linux_SambaGlobalBrowseOptionsResourceAccess();
    Linux_SambaGlobalBrowseOptionsResourceAccess::~Linux_SambaGlobalBrowseOptionsResourceAccess() { };
    
    /* intrinsic methods */
    
  void Linux_SambaGlobalBrowseOptionsResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaGlobalBrowseOptionsInstanceNameEnumeration& instnames)
  {
    Linux_SambaGlobalBrowseOptionsInstanceName instanceName;
    setInstanceNameProperties(nsp,instanceName);
    instnames.addElement(instanceName); 
  };

  void Linux_SambaGlobalBrowseOptionsResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration& instances)
  {
    Linux_SambaGlobalBrowseOptionsManualInstance aManualInstance;
    Linux_SambaGlobalBrowseOptionsInstanceName instanceName;
    
    setInstanceNameProperties(nsp,instanceName);
    aManualInstance.setInstanceName(instanceName);

    setInstanceProperties(aManualInstance);
    
    instances.addElement(aManualInstance);
  };

  Linux_SambaGlobalBrowseOptionsManualInstance 
   Linux_SambaGlobalBrowseOptionsResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGlobalBrowseOptionsInstanceName& instanceName)
  {
    Linux_SambaGlobalBrowseOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    
    setInstanceProperties(aManualInstance);

    return aManualInstance;      
  };

  void Linux_SambaGlobalBrowseOptionsResourceAccess::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGlobalBrowseOptionsManualInstance& newInstance)
  {
    
    if ( newInstance.isBrowsableSet() )
      {
	if(newInstance.getBrowsable())  
	  set_global_option(BROWSEABLE,YES);
	else
	  set_global_option(BROWSEABLE,NO);
      }
    
    if ( newInstance.isDomainMasterSet()){
      switch(newInstance.getDomainMaster())
	{
	case 0:
	  set_global_option(DOMAIN_MASTER, NO);
	  break;
	case 1:
	  set_global_option(DOMAIN_MASTER, YES);
	  break;
	case 2:
	  set_global_option(DOMAIN_MASTER, "auto");
	  break;
	}
    }
    
  };
  
  /*
    void Linux_SambaGlobalBrowseOptionsResourceAccess::createInstance(
    const CmpiContext& ctx, const CmpiBroker &mbp,
    const Linux_SambaGlobalBrowseOptionsManualInstance& newInstance)
  */

  /*
    void Linux_SambaGlobalBrowseOptionsResourceAccess::deleteInstance(
    const CmpiContext& ctx, const CmpiBroker &mbp,
    const Linux_SambaGlobalBrowseOptionsInstanceName& instanceName)
  */
    
    /* extrinsic methods */
	
}


