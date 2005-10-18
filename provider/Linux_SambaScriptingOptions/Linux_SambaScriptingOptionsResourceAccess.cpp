/**
 *  Linux_SambaScriptingOptionsResourceAccess.cpp
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


#include "Linux_SambaScriptingOptionsResourceAccess.h"

namespace genProvider {
  
  void Linux_SambaScriptingOptionsResourceAccess::setInstanceNameProperties(const char* nsp,     
    Linux_SambaScriptingOptionsInstanceName& anInstanceName)
  {
    anInstanceName.setNamespace(nsp);
    anInstanceName.setName(DEFAULT_GLOBAL_NAME);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  }

  void Linux_SambaScriptingOptionsResourceAccess::setInstanceProperties(
   Linux_SambaScriptingOptionsManualInstance& aManualInstance)
  {
    char *option;

    option = get_global_option(ADD_GROUP_SCRIPT);	
    if ( option )
      aManualInstance.setaddGroupScript(option);

    option = get_global_option(ADD_PRINTER_COMMAND);	
    if ( option )
      aManualInstance.setaddPrinterCommand(option);
    
    option = get_global_option(ADD_SHARE_COMMAND);	
    if ( option )
      aManualInstance.setaddShareCommand(option);
    
    option = get_global_option(ADD_USER_SCRIPT);	
    if ( option )
      aManualInstance.setaddUserScript(option);
    
    option = get_global_option(ADD_USER_TO_GROUP_SCRIPT);	
    if ( option )
      aManualInstance.setaddUsertoGroupScript(option);
    
    option = get_global_option(DELETE_GROUP_SCRIPT);	
    if ( option )
      aManualInstance.setdeleteGrouprScript(option);
    
    option = get_global_option(DELETE_USER_SCRIPT);	
    if ( option )
      aManualInstance.setdeleteUserScript(option);
    
    option = get_global_option(DELETE_USER_FROM_GROUP_SCRIPT);	
    if ( option )
      aManualInstance.setdeleteUserfromGroupScript(option);
  }
  
    //Linux_SambaScriptingOptionsResourceAccess::Linux_SambaScriptingOptionsResourceAccess();
    Linux_SambaScriptingOptionsResourceAccess::~Linux_SambaScriptingOptionsResourceAccess() { 
      terminator();
    };
    
    /* intrinsic methods */
    
  void Linux_SambaScriptingOptionsResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaScriptingOptionsInstanceNameEnumeration& instnames)
  {
    Linux_SambaScriptingOptionsInstanceName instanceName;
    setInstanceNameProperties(nsp,instanceName);
    instnames.addElement(instanceName); 
  };
  
    
  void Linux_SambaScriptingOptionsResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaScriptingOptionsManualInstanceEnumeration& instances)
  {
    Linux_SambaScriptingOptionsManualInstance aManualInstance;
    Linux_SambaScriptingOptionsInstanceName instanceName;
    
    setInstanceNameProperties(nsp,instanceName);
    aManualInstance.setInstanceName(instanceName);

    setInstanceProperties(aManualInstance);
    
    instances.addElement(aManualInstance);
  };
  	
  
  Linux_SambaScriptingOptionsManualInstance 
  Linux_SambaScriptingOptionsResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaScriptingOptionsInstanceName& instanceName)
  {
    Linux_SambaScriptingOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    
    setInstanceProperties(aManualInstance);
    
    return aManualInstance;  
  };
  
  
  void Linux_SambaScriptingOptionsResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaScriptingOptionsManualInstance& newInstance)
  {

    if (newInstance.isaddGroupScriptSet())
      set_global_option(ADD_GROUP_SCRIPT,newInstance.getaddGroupScript());	

    if ( newInstance.isaddPrinterCommandSet())
      set_global_option(ADD_PRINTER_COMMAND, newInstance.getaddPrinterCommand());	
   
    if (newInstance.isaddShareCommandSet())    
      set_global_option(ADD_SHARE_COMMAND,newInstance.getaddShareCommand());	

    if (newInstance.isaddUserScriptSet())
      set_global_option(ADD_USER_SCRIPT,newInstance.getaddUserScript());	
   	
    if (newInstance.isaddUsertoGroupScriptSet())
      set_global_option(ADD_USER_TO_GROUP_SCRIPT,newInstance.getaddUsertoGroupScript());

    if (newInstance.isdeleteGrouprScriptSet())
      set_global_option(DELETE_GROUP_SCRIPT,newInstance.getdeleteGrouprScript());	
    
    if(newInstance.isdeleteUserScriptSet())
      set_global_option(DELETE_USER_SCRIPT,newInstance.getdeleteUserScript());	
    
    if(newInstance.isdeleteUserfromGroupScriptSet())
      set_global_option(DELETE_USER_FROM_GROUP_SCRIPT,newInstance.getdeleteUserfromGroupScript());	

  };
  
  	
  	/*
    void Linux_SambaScriptingOptionsResourceAccess::createInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaScriptingOptionsManualInstance&){};
  	*/
  	/*
    void Linux_SambaScriptingOptionsResourceAccess::deleteInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaScriptingOptionsInstanceName&){};
	*/
    
    /* extrinsic methods */
	
}


