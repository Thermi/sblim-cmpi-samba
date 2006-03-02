// =======================================================================
// Linux_SambaForceGroupForPrinterResourceAccess.cpp
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
#include "Linux_SambaForceGroupForPrinterResourceAccess.h"

#include <string>
#include <list>

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"
#include "smt_smb_array.h"

namespace genProvider {

  //----------------------------------------------------------------------------
  // manual written methods

  static bool validGroup(const char* group) {
    char ** groups = get_samba_groups_list();
    if(groups){
      for (int i=0; groups[i]; i++){
	if(!strcmp(groups[i],group))
	  return true;
      }
    }
    
    return false;
  };

  //----------------------------------------------------------------------------


  //----------------------------------------------------------------------------
  //Linux_SambaForceGroupForPrinterResourceAccess::Linux_SambaForceGroupForPrinterResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaForceGroupForPrinterResourceAccess::~Linux_SambaForceGroupForPrinterResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaForceGroupForPrinterResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaForceGroupForPrinterInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    char ** printers = get_samba_printers_list();
    if(printers){
      for (int i=0; printers[i]; i++){
	
	Linux_SambaPrinterOptionsInstanceName printerInstName;
	printerInstName.setNamespace(aNameSpaceP);
	printerInstName.setName(printers[i]);
	printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
	char* group = get_option(printers[i],"force group");
	
	if(group && validGroup(group)){
	  Linux_SambaForceGroupForPrinterInstanceName assocName;
	  assocName.setNamespace(aNameSpaceP);
	  assocName.setGroupComponent(printerInstName);
	  
	  Linux_SambaGroupInstanceName groupInstName;
	  groupInstName.setNamespace(aNameSpaceP);
	  groupInstName.setSambaGroupName( group );
	  
	  assocName.setPartComponent(groupInstName);
	  
	  anInstanceNameEnumeration.addElement(assocName);
	}
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaForceGroupForPrinterResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaForceGroupForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char ** printers = get_samba_printers_list();
    
    if(printers){
      for (int i=0; printers[i]; i++){
	
	Linux_SambaPrinterOptionsInstanceName printerInstName;
	printerInstName.setNamespace(aNameSpaceP);
	printerInstName.setName(printers[i]);
	printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
	char* group = get_option(printers[i],"force group");
	
	if(group && validGroup(group)){
	  Linux_SambaForceGroupForPrinterManualInstance manualInstance;
	  
	  Linux_SambaForceGroupForPrinterInstanceName instName;
	  instName.setNamespace(aNameSpaceP);
	  instName.setGroupComponent(printerInstName);
	  
	  Linux_SambaGroupInstanceName groupInstName;
	  groupInstName.setNamespace(aNameSpaceP);
	  groupInstName.setSambaGroupName( group );
	  
	  instName.setPartComponent(groupInstName);
	  
	  manualInstance.setInstanceName(instName);
	  aManualInstanceEnumeration.addElement(manualInstance);
	}
      }      
    }
  }
  
  
  //----------------------------------------------------------------------------

  Linux_SambaForceGroupForPrinterManualInstance 
  Linux_SambaForceGroupForPrinterResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaForceGroupForPrinterInstanceName& anInstanceName) {

    Linux_SambaForceGroupForPrinterManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);

