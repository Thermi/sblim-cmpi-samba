// =======================================================================
// Linux_SambaGlobalBrowseForGlobalResourceAccess.cpp
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
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
#include "Linux_SambaGlobalBrowseForGlobalResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  //----------------------------------------------------------------------------
  //Linux_SambaGlobalBrowseForGlobalResourceAccess::Linux_SambaGlobalBrowseForGlobalResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseForGlobalResourceAccess::~Linux_SambaGlobalBrowseForGlobalResourceAccess() {
    terminator();
  }
    
  // intrinsic methods
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalBrowseForGlobalResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration& anInstanceNameEnumeration) {
      
         Linux_SambaGlobalBrowseForGlobalInstanceName instName;
         instName.setNamespace(aNameSpaceP);

         Linux_SambaGlobalOptionsInstanceName globalInstName;
         globalInstName.setNamespace(aNameSpaceP);
         globalInstName.setName(DEFAULT_GLOBAL_NAME);
         globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);

         instName.setManagedElement(globalInstName);

         Linux_SambaGlobalBrowseOptionsInstanceName elemInstanceName;
         elemInstanceName.setNamespace(aNameSpaceP);
         elemInstanceName.setName(DEFAULT_GLOBAL_NAME);
         elemInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);

         instName.setSettingData(elemInstanceName);

         anInstanceNameEnumeration.addElement(instName);
  
  }
  
  
  //----------------------------------------------------------------------------
  
  void
  Linux_SambaGlobalBrowseForGlobalResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     const char** aPropertiesPP,
  	 Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {

         Linux_SambaGlobalBrowseForGlobalManualInstance manualInstance; 
         Linux_SambaGlobalBrowseForGlobalInstanceName instName;
         instName.setNamespace(aNameSpaceP);

         Linux_SambaGlobalOptionsInstanceName globalInstName;
         globalInstName.setNamespace(aNameSpaceP);
         globalInstName.setName(DEFAULT_GLOBAL_NAME);
         globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);

         instName.setManagedElement(globalInstName);

         Linux_SambaGlobalBrowseOptionsInstanceName elemInstanceName;
         elemInstanceName.setNamespace(aNameSpaceP);
         elemInstanceName.setName(DEFAULT_GLOBAL_NAME);
         elemInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);

         instName.setSettingData(elemInstanceName);

         manualInstance.setInstanceName(instName);
         aManualInstanceEnumeration.addElement(manualInstance);
  
  }
  
  
  //----------------------------------------------------------------------------
  
  Linux_SambaGlobalBrowseForGlobalManualInstance 
  Linux_SambaGlobalBrowseForGlobalResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaGlobalBrowseForGlobalInstanceName& anInstanceName) {

    Linux_SambaGlobalBrowseForGlobalManualInstance manualInstance;

  
    if(strcasecmp(anInstanceName.getSettingData().getName(),DEFAULT_GLOBAL_NAME)!=0 ||
       strcasecmp(anInstanceName.getSettingData().getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist. The specified GlobalBrowseOptions instance is unknown");
    }

    if (strcasecmp(anInstanceName.getManagedElement().getName(),DEFAULT_GLOBAL_NAME)!=0 ||
        strcasecmp(anInstanceName.getManagedElement().getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist. The specified GlobalOptions instance is unknown");
    }

    manualInstance.setInstanceName(anInstanceName);
    return manualInstance;
 }
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaGlobalBrowseForGlobalResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaGlobalBrowseForGlobalManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaGlobalBrowseForGlobalInstanceName
  Linux_SambaGlobalBrowseForGlobalResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaGlobalBrowseForGlobalManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaGlobalBrowseForGlobalResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaGlobalBrowseForGlobalInstanceName& anInstanceName) { }
	*/
	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaGlobalBrowseForGlobalResourceAccess::referencesSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {

    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME)!=0 ||
       strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }
    
    Linux_SambaGlobalBrowseForGlobalManualInstance manualInstance;
    
    Linux_SambaGlobalBrowseForGlobalInstanceName instName;
    instName.setNamespace(aNameSpaceP);
    instName.setManagedElement(aSourceInstanceName);
    
    Linux_SambaGlobalBrowseOptionsInstanceName secInstName;
    secInstName.setNamespace(aNameSpaceP);
    secInstName.setName(aSourceInstanceName.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
    instName.setSettingData(secInstName);
    
    manualInstance.setInstanceName(instName);
    aManualInstanceEnumeration.addElement(manualInstance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaGlobalBrowseForGlobalResourceAccess::referencesManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalBrowseOptionsInstanceName& aSourceInstanceName,
    Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {

    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME)!=0 ||
       strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }
    
    Linux_SambaGlobalBrowseForGlobalManualInstance manualInstance;
    
    Linux_SambaGlobalBrowseForGlobalInstanceName instName;
    instName.setNamespace(aNameSpaceP);
    instName.setSettingData(aSourceInstanceName);
    
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(aNameSpaceP);
    globalInstName.setName(aSourceInstanceName.getName());
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instName.setManagedElement(globalInstName);
    
    manualInstance.setInstanceName(instName);
    aManualInstanceEnumeration.addElement(manualInstance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaGlobalBrowseForGlobalResourceAccess::associatorsSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaGlobalBrowseOptionsInstanceEnumeration& anInstanceEnumeration) {

    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME)!=0 ||
       strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }
    
    Linux_SambaGlobalBrowseOptionsInstance instance;
    
    Linux_SambaGlobalBrowseOptionsInstanceName secInstName;
    secInstName.setNamespace(aNameSpaceP);
    secInstName.setName(aSourceInstanceName.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(secInstName);
    
    char *option;
     option = get_global_option(BROWSEABLE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setBrowsable( true );
      else
	instance.setBrowsable( false );

    option = get_global_option(DOMAIN_MASTER);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setDomainMaster( 1 );
      else
	if(strcasecmp(option,NO) == 0)
	  instance.setDomainMaster( 0 );
	else
	  instance.setDomainMaster( 2 );
    
    anInstanceEnumeration.addElement(instance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaGlobalBrowseForGlobalResourceAccess::associatorsManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalBrowseOptionsInstanceName& aSourceInstanceName,
    Linux_SambaGlobalOptionsInstanceEnumeration& anInstanceEnumeration) {

    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME)!=0 ||
       strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }
    
        Linux_SambaGlobalOptionsInstance instance;
    
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(aNameSpaceP);
    globalInstName.setName(aSourceInstanceName.getName());
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(globalInstName);

    char *option;
    option = get_global_option(BIND_INTERFACES_ONLY);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setBindInterfacesOnly( true );
      else
	instance.setBindInterfacesOnly( false );

    option = get_global_option(INTERFACES);	
    if ( option )
      instance.setInterfaces( option );
    
    option = get_global_option(NETBIOS_ALIASES);	
    if ( option )
      instance.setNetbiosAlias( option );

    option = get_global_option(NETBIOS_NAME);	
    if ( option )
      instance.setNetbiosName( option );
    
    option = get_global_option(SERVER_STRING);	
    if ( option )
      instance.setServerString( option );
    
    option = get_global_option(WORKGROUP);	
    if ( option )
      instance.setWorkgroup( option );
    	
    
    anInstanceEnumeration.addElement(instance);
  }

   
  
  // extrinsic methods

	
}


