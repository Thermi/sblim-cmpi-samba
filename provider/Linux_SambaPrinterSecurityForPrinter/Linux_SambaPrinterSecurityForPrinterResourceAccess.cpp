// =======================================================================
// Linux_SambaPrinterSecurityForPrinterResourceAccess.cpp
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
#include "Linux_SambaPrinterSecurityForPrinterResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  //----------------------------------------------------------------------------
  //Linux_SambaPrinterSecurityForPrinterResourceAccess::Linux_SambaPrinterSecurityForPrinterResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaPrinterSecurityForPrinterResourceAccess::~Linux_SambaPrinterSecurityForPrinterResourceAccess() {
    terminator();
  }
    
  // intrinsic methods
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterSecurityForPrinterResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaPrinterSecurityForPrinterInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    char ** printers = get_samba_printers_list();

    if (printers) {
       for (int i = 0; printers[i]; i++) {

         Linux_SambaPrinterSecurityForPrinterInstanceName instName;
         instName.setNamespace(aNameSpaceP);

         Linux_SambaPrinterOptionsInstanceName printerInstName;
         printerInstName.setNamespace(aNameSpaceP);
         printerInstName.setName(printers[i]);
         printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);

         instName.setManagedElement(printerInstName);

         Linux_SambaPrinterSecurityOptionsInstanceName elemInstanceName;
         elemInstanceName.setNamespace(aNameSpaceP);
         elemInstanceName.setName(printers[i]);
         elemInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);

         instName.setSettingData(elemInstanceName);

         anInstanceNameEnumeration.addElement(instName);

      }
    }
      
  }
  
  
  //----------------------------------------------------------------------------
  
  void
  Linux_SambaPrinterSecurityForPrinterResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     const char** aPropertiesPP,
  	 Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {
 
    char ** printers = get_samba_printers_list();

    if (printers) {
       for (int i = 0; printers[i]; i++) {

         Linux_SambaPrinterSecurityForPrinterManualInstance manualInstance;

         Linux_SambaPrinterSecurityForPrinterInstanceName instName;
         instName.setNamespace(aNameSpaceP);

         Linux_SambaPrinterOptionsInstanceName printerInstName;
         printerInstName.setNamespace(aNameSpaceP);
         printerInstName.setName(printers[i]);
         printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);

         instName.setManagedElement(printerInstName);

         Linux_SambaPrinterSecurityOptionsInstanceName elemInstanceName;
         elemInstanceName.setNamespace(aNameSpaceP);
         elemInstanceName.setName(printers[i]);
         elemInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);

         instName.setSettingData(elemInstanceName);

         manualInstance.setInstanceName(instName);
         aManualInstanceEnumeration.addElement(manualInstance);

      }
    }
    
  }
  
  
  //----------------------------------------------------------------------------
  
  Linux_SambaPrinterSecurityForPrinterManualInstance 
  Linux_SambaPrinterSecurityForPrinterResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaPrinterSecurityForPrinterInstanceName& anInstanceName) {

    Linux_SambaPrinterSecurityForPrinterManualInstance manualInstance;

    char ** printers = get_samba_printers_list();
    if(printers) {
    int valid_printer = false;
        for(int i=0;printers[i];i++) {
           if(strcasecmp(anInstanceName.getManagedElement().getName(),printers[i])==0 &&
              strcasecmp(anInstanceName.getManagedElement().getInstanceID(),DEFAULT_INSTANCE_ID)==0)
                valid_printer = true;
        }
        if(!valid_printer) {
           throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist. The specified PrinterOptions instance is unknown!");
        }
        for(int i=0;printers[i];i++) {
           if(strcasecmp(anInstanceName.getSettingData().getName(),printers[i])==0 &&
              strcasecmp(anInstanceName.getSettingData().getInstanceID(),DEFAULT_INSTANCE_ID)==0)
                valid_printer = true;
        }
        if(!valid_printer) {
           throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist. The specified PrinterSecurityOptions instance is unknown!");
        }
    } else {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist!");
    }

    manualInstance.setInstanceName(anInstanceName);
    return manualInstance;
      
  }
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaPrinterSecurityForPrinterResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaPrinterSecurityForPrinterManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaPrinterSecurityForPrinterInstanceName
  Linux_SambaPrinterSecurityForPrinterResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaPrinterSecurityForPrinterManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaPrinterSecurityForPrinterResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaPrinterSecurityForPrinterInstanceName& anInstanceName) { }
	*/
	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaPrinterSecurityForPrinterResourceAccess::referencesSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
    Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {
   
    char ** printers = get_samba_printers_list();
    if(printers) {
    int valid_printer = false;
        for(int i=0;printers[i];i++) {
           if(strcasecmp(aSourceInstanceName.getName(),printers[i])==0 &&
              strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)==0)
                valid_printer = true;
        }
        if(!valid_printer) {
           throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist. The specified printer is unknown!");
        }
    } else {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist!");
    }
 
    Linux_SambaPrinterSecurityForPrinterManualInstance manualInstance;
    
    Linux_SambaPrinterSecurityForPrinterInstanceName instName;
    instName.setNamespace(aNameSpaceP);
    instName.setManagedElement(aSourceInstanceName);
    
    Linux_SambaPrinterSecurityOptionsInstanceName secInstName;
    secInstName.setNamespace(aNameSpaceP);
    secInstName.setName(aSourceInstanceName.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
    instName.setSettingData(secInstName);
    
    manualInstance.setInstanceName(instName);
    aManualInstanceEnumeration.addElement(manualInstance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaPrinterSecurityForPrinterResourceAccess::referencesManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterSecurityOptionsInstanceName& aSourceInstanceName,
    Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {
   
    if(!service_exists(aSourceInstanceName.getName()) ||
       strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }
 
    Linux_SambaPrinterSecurityForPrinterManualInstance manualInstance;
    
    Linux_SambaPrinterSecurityForPrinterInstanceName instName;
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

  void Linux_SambaPrinterSecurityForPrinterResourceAccess::associatorsSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
    Linux_SambaPrinterSecurityOptionsInstanceEnumeration& anInstanceEnumeration) {

    char ** printers = get_samba_printers_list();
    if(printers) {
    int valid_printer = false;
        for(int i=0;printers[i];i++) {
           if(strcasecmp(aSourceInstanceName.getName(),printers[i])==0 &&
              strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)==0)
                valid_printer = true;
        }
        if(!valid_printer) {
           throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist. The specified printer is unknown!");
        }
    } else {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist!");
    }
    
    Linux_SambaPrinterSecurityOptionsInstance instance;
    
    Linux_SambaPrinterSecurityOptionsInstanceName secInstName;
    secInstName.setNamespace(aNameSpaceP);
    secInstName.setName(aSourceInstanceName.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(secInstName);
    
    // Linux_SambaPrinterSecurityOptions don't have any attribute
    
    anInstanceEnumeration.addElement(instance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaPrinterSecurityForPrinterResourceAccess::associatorsManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterSecurityOptionsInstanceName& aSourceInstanceName,
    Linux_SambaPrinterOptionsInstanceEnumeration& anInstanceEnumeration) {

    if(!service_exists(aSourceInstanceName.getName()) ||
       strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
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


