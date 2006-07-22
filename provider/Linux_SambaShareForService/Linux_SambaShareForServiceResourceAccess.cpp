// =======================================================================
// Linux_SambaShareForServiceResourceAccess.cpp
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Common Public License from
// http://oss.software.ibm.com/developerworks/opensource/license-cpl.html
//
// Author:        generated
//
// Contributors:
//                Wolfgang Taphorn   <taphorn@de.ibm.com>
//                Mukunda Chowdaiah  <cmukunda@in.ibm.com>
//                Ashoka S Rao       <ashoka.rao@in.ibm.com>
//                Rodrigo Ceron      <rceron@br.ibm.com>
//
// =======================================================================
//
// 
#include "Linux_SambaShareForServiceResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  //----------------------------------------------------------------------------
  //Linux_SambaShareForServiceResourceAccess::Linux_SambaShareForServiceResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaShareForServiceResourceAccess::~Linux_SambaShareForServiceResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareForServiceResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaShareForServiceInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    char ** shares = get_shares_list();
    
    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaShareForServiceInstanceName instName;
	instName.setNamespace(aNameSpaceP);
	
	Linux_SambaServiceInstanceName elemInstanceName;
	elemInstanceName.setNamespace(aNameSpaceP);
	elemInstanceName.setName(DEFAULT_SERVICE_NAME);
	elemInstanceName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
	elemInstanceName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
	elemInstanceName.setSystemName(DEFAULT_SYSTEM_NAME);
	instName.setManagedElement(elemInstanceName);
	
	Linux_SambaShareOptionsInstanceName shareInstName;
	shareInstName.setNamespace(aNameSpaceP);
	shareInstName.setName(shares[i]);
	shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	instName.setSettingData(shareInstName);
	
	anInstanceNameEnumeration.addElement(instName);
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaShareForServiceResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaShareForServiceManualInstanceEnumeration& aManualInstanceEnumeration) {
    
        char ** shares = get_shares_list();
    
    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaShareForServiceManualInstance manualInstance;
	
	Linux_SambaShareForServiceInstanceName instName;
	instName.setNamespace(aNameSpaceP);
	
	Linux_SambaServiceInstanceName elemInstanceName;
	elemInstanceName.setNamespace(aNameSpaceP);
	elemInstanceName.setName(DEFAULT_SERVICE_NAME);
	elemInstanceName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
	elemInstanceName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
	elemInstanceName.setSystemName(DEFAULT_SYSTEM_NAME);
	instName.setManagedElement(elemInstanceName);
	
	Linux_SambaShareOptionsInstanceName shareInstName;
	shareInstName.setNamespace(aNameSpaceP);
	shareInstName.setName(shares[i]);
	shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	instName.setSettingData(shareInstName);
	
	manualInstance.setInstanceName(instName);
	aManualInstanceEnumeration.addElement(manualInstance);
      }
    }
  }

  
  //----------------------------------------------------------------------------

  Linux_SambaShareForServiceManualInstance 
  Linux_SambaShareForServiceResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaShareForServiceInstanceName& anInstanceName) {

    Linux_SambaShareForServiceManualInstance instance;
    instance.setInstanceName(anInstanceName);
    
    char ** shares = get_shares_list();
    if(shares) {
    int valid_share = false;
        for(int i=0;shares[i];i++) {
           if(strcasecmp(anInstanceName.getSettingData().getName(),shares[i])==0)
                valid_share = true;
        }
        if(!valid_share) {
           throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified share is unknown!");
        }
    } else {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist!");
    }

    if(strcasecmp(anInstanceName.getManagedElement().getName(),DEFAULT_SERVICE_NAME)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified service is unknown!");
    }
     
    return instance;
  }

  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaShareForServiceResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaShareForServiceManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaShareForServiceInstanceName
  Linux_SambaShareForServiceResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaShareForServiceManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaShareForServiceResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaShareForServiceInstanceName& anInstanceName) { }
	*/
	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaShareForServiceResourceAccess::referencesSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaServiceInstanceName& aSourceInstanceName,
    Linux_SambaShareForServiceManualInstanceEnumeration& aManualInstanceEnumeration) {

    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_SERVICE_NAME)!=0) {
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }
    
    char ** shares = get_shares_list();
    
    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaShareForServiceManualInstance manualInstance;
	
	Linux_SambaShareForServiceInstanceName instName;
	instName.setNamespace(aNameSpaceP);
	instName.setManagedElement(aSourceInstanceName);
	
	Linux_SambaShareOptionsInstanceName shareInstName;
	shareInstName.setNamespace(aNameSpaceP);
	shareInstName.setName(shares[i]);
	shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
	instName.setSettingData(shareInstName);
	
	manualInstance.setInstanceName(instName);
	aManualInstanceEnumeration.addElement(manualInstance);
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaShareForServiceResourceAccess::referencesManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
    Linux_SambaShareForServiceManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char ** shares = get_shares_list();
    if(shares) {
    int valid_share = false;
        for(int i=0;shares[i];i++) {
           if(strcasecmp(aSourceInstanceName.getName(),shares[i])==0)
                valid_share = true;
        }
        if(!valid_share) {
           throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist. The specified share is unknown!");
        }
    } else {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist!");
    }

    Linux_SambaShareForServiceManualInstance manualInstance;
    
    Linux_SambaShareForServiceInstanceName instName;
    instName.setNamespace(aNameSpaceP);
    instName.setSettingData(aSourceInstanceName);
    
    Linux_SambaServiceInstanceName elemInstanceName;
    elemInstanceName.setNamespace(aNameSpaceP);
    elemInstanceName.setName(DEFAULT_SERVICE_NAME);
    elemInstanceName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
    elemInstanceName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
    elemInstanceName.setSystemName(DEFAULT_SYSTEM_NAME);
    
    instName.setManagedElement(elemInstanceName);
    
    manualInstance.setInstanceName(instName);
    aManualInstanceEnumeration.addElement(manualInstance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaShareForServiceResourceAccess::associatorsSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaServiceInstanceName& aSourceInstanceName,
    Linux_SambaShareOptionsInstanceEnumeration& anInstanceEnumeration) {
   
    
    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_SERVICE_NAME)!=0) {
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }
 
    char ** shares = get_shares_list();
    
    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaShareOptionsInstance instance;
	
	Linux_SambaShareOptionsInstanceName shareInstName;
	shareInstName.setNamespace(aNameSpaceP);
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
	
	anInstanceEnumeration.addElement(instance);
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaShareForServiceResourceAccess::associatorsManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
    Linux_SambaServiceInstanceEnumeration& anInstanceEnumeration) {
    
    char ** shares = get_shares_list();
    if(shares) {
    int valid_share = false;
        for(int i=0;shares[i];i++) {
           if(strcasecmp(aSourceInstanceName.getName(),shares[i])==0)
                valid_share = true;
        }
        if(!valid_share) {
           throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist. The specified share is unknown!");
        }
    } else {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist!");
    }
    
    Linux_SambaServiceInstance instance;
    
    Linux_SambaServiceInstanceName elemInstanceName;
    elemInstanceName.setNamespace(aNameSpaceP);
    elemInstanceName.setName(DEFAULT_SERVICE_NAME);
    elemInstanceName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
    elemInstanceName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
    elemInstanceName.setSystemName(DEFAULT_SYSTEM_NAME);
    
    instance.setInstanceName(elemInstanceName);
    
    anInstanceEnumeration.addElement(instance);
  }

   
  
  // extrinsic methods

	
}


