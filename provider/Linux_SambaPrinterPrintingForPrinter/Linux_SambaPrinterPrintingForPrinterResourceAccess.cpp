// =======================================================================
// Linux_SambaPrinterPrintingForPrinterResourceAccess.cpp
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
// http://www.opensource.org/licenses/eclipse-1.0.php
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
#include "Linux_SambaPrinterPrintingForPrinterResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  //----------------------------------------------------------------------------
  //Linux_SambaPrinterPrintingForPrinterResourceAccess::Linux_SambaPrinterPrintingForPrinterResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaPrinterPrintingForPrinterResourceAccess::~Linux_SambaPrinterPrintingForPrinterResourceAccess() {
    terminator();
  }
    
  // intrinsic methods
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterPrintingForPrinterResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    char ** printers = get_samba_printers_list();

    if (printers) {
       for (int i = 0; printers[i]; i++) {

         Linux_SambaPrinterPrintingForPrinterInstanceName instName;
         instName.setNamespace(aNameSpaceP);

         Linux_SambaPrinterOptionsInstanceName printerInstName;
         printerInstName.setNamespace(aNameSpaceP);
         printerInstName.setName(printers[i]);
         printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);

         instName.setManagedElement(printerInstName);

         Linux_SambaPrinterPrintingOptionsInstanceName elemInstanceName;
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
  Linux_SambaPrinterPrintingForPrinterResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     const char** aPropertiesPP,
  	 Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {

    char ** printers = get_samba_printers_list();

    if (printers) {
       for (int i = 0; printers[i]; i++) {

         Linux_SambaPrinterPrintingForPrinterManualInstance manualInstance;

         Linux_SambaPrinterPrintingForPrinterInstanceName instName;
         instName.setNamespace(aNameSpaceP);

         Linux_SambaPrinterOptionsInstanceName printerInstName;
         printerInstName.setNamespace(aNameSpaceP);
         printerInstName.setName(printers[i]);
         printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);

         instName.setManagedElement(printerInstName);

         Linux_SambaPrinterPrintingOptionsInstanceName elemInstanceName;
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
  
  Linux_SambaPrinterPrintingForPrinterManualInstance 
  Linux_SambaPrinterPrintingForPrinterResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaPrinterPrintingForPrinterInstanceName& anInstanceName) {

    Linux_SambaPrinterPrintingForPrinterManualInstance manualInstance;

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
           throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist. The specified PrinterPrintingOptions instance is unknown!");
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
  Linux_SambaPrinterPrintingForPrinterResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaPrinterPrintingForPrinterManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaPrinterPrintingForPrinterInstanceName
  Linux_SambaPrinterPrintingForPrinterResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaPrinterPrintingForPrinterManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaPrinterPrintingForPrinterResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaPrinterPrintingForPrinterInstanceName& anInstanceName) { }
	*/
	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaPrinterPrintingForPrinterResourceAccess::referencesSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
    Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {
   
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
    
    Linux_SambaPrinterPrintingForPrinterManualInstance manualInstance;
    
    Linux_SambaPrinterPrintingForPrinterInstanceName instName;
    instName.setNamespace(aNameSpaceP);
    instName.setManagedElement(aSourceInstanceName);
    
    Linux_SambaPrinterPrintingOptionsInstanceName secInstName;
    secInstName.setNamespace(aNameSpaceP);
    secInstName.setName(aSourceInstanceName.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
    instName.setSettingData(secInstName);
    
    manualInstance.setInstanceName(instName);
    aManualInstanceEnumeration.addElement(manualInstance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaPrinterPrintingForPrinterResourceAccess::referencesManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterPrintingOptionsInstanceName& aSourceInstanceName,
    Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {

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
    
    Linux_SambaPrinterPrintingForPrinterManualInstance manualInstance;
    
    Linux_SambaPrinterPrintingForPrinterInstanceName instName;
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

  void Linux_SambaPrinterPrintingForPrinterResourceAccess::associatorsSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
    Linux_SambaPrinterPrintingOptionsInstanceEnumeration& anInstanceEnumeration) {

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
    
    Linux_SambaPrinterPrintingOptionsInstance instance;
    
    Linux_SambaPrinterPrintingOptionsInstanceName secInstName;
    secInstName.setNamespace(aNameSpaceP);
    secInstName.setName(aSourceInstanceName.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(secInstName);
    
    char *option;
    
    option = get_option(aSourceInstanceName.getName(),CUPS_OPTIONS);	
    if ( option )
      instance.setCupsOptions( option );
    
    option = get_option(aSourceInstanceName.getName(),DEFAULT_DEVMODE);	
    if ( option )
      if(strcasecmp(option,"yes") == 0)
	instance.setDefaultDevMode( true );
      else
	instance.setDefaultDevMode( false );
    
    option = get_option(aSourceInstanceName.getName(),MAX_PRINT_JOBS);	
    if ( option )
      instance.setMaxPrintjobs( atoi(option) );
    
    option = get_option(aSourceInstanceName.getName(),PRINT_COMMAND);	
    if ( option )
      instance.setPrintCommand( option );
    
    option = get_option(aSourceInstanceName.getName(),USE_CLIENT_DRIVER);	
    if ( option )
      if(strcasecmp(option,"yes") == 0)
	instance.setUseClientDriver( true );
      else
	instance.setUseClientDriver( false );
    
    option = get_option(aSourceInstanceName.getName(),MAX_REPORTED_PRINT_JOBS);	
    if ( option )
      instance.setMaxReportedPrintjobs( atoi(option) );
    
    anInstanceEnumeration.addElement(instance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaPrinterPrintingForPrinterResourceAccess::associatorsManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterPrintingOptionsInstanceName& aSourceInstanceName,
    Linux_SambaPrinterOptionsInstanceEnumeration& anInstanceEnumeration) {

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


