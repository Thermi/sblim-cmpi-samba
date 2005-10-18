/**
 *  Linux_SambaShareForServiceDefaultImplementation.cpp
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


#include "Linux_SambaShareForServiceDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaShareForServiceDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaShareForServiceInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaShareForService"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaShareForService");   
  }
  	
  void Linux_SambaShareForServiceDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaShareForServiceManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaShareForService"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaShareForServiceInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaShareForServiceInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaShareForServiceManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaShareForServiceManualInstance 
   Linux_SambaShareForServiceDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaShareForServiceInstanceName&){
    cout<<"getInstance not supported for Linux_SambaShareForService"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaShareForService");
  }
  	
  void Linux_SambaShareForServiceDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaShareForServiceManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaShareForService"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaShareForService");
  }
  	
  void Linux_SambaShareForServiceDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaShareForServiceManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaShareForService"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaShareForService");
  }
  	
  void Linux_SambaShareForServiceDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaShareForServiceInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaShareForService"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaShareForService");
  }
	
  
    /* Association Interface */

    void Linux_SambaShareForServiceDefaultImplementation::
     referencesSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaShareForServiceManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getSettingDataReferences between Linux_SambaShareOptions and Linux_SambaService not implemented for Linux_SambaShareForService");
    }

    void Linux_SambaShareForServiceDefaultImplementation::
     referencesManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareForServiceManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getManagedElementReferences between Linux_SambaShareOptions and Linux_SambaService not implemented for Linux_SambaShareForService");
    }

    void Linux_SambaShareForServiceDefaultImplementation::
     associatorsSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaShareOptionsInstanceEnumeration& instances){
      
      std::cout<<"Linux_SambaShareForService : associatorsLinux_SambaShareOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaShareForServiceManualInstanceEnumeration enumeration;
      
      referencesSettingData(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaShareOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaShareForServiceManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaShareForServiceInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaShareOptionsInstanceName SettingData = 
         instanceName.getSettingData();
         
        Linux_SambaShareOptionsInstance inst = external.getInstance(properties,SettingData);
        
        instances.addElement(inst);
      }
    }

    void Linux_SambaShareForServiceDefaultImplementation::
     associatorsManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaServiceInstanceEnumeration& instances){
     
      std::cout<<"Linux_SambaShareForService : associatorsLinux_SambaService() ... returns one instance"<<std::endl;
      
      Linux_SambaShareForServiceManualInstanceEnumeration enumeration;
      
      referencesManagedElement(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaServiceExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaShareForServiceManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaShareForServiceInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaServiceInstanceName ManagedElement = 
         instanceName.getManagedElement();
         
        Linux_SambaServiceInstance inst = external.getInstance(properties,ManagedElement);
        
        instances.addElement(inst);
      }
    }

   
  /* extrinsic methods */
	
}

