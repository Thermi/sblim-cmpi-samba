// =======================================================================
// Linux_SambaForceGroupForPrinterResourceAccess.cpp
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

    char ** printers = get_samba_printers_list();
    if(printers) {
    int valid_printer = false;
        for(int i=0;printers[i];i++) {
           if(strcasecmp(anInstanceName.getGroupComponent().getName(),printers[i])==0 &&
              strcasecmp(anInstanceName.getGroupComponent().getInstanceID(),DEFAULT_INSTANCE_ID)==0)
                valid_printer = true;
        }
        if(!valid_printer) {
           throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The specified instance is not a printer!");
        }
    } else {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist!");
    }

    if(!validGroup(anInstanceName.getPartComponent().getSambaGroupName())) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba group is unknown!");
    }

    SambaArray array = SambaArray();
    char* user_list = get_option(anInstanceName.getGroupComponent().getName(),"force group");

    if(!user_list) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba group is not a force group!");
    }

    array.populate(user_list);
    if(!array.isPresent(anInstanceName.getPartComponent().getSambaGroupName())) {
      SambaArray g_array = SambaArray();
      char * g_user_list = get_global_option("force group");
      if(!user_list) {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba group is not a force group!");
      }
      g_array.populate(g_user_list);

      if(!g_array.isPresent(anInstanceName.getPartComponent().getSambaGroupName()))
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba group is not a force group!");
    }

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
    
    char ** printers = get_samba_printers_list();
    if(printers) {
    int valid_printer = false;
        for(int i=0;printers[i];i++) {
           if(strcasecmp(aManualInstance.getInstanceName().getGroupComponent().getName(),printers[i])==0 &&
              strcasecmp(aManualInstance.getInstanceName().getGroupComponent().getInstanceID(),DEFAULT_INSTANCE_ID)==0)
                valid_printer = true;
        }
        if(!valid_printer) {
           throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The specified instance is not a valid Samba printer!");
        }
    } else {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist!");
    }

    if(!validGroup(aManualInstance.getInstanceName().getPartComponent().getSambaGroupName())) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba group does not exist!");
    }

    SambaArray g_array = SambaArray();
    char* g_user_list = get_global_option("force group");

    if (g_user_list) {
      g_array.populate(g_user_list);
      if (g_array.isPresent(aManualInstance.getInstanceName().getPartComponent().getSambaGroupName()))
        return aManualInstance.getInstanceName();
    }

    SambaArray array = SambaArray();
    char* user_list = get_option(aManualInstance.getInstanceName().getGroupComponent().getName(),"force group");

    if(user_list) {
      array.populate(user_list);
      if(g_user_list) {
        SambaArrayConstIterator iter;
        for ( iter = g_array.begin(); iter != g_array.end(); ++iter) {
          if (array.isPresent((*iter).c_str())) {
            array.remove((*iter).c_str());
          }
        }
      }
      if(array.isPresent(aManualInstance.getInstanceName().getPartComponent().getSambaGroupName() )) {
        throw CmpiStatus(CMPI_RC_ERR_ALREADY_EXISTS,"Instance already exist");
      }
    }

    array.add(aManualInstance.getInstanceName().getPartComponent().getSambaGroupName());
    set_printer_option(aManualInstance.getInstanceName().getGroupComponent().getName(),"force group",array.toString().c_str());

    return aManualInstance.getInstanceName();
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaForceGroupForPrinterResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaForceGroupForPrinterInstanceName& anInstanceName) {
    
    char ** printers = get_samba_printers_list();
    if(printers) {
    int valid_printer = false;
        for(int i=0;printers[i];i++) {
           if(strcasecmp(anInstanceName.getGroupComponent().getName(),printers[i])==0 &&
              strcasecmp(anInstanceName.getGroupComponent().getInstanceID(),DEFAULT_INSTANCE_ID)==0)
                valid_printer = true;
        }
        if(!valid_printer) {
           throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The specified instance is not a printer!");
        }
    } else {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist!");
    }

    if(!validGroup(anInstanceName.getPartComponent().getSambaGroupName())) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba group does not exist!");
    }

    SambaArray g_array = SambaArray();
    char* g_user_list = get_global_option("force group");

    if (g_user_list) {
      g_array.populate(g_user_list);
    }

    SambaArray array = SambaArray();
    char* user_list = get_option(anInstanceName.getGroupComponent().getName(),"force group");

    if (user_list)
      array.populate(user_list);

    SambaArrayConstIterator iter;
    for ( iter = g_array.begin(); iter != g_array.end(); ++iter) {
      if (array.isPresent((*iter).c_str())) {
        array.remove((*iter).c_str());
      }
    }

    if (array.isPresent(anInstanceName.getPartComponent().getSambaGroupName())) {
      array.remove( string(anInstanceName.getPartComponent().getSambaGroupName() ));
    }

    //Only an single attribute value possible
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
    
    if(!validGroup(aSourceInstanceName.getSambaGroupName())) {
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist. The specified Samba group is unknown!");
    }

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
    

    char ** printers = get_samba_printers_list();
    if(printers) {
    int valid_printer = false;
        for(int i=0;printers[i];i++) {
           if(strcasecmp(aSourceInstanceName.getName(),printers[i])==0&&
              strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)==0)
                valid_printer = true;
        }
        if(!valid_printer) {
           throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The specified instance is not a valid printer!");
        }
    } else {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist!");
    }

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
    
    if(!validGroup(aSourceInstanceName.getSambaGroupName())) {
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist. The specified Samba group is unknown!");
    }

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
    
    char ** printers = get_samba_printers_list();
    if(printers) {
    int valid_printer = false;
        for(int i=0;printers[i];i++) {
           if(strcasecmp(aSourceInstanceName.getName(),printers[i])==0 &&
              strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)==0)
                valid_printer = true;
        }
        if(!valid_printer) {
           throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The specified instance is not a printer!");
        }
    } else {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist!");
    }

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


