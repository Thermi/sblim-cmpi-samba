// =======================================================================
// Linux_SambaShareOptionsResourceAccess.cpp
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
#include "Linux_SambaShareOptionsResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {


  //----------------------------------------------------------------------------
  // manual written methods

  static void setInstanceNameProperties(
      const char* aNameSpaceP,
      char *instanceName,
      Linux_SambaShareOptionsInstanceName& anInstanceName) {
    
    anInstanceName.setNamespace(aNameSpaceP);
    anInstanceName.setName(instanceName);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  };
  
  
  //----------------------------------------------------------------------------
  
  
  static void setInstanceProperties(
      Linux_SambaShareOptionsManualInstance& aManualInstance) {

    char *option;
    
    option = get_option(aManualInstance.getInstanceName().getName(),AVAILABLE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setAvailable( true );
      else
	aManualInstance.setAvailable( false );

    option = get_option(aManualInstance.getInstanceName().getName(),COMMENT);
    if ( option )
      aManualInstance.setComment(option);

    option = get_option(aManualInstance.getInstanceName().getName(),PATH);
    if ( option )
      aManualInstance.setPath(option);

    option = get_option(aManualInstance.getInstanceName().getName(),PRINTABLE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setPrintable( true );
      else
	aManualInstance.setPrintable( false );
  }; 
  
  //----------------------------------------------------------------------------


  static void setRAProperties(
      Linux_SambaShareOptionsManualInstance aManualInstance) {
    
    if ( aManualInstance.isAvailableSet() )
      {
	if(aManualInstance.getAvailable())  
	  set_share_option(aManualInstance.getInstanceName().getName(),AVAILABLE,YES);
	else
	  set_share_option(aManualInstance.getInstanceName().getName(),AVAILABLE,NO);
      }

    if ( aManualInstance.isCommentSet() )
      set_share_option(aManualInstance.getInstanceName().getName(),COMMENT,aManualInstance.getComment());

    if ( aManualInstance.isPathSet() )
      set_share_option(aManualInstance.getInstanceName().getName(),PATH,aManualInstance.getPath());
    
    // If you are managing an instance of a share, the printable attribute must be 'no'
    set_printer_option(aManualInstance.getInstanceName().getName(),PRINTABLE,NO);
  };

  //----------------------------------------------------------------------------


  //----------------------------------------------------------------------------
  //Linux_SambaShareOptionsResourceAccess::Linux_SambaShareOptionsResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaShareOptionsResourceAccess::~Linux_SambaShareOptionsResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareOptionsResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaShareOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    char ** shares = get_shares_list();
    
    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaShareOptionsInstanceName instanceName;
	setInstanceNameProperties(aNameSpaceP,shares[i],instanceName);
	anInstanceNameEnumeration.addElement(instanceName); 
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaShareOptionsResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaShareOptionsManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char ** shares = get_shares_list();

    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaShareOptionsManualInstance aManualInstance;
	Linux_SambaShareOptionsInstanceName instanceName;
	
	setInstanceNameProperties(aNameSpaceP,shares[i],instanceName);
	aManualInstance.setInstanceName(instanceName);
	
	setInstanceProperties(aManualInstance);
	
	aManualInstanceEnumeration.addElement(aManualInstance);
      }
    }
  }

  
  //----------------------------------------------------------------------------

  Linux_SambaShareOptionsManualInstance 
  Linux_SambaShareOptionsResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaShareOptionsInstanceName& anInstanceName) {

    Linux_SambaShareOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);
    
    if (!service_exists(aManualInstance.getInstanceName().getName())) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }
    
    char* option = get_option(aManualInstance.getInstanceName().getName(),PRINTABLE);
    if ( option )
      if(strcasecmp(option,YES) == 0)
        throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The specified instance is not a valid share.");

    setInstanceProperties(aManualInstance);
    
    return aManualInstance; 
  }

  //----------------------------------------------------------------------------

  void
  Linux_SambaShareOptionsResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaShareOptionsManualInstance& aManualInstance) {
    
    if (!service_exists(aManualInstance.getInstanceName().getName())) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }

    if(aManualInstance.isPrintableSet() && aManualInstance.getPrintable())
        throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The specified instance is not a valid share.");

    setRAProperties(aManualInstance);
  }

  
  //----------------------------------------------------------------------------

  Linux_SambaShareOptionsInstanceName
  Linux_SambaShareOptionsResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaShareOptionsManualInstance& aManualInstance) {
    
    if(!service_exists(aManualInstance.getInstanceName().getName())){
      if(!add_share(aManualInstance.getInstanceName().getName()))
	setRAProperties(aManualInstance);
      else
	throw CmpiStatus(CMPI_RC_ERR_FAILED,"Instance could not be created!");

    } else
      throw CmpiStatus(CMPI_RC_ERR_ALREADY_EXISTS,"Instance already exists!");

    return aManualInstance.getInstanceName();
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaShareOptionsResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaShareOptionsInstanceName& anInstanceName) {
    
    if(service_exists(anInstanceName.getName())){
      if(delete_share(anInstanceName.getName())) 
	throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Instance could not be deleted!");
      
    } else
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
  }

	

  
  // extrinsic methods

	
}


