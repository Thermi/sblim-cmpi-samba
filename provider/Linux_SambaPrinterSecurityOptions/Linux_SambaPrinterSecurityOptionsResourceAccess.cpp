/**
 *  Linux_SambaPrinterSecurityOptionsResourceAccess.cpp
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


#include "Linux_SambaPrinterSecurityOptionsResourceAccess.h"

namespace genProvider {
  
  void Linux_SambaPrinterSecurityOptionsResourceAccess::setInstanceNameProperties(const char* nsp,
   char *instanceName,
   Linux_SambaPrinterSecurityOptionsInstanceName& anInstanceName)
  {
    anInstanceName.setNamespace(nsp);
    anInstanceName.setName(instanceName);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  };
  

  //Linux_SambaPrinterSecurityOptionsResourceAccess::Linux_SambaPrinterSecurityOptionsResourceAccess();
  Linux_SambaPrinterSecurityOptionsResourceAccess::~Linux_SambaPrinterSecurityOptionsResourceAccess() { };
    
  /* intrinsic methods */
    
  void Linux_SambaPrinterSecurityOptionsResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaPrinterSecurityOptionsInstanceNameEnumeration& instnames)
  { 
    char ** printers = get_samba_printers_list();
    Linux_SambaPrinterSecurityOptionsInstanceName instanceName;
    
    setInstanceNameProperties(nsp,DEFAULT_GLOBAL_NAME,instanceName);
    instnames.addElement(instanceName); 
    
    
    if(printers){
      for (int i=0; printers[i]; i++){
	setInstanceNameProperties(nsp,printers[i],instanceName);
	instnames.addElement(instanceName); 
      }
    }
  };
  
  void Linux_SambaPrinterSecurityOptionsResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaPrinterSecurityOptionsManualInstanceEnumeration& instances)
  {
    Linux_SambaPrinterSecurityOptionsManualInstance aManualInstance;
    Linux_SambaPrinterSecurityOptionsInstanceName instanceName;
	
    setInstanceNameProperties(nsp,DEFAULT_GLOBAL_NAME,instanceName);
    aManualInstance.setInstanceName(instanceName);
    
    instances.addElement(aManualInstance);

    char ** printers = get_samba_printers_list();
    
    if(printers){
      for (int i=0; printers[i]; i++){

	setInstanceNameProperties(nsp,printers[i],instanceName);
	aManualInstance.setInstanceName(instanceName);
	
	instances.addElement(aManualInstance);
      }
    }
  };
  
  Linux_SambaPrinterSecurityOptionsManualInstance 
   Linux_SambaPrinterSecurityOptionsResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaPrinterSecurityOptionsInstanceName& instanceName)
  {
    Linux_SambaPrinterSecurityOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    
    return aManualInstance;  
  };

  void Linux_SambaPrinterSecurityOptionsResourceAccess::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaPrinterSecurityOptionsManualInstance& newInstance)
  {
  };
  

  void Linux_SambaPrinterSecurityOptionsResourceAccess::createInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaPrinterSecurityOptionsManualInstance& newInstance)
  {
  };
  
  void Linux_SambaPrinterSecurityOptionsResourceAccess::deleteInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaPrinterSecurityOptionsInstanceName& instanceName)
  {
  };
  
  /* extrinsic methods */
	
}


