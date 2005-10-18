/**
 *  Linux_SambaShareProtocolForShareResourceAccess.cpp
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


#include "Linux_SambaShareProtocolForShareResourceAccess.h"

namespace genProvider {
  
    //Linux_SambaShareProtocolForShareResourceAccess::Linux_SambaShareProtocolForShareResourceAccess();
    Linux_SambaShareProtocolForShareResourceAccess::~Linux_SambaShareProtocolForShareResourceAccess() { };
    
    /* intrinsic methods */
    /*
    void Linux_SambaShareProtocolForShareResourceAccess::enumInstanceNames(
     const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
     Linux_SambaShareProtocolForShareInstanceNameEnumeration& instnames){
      
      int numInstanceNames=1;
      for(int i=0;i<numInstanceNames;i++){
      
        //place here the code retrieving your instanceName
      
        Linux_SambaShareProtocolForShareInstanceName instanceName;
        
      }      
    }
    */
  	/*
    void Linux_SambaShareProtocolForShareResourceAccess::enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaShareProtocolForShareManualInstanceEnumeration& instances){};
  	*/
  	/*
    Linux_SambaShareProtocolForShareManualInstance 
     Linux_SambaShareProtocolForShareResourceAccess::getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaShareProtocolForShareInstanceName&){
      Linux_SambaShareProtocolForShareManualInstance instance;
      
    }
  	*/
  	/*
    void Linux_SambaShareProtocolForShareResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaShareProtocolForShareManualInstance&){};
  	*/
  	/*
    void Linux_SambaShareProtocolForShareResourceAccess::createInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaShareProtocolForShareManualInstance&){};
  	*/
  	
    void Linux_SambaShareProtocolForShareResourceAccess::deleteInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaShareProtocolForShareInstanceName&){};
	
    
    /* Association Interface */
    
  void Linux_SambaShareProtocolForShareResourceAccess::referencesSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaShareOptionsInstanceName& sourceInst,
   Linux_SambaShareProtocolForShareManualInstanceEnumeration& instEnum)
  {
    Linux_SambaShareProtocolForShareManualInstance manualInstance;
    
    Linux_SambaShareProtocolForShareInstanceName instName;
    instName.setNamespace(nsp);
    instName.setManagedElement(sourceInst);
    
    Linux_SambaShareProtocolOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(sourceInst.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
    instName.setSettingData(secInstName);
    
    manualInstance.setInstanceName(instName);
    instEnum.addElement(manualInstance);
  };
    
  
  void Linux_SambaShareProtocolForShareResourceAccess::referencesManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaShareProtocolOptionsInstanceName& sourceInst,
   Linux_SambaShareProtocolForShareManualInstanceEnumeration& instEnum)
  {
    Linux_SambaShareProtocolForShareManualInstance manualInstance;
    
    Linux_SambaShareProtocolForShareInstanceName instName;
    instName.setNamespace(nsp);
    instName.setSettingData(sourceInst);
    
    Linux_SambaShareOptionsInstanceName shareInstName;
    shareInstName.setNamespace(nsp);
    shareInstName.setName(sourceInst.getName());
    shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instName.setManagedElement(shareInstName);
    
    manualInstance.setInstanceName(instName);
    instEnum.addElement(manualInstance);
  };

  
  void Linux_SambaShareProtocolForShareResourceAccess::associatorsSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaShareOptionsInstanceName& sourceInst,
   Linux_SambaShareProtocolOptionsInstanceEnumeration& instEnum)
  {
    Linux_SambaShareProtocolOptionsInstance instance;
    
    Linux_SambaShareProtocolOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(sourceInst.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(secInstName);
    char *option;
    
    option = get_option(sourceInst.getName(),ACL_COMPATIBILITY);	
    if ( option )
      if(strcasecmp(option,"Auto") == 0)
	instance.setAclCompatibility( 0 );
      else 
	if(strcasecmp(option,"winnt") == 0)
	  instance.setAclCompatibility( 1 );
	else 
	  if(strcasecmp(option,"win2k") == 0)
	    instance.setAclCompatibility( 2 );
    
    option = get_option(sourceInst.getName(),EA_SUPPORT);
    if( option )
      if(strcasecmp(option,YES) == 0)
	instance.setEASupport( true );
      else
	instance.setEASupport( false );
    
    option = get_option(sourceInst.getName(),NT_ACL_SUPPORT);
    if( option )
      if(strcasecmp(option,YES) == 0)
	instance.setNTACLSupport( true );
      else
	instance.setNTACLSupport( false );
   

    instEnum.addElement(instance);
  };
    
    
  void Linux_SambaShareProtocolForShareResourceAccess::associatorsManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaShareProtocolOptionsInstanceName& sourceInst,
   Linux_SambaShareOptionsInstanceEnumeration& instEnum)
  {
    Linux_SambaShareOptionsInstance instance;
    
    Linux_SambaShareOptionsInstanceName shareInstName;
    shareInstName.setNamespace(nsp);
    shareInstName.setName(sourceInst.getName());
    shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(shareInstName);
    char *option;
    
    option = get_option(sourceInst.getName(),AVAILABLE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setAvailable( true );
      else
	instance.setAvailable( false );
    
    option = get_option(sourceInst.getName(),COMMENT);
    if ( option )
      instance.setComment(option);
    
    option = get_option(sourceInst.getName(),PATH);
    if ( option )
      instance.setPath(option);
    
    option = get_option(sourceInst.getName(),PRINTABLE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setPrintable( true );
      else
	instance.setPrintable( false );
    
    instEnum.addElement(instance);
  };

    /* extrinsic methods */
	
}


