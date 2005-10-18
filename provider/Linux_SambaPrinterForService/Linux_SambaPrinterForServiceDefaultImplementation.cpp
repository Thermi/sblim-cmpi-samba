/**
 *  Linux_SambaPrinterForServiceDefaultImplementation.cpp
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


#include "Linux_SambaPrinterForServiceDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaPrinterForServiceDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaPrinterForServiceInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaPrinterForService"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaPrinterForService");   
  }
  	
  void Linux_SambaPrinterForServiceDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaPrinterForServiceManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaPrinterForService"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaPrinterForServiceInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaPrinterForServiceInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaPrinterForServiceManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaPrinterForServiceManualInstance 
   Linux_SambaPrinterForServiceDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaPrinterForServiceInstanceName&){
    cout<<"getInstance not supported for Linux_SambaPrinterForService"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaPrinterForService");
  }
  	
  void Linux_SambaPrinterForServiceDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaPrinterForServiceManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaPrinterForService"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaPrinterForService");
  }
  	
  void Linux_SambaPrinterForServiceDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaPrinterForServiceManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaPrinterForService"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaPrinterForService");
  }
  	
  void Linux_SambaPrinterForServiceDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaPrinterForServiceInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaPrinterForService"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaPrinterForService");
  }
	
  
    /* Association Interface */

    void Linux_SambaPrinterForServiceDefaultImplementation::
     referencesSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaPrinterForServiceManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getSettingDataReferences between Linux_SambaPrinterOptions and Linux_SambaService not implemented for Linux_SambaPrinterForService");
    }

    void Linux_SambaPrinterForServiceDefaultImplementation::
     referencesManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaPrinterForServiceManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getManagedElementReferences between Linux_SambaPrinterOptions and Linux_SambaService not implemented for Linux_SambaPrinterForService");
    }

    void Linux_SambaPrinterForServiceDefaultImplementation::
     associatorsSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaPrinterOptionsInstanceEnumeration& instances){
      
      std::cout<<"Linux_SambaPrinterForService : associatorsLinux_SambaPrinterOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaPrinterForServiceManualInstanceEnumeration enumeration;
      
      referencesSettingData(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaPrinterOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaPrinterForServiceManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaPrinterForServiceInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaPrinterOptionsInstanceName SettingData = 
         instanceName.getSettingData();
         
        Linux_SambaPrinterOptionsInstance inst = external.getInstance(properties,SettingData);
        
        instances.addElement(inst);
      }
    }

    void Linux_SambaPrinterForServiceDefaultImplementation::
     associatorsManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaServiceInstanceEnumeration& instances){
     
      std::cout<<"Linux_SambaPrinterForService : associatorsLinux_SambaService() ... returns one instance"<<std::endl;
      
      Linux_SambaPrinterForServiceManualInstanceEnumeration enumeration;
      
      referencesManagedElement(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaServiceExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaPrinterForServiceManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaPrinterForServiceInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaServiceInstanceName ManagedElement = 
         instanceName.getManagedElement();
         
        Linux_SambaServiceInstance inst = external.getInstance(properties,ManagedElement);
        
        instances.addElement(inst);
      }
    }

   
  /* extrinsic methods */
	
}

