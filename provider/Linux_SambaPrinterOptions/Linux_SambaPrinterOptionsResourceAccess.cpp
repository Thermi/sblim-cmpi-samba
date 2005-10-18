/**
 *  Linux_SambaPrinterOptionsResourceAccess.cpp
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


#include "Linux_SambaPrinterOptionsResourceAccess.h"

namespace genProvider {
  
  void Linux_SambaPrinterOptionsResourceAccess::setInstanceNameProperties(const char* nsp,
   char *instanceName,
   Linux_SambaPrinterOptionsInstanceName& anInstanceName)
  {
    anInstanceName.setNamespace(nsp);
    anInstanceName.setName(instanceName);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  };
  
  void Linux_SambaPrinterOptionsResourceAccess::setInstanceProperties(
   Linux_SambaPrinterOptionsManualInstance& aManualInstance)
  {
    char *option;
   
    option = get_option(aManualInstance.getInstanceName().getName(),AVAILABLE);	
    if ( option )
       if(strcasecmp(option,YES) == 0)
	 aManualInstance.setAvailable( true );
       else
	 aManualInstance.setAvailable( false );
    
    option = get_option(aManualInstance.getInstanceName().getName(),COMMENT);	
    if ( option )
      aManualInstance.setComment( option );

    option = get_option(aManualInstance.getInstanceName().getName(),PRINTABLE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setPrintable( true );
      else
	aManualInstance.setPrintable( false );

    option = get_option(aManualInstance.getInstanceName().getName(),PATH);	
    if ( option )
      aManualInstance.setPath( option );

    option = get_option(aManualInstance.getInstanceName().getName(),PRINTER_NAME);	
    if ( option )
      aManualInstance.setSystemPrinterName( option );
  }; 
  
  void Linux_SambaPrinterOptionsResourceAccess::setRAProperties(
   Linux_SambaPrinterOptionsManualInstance newInstance)
  {
    
    if ( newInstance.isAvailableSet())
      if(newInstance.getAvailable())
	set_printer_option(newInstance.getInstanceName().getName(),AVAILABLE,YES);
      else
	set_printer_option(newInstance.getInstanceName().getName(),AVAILABLE,NO);
    
    if ( newInstance.isCommentSet())
      set_printer_option(newInstance.getInstanceName().getName(),COMMENT, newInstance.getComment());
    
    // If you are managing an instance of a printer, the printable attribute must be 'yes'
    set_printer_option(newInstance.getInstanceName().getName(),PRINTABLE,YES);
      
    if ( newInstance.isPathSet())
      set_printer_option(newInstance.getInstanceName().getName(),PATH, newInstance.getPath());
    
    if ( newInstance.isSystemPrinterNameSet())
      set_printer_option(newInstance.getInstanceName().getName(),PRINTER_NAME, newInstance.getSystemPrinterName());
  
  };


  //Linux_SambaPrinterOptionsResourceAccess::Linux_SambaPrinterOptionsResourceAccess();
  Linux_SambaPrinterOptionsResourceAccess::~Linux_SambaPrinterOptionsResourceAccess() { };
    
  /* intrinsic methods */
  
  void Linux_SambaPrinterOptionsResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaPrinterOptionsInstanceNameEnumeration& instnames)
  { 
    char ** printers = get_samba_printers_list();
    
    if(printers){
      for (int i=0; printers[i]; i++){
	Linux_SambaPrinterOptionsInstanceName instanceName;
	setInstanceNameProperties(nsp,printers[i],instanceName);
	instnames.addElement(instanceName); 
      }
    }
  };
  
  void Linux_SambaPrinterOptionsResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaPrinterOptionsManualInstanceEnumeration& instances)
  {
    char ** printers = get_samba_printers_list();
    
    if(printers){
      for (int i=0; printers[i]; i++){
	Linux_SambaPrinterOptionsManualInstance aManualInstance;
	Linux_SambaPrinterOptionsInstanceName instanceName;
	
	setInstanceNameProperties(nsp,printers[i],instanceName);
	aManualInstance.setInstanceName(instanceName);
	
	setInstanceProperties(aManualInstance);
	
	instances.addElement(aManualInstance);
      }
    }
  };
  
  Linux_SambaPrinterOptionsManualInstance 
   Linux_SambaPrinterOptionsResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaPrinterOptionsInstanceName& instanceName)
  {
    Linux_SambaPrinterOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    
    setInstanceProperties(aManualInstance);
    
    return aManualInstance;  
  };
  
  void Linux_SambaPrinterOptionsResourceAccess::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaPrinterOptionsManualInstance& newInstance)
  {
    setRAProperties(newInstance);
  };
  
  void Linux_SambaPrinterOptionsResourceAccess::createInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaPrinterOptionsManualInstance& newInstance)
  {
    if(!service_exists(newInstance.getInstanceName().getName())){
      if(!add_samba_printer(newInstance.getInstanceName().getName()))
	setRAProperties(newInstance);
      else
	throw CmpiStatus(CMPI_RC_ERR_FAILED,"Instance could not be created!");
    }
    else
      throw CmpiStatus(CMPI_RC_ERR_ALREADY_EXISTS,"Instance already exists!");
  };
  
  void Linux_SambaPrinterOptionsResourceAccess::deleteInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaPrinterOptionsInstanceName& instanceName)
  {
    if(service_exists(instanceName.getName())){
      if(delete_samba_printer(instanceName.getName())) 
	throw CmpiStatus(CMPI_RC_ERR_FAILED,"Instance could not be deleted!");
    }else
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
  };
  
    
    /* extrinsic methods */
    
  char* Linux_SambaPrinterOptionsResourceAccess::getAllSystemDefinedPrinters(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaPrinterOptionsInstanceName& instanceName) 
  { 
    char ** printers = get_cups_printer_list();
    char *  ret = NULL;
    int len = 0;

    if(printers){
      for (int i=0; printers[i]; i++)
	len = len + strlen(printers[i]) + 4;
      
      ret =(char*) calloc(len,sizeof(char));
      
      for (int i=0; printers[i]; i++){
	if(ret[0]=='\0')
	  sprintf(ret,"%s",printers[i]);
	else
	  sprintf(ret,"%s, %s",ret,printers[i]);
      }
    }
    return ret;
  };
  
	
}


