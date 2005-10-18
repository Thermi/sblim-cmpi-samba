/**
 *  Linux_SambaGlobalForServiceDefaultImplementation.cpp
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


#include "Linux_SambaGlobalForServiceDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaGlobalForServiceDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaGlobalForServiceInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaGlobalForService"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaGlobalForService");   
  }
  	
  void Linux_SambaGlobalForServiceDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaGlobalForServiceManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaGlobalForService"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaGlobalForServiceInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaGlobalForServiceInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaGlobalForServiceManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaGlobalForServiceManualInstance 
   Linux_SambaGlobalForServiceDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGlobalForServiceInstanceName&){
    cout<<"getInstance not supported for Linux_SambaGlobalForService"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaGlobalForService");
  }
  	
  void Linux_SambaGlobalForServiceDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGlobalForServiceManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaGlobalForService"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaGlobalForService");
  }
  	
  void Linux_SambaGlobalForServiceDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaGlobalForServiceManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaGlobalForService"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaGlobalForService");
  }
  	
  void Linux_SambaGlobalForServiceDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaGlobalForServiceInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaGlobalForService"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaGlobalForService");
  }
	
  
    /* Association Interface */

    void Linux_SambaGlobalForServiceDefaultImplementation::
     referencesSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaGlobalForServiceManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getSettingDataReferences between Linux_SambaGlobalOptions and Linux_SambaService not implemented for Linux_SambaGlobalForService");
    }

    void Linux_SambaGlobalForServiceDefaultImplementation::
     referencesManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalForServiceManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getManagedElementReferences between Linux_SambaGlobalOptions and Linux_SambaService not implemented for Linux_SambaGlobalForService");
    }

    void Linux_SambaGlobalForServiceDefaultImplementation::
     associatorsSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceEnumeration& instances){
      
      std::cout<<"Linux_SambaGlobalForService : associatorsLinux_SambaGlobalOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaGlobalForServiceManualInstanceEnumeration enumeration;
      
      referencesSettingData(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaGlobalOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaGlobalForServiceManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaGlobalForServiceInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaGlobalOptionsInstanceName SettingData = 
         instanceName.getSettingData();
         
        Linux_SambaGlobalOptionsInstance inst = external.getInstance(properties,SettingData);
        
        instances.addElement(inst);
      }
    }

    void Linux_SambaGlobalForServiceDefaultImplementation::
     associatorsManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaServiceInstanceEnumeration& instances){
     
      std::cout<<"Linux_SambaGlobalForService : associatorsLinux_SambaService() ... returns one instance"<<std::endl;
      
      Linux_SambaGlobalForServiceManualInstanceEnumeration enumeration;
      
      referencesManagedElement(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaServiceExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaGlobalForServiceManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaGlobalForServiceInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaServiceInstanceName ManagedElement = 
         instanceName.getManagedElement();
         
        Linux_SambaServiceInstance inst = external.getInstance(properties,ManagedElement);
        
        instances.addElement(inst);
      }
    }

   
  /* extrinsic methods */
	
}

