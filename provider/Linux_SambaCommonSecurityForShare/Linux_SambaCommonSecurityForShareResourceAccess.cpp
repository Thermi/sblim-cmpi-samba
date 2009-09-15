// =======================================================================
// Linux_SambaCommonSecurityForShareResourceAccess.cpp
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
#include "Linux_SambaCommonSecurityForShareResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  //----------------------------------------------------------------------------
  //Linux_SambaCommonSecurityForShareResourceAccess::Linux_SambaCommonSecurityForShareResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityForShareResourceAccess::~Linux_SambaCommonSecurityForShareResourceAccess() {
    terminator();
  }
    
  // intrinsic methods
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaCommonSecurityForShareResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaCommonSecurityForShareInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    char ** shares = get_shares_list();

    if (shares) {
       for(int i =0; shares[i];i++) {

         Linux_SambaCommonSecurityForShareInstanceName instName;
         instName.setNamespace(aNameSpaceP);

         Linux_SambaShareOptionsInstanceName shareInstName;
         shareInstName.setNamespace(aNameSpaceP);
         shareInstName.setName(shares[i]);
         shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);

         instName.setManagedElement(shareInstName);

         Linux_SambaCommonSecurityOptionsInstanceName elemInstanceName;
         elemInstanceName.setNamespace(aNameSpaceP);
         elemInstanceName.setName(shares[i]);
         elemInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);

         instName.setSettingData(elemInstanceName);

         anInstanceNameEnumeration.addElement(instName);

       }
    }
  }
  //----------------------------------------------------------------------------
  
  void
  Linux_SambaCommonSecurityForShareResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     const char** aPropertiesPP,
  	 Linux_SambaCommonSecurityForShareManualInstanceEnumeration& aManualInstanceEnumeration) {

    char ** shares = get_shares_list();

    if (shares) {
       for(int i =0; shares[i];i++) {

         Linux_SambaCommonSecurityForShareManualInstance manualInstance;

         Linux_SambaCommonSecurityForShareInstanceName instName;
         instName.setNamespace(aNameSpaceP);

         Linux_SambaShareOptionsInstanceName shareInstName;
         shareInstName.setNamespace(aNameSpaceP);
         shareInstName.setName(shares[i]);
         shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);

         instName.setManagedElement(shareInstName);

         Linux_SambaCommonSecurityOptionsInstanceName elemInstanceName;
         elemInstanceName.setNamespace(aNameSpaceP);
         elemInstanceName.setName(shares[i]);
         elemInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);

         instName.setSettingData(elemInstanceName);

         manualInstance.setInstanceName(instName);
         aManualInstanceEnumeration.addElement(manualInstance);

       }
    }
   

  }
  
  
  //----------------------------------------------------------------------------
  
  Linux_SambaCommonSecurityForShareManualInstance 
  Linux_SambaCommonSecurityForShareResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaCommonSecurityForShareInstanceName& anInstanceName) {

    Linux_SambaCommonSecurityForShareManualInstance manualInstance;

    char ** shares = get_shares_list();
    if(shares) {
    int valid_share = false;
        for(int i=0;shares[i];i++) {
           if(strcasecmp(anInstanceName.getManagedElement().getName(),shares[i])==0 &&
              strcasecmp(anInstanceName.getManagedElement().getInstanceID(),DEFAULT_INSTANCE_ID)==0)
                valid_share = true;
        }
        if(!valid_share) {
           throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist. The specified ShareOptions instance is unknown!");
        }
    } else {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist!");
    }

    if (!service_exists(anInstanceName.getSettingData().getName()) ||
         strcasecmp(anInstanceName.getSettingData().getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist!");
    }

    manualInstance.setInstanceName(anInstanceName);
    return manualInstance;
  
  }
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaCommonSecurityForShareResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaCommonSecurityForShareManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaCommonSecurityForShareInstanceName
  Linux_SambaCommonSecurityForShareResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaCommonSecurityForShareManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaCommonSecurityForShareResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaCommonSecurityForShareInstanceName& anInstanceName) { }
	*/
	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaCommonSecurityForShareResourceAccess::referencesSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
    Linux_SambaCommonSecurityForShareManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char ** shares = get_shares_list();
    if(shares) {
    int valid_share = false;
        for(int i=0;shares[i];i++) {
           if(strcasecmp(aSourceInstanceName.getName(),shares[i])==0 &&
              strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)==0)
                valid_share = true;
        }
        if(!valid_share) {
           throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist. The specified share is unknown!");
        }
    } else {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist!");
    }   
 
    Linux_SambaCommonSecurityForShareManualInstance manualInstance;
    Linux_SambaCommonSecurityForShareInstanceName instName;
    
    instName.setNamespace(aNameSpaceP);
    instName.setManagedElement(aSourceInstanceName);
    
    Linux_SambaCommonSecurityOptionsInstanceName secInstName;
    secInstName.setNamespace(aNameSpaceP);
    secInstName.setName(aSourceInstanceName.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instName.setSettingData(secInstName);
    
    manualInstance.setInstanceName(instName);
    aManualInstanceEnumeration.addElement(manualInstance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaCommonSecurityForShareResourceAccess::referencesManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaCommonSecurityOptionsInstanceName& aSourceInstanceName,
    Linux_SambaCommonSecurityForShareManualInstanceEnumeration& aManualInstanceEnumeration) {

    if(!service_exists(aSourceInstanceName.getName()) ||
       strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }
 
    Linux_SambaCommonSecurityForShareManualInstance manualInstance;
    Linux_SambaCommonSecurityForShareInstanceName instName;
    
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

  void Linux_SambaCommonSecurityForShareResourceAccess::associatorsSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
    Linux_SambaCommonSecurityOptionsInstanceEnumeration& anInstanceEnumeration) {

    char ** shares = get_shares_list();
    if(shares) {
    int valid_share = false;
        for(int i=0;shares[i];i++) {
           if(strcasecmp(aSourceInstanceName.getName(),shares[i])==0 &&
              strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)==0)
                valid_share = true;
        }
        if(!valid_share) {
           throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist. The specified share is unknown!");
        }
    } else {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist!");
    }   
 
    Linux_SambaCommonSecurityOptionsInstance instance;
    
    Linux_SambaCommonSecurityOptionsInstanceName secInstName;
    secInstName.setNamespace(aNameSpaceP);
    secInstName.setName(aSourceInstanceName.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(secInstName);
    char *option;
    
    option = get_option(aSourceInstanceName.getName(),GUEST_OK);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setGuestOK( true );
      else
	instance.setGuestOK( false );

    option = get_option(aSourceInstanceName.getName(),GUEST_ONLY);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setGuestOnly( true );
      else
	instance.setGuestOnly( false );

    option = get_option(aSourceInstanceName.getName(),HOSTS_ALLOW);	
    if ( option )
      instance.setHostsAllow( option );

    option = get_option(aSourceInstanceName.getName(),HOSTS_DENY);	
    if ( option )
      instance.setHostsDeny( option );

    option = get_option(aSourceInstanceName.getName(),READ_ONLY);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setReadOnly( true );
      else
	instance.setReadOnly( false );
    
    anInstanceEnumeration.addElement(instance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaCommonSecurityForShareResourceAccess::associatorsManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaCommonSecurityOptionsInstanceName& aSourceInstanceName,
    Linux_SambaShareOptionsInstanceEnumeration& anInstanceEnumeration) {

    if(!service_exists(aSourceInstanceName.getName()) ||
       strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }  
 
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


