// =======================================================================
// Linux_SambaShareProtocolForShareResourceAccess.cpp
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
#include "Linux_SambaShareProtocolForShareResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  //----------------------------------------------------------------------------
  //Linux_SambaShareProtocolForShareResourceAccess::Linux_SambaShareProtocolForShareResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaShareProtocolForShareResourceAccess::~Linux_SambaShareProtocolForShareResourceAccess() {
    terminator();
  }
    
  // intrinsic methods
  /*
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareProtocolForShareResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaShareProtocolForShareInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    int instanceNameN = 1;
    for (int x=0; x < instanceNameN; ++x) {
      
      //place here the code retrieving your instanceName
      
      Linux_SambaShareProtocolForShareInstanceName instanceName;
      
    }      
  
  }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaShareProtocolForShareResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     const char** aPropertiesPP,
  	 Linux_SambaShareProtocolForShareManualInstanceEnumeration& aManualInstanceEnumeration) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaShareProtocolForShareManualInstance 
  Linux_SambaShareProtocolForShareResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaShareProtocolForShareInstanceName& anInstanceName) {

    Linux_SambaShareProtocolForShareManualInstance manualInstance;

  
  }
  */
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaShareProtocolForShareResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaShareProtocolForShareManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaShareProtocolForShareInstanceName
  Linux_SambaShareProtocolForShareResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaShareProtocolForShareManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaShareProtocolForShareResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaShareProtocolForShareInstanceName& anInstanceName) { }
	*/
	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaShareProtocolForShareResourceAccess::referencesManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareProtocolOptionsInstanceName& aSourceInstanceName,
    Linux_SambaShareProtocolForShareManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    Linux_SambaShareProtocolForShareManualInstance manualInstance;
    
    Linux_SambaShareProtocolForShareInstanceName instName;
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

  void Linux_SambaShareProtocolForShareResourceAccess::referencesSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
    Linux_SambaShareProtocolForShareManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    Linux_SambaShareProtocolForShareManualInstance manualInstance;
    
    Linux_SambaShareProtocolForShareInstanceName instName;
    instName.setNamespace(aNameSpaceP);
    instName.setManagedElement(aSourceInstanceName);
    
    Linux_SambaShareProtocolOptionsInstanceName secInstName;
    secInstName.setNamespace(aNameSpaceP);
    secInstName.setName(aSourceInstanceName.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
    instName.setSettingData(secInstName);
    
    manualInstance.setInstanceName(instName);
    aManualInstanceEnumeration.addElement(manualInstance);    
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaShareProtocolForShareResourceAccess::associatorsManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareProtocolOptionsInstanceName& aSourceInstanceName,
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

  
  //----------------------------------------------------------------------------

  void Linux_SambaShareProtocolForShareResourceAccess::associatorsSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
    Linux_SambaShareProtocolOptionsInstanceEnumeration& anInstanceEnumeration) {
    
    Linux_SambaShareProtocolOptionsInstance instance;
    
    Linux_SambaShareProtocolOptionsInstanceName secInstName;
    secInstName.setNamespace(aNameSpaceP);
    secInstName.setName(aSourceInstanceName.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(secInstName);
    char *option;
    
    option = get_option(aSourceInstanceName.getName(),ACL_COMPATIBILITY);	
    if ( option )
      if(strcasecmp(option,"Auto") == 0)
	instance.setAclCompatibility( 0 );
      else 
	if(strcasecmp(option,"winnt") == 0)
	  instance.setAclCompatibility( 1 );
	else 
	  if(strcasecmp(option,"win2k") == 0)
	    instance.setAclCompatibility( 2 );
    
    option = get_option(aSourceInstanceName.getName(),EA_SUPPORT);
    if( option )
      if(strcasecmp(option,YES) == 0)
	instance.setEASupport( true );
      else
	instance.setEASupport( false );
    
    option = get_option(aSourceInstanceName.getName(),NT_ACL_SUPPORT);
    if( option )
      if(strcasecmp(option,YES) == 0)
	instance.setNTACLSupport( true );
      else
	instance.setNTACLSupport( false );
    
    anInstanceEnumeration.addElement(instance);
  }

   
  
  // extrinsic methods

	
}


