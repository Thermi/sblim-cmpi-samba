/**
 *  Linux_SambaShareFileNameHandlingOptionsResourceAccess.cpp
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


#include "Linux_SambaShareFileNameHandlingOptionsResourceAccess.h"

namespace genProvider {
  
   void Linux_SambaShareFileNameHandlingOptionsResourceAccess::setInstanceNameProperties(const char* nsp,     
    char *instanceName,
    Linux_SambaShareFileNameHandlingOptionsInstanceName& anInstanceName)
  {
    anInstanceName.setNamespace(nsp);
    anInstanceName.setName(instanceName);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  }

  void Linux_SambaShareFileNameHandlingOptionsResourceAccess::setInstanceProperties(
   Linux_SambaShareFileNameHandlingOptionsManualInstance& aManualInstance)
  {
    char *option;
    option = get_option(aManualInstance.getInstanceName().getName(),CASE_SENSITIVE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setCaseSensitive( true );
      else
	aManualInstance.setCaseSensitive( false );
    
    option = get_option(aManualInstance.getInstanceName().getName(),DOS_FILETIMES);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setDosFiletimes( true );
      else
	aManualInstance.setDosFiletimes( false );
    
    option = get_option(aManualInstance.getInstanceName().getName(),HIDE_DOT_FILES);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setHideDotFiles( true );
      else
	aManualInstance.setHideDotFiles( false );
  }

  void Linux_SambaShareFileNameHandlingOptionsResourceAccess::setRAProperties(
   Linux_SambaShareFileNameHandlingOptionsManualInstance newInstance)
  {
    
    if ( newInstance.isCaseSensitiveSet() )
      {
	if(newInstance.getCaseSensitive())  
	  set_share_option(newInstance.getInstanceName().getName(),CASE_SENSITIVE,YES);
	else
	  set_share_option(newInstance.getInstanceName().getName(),CASE_SENSITIVE,NO);
      }
    
    if ( newInstance.isDosFiletimesSet() )
      {
	if(newInstance.getDosFiletimes())  
	  set_share_option(newInstance.getInstanceName().getName(),DOS_FILETIMES,YES);
	else
	  set_share_option(newInstance.getInstanceName().getName(),DOS_FILETIMES,NO);
      }
    
    if ( newInstance.isHideDotFilesSet() )
      {
	if(newInstance.getHideDotFiles())  
	  set_share_option(newInstance.getInstanceName().getName(),HIDE_DOT_FILES,YES);
	else
	  set_share_option(newInstance.getInstanceName().getName(),HIDE_DOT_FILES,NO);
      }
  };


    //Linux_SambaShareFileNameHandlingOptionsResourceAccess::Linux_SambaShareFileNameHandlingOptionsResourceAccess();
    Linux_SambaShareFileNameHandlingOptionsResourceAccess::~Linux_SambaShareFileNameHandlingOptionsResourceAccess() { };
    
    /* intrinsic methods */
    
  void Linux_SambaShareFileNameHandlingOptionsResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration& instnames)
  { 
    char ** shares = get_shares_list();
    
    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaShareFileNameHandlingOptionsInstanceName instanceName;
	setInstanceNameProperties(nsp,shares[i],instanceName);
	instnames.addElement(instanceName); 
      }
    }
  };
  
  void Linux_SambaShareFileNameHandlingOptionsResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration& instances)
  {
    char ** shares = get_shares_list();

    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaShareFileNameHandlingOptionsManualInstance aManualInstance;
	Linux_SambaShareFileNameHandlingOptionsInstanceName instanceName;
	
	setInstanceNameProperties(nsp,shares[i],instanceName);
	aManualInstance.setInstanceName(instanceName);
	
	setInstanceProperties(aManualInstance);
	
	instances.addElement(aManualInstance);
      }
    }
  }; 


  Linux_SambaShareFileNameHandlingOptionsManualInstance 
   Linux_SambaShareFileNameHandlingOptionsResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaShareFileNameHandlingOptionsInstanceName& instanceName)
  {
    Linux_SambaShareFileNameHandlingOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    
    setInstanceProperties(aManualInstance);
    
    return aManualInstance;  
  };

  void Linux_SambaShareFileNameHandlingOptionsResourceAccess::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaShareFileNameHandlingOptionsManualInstance& newInstance)
  {
    setRAProperties(newInstance);
  };

  void Linux_SambaShareFileNameHandlingOptionsResourceAccess::createInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaShareFileNameHandlingOptionsManualInstance& newInstance)
  {
    setRAProperties(newInstance);
  };


  void Linux_SambaShareFileNameHandlingOptionsResourceAccess::deleteInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaShareFileNameHandlingOptionsInstanceName& instanceName)
  {
    if(service_exists(instanceName.getName())){
      set_share_option(instanceName.getName(),CASE_SENSITIVE, NULL);
      set_share_option(instanceName.getName(),DOS_FILETIMES, NULL);
      set_share_option(instanceName.getName(),HIDE_DOT_FILES, NULL);
    }else
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Instance doesn't exist!");
  };

    /* extrinsic methods */
	
}


