// =======================================================================
// Linux_SambaSharePrinterBrowseForPrinterResourceAccess.cpp
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
#include "Linux_SambaSharePrinterBrowseForPrinterResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  //----------------------------------------------------------------------------
  //Linux_SambaSharePrinterBrowseForPrinterResourceAccess::Linux_SambaSharePrinterBrowseForPrinterResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaSharePrinterBrowseForPrinterResourceAccess::~Linux_SambaSharePrinterBrowseForPrinterResourceAccess() {
    terminator();
  }
    
  // intrinsic methods
  /*
  //----------------------------------------------------------------------------
  void
  Linux_SambaSharePrinterBrowseForPrinterResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    int instanceNameN = 1;
    for (int x=0; x < instanceNameN; ++x) {
      
      //place here the code retrieving your instanceName
      
      Linux_SambaSharePrinterBrowseForPrinterInstanceName instanceName;
      
    }      
  
  }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaSharePrinterBrowseForPrinterResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     const char** aPropertiesPP,
  	 Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaSharePrinterBrowseForPrinterManualInstance 
  Linux_SambaSharePrinterBrowseForPrinterResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaSharePrinterBrowseForPrinterInstanceName& anInstanceName) {

    Linux_SambaSharePrinterBrowseForPrinterManualInstance manualInstance;

  
  }
  */
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaSharePrinterBrowseForPrinterResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaSharePrinterBrowseForPrinterManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaSharePrinterBrowseForPrinterInstanceName
  Linux_SambaSharePrinterBrowseForPrinterResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaSharePrinterBrowseForPrinterManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaSharePrinterBrowseForPrinterResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaSharePrinterBrowseForPrinterInstanceName& anInstanceName) { }
	*/
	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaSharePrinterBrowseForPrinterResourceAccess::referencesManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaSharePrinterBrowseOptionsInstanceName& aSourceInstanceName,
    Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    Linux_SambaSharePrinterBrowseForPrinterManualInstance manualInstance;
    
    Linux_SambaSharePrinterBrowseForPrinterInstanceName instName;
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

  void Linux_SambaSharePrinterBrowseForPrinterResourceAccess::referencesSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
    Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    Linux_SambaSharePrinterBrowseForPrinterManualInstance manualInstance;
    
    Linux_SambaSharePrinterBrowseForPrinterInstanceName instName;
    instName.setNamespace(aNameSpaceP);
    instName.setManagedElement(aSourceInstanceName);
    
    Linux_SambaSharePrinterBrowseOptionsInstanceName browseInstName;
    browseInstName.setNamespace(aNameSpaceP);
    browseInstName.setName(aSourceInstanceName.getName());
    browseInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instName.setSettingData(browseInstName);
    
    manualInstance.setInstanceName(instName);
    aManualInstanceEnumeration.addElement(manualInstance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaSharePrinterBrowseForPrinterResourceAccess::associatorsManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaSharePrinterBrowseOptionsInstanceName& aSourceInstanceName,
    Linux_SambaPrinterOptionsInstanceEnumeration& anInstanceEnumeration) {
    
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

  
  //----------------------------------------------------------------------------

  void Linux_SambaSharePrinterBrowseForPrinterResourceAccess::associatorsSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
    Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration& anInstanceEnumeration) {
    
    Linux_SambaSharePrinterBrowseOptionsInstance instance;
    
    Linux_SambaSharePrinterBrowseOptionsInstanceName browseInstName;
    browseInstName.setNamespace(aNameSpaceP);
    browseInstName.setName(aSourceInstanceName.getName());
    browseInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(browseInstName);
    char *option;
    option = get_option(aSourceInstanceName.getName(),BROWSEABLE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setBrowsable( true );
      else
	instance.setBrowsable( false );
    
    anInstanceEnumeration.addElement(instance);
  }

   
  
  // extrinsic methods

	
}


