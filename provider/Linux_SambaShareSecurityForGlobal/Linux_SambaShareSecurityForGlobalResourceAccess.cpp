// =======================================================================
// Linux_SambaShareSecurityForGlobalResourceAccess.cpp
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
#include "Linux_SambaShareSecurityForGlobalResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  //----------------------------------------------------------------------------
  //Linux_SambaShareSecurityForGlobalResourceAccess::Linux_SambaShareSecurityForGlobalResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaShareSecurityForGlobalResourceAccess::~Linux_SambaShareSecurityForGlobalResourceAccess() {
    terminator();
  }
    
  // intrinsic methods
  /*
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareSecurityForGlobalResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaShareSecurityForGlobalInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    int instanceNameN = 1;
    for (int x=0; x < instanceNameN; ++x) {
      
      //place here the code retrieving your instanceName
      
      Linux_SambaShareSecurityForGlobalInstanceName instanceName;
      
    }      
  
  }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaShareSecurityForGlobalResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     const char** aPropertiesPP,
  	 Linux_SambaShareSecurityForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaShareSecurityForGlobalManualInstance 
  Linux_SambaShareSecurityForGlobalResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaShareSecurityForGlobalInstanceName& anInstanceName) {

    Linux_SambaShareSecurityForGlobalManualInstance manualInstance;

  
  }
  */
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaShareSecurityForGlobalResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaShareSecurityForGlobalManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaShareSecurityForGlobalInstanceName
  Linux_SambaShareSecurityForGlobalResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaShareSecurityForGlobalManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaShareSecurityForGlobalResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaShareSecurityForGlobalInstanceName& anInstanceName) { }
	*/
	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaShareSecurityForGlobalResourceAccess::referencesSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaShareSecurityForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {

    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME)!=0) {
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }
    
    Linux_SambaShareSecurityForGlobalManualInstance manualInstance;
    
    Linux_SambaShareSecurityForGlobalInstanceName instName;
    instName.setNamespace(aNameSpaceP);
    instName.setManagedElement(aSourceInstanceName);
    
    Linux_SambaShareSecurityOptionsInstanceName secInstName;
    secInstName.setNamespace(aNameSpaceP);
    secInstName.setName(DEFAULT_GLOBAL_NAME);
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instName.setSettingData(secInstName);
    
    manualInstance.setInstanceName(instName);
    aManualInstanceEnumeration.addElement(manualInstance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaShareSecurityForGlobalResourceAccess::referencesManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareSecurityOptionsInstanceName& aSourceInstanceName,
    Linux_SambaShareSecurityForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    if(!service_exists(aSourceInstanceName.getName())) {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }

    Linux_SambaShareSecurityForGlobalManualInstance manualInstance;
    
    Linux_SambaShareSecurityForGlobalInstanceName instName;
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

  void Linux_SambaShareSecurityForGlobalResourceAccess::associatorsSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaShareSecurityOptionsInstanceEnumeration& anInstanceEnumeration) {
    
    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME)!=0) {
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }

    Linux_SambaShareSecurityOptionsInstance instance;
    
    Linux_SambaShareSecurityOptionsInstanceName secInstName;
    secInstName.setNamespace(aNameSpaceP);
    secInstName.setName(DEFAULT_GLOBAL_NAME);
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(secInstName);
    char *option;
    
    option = get_option(aSourceInstanceName.getName(),CREATE_MASK);	
    if ( option )
      instance.setCreateMask( atoi(option) );
    
    option = get_option(aSourceInstanceName.getName(),DIRECTORY_MASK);	
    if ( option )
      instance.setDirectoryMask( atoi(option) );
    
    option = get_option(aSourceInstanceName.getName(),DIRECTORY_SECURITY_MASK);	
    if ( option )
      instance.setDirectorySecurityMask( atoi(option) );
    
    anInstanceEnumeration.addElement(instance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaShareSecurityForGlobalResourceAccess::associatorsManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareSecurityOptionsInstanceName& aSourceInstanceName,
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


