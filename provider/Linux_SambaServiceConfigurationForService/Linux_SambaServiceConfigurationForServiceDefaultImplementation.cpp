/**
 *  Linux_SambaServiceConfigurationForServiceDefaultImplementation.cpp
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


#include "Linux_SambaServiceConfigurationForServiceDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaServiceConfigurationForServiceDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaServiceConfigurationForService"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaServiceConfigurationForService");   
  }
  	
  void Linux_SambaServiceConfigurationForServiceDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaServiceConfigurationForService"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaServiceConfigurationForServiceInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaServiceConfigurationForServiceManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaServiceConfigurationForServiceManualInstance 
   Linux_SambaServiceConfigurationForServiceDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaServiceConfigurationForServiceInstanceName&){
    cout<<"getInstance not supported for Linux_SambaServiceConfigurationForService"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaServiceConfigurationForService");
  }
  	
  void Linux_SambaServiceConfigurationForServiceDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaServiceConfigurationForServiceManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaServiceConfigurationForService"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaServiceConfigurationForService");
  }
  	
  void Linux_SambaServiceConfigurationForServiceDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaServiceConfigurationForServiceManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaServiceConfigurationForService"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaServiceConfigurationForService");
  }
  	
  void Linux_SambaServiceConfigurationForServiceDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaServiceConfigurationForServiceInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaServiceConfigurationForService"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaServiceConfigurationForService");
  }
	
  
    /* Association Interface */

    void Linux_SambaServiceConfigurationForServiceDefaultImplementation::
     referencesConfiguration( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getConfigurationReferences between Linux_SambaServiceConfiguration and Linux_SambaService not implemented for Linux_SambaServiceConfigurationForService");
    }

    void Linux_SambaServiceConfigurationForServiceDefaultImplementation::
     referencesElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceConfigurationInstanceName& sourceInst,
     Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getElementReferences between Linux_SambaServiceConfiguration and Linux_SambaService not implemented for Linux_SambaServiceConfigurationForService");
    }

    void Linux_SambaServiceConfigurationForServiceDefaultImplementation::
     associatorsConfiguration( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaServiceConfigurationInstanceEnumeration& instances){
      
      std::cout<<"Linux_SambaServiceConfigurationForService : associatorsLinux_SambaServiceConfiguration() ... returns one instance"<<std::endl;
      
      Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration enumeration;
      
      referencesConfiguration(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaServiceConfigurationExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaServiceConfigurationForServiceManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaServiceConfigurationForServiceInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaServiceConfigurationInstanceName Configuration = 
         instanceName.getConfiguration();
         
        Linux_SambaServiceConfigurationInstance inst = external.getInstance(properties,Configuration);
        
        instances.addElement(inst);
      }
    }

    void Linux_SambaServiceConfigurationForServiceDefaultImplementation::
     associatorsElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceConfigurationInstanceName& sourceInst,
     Linux_SambaServiceInstanceEnumeration& instances){
     
      std::cout<<"Linux_SambaServiceConfigurationForService : associatorsLinux_SambaService() ... returns one instance"<<std::endl;
      
      Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration enumeration;
      
      referencesElement(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaServiceExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaServiceConfigurationForServiceManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaServiceConfigurationForServiceInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaServiceInstanceName Element = 
         instanceName.getElement();
         
        Linux_SambaServiceInstance inst = external.getInstance(properties,Element);
        
        instances.addElement(inst);
      }
    }

   
  /* extrinsic methods */
	
}

