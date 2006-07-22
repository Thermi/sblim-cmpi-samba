// =======================================================================
// Linux_SambaCommonSecurityForPrinterResourceAccess.cpp
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
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
#include "Linux_SambaCommonSecurityForPrinterResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  //----------------------------------------------------------------------------
  //Linux_SambaCommonSecurityForPrinterResourceAccess::Linux_SambaCommonSecurityForPrinterResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityForPrinterResourceAccess::~Linux_SambaCommonSecurityForPrinterResourceAccess() {
    terminator();
  }
    
  // intrinsic methods
  /*
  //----------------------------------------------------------------------------
  void
  Linux_SambaCommonSecurityForPrinterResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaCommonSecurityForPrinterInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    int instanceNameN = 1;
    for (int x=0; x < instanceNameN; ++x) {
      
      //place here the code retrieving your instanceName
      
      Linux_SambaCommonSecurityForPrinterInstanceName instanceName;
      
    }      
  
  }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaCommonSecurityForPrinterResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     const char** aPropertiesPP,
  	 Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaCommonSecurityForPrinterManualInstance 
  Linux_SambaCommonSecurityForPrinterResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaCommonSecurityForPrinterInstanceName& anInstanceName) {

    Linux_SambaCommonSecurityForPrinterManualInstance manualInstance;

  
  }
  */
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaCommonSecurityForPrinterResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaCommonSecurityForPrinterManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaCommonSecurityForPrinterInstanceName
  Linux_SambaCommonSecurityForPrinterResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaCommonSecurityForPrinterManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaCommonSecurityForPrinterResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaCommonSecurityForPrinterInstanceName& anInstanceName) { }
	*/
	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaCommonSecurityForPrinterResourceAccess::referencesSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
    Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {

    char ** printers = get_samba_printers_list();
    if(printers) {
    int valid_printer = false;
        for(int i=0;printers[i];i++) {
           if(strcasecmp(aSourceInstanceName.getName(),printers[i])==0)
                valid_printer = true;
        }
        if(!valid_printer) {
           throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist. The specified printer is unknown!");
        }
    } else {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist!");
    }   
 
    Linux_SambaCommonSecurityForPrinterManualInstance manualInstance;
    
    Linux_SambaCommonSecurityForPrinterInstanceName instName;
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

  void Linux_SambaCommonSecurityForPrinterResourceAccess::referencesManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaCommonSecurityOptionsInstanceName& aSourceInstanceName,
    Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {

    if(!service_exists(aSourceInstanceName.getName())) {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    } 
 
    Linux_SambaCommonSecurityForPrinterManualInstance manualInstance;
    
    Linux_SambaCommonSecurityForPrinterInstanceName instName;
    instName.setNamespace(aNameSpaceP);
    instName.setSettingData(aSourceInstanceName);
    
    Linux_SambaPrinterOptionsInstanceName printerInstName;
    printerInstName.setNamespace(aNameSpaceP);
    printerInstName.setName(aSourceInstanceName.getName());
    printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instName.setManagedElement(printerInstName);
    
    manualInstance.setInstanceName(instName);
    aManualInstanceEnumeration.addElement(manualInstance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaCommonSecurityForPrinterResourceAccess::associatorsSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
    Linux_SambaCommonSecurityOptionsInstanceEnumeration& anInstanceEnumeration) {

    char ** printers = get_samba_printers_list();
    if(printers) {
    int valid_printer = false;
        for(int i=0;printers[i];i++) {
           if(strcasecmp(aSourceInstanceName.getName(),printers[i])==0)
                valid_printer = true;
        }
        if(!valid_printer) {
           throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist. The specified printer is unknown!");
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

  void Linux_SambaCommonSecurityForPrinterResourceAccess::associatorsManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaCommonSecurityOptionsInstanceName& aSourceInstanceName,
    Linux_SambaPrinterOptionsInstanceEnumeration& anInstanceEnumeration) {

    if(!service_exists(aSourceInstanceName.getName())) {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }   
 
    Linux_SambaPrinterOptionsInstance instance;
    Linux_SambaPrinterOptionsInstanceName printerInstName;
    
    printerInstName.setNamespace(aNameSpaceP);
    printerInstName.setName(aSourceInstanceName.getName());
    printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(printerInstName);
    char *option;
    
    option = get_option(aSourceInstanceName.getName(),AVAILABLE);	
    if ( option )
       if(strcasecmp(option,YES) == 0)
	 instance.setAvailable( true );
       else
	 instance.setAvailable( false );
    
    option = get_option(aSourceInstanceName.getName(),COMMENT);	
    if ( option )
      instance.setComment( option );

    option = get_option(aSourceInstanceName.getName(),PRINTABLE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setPrintable( true );
      else
	instance.setPrintable( false );

    option = get_option(aSourceInstanceName.getName(),PATH);	
    if ( option )
      instance.setPath( option );

    option = get_option(aSourceInstanceName.getName(),PRINTER_NAME);	
    if ( option )
      instance.setSystemPrinterName( option );
    
    anInstanceEnumeration.addElement(instance);
  }

   
  
  // extrinsic methods

	
}


