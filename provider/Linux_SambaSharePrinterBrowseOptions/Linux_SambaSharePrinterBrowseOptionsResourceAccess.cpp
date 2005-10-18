/**
 *  Linux_SambaSharePrinterBrowseOptionsResourceAccess.cpp
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


#include "Linux_SambaSharePrinterBrowseOptionsResourceAccess.h"

namespace genProvider {
  
   void Linux_SambaSharePrinterBrowseOptionsResourceAccess::setInstanceNameProperties(const char* nsp,
   char *instanceName,
   Linux_SambaSharePrinterBrowseOptionsInstanceName& anInstanceName)
  {
    anInstanceName.setNamespace(nsp);
    anInstanceName.setName(instanceName);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  };
  
  void Linux_SambaSharePrinterBrowseOptionsResourceAccess::setInstanceProperties(
   Linux_SambaSharePrinterBrowseOptionsManualInstance& aManualInstance)
  {
    char *option;
    
    option = get_option(aManualInstance.getInstanceName().getName(),BROWSEABLE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setBrowsable( true );
      else
	aManualInstance.setBrowsable( false );
  };
  
  void Linux_SambaSharePrinterBrowseOptionsResourceAccess::setRAProperties(
   Linux_SambaSharePrinterBrowseOptionsManualInstance newInstance)
  {
    if ( newInstance.isBrowsableSet() )
      if(newInstance.getBrowsable())  
	set_printer_option(newInstance.getInstanceName().getName(),BROWSEABLE,YES);
      else
	set_printer_option(newInstance.getInstanceName().getName(),BROWSEABLE,NO);
  };

  //Linux_SambaSharePrinterBrowseOptionsResourceAccess::Linux_SambaSharePrinterBrowseOptionsResourceAccess();
  Linux_SambaSharePrinterBrowseOptionsResourceAccess::~Linux_SambaSharePrinterBrowseOptionsResourceAccess() { };
    
  /* intrinsic methods */
    
  void Linux_SambaSharePrinterBrowseOptionsResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaSharePrinterBrowseOptionsInstanceNameEnumeration& instnames)
  { 
    char ** printers = get_samba_printers_list();
    char ** shares = get_shares_list();

    if(printers){
      for (int i=0; printers[i]; i++){
	Linux_SambaSharePrinterBrowseOptionsInstanceName instanceName;
	setInstanceNameProperties(nsp,printers[i],instanceName);
	instnames.addElement(instanceName); 
      }
    }
    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaSharePrinterBrowseOptionsInstanceName instanceName;
	setInstanceNameProperties(nsp,shares[i],instanceName);
	instnames.addElement(instanceName); 
      }
    }
  };

  void Linux_SambaSharePrinterBrowseOptionsResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumeration& instances)
  {
    char ** printers = get_samba_printers_list();
    char ** shares = get_shares_list();
    
    if(printers){
      for (int i=0; printers[i]; i++){
	Linux_SambaSharePrinterBrowseOptionsManualInstance aManualInstance;
	Linux_SambaSharePrinterBrowseOptionsInstanceName instanceName;
	
	setInstanceNameProperties(nsp,printers[i],instanceName);
	aManualInstance.setInstanceName(instanceName);
	
	setInstanceProperties(aManualInstance);
	
	instances.addElement(aManualInstance);
      }
    }
    
    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaSharePrinterBrowseOptionsManualInstance aManualInstance;
	Linux_SambaSharePrinterBrowseOptionsInstanceName instanceName;
	
	setInstanceNameProperties(nsp,shares[i],instanceName);
	aManualInstance.setInstanceName(instanceName);
	
	setInstanceProperties(aManualInstance);
	
	instances.addElement(aManualInstance);
      }
    }
  };

  Linux_SambaSharePrinterBrowseOptionsManualInstance 
   Linux_SambaSharePrinterBrowseOptionsResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaSharePrinterBrowseOptionsInstanceName& instanceName)
  {
    Linux_SambaSharePrinterBrowseOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    
    setInstanceProperties(aManualInstance);
    
    return aManualInstance;  
  };

  void Linux_SambaSharePrinterBrowseOptionsResourceAccess::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaSharePrinterBrowseOptionsManualInstance& newInstance)
  {
    setRAProperties(newInstance);
  };

  void Linux_SambaSharePrinterBrowseOptionsResourceAccess::createInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaSharePrinterBrowseOptionsManualInstance& newInstance)
  {
    setRAProperties(newInstance);
  };

  void Linux_SambaSharePrinterBrowseOptionsResourceAccess::deleteInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaSharePrinterBrowseOptionsInstanceName& instanceName)
  {
    if(service_exists(instanceName.getName())){
      set_printer_option(instanceName.getName(),BROWSEABLE,NULL);
    }else
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Instance doesn't exist!");
  };
    
    /* extrinsic methods */
	
}


