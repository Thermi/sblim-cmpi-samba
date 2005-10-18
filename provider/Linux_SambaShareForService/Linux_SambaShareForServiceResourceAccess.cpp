/**
 *  Linux_SambaShareForServiceResourceAccess.cpp
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


#include "Linux_SambaShareForServiceResourceAccess.h"

namespace genProvider {
  
    //Linux_SambaShareForServiceResourceAccess::Linux_SambaShareForServiceResourceAccess();
    Linux_SambaShareForServiceResourceAccess::~Linux_SambaShareForServiceResourceAccess() { };
    
    /* intrinsic methods */
    
  void Linux_SambaShareForServiceResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaShareForServiceInstanceNameEnumeration& instnames)
  {
    char ** shares = get_shares_list();
    
    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaShareForServiceInstanceName instName;
	instName.setNamespace(nsp);
	
	Linux_SambaServiceInstanceName elemInstanceName;
	elemInstanceName.setNamespace(nsp);
	elemInstanceName.setName(DEFAULT_SERVICE_NAME);
	elemInstanceName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
	elemInstanceName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
	elemInstanceName.setSystemName(DEFAULT_SYSTEM_NAME);
	instName.setManagedElement(elemInstanceName);
	
	Linux_SambaShareOptionsInstanceName shareInstName;
	shareInstName.setNamespace(nsp);
	shareInstName.setName(shares[i]);
	shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	instName.setSettingData(shareInstName);
	
	instnames.addElement(instName);
      }
    }
  };
    
  void Linux_SambaShareForServiceResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaShareForServiceManualInstanceEnumeration& instances)
  {
    char ** shares = get_shares_list();
    
    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaShareForServiceManualInstance manualInstance;
	
	Linux_SambaShareForServiceInstanceName instName;
	instName.setNamespace(nsp);
	
	Linux_SambaServiceInstanceName elemInstanceName;
	elemInstanceName.setNamespace(nsp);
	elemInstanceName.setName(DEFAULT_SERVICE_NAME);
	elemInstanceName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
	elemInstanceName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
	elemInstanceName.setSystemName(DEFAULT_SYSTEM_NAME);
	instName.setManagedElement(elemInstanceName);
	
	Linux_SambaShareOptionsInstanceName shareInstName;
	shareInstName.setNamespace(nsp);
	shareInstName.setName(shares[i]);
	shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	instName.setSettingData(shareInstName);
	
	manualInstance.setInstanceName(instName);
	instances.addElement(manualInstance);
      }
    }
  };
  	
  	
  Linux_SambaShareForServiceManualInstance 
   Linux_SambaShareForServiceResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaShareForServiceInstanceName& instanceName)
  {
    Linux_SambaShareForServiceManualInstance instance;
    instance.setInstanceName(instanceName);
    return instance;
  };
  	
  	
  void Linux_SambaShareForServiceResourceAccess::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaShareForServiceManualInstance&){};
  
  	
  void Linux_SambaShareForServiceResourceAccess::createInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaShareForServiceManualInstance&){};
  	
  	
  void Linux_SambaShareForServiceResourceAccess::deleteInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaShareForServiceInstanceName&){};
	
    
    /* Association Interface */
  
  void Linux_SambaShareForServiceResourceAccess::referencesSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaServiceInstanceName& sourceInst,
   Linux_SambaShareForServiceManualInstanceEnumeration& instEnum) 
  {
    char ** shares = get_shares_list();
    
    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaShareForServiceManualInstance manualInstance;
	
	Linux_SambaShareForServiceInstanceName instName;
	instName.setNamespace(nsp);
	instName.setManagedElement(sourceInst);
	
	Linux_SambaShareOptionsInstanceName shareInstName;
	shareInstName.setNamespace(nsp);
	shareInstName.setName(shares[i]);
	shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
	instName.setSettingData(shareInstName);
	
	manualInstance.setInstanceName(instName);
	instEnum.addElement(manualInstance);
      }
    }
  };
    
    
  void Linux_SambaShareForServiceResourceAccess::referencesManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaShareOptionsInstanceName& sourceInst,
   Linux_SambaShareForServiceManualInstanceEnumeration& instEnum) 
  { 
    Linux_SambaShareForServiceManualInstance manualInstance;
    
    Linux_SambaShareForServiceInstanceName instName;
    instName.setNamespace(nsp);
    instName.setSettingData(sourceInst);
    
    Linux_SambaServiceInstanceName elemInstanceName;
    elemInstanceName.setNamespace(nsp);
    elemInstanceName.setName(DEFAULT_SERVICE_NAME);
    elemInstanceName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
    elemInstanceName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
    elemInstanceName.setSystemName(DEFAULT_SYSTEM_NAME);
    
    instName.setManagedElement(elemInstanceName);
    
    manualInstance.setInstanceName(instName);
    instEnum.addElement(manualInstance);
  };
    
  
  void Linux_SambaShareForServiceResourceAccess::associatorsSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaServiceInstanceName& sourceInst,
   Linux_SambaShareOptionsInstanceEnumeration& instEnum) 
  { 
    char ** shares = get_shares_list();
    
    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaShareOptionsInstance instance;
	
	Linux_SambaShareOptionsInstanceName shareInstName;
	shareInstName.setNamespace(nsp);
	shareInstName.setName(shares[i]);
	shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);

	instance.setInstanceName(shareInstName);
	char *option;
	
	option = get_option(shares[i],AVAILABLE);	
	if ( option )
	  if(strcasecmp(option,YES) == 0)
	    instance.setAvailable( true );
	  else
	    instance.setAvailable( false );
	
	option = get_option(shares[i],COMMENT);
	if ( option )
	  instance.setComment(option);
	
	option = get_option(shares[i],PATH);
	if ( option )
	  instance.setPath(option);
	
	option = get_option(shares[i],PRINTABLE);	
	if ( option )
	  if(strcasecmp(option,"yes") == 0)
	    instance.setPrintable( true );
	  else
	    instance.setPrintable( false );
	
	instEnum.addElement(instance);
      }
    }
  };
  
    
  void Linux_SambaShareForServiceResourceAccess::associatorsManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaShareOptionsInstanceName& sourceInst,
   Linux_SambaServiceInstanceEnumeration& instEnum) 
  { 
    Linux_SambaServiceInstance instance;
    
    Linux_SambaServiceInstanceName elemInstanceName;
    elemInstanceName.setNamespace(nsp);
    elemInstanceName.setName(DEFAULT_SERVICE_NAME);
    elemInstanceName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
    elemInstanceName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
    elemInstanceName.setSystemName(DEFAULT_SYSTEM_NAME);
    
    instance.setInstanceName(elemInstanceName);
    
    instEnum.addElement(instance);
  };
  

    /* extrinsic methods */
	
}


