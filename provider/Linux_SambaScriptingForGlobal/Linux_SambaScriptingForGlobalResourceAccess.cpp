// =======================================================================
// Linux_SambaScriptingForGlobalResourceAccess.cpp
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
#include "Linux_SambaScriptingForGlobalResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  //----------------------------------------------------------------------------
  //Linux_SambaScriptingForGlobalResourceAccess::Linux_SambaScriptingForGlobalResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaScriptingForGlobalResourceAccess::~Linux_SambaScriptingForGlobalResourceAccess() {
    terminator();
  }
    
  // intrinsic methods
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingForGlobalResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaScriptingForGlobalInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    Linux_SambaScriptingForGlobalInstanceName instName;
    instName.setNamespace(aNameSpaceP);

    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(aNameSpaceP);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);

    instName.setManagedElement(globalInstName);

    Linux_SambaScriptingOptionsInstanceName elemInstanceName;
    elemInstanceName.setNamespace(aNameSpaceP);
    elemInstanceName.setName(DEFAULT_GLOBAL_NAME);
    elemInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);

    instName.setSettingData(elemInstanceName);

    anInstanceNameEnumeration.addElement(instName);
  
  }
  
  
  //----------------------------------------------------------------------------
  
  void
  Linux_SambaScriptingForGlobalResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     const char** aPropertiesPP,
  	 Linux_SambaScriptingForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {

    Linux_SambaScriptingForGlobalManualInstance manualInstance;

    Linux_SambaScriptingForGlobalInstanceName instName;
    instName.setNamespace(aNameSpaceP);

    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(aNameSpaceP);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);

    instName.setManagedElement(globalInstName);

    Linux_SambaScriptingOptionsInstanceName elemInstanceName;
    elemInstanceName.setNamespace(aNameSpaceP);
    elemInstanceName.setName(DEFAULT_GLOBAL_NAME);
    elemInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);

    instName.setSettingData(elemInstanceName);

    manualInstance.setInstanceName(instName);
    aManualInstanceEnumeration.addElement(manualInstance);


  }
  
  
  //----------------------------------------------------------------------------
  
  Linux_SambaScriptingForGlobalManualInstance 
  Linux_SambaScriptingForGlobalResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaScriptingForGlobalInstanceName& anInstanceName) {

    Linux_SambaScriptingForGlobalManualInstance manualInstance;

    if (strcasecmp(anInstanceName.getSettingData().getName(),DEFAULT_GLOBAL_NAME)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist. The specified ScriptingOptions instance is unknown");
    }

    if (strcasecmp(anInstanceName.getManagedElement().getName(),DEFAULT_GLOBAL_NAME)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist. The specified GlobalOptions instance is unknown");
    }

    manualInstance.setInstanceName(anInstanceName);
    return manualInstance;
  
  }
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaScriptingForGlobalResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaScriptingForGlobalManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaScriptingForGlobalInstanceName
  Linux_SambaScriptingForGlobalResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaScriptingForGlobalManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaScriptingForGlobalResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaScriptingForGlobalInstanceName& anInstanceName) { }
	*/
	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaScriptingForGlobalResourceAccess::referencesManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaScriptingOptionsInstanceName& aSourceInstanceName,
    Linux_SambaScriptingForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME)!=0) {
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }

    Linux_SambaScriptingForGlobalManualInstance manualInstance;
    
    Linux_SambaScriptingForGlobalInstanceName instName;
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

  void Linux_SambaScriptingForGlobalResourceAccess::referencesSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaScriptingForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {

    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME)!=0) {
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }
    
    Linux_SambaScriptingForGlobalManualInstance manualInstance;
    
    Linux_SambaScriptingForGlobalInstanceName instName;
    instName.setNamespace(aNameSpaceP);
    instName.setManagedElement(aSourceInstanceName);
    
    Linux_SambaScriptingOptionsInstanceName secInstName;
    secInstName.setNamespace(aNameSpaceP);
    secInstName.setName(aSourceInstanceName.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
    instName.setSettingData(secInstName);
    
    manualInstance.setInstanceName(instName);
    aManualInstanceEnumeration.addElement(manualInstance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaScriptingForGlobalResourceAccess::associatorsManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaScriptingOptionsInstanceName& aSourceInstanceName,
    Linux_SambaGlobalOptionsInstanceEnumeration& anInstanceEnumeration) {

    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME)!=0) {
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

  
  //----------------------------------------------------------------------------

  void Linux_SambaScriptingForGlobalResourceAccess::associatorsSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaScriptingOptionsInstanceEnumeration& anInstanceEnumeration) {

    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME)!=0) {
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }
    
    Linux_SambaScriptingOptionsInstance instance;
    
    Linux_SambaScriptingOptionsInstanceName secInstName;
    secInstName.setNamespace(aNameSpaceP);
    secInstName.setName(aSourceInstanceName.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(secInstName);
    
    char *option;
    option = get_global_option(ADD_GROUP_SCRIPT);	
    if ( option )
      instance.setaddGroupScript(option);
    
    option = get_global_option(ADD_PRINTER_COMMAND);	
    if ( option )
      instance.setaddPrinterCommand(option);
    
    option = get_global_option(ADD_SHARE_COMMAND);	
    if ( option )
      instance.setaddShareCommand(option);
    
    option = get_global_option(ADD_USER_SCRIPT);	
    if ( option )
      instance.setaddUserScript(option);
    
    option = get_global_option(ADD_USER_TO_GROUP_SCRIPT);	
    if ( option )
      instance.setaddUsertoGroupScript(option);
    
    option = get_global_option(DELETE_GROUP_SCRIPT);	
    if ( option )
      instance.setdeleteGrouprScript(option);
    
    option = get_global_option(DELETE_USER_SCRIPT);	
    if ( option )
      instance.setdeleteUserScript(option);
    
    option = get_global_option(DELETE_USER_FROM_GROUP_SCRIPT);	
    if ( option )
      instance.setdeleteUserfromGroupScript(option);
    
    anInstanceEnumeration.addElement(instance);
  }

   
  
  // extrinsic methods

	
}


