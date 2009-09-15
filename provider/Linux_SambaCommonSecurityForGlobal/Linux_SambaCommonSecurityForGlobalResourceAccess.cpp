// =======================================================================
// Linux_SambaCommonSecurityForGlobalResourceAccess.cpp
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
#include "Linux_SambaCommonSecurityForGlobalResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  //----------------------------------------------------------------------------
  //Linux_SambaCommonSecurityForGlobalResourceAccess::Linux_SambaCommonSecurityForGlobalResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityForGlobalResourceAccess::~Linux_SambaCommonSecurityForGlobalResourceAccess() {
    terminator();
  }
    
  // intrinsic methods
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaCommonSecurityForGlobalResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    Linux_SambaCommonSecurityForGlobalInstanceName instName;
    instName.setNamespace(aNameSpaceP);

    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(aNameSpaceP);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);

    instName.setManagedElement(globalInstName);
       
    Linux_SambaCommonSecurityOptionsInstanceName elemInstanceName;
    elemInstanceName.setNamespace(aNameSpaceP);
    elemInstanceName.setName(DEFAULT_GLOBAL_NAME);
    elemInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);

    instName.setSettingData(elemInstanceName);

    anInstanceNameEnumeration.addElement(instName);

  }
  
  
  //----------------------------------------------------------------------------
  
  void
  Linux_SambaCommonSecurityForGlobalResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     const char** aPropertiesPP,
  	 Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) { 


    Linux_SambaCommonSecurityForGlobalManualInstance manualInstance;
    
    Linux_SambaCommonSecurityForGlobalInstanceName instName;
    instName.setNamespace(aNameSpaceP);

    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(aNameSpaceP);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);

    instName.setManagedElement(globalInstName);
       
    Linux_SambaCommonSecurityOptionsInstanceName elemInstanceName;
    elemInstanceName.setNamespace(aNameSpaceP);
    elemInstanceName.setName(DEFAULT_GLOBAL_NAME);
    elemInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);

    instName.setSettingData(elemInstanceName);

    manualInstance.setInstanceName(instName);
    aManualInstanceEnumeration.addElement(manualInstance);
    
  }
  
  
  //----------------------------------------------------------------------------
  
  Linux_SambaCommonSecurityForGlobalManualInstance 
  Linux_SambaCommonSecurityForGlobalResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaCommonSecurityForGlobalInstanceName& anInstanceName) {

    Linux_SambaCommonSecurityForGlobalManualInstance manualInstance;
    
    if (strcasecmp(anInstanceName.getSettingData().getName(),DEFAULT_GLOBAL_NAME)!=0 ||
        strcasecmp(anInstanceName.getSettingData().getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist. The specified CommonSecurityOptions instance is unknown");
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
  Linux_SambaCommonSecurityForGlobalResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaCommonSecurityForGlobalManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaCommonSecurityForGlobalInstanceName
  Linux_SambaCommonSecurityForGlobalResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaCommonSecurityForGlobalManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaCommonSecurityForGlobalResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaCommonSecurityForGlobalInstanceName& anInstanceName) { }
	*/
	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaCommonSecurityForGlobalResourceAccess::referencesSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {

    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME)!=0 ||
       strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }
    
    Linux_SambaCommonSecurityForGlobalManualInstance manualInstance;
    
    Linux_SambaCommonSecurityForGlobalInstanceName instName;
    instName.setNamespace(aNameSpaceP);
    instName.setManagedElement(aSourceInstanceName);
    
    Linux_SambaCommonSecurityOptionsInstanceName secInstName;
    secInstName.setNamespace(aNameSpaceP);
    secInstName.setName(DEFAULT_GLOBAL_NAME);
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instName.setSettingData(secInstName);
    
    manualInstance.setInstanceName(instName);
    aManualInstanceEnumeration.addElement(manualInstance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaCommonSecurityForGlobalResourceAccess::referencesManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaCommonSecurityOptionsInstanceName& aSourceInstanceName,
    Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {

    if(!service_exists(aSourceInstanceName.getName())) {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }
    
    Linux_SambaCommonSecurityForGlobalManualInstance manualInstance;
    
    Linux_SambaCommonSecurityForGlobalInstanceName instName;
    instName.setNamespace(aNameSpaceP);
    instName.setSettingData(aSourceInstanceName);
    
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(aNameSpaceP);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instName.setManagedElement(globalInstName);
    
    manualInstance.setInstanceName(instName);
    aManualInstanceEnumeration.addElement(manualInstance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaCommonSecurityForGlobalResourceAccess::associatorsSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaCommonSecurityOptionsInstanceEnumeration& anInstanceEnumeration) {

    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME)!=0 ||
       strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }
    
    Linux_SambaCommonSecurityOptionsInstance instance;
    
    Linux_SambaCommonSecurityOptionsInstanceName secInstName;
    secInstName.setNamespace(aNameSpaceP);
    secInstName.setName(DEFAULT_GLOBAL_NAME);
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(secInstName);
    char *option;
    
    option = get_global_option(GUEST_OK);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setGuestOK( true );
      else
	instance.setGuestOK( false );
    
    option = get_global_option(GUEST_ONLY);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setGuestOnly( true );
      else
	instance.setGuestOnly( false );
    
    option = get_global_option(HOSTS_ALLOW);	
    if ( option )
      instance.setHostsAllow( option );
    
    option = get_global_option(HOSTS_DENY);	
    if ( option )
      instance.setHostsDeny( option );
    
    option = get_global_option(READ_ONLY);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setReadOnly( true );
      else
	instance.setReadOnly( false );
    
    anInstanceEnumeration.addElement(instance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaCommonSecurityForGlobalResourceAccess::associatorsManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaCommonSecurityOptionsInstanceName& aSourceInstanceName,
    Linux_SambaGlobalOptionsInstanceEnumeration& anInstanceEnumeration) {

    if(!service_exists(aSourceInstanceName.getName())) {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }
    
    Linux_SambaGlobalOptionsInstance instance;
    Linux_SambaGlobalOptionsInstanceName globalInstName;

    globalInstName.setNamespace(aNameSpaceP);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
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


