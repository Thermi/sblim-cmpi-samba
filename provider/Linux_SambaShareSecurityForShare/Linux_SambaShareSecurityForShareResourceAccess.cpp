/**
 *  Linux_SambaShareSecurityForShareResourceAccess.cpp
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


#include "Linux_SambaShareSecurityForShareResourceAccess.h"

namespace genProvider {
  
    //Linux_SambaShareSecurityForShareResourceAccess::Linux_SambaShareSecurityForShareResourceAccess();
    Linux_SambaShareSecurityForShareResourceAccess::~Linux_SambaShareSecurityForShareResourceAccess() { };
    
    /* intrinsic methods */
    /*
    void Linux_SambaShareSecurityForShareResourceAccess::enumInstanceNames(
     const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
     Linux_SambaShareSecurityForShareInstanceNameEnumeration& instnames){
      
      int numInstanceNames=1;
      for(int i=0;i<numInstanceNames;i++){
      
        //place here the code retrieving your instanceName
      
        Linux_SambaShareSecurityForShareInstanceName instanceName;
        
      }      
    }
    */
  	/*
    void Linux_SambaShareSecurityForShareResourceAccess::enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaShareSecurityForShareManualInstanceEnumeration& instances){};
  	*/
  	/*
    Linux_SambaShareSecurityForShareManualInstance 
     Linux_SambaShareSecurityForShareResourceAccess::getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaShareSecurityForShareInstanceName&){
      Linux_SambaShareSecurityForShareManualInstance instance;
      
    }
  	*/
  	/*
    void Linux_SambaShareSecurityForShareResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaShareSecurityForShareManualInstance&){};
  	*/
  	/*
    void Linux_SambaShareSecurityForShareResourceAccess::createInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaShareSecurityForShareManualInstance&){};
  	*/
  	
    void Linux_SambaShareSecurityForShareResourceAccess::deleteInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaShareSecurityForShareInstanceName&){};
	
    
    /* Association Interface */
    
  void Linux_SambaShareSecurityForShareResourceAccess::referencesSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaShareOptionsInstanceName& sourceInst,
   Linux_SambaShareSecurityForShareManualInstanceEnumeration& instEnum)
  {
    Linux_SambaShareSecurityForShareManualInstance manualInstance;
    
    Linux_SambaShareSecurityForShareInstanceName instName;
    instName.setNamespace(nsp);
    instName.setManagedElement(sourceInst);
    
    Linux_SambaShareSecurityOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(sourceInst.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
    instName.setSettingData(secInstName);
    
    manualInstance.setInstanceName(instName);
    instEnum.addElement(manualInstance);
  };
    
  
  void Linux_SambaShareSecurityForShareResourceAccess::referencesManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaShareSecurityOptionsInstanceName& sourceInst,
   Linux_SambaShareSecurityForShareManualInstanceEnumeration& instEnum)
  {
    Linux_SambaShareSecurityForShareManualInstance manualInstance;
    
    Linux_SambaShareSecurityForShareInstanceName instName;
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

  
  void Linux_SambaShareSecurityForShareResourceAccess::associatorsSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaShareOptionsInstanceName& sourceInst,
   Linux_SambaShareSecurityOptionsInstanceEnumeration& instEnum)
  {
    Linux_SambaShareSecurityOptionsInstance instance;
    
    Linux_SambaShareSecurityOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(sourceInst.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(secInstName);
    char *option;
    
    option = get_option(sourceInst.getName(),CREATE_MASK);	
    if ( option )
      instance.setCreateMask( atoi(option) );

    option = get_option(sourceInst.getName(),DIRECTORY_MASK);	
    if ( option )
      instance.setDirectoryMask( atoi(option) );

    option = get_option(sourceInst.getName(),DIRECTORY_SECURITY_MASK);	
    if ( option )
      instance.setDirectorySecurityMask( atoi(option) );

    instEnum.addElement(instance);
  };
    
    
  void Linux_SambaShareSecurityForShareResourceAccess::associatorsManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaShareSecurityOptionsInstanceName& sourceInst,
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


