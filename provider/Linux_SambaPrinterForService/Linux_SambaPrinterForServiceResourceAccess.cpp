/**
 *  Linux_SambaPrinterForServiceResourceAccess.cpp
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


#include "Linux_SambaPrinterForServiceResourceAccess.h"

namespace genProvider {
  
    //Linux_SambaPrinterForServiceResourceAccess::Linux_SambaPrinterForServiceResourceAccess();
    Linux_SambaPrinterForServiceResourceAccess::~Linux_SambaPrinterForServiceResourceAccess() { };
    
    /* intrinsic methods */
    
  void Linux_SambaPrinterForServiceResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaPrinterForServiceInstanceNameEnumeration& instnames)
  {
    char ** printers = get_samba_printers_list();
    
    if(printers){
      for (int i=0; printers[i]; i++){
	Linux_SambaPrinterForServiceInstanceName instName;
	instName.setNamespace(nsp);

	Linux_SambaServiceInstanceName elemInstanceName;
	elemInstanceName.setNamespace(nsp);
	elemInstanceName.setName(DEFAULT_SERVICE_NAME);
	elemInstanceName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
	elemInstanceName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
	elemInstanceName.setSystemName(DEFAULT_SYSTEM_NAME);
        instName.setManagedElement(elemInstanceName);
	
	
	Linux_SambaPrinterOptionsInstanceName printerInstName;
	printerInstName.setNamespace(nsp);
	printerInstName.setName(printers[i]);
	printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	instName.setSettingData(printerInstName);
	
	instnames.addElement(instName);
      }
    }
  };
    
  	
  void Linux_SambaPrinterForServiceResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaPrinterForServiceManualInstanceEnumeration& instances)
  {
    char ** printers = get_samba_printers_list();
    
    if(printers){
      for (int i=0; printers[i]; i++){
	Linux_SambaPrinterForServiceManualInstance manualInstance;
	
	Linux_SambaPrinterForServiceInstanceName instName;
	instName.setNamespace(nsp);

	Linux_SambaServiceInstanceName elemInstanceName;
	elemInstanceName.setNamespace(nsp);
	elemInstanceName.setName(DEFAULT_SERVICE_NAME);
	elemInstanceName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
	elemInstanceName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
	elemInstanceName.setSystemName(DEFAULT_SYSTEM_NAME);
        instName.setManagedElement(elemInstanceName);
	
	
	Linux_SambaPrinterOptionsInstanceName printerInstName;
	printerInstName.setNamespace(nsp);
	printerInstName.setName(printers[i]);
	printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	instName.setSettingData(printerInstName);
	
	manualInstance.setInstanceName(instName);
	instances.addElement(manualInstance);
      }
    }
  };
  
  Linux_SambaPrinterForServiceManualInstance 
   Linux_SambaPrinterForServiceResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaPrinterForServiceInstanceName& instanceName)
  {
    Linux_SambaPrinterForServiceManualInstance instance;
    instance.setInstanceName(instanceName);
    return instance;
  };

  void Linux_SambaPrinterForServiceResourceAccess::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaPrinterForServiceManualInstance&){};
  
  	
  void Linux_SambaPrinterForServiceResourceAccess::createInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaPrinterForServiceManualInstance&){};
  
  void Linux_SambaPrinterForServiceResourceAccess::deleteInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaPrinterForServiceInstanceName&){};
	
    
    /* Association Interface */
    
  void Linux_SambaPrinterForServiceResourceAccess::referencesSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaServiceInstanceName& sourceInst,
   Linux_SambaPrinterForServiceManualInstanceEnumeration& instEnum) 
  {
    char ** printers = get_samba_printers_list();
    
    if(printers){
      for (int i=0; printers[i]; i++){
	Linux_SambaPrinterForServiceManualInstance manualInstance;
	
	Linux_SambaPrinterForServiceInstanceName instName;
	instName.setNamespace(nsp);
	instName.setManagedElement(sourceInst);
	
	Linux_SambaPrinterOptionsInstanceName printerInstName;
	printerInstName.setNamespace(nsp);
	printerInstName.setName(printers[i]);
	printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
	instName.setSettingData(printerInstName);
	
	manualInstance.setInstanceName(instName);
	instEnum.addElement(manualInstance);
      }
    }
  };
  
    
  void Linux_SambaPrinterForServiceResourceAccess::referencesManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaPrinterOptionsInstanceName& sourceInst,
   Linux_SambaPrinterForServiceManualInstanceEnumeration& instEnum)
  { 
    Linux_SambaPrinterForServiceManualInstance manualInstance;
    
    Linux_SambaPrinterForServiceInstanceName instName;
    instName.setNamespace(nsp);
    instName.setSettingData(sourceInst);
    
    Linux_SambaServiceInstanceName elemInstanceName;
    elemInstanceName.setNamespace(nsp);
    elemInstanceName.setName(DEFAULT_SERVICE_NAME);
    elemInstanceName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
    elemInstanceName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
    elemInstanceName.setSystemName(DEFAULT_SYSTEM_NAME);
    
    instName.setManagedElement(elemInstanceName);
    
    manualInstance.setInstanceName(instName);
    instEnum.addElement(manualInstance);
  };
  
  
  void Linux_SambaPrinterForServiceResourceAccess::associatorsSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaServiceInstanceName& sourceInst,
   Linux_SambaPrinterOptionsInstanceEnumeration& instEnum)
  {
    char ** printers = get_samba_printers_list();
    
    if(printers){
      for (int i=0; printers[i]; i++){
	Linux_SambaPrinterOptionsInstance instance;
	
	Linux_SambaPrinterOptionsInstanceName shareInstName;
	shareInstName.setNamespace(nsp);
	shareInstName.setName(printers[i]);
	shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);

	instance.setInstanceName(shareInstName);
	char *option;
	
	option = get_option(printers[i],AVAILABLE);	
	if ( option )
	  if(strcasecmp(option,YES) == 0)
	    instance.setAvailable( true );
	  else
	    instance.setAvailable( false );
	
	option = get_option(printers[i],COMMENT);	
	if ( option )
	  instance.setComment( option );

	option = get_option(printers[i],PRINTABLE);	
	if ( option )
	  if(strcasecmp(option,"yes") == 0)
	    instance.setPrintable( true );
	  else
	    instance.setPrintable( false );
	
	option = get_option(printers[i],PATH);	
	if ( option )
	  instance.setPath( option );
	
	option = get_option(printers[i],PRINTER_NAME);	
	if ( option )
	  instance.setSystemPrinterName( option );
	
	instEnum.addElement(instance);
      }
    }
  };


  void Linux_SambaPrinterForServiceResourceAccess::associatorsManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaPrinterOptionsInstanceName& sourceInst,
   Linux_SambaServiceInstanceEnumeration& instEnum) 
  { 
    Linux_SambaServiceInstance instance;
    
    Linux_SambaServiceInstanceName elemInstanceName;
    elemInstanceName.setNamespace(nsp);
    elemInstanceName.setName(DEFAULT_SERVICE_NAME);
    elemInstanceName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
    elemInstanceName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
    elemInstanceName.setSystemName(DEFAULT_SYSTEM_NAME);
    
    instance.setInstanceName(elemInstanceName);
    
    instEnum.addElement(instance);
  };

    /* extrinsic methods */
	
}


