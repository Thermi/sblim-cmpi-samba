/**
 *  Linux_SambaGlobalFileNameHandlingOptionsResourceAccess.cpp
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


#include "Linux_SambaGlobalFileNameHandlingOptionsResourceAccess.h"

namespace genProvider {
  
  void Linux_SambaGlobalFileNameHandlingOptionsResourceAccess::setInstanceNameProperties(const char* nsp,     
    Linux_SambaGlobalFileNameHandlingOptionsInstanceName& anInstanceName)
  {
    anInstanceName.setNamespace(nsp);
    anInstanceName.setName(DEFAULT_GLOBAL_NAME);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  }

  void Linux_SambaGlobalFileNameHandlingOptionsResourceAccess::setInstanceProperties(
   Linux_SambaGlobalFileNameHandlingOptionsManualInstance& aManualInstance)
  {
    char *option;
    option = get_global_option(CASE_SENSITIVE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setCaseSensitive( true );
      else
	aManualInstance.setCaseSensitive( false );
    
    option = get_global_option(DOS_FILETIMES);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setDosFiletimes( true );
      else
	aManualInstance.setDosFiletimes( false );
    
    option = get_global_option(HIDE_DOT_FILES);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setHideDotFiles( true );
      else
	aManualInstance.setHideDotFiles( false );
  }
  
    //Linux_SambaGlobalFileNameHandlingOptionsResourceAccess::Linux_SambaGlobalFileNameHandlingOptionsResourceAccess();
    Linux_SambaGlobalFileNameHandlingOptionsResourceAccess::~Linux_SambaGlobalFileNameHandlingOptionsResourceAccess() { 
      terminator();
    };
    
    /* intrinsic methods */
    
  void Linux_SambaGlobalFileNameHandlingOptionsResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration& instnames)
  {
    Linux_SambaGlobalFileNameHandlingOptionsInstanceName instanceName;
    setInstanceNameProperties(nsp,instanceName);
    instnames.addElement(instanceName); 
  };
  
    
  void Linux_SambaGlobalFileNameHandlingOptionsResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration& instances)
  {
    Linux_SambaGlobalFileNameHandlingOptionsManualInstance aManualInstance;
    Linux_SambaGlobalFileNameHandlingOptionsInstanceName instanceName;
    
    setInstanceNameProperties(nsp,instanceName);
    aManualInstance.setInstanceName(instanceName);

    setInstanceProperties(aManualInstance);
    
    instances.addElement(aManualInstance);
  };
  	
  
  Linux_SambaGlobalFileNameHandlingOptionsManualInstance 
  Linux_SambaGlobalFileNameHandlingOptionsResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& instanceName)
  {
    Linux_SambaGlobalFileNameHandlingOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    
    setInstanceProperties(aManualInstance);
    
    return aManualInstance;  
  };
  
  
  void Linux_SambaGlobalFileNameHandlingOptionsResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalFileNameHandlingOptionsManualInstance& newInstance)
  {
    if ( newInstance.isCaseSensitiveSet() )
      {
	if(newInstance.getCaseSensitive())  
	  set_global_option(CASE_SENSITIVE,YES);
	else
	  set_global_option(CASE_SENSITIVE,NO);
      }
    
    if ( newInstance.isDosFiletimesSet() )
      {
	if(newInstance.getDosFiletimes())  
	  set_global_option(DOS_FILETIMES,YES);
	else
	  set_global_option(DOS_FILETIMES,NO);
      }
    
    if ( newInstance.isHideDotFilesSet() )
      {
	if(newInstance.getHideDotFiles())  
	  set_global_option(HIDE_DOT_FILES,YES);
	else
	  set_global_option(HIDE_DOT_FILES,NO);
      }
  };
  
  	
  	/*
    void Linux_SambaGlobalFileNameHandlingOptionsResourceAccess::createInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaGlobalFileNameHandlingOptionsManualInstance&){};
  	*/
  	/*
    void Linux_SambaGlobalFileNameHandlingOptionsResourceAccess::deleteInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaGlobalFileNameHandlingOptionsInstanceName&){};
	*/
    
    /* extrinsic methods */
	
}


