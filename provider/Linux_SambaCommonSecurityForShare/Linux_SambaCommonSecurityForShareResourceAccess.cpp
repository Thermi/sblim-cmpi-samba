/**
 *  Linux_SambaCommonSecurityForShareResourceAccess.cpp
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


#include "Linux_SambaCommonSecurityForShareResourceAccess.h"

namespace genProvider {
  
    //Linux_SambaCommonSecurityForShareResourceAccess::Linux_SambaCommonSecurityForShareResourceAccess();
    Linux_SambaCommonSecurityForShareResourceAccess::~Linux_SambaCommonSecurityForShareResourceAccess() { };
    
    /* intrinsic methods */
    /*
    void Linux_SambaCommonSecurityForShareResourceAccess::enumInstanceNames(
     const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
     Linux_SambaCommonSecurityForShareInstanceNameEnumeration& instnames){
      
      int numInstanceNames=1;
      for(int i=0;i<numInstanceNames;i++){
      
        //place here the code retrieving your instanceName
      
        Linux_SambaCommonSecurityForShareInstanceName instanceName;
        
      }      
    }
    */
  	/*
    void Linux_SambaCommonSecurityForShareResourceAccess::enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaCommonSecurityForShareManualInstanceEnumeration& instances){};
  	*/
  	/*
    Linux_SambaCommonSecurityForShareManualInstance 
     Linux_SambaCommonSecurityForShareResourceAccess::getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaCommonSecurityForShareInstanceName&){
      Linux_SambaCommonSecurityForShareManualInstance instance;
      
    }
  	*/
  	/*
    void Linux_SambaCommonSecurityForShareResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaCommonSecurityForShareManualInstance&){};
  	*/
  	/*
    void Linux_SambaCommonSecurityForShareResourceAccess::createInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaCommonSecurityForShareManualInstance&){};
  	*/
  	
    void Linux_SambaCommonSecurityForShareResourceAccess::deleteInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaCommonSecurityForShareInstanceName&){};
	
    
    /* Association Interface */
    
  void Linux_SambaCommonSecurityForShareResourceAccess::referencesSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaShareOptionsInstanceName& sourceInst,
   Linux_SambaCommonSecurityForShareManualInstanceEnumeration& instEnum)
   {
    Linux_SambaCommonSecurityForShareManualInstance manualInstance;
    
    Linux_SambaCommonSecurityForShareInstanceName instName;
    instName.setNamespace(nsp);
    instName.setManagedElement(sourceInst);
    
    Linux_SambaCommonSecurityOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(sourceInst.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instName.setSettingData(secInstName);
    
    manualInstance.setInstanceName(instName);
    instEnum.addElement(manualInstance);
  };
    
  void Linux_SambaCommonSecurityForShareResourceAccess::referencesManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaCommonSecurityOptionsInstanceName& sourceInst,
   Linux_SambaCommonSecurityForShareManualInstanceEnumeration& instEnum)
  {
    Linux_SambaCommonSecurityForShareManualInstance manualInstance;
    
    Linux_SambaCommonSecurityForShareInstanceName instName;
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
    
  void Linux_SambaCommonSecurityForShareResourceAccess::associatorsSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaShareOptionsInstanceName& sourceInst,
   Linux_SambaCommonSecurityOptionsInstanceEnumeration& instEnum)
  {
    Linux_SambaCommonSecurityOptionsInstance instance;
    
    Linux_SambaCommonSecurityOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(sourceInst.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(secInstName);
    char *option;
    
    option = get_option(sourceInst.getName(),GUEST_OK);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setGuestOK( true );
      else
	instance.setGuestOK( false );

    option = get_option(sourceInst.getName(),GUEST_ONLY);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setGuestOnly( true );
      else
	instance.setGuestOnly( false );

    option = get_option(sourceInst.getName(),HOSTS_ALLOW);	
    if ( option )
      instance.setHostsAllow( option );

    option = get_option(sourceInst.getName(),HOSTS_DENY);	
    if ( option )
      instance.setHostsDeny( option );

    option = get_option(sourceInst.getName(),READ_ONLY);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setReadOnly( true );
      else
	instance.setReadOnly( false );
    
    instEnum.addElement(instance);
  };
    
  void Linux_SambaCommonSecurityForShareResourceAccess::associatorsManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaCommonSecurityOptionsInstanceName& sourceInst,
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


