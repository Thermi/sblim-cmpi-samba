// =======================================================================
// Linux_SambaScriptingOptionsResourceAccess.cpp
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
#include "Linux_SambaScriptingOptionsResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  
  //----------------------------------------------------------------------------
  // manual written methods
  
  static void setInstanceNameProperties(
      const char* aNameSpaceP, 
      Linux_SambaScriptingOptionsInstanceName& anInstanceName) {
    
    anInstanceName.setNamespace(aNameSpaceP);
    anInstanceName.setName(DEFAULT_GLOBAL_NAME);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  }

  static void setInstanceProperties(
      Linux_SambaScriptingOptionsManualInstance& aManualInstance) {
    
    char *option;
    
    option = get_global_option(ADD_GROUP_SCRIPT);	
    if ( option )
      aManualInstance.setaddGroupScript(option);
    
    option = get_global_option(ADD_PRINTER_COMMAND);	
    if ( option )
      aManualInstance.setaddPrinterCommand(option);
    
    option = get_global_option(ADD_SHARE_COMMAND);	
    if ( option )
      aManualInstance.setaddShareCommand(option);
    
    option = get_global_option(ADD_USER_SCRIPT);	
    if ( option )
      aManualInstance.setaddUserScript(option);
    
    option = get_global_option(ADD_USER_TO_GROUP_SCRIPT);	
    if ( option )
      aManualInstance.setaddUsertoGroupScript(option);
    
    option = get_global_option(DELETE_GROUP_SCRIPT);	
    if ( option )
      aManualInstance.setdeleteGrouprScript(option);
    
    option = get_global_option(DELETE_USER_SCRIPT);	
    if ( option )
      aManualInstance.setdeleteUserScript(option);
    
    option = get_global_option(DELETE_USER_FROM_GROUP_SCRIPT);	
    if ( option )
      aManualInstance.setdeleteUserfromGroupScript(option);
  }
  
  //----------------------------------------------------------------------------

  
  
  //----------------------------------------------------------------------------
  //Linux_SambaScriptingOptionsResourceAccess::Linux_SambaScriptingOptionsResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaScriptingOptionsResourceAccess::~Linux_SambaScriptingOptionsResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaScriptingOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    Linux_SambaScriptingOptionsInstanceName instanceName;
    setInstanceNameProperties(aNameSpaceP,instanceName);
    
    anInstanceNameEnumeration.addElement(instanceName); 
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaScriptingOptionsResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaScriptingOptionsManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    Linux_SambaScriptingOptionsManualInstance aManualInstance;
    Linux_SambaScriptingOptionsInstanceName instanceName;
    
    setInstanceNameProperties(aNameSpaceP,instanceName);
    aManualInstance.setInstanceName(instanceName);
    
    setInstanceProperties(aManualInstance);
    
    aManualInstanceEnumeration.addElement(aManualInstance);
  }

  
  //----------------------------------------------------------------------------

  Linux_SambaScriptingOptionsManualInstance 
  Linux_SambaScriptingOptionsResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaScriptingOptionsInstanceName& anInstanceName) {

    if (strcasecmp(DEFAULT_GLOBAL_NAME,anInstanceName.getName())!=0 ||
        strcasecmp(DEFAULT_INSTANCE_ID,anInstanceName.getInstanceID())!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }

    Linux_SambaScriptingOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);
    
    setInstanceProperties(aManualInstance);
    
    return aManualInstance;
  }

  //----------------------------------------------------------------------------

  void
  Linux_SambaScriptingOptionsResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaScriptingOptionsManualInstance& aManualInstance) {
    
    if (strcasecmp(DEFAULT_GLOBAL_NAME,aManualInstance.getInstanceName().getName())!=0 ||
        strcasecmp(DEFAULT_INSTANCE_ID,aManualInstance.getInstanceName().getInstanceID())!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }

    if (aManualInstance.isaddGroupScriptSet())
      set_global_option(ADD_GROUP_SCRIPT,aManualInstance.getaddGroupScript());	
    
    if ( aManualInstance.isaddPrinterCommandSet())
      set_global_option(ADD_PRINTER_COMMAND, aManualInstance.getaddPrinterCommand());	
    
    if (aManualInstance.isaddShareCommandSet())    
      set_global_option(ADD_SHARE_COMMAND,aManualInstance.getaddShareCommand());	
    
    if (aManualInstance.isaddUserScriptSet())
      set_global_option(ADD_USER_SCRIPT,aManualInstance.getaddUserScript());	
   	
    if (aManualInstance.isaddUsertoGroupScriptSet())
      set_global_option(ADD_USER_TO_GROUP_SCRIPT,aManualInstance.getaddUsertoGroupScript());
    
    if (aManualInstance.isdeleteGrouprScriptSet())
      set_global_option(DELETE_GROUP_SCRIPT,aManualInstance.getdeleteGrouprScript());	
    
    if(aManualInstance.isdeleteUserScriptSet())
      set_global_option(DELETE_USER_SCRIPT,aManualInstance.getdeleteUserScript());	
    
    if(aManualInstance.isdeleteUserfromGroupScriptSet())
      set_global_option(DELETE_USER_FROM_GROUP_SCRIPT,aManualInstance.getdeleteUserfromGroupScript());
  }

  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaScriptingOptionsInstanceName
  Linux_SambaScriptingOptionsResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaScriptingOptionsManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaScriptingOptionsResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaScriptingOptionsInstanceName& anInstanceName) { }
	*/
	

  
  // extrinsic methods

	
}


