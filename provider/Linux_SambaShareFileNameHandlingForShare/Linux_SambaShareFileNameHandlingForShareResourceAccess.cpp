// =======================================================================
// Linux_SambaShareFileNameHandlingForShareResourceAccess.cpp
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
#include "Linux_SambaShareFileNameHandlingForShareResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  //----------------------------------------------------------------------------
  //Linux_SambaShareFileNameHandlingForShareResourceAccess::Linux_SambaShareFileNameHandlingForShareResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingForShareResourceAccess::~Linux_SambaShareFileNameHandlingForShareResourceAccess() {
    terminator();
  }
    
  // intrinsic methods
  /*
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareFileNameHandlingForShareResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    int instanceNameN = 1;
    for (int x=0; x < instanceNameN; ++x) {
      
      //place here the code retrieving your instanceName
      
      Linux_SambaShareFileNameHandlingForShareInstanceName instanceName;
      
    }      
  
  }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaShareFileNameHandlingForShareResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     const char** aPropertiesPP,
  	 Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration& aManualInstanceEnumeration) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaShareFileNameHandlingForShareManualInstance 
  Linux_SambaShareFileNameHandlingForShareResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaShareFileNameHandlingForShareInstanceName& anInstanceName) {

    Linux_SambaShareFileNameHandlingForShareManualInstance manualInstance;

  
  }
  */
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaShareFileNameHandlingForShareResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaShareFileNameHandlingForShareManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaShareFileNameHandlingForShareInstanceName
  Linux_SambaShareFileNameHandlingForShareResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaShareFileNameHandlingForShareManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaShareFileNameHandlingForShareResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaShareFileNameHandlingForShareInstanceName& anInstanceName) { }
	*/
	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaShareFileNameHandlingForShareResourceAccess::referencesSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
    Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    Linux_SambaShareFileNameHandlingForShareManualInstance manualInstance;
    
    Linux_SambaShareFileNameHandlingForShareInstanceName instName;
    instName.setNamespace(aNameSpaceP);
    instName.setManagedElement(aSourceInstanceName);
    
    Linux_SambaShareFileNameHandlingOptionsInstanceName secInstName;
    secInstName.setNamespace(aNameSpaceP);
    secInstName.setName(aSourceInstanceName.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instName.setSettingData(secInstName);
    
    manualInstance.setInstanceName(instName);
    aManualInstanceEnumeration.addElement(manualInstance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaShareFileNameHandlingForShareResourceAccess::referencesManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareFileNameHandlingOptionsInstanceName& aSourceInstanceName,
    Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    Linux_SambaShareFileNameHandlingForShareManualInstance manualInstance;
    
    Linux_SambaShareFileNameHandlingForShareInstanceName instName;
    instName.setNamespace(aNameSpaceP);
    instName.setSettingData(aSourceInstanceName);
    
    Linux_SambaShareOptionsInstanceName shareInstName;
    shareInstName.setNamespace(aNameSpaceP);
    shareInstName.setName(aSourceInstanceName.getName());
    shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instName.setManagedElement(shareInstName);
    
    manualInstance.setInstanceName(instName);
    aManualInstanceEnumeration.addElement(manualInstance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaShareFileNameHandlingForShareResourceAccess::associatorsSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
    Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration& anInstanceEnumeration) {
    
    Linux_SambaShareFileNameHandlingOptionsInstance instance;
    
    Linux_SambaShareFileNameHandlingOptionsInstanceName secInstName;
    secInstName.setNamespace(aNameSpaceP);
    secInstName.setName(aSourceInstanceName.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(secInstName);
    char *option;
    
    option = get_option(aSourceInstanceName.getName(),CASE_SENSITIVE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setCaseSensitive( true );
      else
	instance.setCaseSensitive( false );
    
    option = get_option(aSourceInstanceName.getName(),DOS_FILETIMES);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setDosFiletimes( true );
      else
	instance.setDosFiletimes( false );
    
    option = get_option(aSourceInstanceName.getName(),HIDE_DOT_FILES);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setHideDotFiles( true );
      else
	instance.setHideDotFiles( false );
    
    anInstanceEnumeration.addElement(instance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaShareFileNameHandlingForShareResourceAccess::associatorsManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareFileNameHandlingOptionsInstanceName& aSourceInstanceName,
    Linux_SambaShareOptionsInstanceEnumeration& anInstanceEnumeration) {
    
    Linux_SambaShareOptionsInstance instance;
    
    Linux_SambaShareOptionsInstanceName shareInstName;
    shareInstName.setNamespace(aNameSpaceP);
    shareInstName.setName(aSourceInstanceName.getName());
    shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(shareInstName);
    char *option;
    
    option = get_option(aSourceInstanceName.getName(),AVAILABLE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setAvailable( true );
      else
	instance.setAvailable( false );
    
    option = get_option(aSourceInstanceName.getName(),COMMENT);
    if ( option )
      instance.setComment(option);
    
    option = get_option(aSourceInstanceName.getName(),PATH);
    if ( option )
      instance.setPath(option);
    
    option = get_option(aSourceInstanceName.getName(),PRINTABLE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setPrintable( true );
      else
	instance.setPrintable( false );
    
    anInstanceEnumeration.addElement(instance);
  }

   
  
  // extrinsic methods

	
}


