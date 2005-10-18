/**
 *  Linux_SambaShareOptionsResourceAccess.cpp
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


#include "Linux_SambaShareOptionsResourceAccess.h"

namespace genProvider {
  
   void Linux_SambaShareOptionsResourceAccess::setInstanceNameProperties(const char* nsp,
   char *instanceName,
   Linux_SambaShareOptionsInstanceName& anInstanceName)
  {
    anInstanceName.setNamespace(nsp);
    anInstanceName.setName(instanceName);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  };
  
  void Linux_SambaShareOptionsResourceAccess::setInstanceProperties(
   Linux_SambaShareOptionsManualInstance& aManualInstance)
  {
    char *option;
    
    option = get_option(aManualInstance.getInstanceName().getName(),AVAILABLE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setAvailable( true );
      else
	aManualInstance.setAvailable( false );

    option = get_option(aManualInstance.getInstanceName().getName(),COMMENT);
    if ( option )
      aManualInstance.setComment(option);

    option = get_option(aManualInstance.getInstanceName().getName(),PATH);
    if ( option )
      aManualInstance.setPath(option);

    option = get_option(aManualInstance.getInstanceName().getName(),PRINTABLE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setPrintable( true );
      else
	aManualInstance.setPrintable( false );
  }; 
  
  void Linux_SambaShareOptionsResourceAccess::setRAProperties(
   Linux_SambaShareOptionsManualInstance newInstance)
  {
    if ( newInstance.isAvailableSet() )
      {
	if(newInstance.getAvailable())  
	  set_share_option(newInstance.getInstanceName().getName(),AVAILABLE,YES);
	else
	  set_share_option(newInstance.getInstanceName().getName(),AVAILABLE,NO);
      }

    if ( newInstance.isCommentSet() )
      set_share_option(newInstance.getInstanceName().getName(),COMMENT,newInstance.getComment());

    if ( newInstance.isPathSet() )
      set_share_option(newInstance.getInstanceName().getName(),PATH,newInstance.getPath());
    
    // If you are managing an instance of a share, the printable attribute must be 'no'
    set_printer_option(newInstance.getInstanceName().getName(),PRINTABLE,NO);
  };


  //Linux_SambaShareOptionsResourceAccess::Linux_SambaShareOptionsResourceAccess();
  Linux_SambaShareOptionsResourceAccess::~Linux_SambaShareOptionsResourceAccess() { };
    
  /* intrinsic methods */
  
  void Linux_SambaShareOptionsResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaShareOptionsInstanceNameEnumeration& instnames)
  { 
    char ** shares = get_shares_list();
    
    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaShareOptionsInstanceName instanceName;
	setInstanceNameProperties(nsp,shares[i],instanceName);
	instnames.addElement(instanceName); 
      }
    }
  };

  void Linux_SambaShareOptionsResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaShareOptionsManualInstanceEnumeration& instances)
  {
    char ** shares = get_shares_list();

    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaShareOptionsManualInstance aManualInstance;
	Linux_SambaShareOptionsInstanceName instanceName;
	
	setInstanceNameProperties(nsp,shares[i],instanceName);
	aManualInstance.setInstanceName(instanceName);
	
	setInstanceProperties(aManualInstance);
	
	instances.addElement(aManualInstance);
      }
    }
  };


  Linux_SambaShareOptionsManualInstance 
   Linux_SambaShareOptionsResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaShareOptionsInstanceName& instanceName)
  {
    Linux_SambaShareOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    
    setInstanceProperties(aManualInstance);
    
    return aManualInstance;  
  };

  void Linux_SambaShareOptionsResourceAccess::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaShareOptionsManualInstance& newInstance)
  {
    setRAProperties(newInstance);
  };

  void Linux_SambaShareOptionsResourceAccess::createInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaShareOptionsManualInstance& newInstance)
  {
    if(!service_exists(newInstance.getInstanceName().getName())){
      if(!add_share(newInstance.getInstanceName().getName()))
	setRAProperties(newInstance);
      else
	throw CmpiStatus(CMPI_RC_ERR_FAILED,"Instance could not be created!");
    }
    else
      throw CmpiStatus(CMPI_RC_ERR_ALREADY_EXISTS,"Instance already exists!");
  };

  void Linux_SambaShareOptionsResourceAccess::deleteInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaShareOptionsInstanceName& instanceName)
  {
    if(service_exists(instanceName.getName())){
      if(delete_share(instanceName.getName())) 
	throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Instance could not be deleted!");
    }else
      throw CmpiStatus(CMPI_RC_ERR_FAILED,"Instance does not exist!");
  };

    /* extrinsic methods */
	
}


