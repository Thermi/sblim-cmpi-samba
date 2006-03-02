// =======================================================================
// Linux_SambaGlobalFileNameHandlingOptionsResourceAccess.cpp
//     created on Fri, 24 Feb 2006 using ECUTE
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
//                Rodrigo Ceron    <rceron@br.ibm.com>
//                Wolfgang Taphorn <taphorn@de.ibm.com>
//
// =======================================================================
//
// 
#include "Linux_SambaGlobalFileNameHandlingOptionsResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  //----------------------------------------------------------------------------
  // manual written methods

  static void setInstanceNameProperties(
      const char* aNameSpaceP, 
      Linux_SambaGlobalFileNameHandlingOptionsInstanceName& anInstanceName) {

    anInstanceName.setNamespace(aNameSpaceP);
    anInstanceName.setName(DEFAULT_GLOBAL_NAME);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  }


  //----------------------------------------------------------------------------


  static void setInstanceProperties(
      Linux_SambaGlobalFileNameHandlingOptionsManualInstance& aManualInstance) {

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

  //----------------------------------------------------------------------------


  //----------------------------------------------------------------------------
  //Linux_SambaGlobalFileNameHandlingOptionsResourceAccess::Linux_SambaGlobalFileNameHandlingOptionsResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaGlobalFileNameHandlingOptionsResourceAccess::~Linux_SambaGlobalFileNameHandlingOptionsResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalFileNameHandlingOptionsResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    Linux_SambaGlobalFileNameHandlingOptionsInstanceName instanceName;
    setInstanceNameProperties(aNameSpaceP,instanceName);
    anInstanceNameEnumeration.addElement(instanceName); 
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaGlobalFileNameHandlingOptionsResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    Linux_SambaGlobalFileNameHandlingOptionsManualInstance aManualInstance;
    Linux_SambaGlobalFileNameHandlingOptionsInstanceName instanceName;
    
    setInstanceNameProperties(aNameSpaceP,instanceName);
    aManualInstance.setInstanceName(instanceName);
    
    setInstanceProperties(aManualInstance);
    
    aManualInstanceEnumeration.addElement(aManualInstance);
  }

  
  //----------------------------------------------------------------------------

  Linux_SambaGlobalFileNameHandlingOptionsManualInstance 
  Linux_SambaGlobalFileNameHandlingOptionsResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& anInstanceName) {

    Linux_SambaGlobalFileNameHandlingOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);
    
    setInstanceProperties(aManualInstance);
    
    return aManualInstance;
  }

  //----------------------------------------------------------------------------

  void
  Linux_SambaGlobalFileNameHandlingOptionsResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaGlobalFileNameHandlingOptionsManualInstance& aManualInstance) {
    
    if ( aManualInstance.isCaseSensitiveSet() ) {
      if(aManualInstance.getCaseSensitive())  
	set_global_option(CASE_SENSITIVE,YES);
      else
	set_global_option(CASE_SENSITIVE,NO);
    }
    
    if ( aManualInstance.isDosFiletimesSet() ) {
      if(aManualInstance.getDosFiletimes())  
	set_global_option(DOS_FILETIMES,YES);
      else
	set_global_option(DOS_FILETIMES,NO);
    }
    
    if ( aManualInstance.isHideDotFilesSet() ) {
      if(aManualInstance.getHideDotFiles())  
	set_global_option(HIDE_DOT_FILES,YES);
      else
	set_global_option(HIDE_DOT_FILES,NO);
    }
  }
  
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaGlobalFileNameHandlingOptionsInstanceName
  Linux_SambaGlobalFileNameHandlingOptionsResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaGlobalFileNameHandlingOptionsManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaGlobalFileNameHandlingOptionsResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& anInstanceName) { }
	*/
	

  
  // extrinsic methods

	
}