    return aManualInstance;
  }

  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaForceGroupForPrinterResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaForceGroupForPrinterManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------

  Linux_SambaForceGroupForPrinterInstanceName
  Linux_SambaForceGroupForPrinterResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaForceGroupForPrinterManualInstance& aManualInstance) {
    
    char* group = get_option(aManualInstance.getInstanceName().getGroupComponent().getName(),"force group");
    if(group)
      set_printer_option(aManualInstance.getInstanceName().getGroupComponent().getName(),"force group",group);
    
    return aManualInstance.getInstanceName();
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaForceGroupForPrinterResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaForceGroupForPrinterInstanceName& anInstanceName) {
    
    set_printer_option(anInstanceName.getGroupComponent().getName(),"force group",NULL);
  }

	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaForceGroupForPrinterResourceAccess::referencesGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGroupInstanceName& aSourceInstanceName,
    Linux_SambaForceGroupForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char ** printers = get_samba_printers_list();
    if(printers){
      for (int i=0; printers[i]; i++){
	char* group = get_option(printers[i],"force group");
	
	if(group){
	  if(!strcmp(group,aSourceInstanceName.getSambaGroupName())){
	    Linux_SambaForceGroupForPrinterManualInstance manualInstance;
	    
	    Linux_SambaForceGroupForPrinterInstanceName instName;
	    instName.setNamespace(aNameSpaceP);
	    instName.setPartComponent(aSourceInstanceName);
	    
	    
	    Linux_SambaPrinterOptionsInstanceName printerInstName;
	    printerInstName.setNamespace(aNameSpaceP);
	    printerInstName.setName(printers[i]);
	    printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	    
	    instName.setGroupComponent(printerInstName);
	    
	    manualInstance.setInstanceName(instName);
	    aManualInstanceEnumeration.addElement(manualInstance);
	  }
	}
      }
    }
  }
  
  
  //----------------------------------------------------------------------------

  void Linux_SambaForceGroupForPrinterResourceAccess::referencesPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
    Linux_SambaForceGroupForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char* group = get_option(aSourceInstanceName.getName(),"force group");
    
    if(group){
      Linux_SambaForceGroupForPrinterManualInstance manualInstance;
      
      Linux_SambaForceGroupForPrinterInstanceName instName;
      instName.setNamespace(aNameSpaceP);
      instName.setGroupComponent(aSourceInstanceName);
      
      Linux_SambaGroupInstanceName groupInstName;
      groupInstName.setNamespace(aNameSpaceP);
      groupInstName.setSambaGroupName( group );
      
      instName.setPartComponent(groupInstName);
      
      manualInstance.setInstanceName(instName);
      aManualInstanceEnumeration.addElement(manualInstance);
    }
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaForceGroupForPrinterResourceAccess::associatorsGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGroupInstanceName& aSourceInstanceName,
    Linux_SambaPrinterOptionsInstanceEnumeration& anInstanceEnumeration) {
    
    char ** printers = get_samba_printers_list();
    
    if(printers){
      for (int i=0; printers[i]; i++){
	char* group = get_option(printers[i],"force group");
	if(group){
	  if(!strcmp(group,aSourceInstanceName.getSambaGroupName())) {
	    Linux_SambaPrinterOptionsInstance instance;
	    
	    Linux_SambaPrinterOptionsInstanceName printerInstName;
	    printerInstName.setNamespace(aNameSpaceP);
	    printerInstName.setName(printers[i]);
	    printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	    
	    instance.setInstanceName(printerInstName);
	    
	    char *option;
	    
	    option = get_option(printers[i],"available");	
	    if ( option )
	      if(strcasecmp(option,"yes") == 0)
		instance.setAvailable( true );
	      else
		instance.setAvailable( false );
	    
	    option = get_option(printers[i],"comment");
	    if ( option )
	      instance.setComment(option);
	    
	    option = get_option(printers[i],"path");
	    if ( option )
	      instance.setPath(option);
	    
	    option = get_option(printers[i],"printable");	
	    if ( option )
	      if(strcasecmp(option,"yes") == 0)
		instance.setPrintable( true );
	      else
		instance.setPrintable( false );
	    
	    option = get_option(printers[i],"printer name");	
	    if ( option )
	      instance.setSystemPrinterName( option );
	    
	    anInstanceEnumeration.addElement(instance);
	  }
	}
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaForceGroupForPrinterResourceAccess::associatorsPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
    Linux_SambaGroupInstanceEnumeration& anInstanceEnumeration) {
    
    char* group = get_option(aSourceInstanceName.getName(),"force group");
    
    if(group){
      Linux_SambaGroupInstance instance;
      
      Linux_SambaGroupInstanceName groupInstName;
      groupInstName.setNamespace(aNameSpaceP);
      groupInstName.setSambaGroupName( group );
      
      instance.setInstanceName(groupInstName);
      char* option;
      
      option = get_unix_group_name( group );
      if ( option )
	instance.setSystemGroupName( option );
      
      anInstanceEnumeration.addElement(instance);
    }
  }

   
  
  // extrinsic methods

	
}


