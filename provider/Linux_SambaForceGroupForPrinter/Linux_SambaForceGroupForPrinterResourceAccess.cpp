/**
 *  Linux_SambaForceGroupForPrinterResourceAccess.cpp
 * 
 * (C) Copyright IBM Corp. 2005
 *
 * THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
 * ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
 * CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
 *
 * You can obtain a current copy of the Common Public License from
 * http://www.opensource.org/licenses/cpl1.0.php
 *
 * Author:     Rodrigo Ceron <rceron@br.ibm.com>
 *
 * Contributors:
 *
 */


#include "Linux_SambaForceGroupForPrinterResourceAccess.h"

namespace genProvider {
  
   bool Linux_SambaForceGroupForPrinterResourceAccess::validGroup(const char* group)
  {
    char ** groups = get_samba_groups_list();
    if(groups){
      for (int i=0; groups[i]; i++){
	if(!strcmp(groups[i],group))
	  return true;
      }
    }
    return false;
  };

  //Linux_SambaForceGroupForPrinterResourceAccess::Linux_SambaForceGroupForPrinterResourceAccess();
  Linux_SambaForceGroupForPrinterResourceAccess::~Linux_SambaForceGroupForPrinterResourceAccess() { 
    terminator();
  };
    
    /* intrinsic methods */
  void Linux_SambaForceGroupForPrinterResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaForceGroupForPrinterInstanceNameEnumeration& instnames)
  {
    char ** printers = get_samba_printers_list();
    if(printers){
      for (int i=0; printers[i]; i++){
	
	Linux_SambaPrinterOptionsInstanceName printerInstName;
	printerInstName.setNamespace(nsp);
	printerInstName.setName(printers[i]);
	printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
	
	char* group = get_option(printers[i],"force group");
	
	if(group && validGroup(group)){
	  Linux_SambaForceGroupForPrinterInstanceName assocName;
	  assocName.setNamespace(nsp);
	  assocName.setGroupComponent(printerInstName);
	  
	  Linux_SambaGroupInstanceName groupInstName;
	  groupInstName.setNamespace(nsp);
	  groupInstName.setSambaGroupName( group );
	  
	  assocName.setPartComponent(groupInstName);
	  
	  instnames.addElement(assocName);
	}
      }
    }
  };
  
  void Linux_SambaForceGroupForPrinterResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaForceGroupForPrinterManualInstanceEnumeration& instances)
  {
    char ** printers = get_samba_printers_list();
    if(printers){
      for (int i=0; printers[i]; i++){
	
	Linux_SambaPrinterOptionsInstanceName printerInstName;
	printerInstName.setNamespace(nsp);
	printerInstName.setName(printers[i]);
	printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);

	char* group = get_option(printers[i],"force group");
	
	if(group && validGroup(group)){
	  Linux_SambaForceGroupForPrinterManualInstance manualInstance;
	  
	  Linux_SambaForceGroupForPrinterInstanceName instName;
	  instName.setNamespace(nsp);
	  instName.setGroupComponent(printerInstName);
	  
	  Linux_SambaGroupInstanceName groupInstName;
	  groupInstName.setNamespace(nsp);
	  groupInstName.setSambaGroupName( group );
		
	  instName.setPartComponent(groupInstName);
	  
	  manualInstance.setInstanceName(instName);
	  instances.addElement(manualInstance);
	}
	
      }      
    }
  };
  	
  Linux_SambaForceGroupForPrinterManualInstance 
   Linux_SambaForceGroupForPrinterResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaForceGroupForPrinterInstanceName& instanceName)
  {
    Linux_SambaForceGroupForPrinterManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    return aManualInstance;
  };
  
  	/*
    void Linux_SambaForceGroupForPrinterResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaForceGroupForPrinterManualInstance&){};
  	*/
  	
  void Linux_SambaForceGroupForPrinterResourceAccess::createInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaForceGroupForPrinterManualInstance& newInstance)
  {
    char* group = get_option(newInstance.getInstanceName().getGroupComponent().getName(),"force group");
    if(group)
      set_printer_option(newInstance.getInstanceName().getGroupComponent().getName(),"force group",group);
  } 
  
  void Linux_SambaForceGroupForPrinterResourceAccess::deleteInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaForceGroupForPrinterInstanceName& instanceName)
  {
    set_printer_option(instanceName.getGroupComponent().getName(),"force group",NULL);
  }
  
    /* Association Interface */
    
  void Linux_SambaForceGroupForPrinterResourceAccess::referencesPartComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaPrinterOptionsInstanceName& sourceInst,
   Linux_SambaForceGroupForPrinterManualInstanceEnumeration& instEnum)
  {
    char* group = get_option(sourceInst.getName(),"force group");
    if(group){
      Linux_SambaForceGroupForPrinterManualInstance manualInstance;
      
      Linux_SambaForceGroupForPrinterInstanceName instName;
      instName.setNamespace(nsp);
      instName.setGroupComponent(sourceInst);
      
      Linux_SambaGroupInstanceName groupInstName;
      groupInstName.setNamespace(nsp);
      groupInstName.setSambaGroupName( group );
      
      instName.setPartComponent(groupInstName);
      
      manualInstance.setInstanceName(instName);
      instEnum.addElement(manualInstance);
    }
  };
  
  void Linux_SambaForceGroupForPrinterResourceAccess::referencesGroupComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGroupInstanceName& sourceInst,
   Linux_SambaForceGroupForPrinterManualInstanceEnumeration& instEnum)
  {
    char ** printers = get_samba_printers_list();
      if(printers){
	for (int i=0; printers[i]; i++){
	  char* group = get_option(printers[i],"force group");
	  
	  if(group){
	    if(!strcmp(group,sourceInst.getSambaGroupName())){
	      Linux_SambaForceGroupForPrinterManualInstance manualInstance;
	      
	      Linux_SambaForceGroupForPrinterInstanceName instName;
	      instName.setNamespace(nsp);
	      instName.setPartComponent(sourceInst);
	      
	      
	      Linux_SambaPrinterOptionsInstanceName printerInstName;
	      printerInstName.setNamespace(nsp);
	      printerInstName.setName(printers[i]);
	      printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	      
	      instName.setGroupComponent(printerInstName);
	      
	      manualInstance.setInstanceName(instName);
	      instEnum.addElement(manualInstance);
	    }
	}
      }
    }
  };
  
  void Linux_SambaForceGroupForPrinterResourceAccess::associatorsPartComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaPrinterOptionsInstanceName& sourceInst,
   Linux_SambaGroupInstanceEnumeration& instEnum)
  { 
    char* group = get_option(sourceInst.getName(),"force group");
    if(group){
      Linux_SambaGroupInstance instance;
      
      Linux_SambaGroupInstanceName groupInstName;
      groupInstName.setNamespace(nsp);
      groupInstName.setSambaGroupName( group );
      
      instance.setInstanceName(groupInstName);
      char* option;
      
      option = get_unix_group_name( group );
      if ( option )
	instance.setSystemGroupName( option );
      
      instEnum.addElement(instance);
    }
  };
    
  void Linux_SambaForceGroupForPrinterResourceAccess::associatorsGroupComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGroupInstanceName& sourceInst,
   Linux_SambaPrinterOptionsInstanceEnumeration& instEnum)
  {
    char ** printers = get_samba_printers_list();
      if(printers){
	for (int i=0; printers[i]; i++){
	  char* group = get_option(printers[i],"force group");
	  if(group){
	    if(!strcmp(group,sourceInst.getSambaGroupName()))
	      {
		Linux_SambaPrinterOptionsInstance instance;
		
		Linux_SambaPrinterOptionsInstanceName printerInstName;
		printerInstName.setNamespace(nsp);
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
		
		instEnum.addElement(instance);
	      }
	}
      }
    }
  };
  

    /* extrinsic methods */
	
}


