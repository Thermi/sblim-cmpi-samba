/**
 *  Linux_SambaGlobalFileNameHandlingForGlobalDefaultImplementation.cpp
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


#include "Linux_SambaGlobalFileNameHandlingForGlobalDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaGlobalFileNameHandlingForGlobalDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaGlobalFileNameHandlingForGlobal"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaGlobalFileNameHandlingForGlobal");   
  }
  	
  void Linux_SambaGlobalFileNameHandlingForGlobalDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaGlobalFileNameHandlingForGlobal"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaGlobalFileNameHandlingForGlobalInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaGlobalFileNameHandlingForGlobalManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstance 
   Linux_SambaGlobalFileNameHandlingForGlobalDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName&){
    cout<<"getInstance not supported for Linux_SambaGlobalFileNameHandlingForGlobal"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaGlobalFileNameHandlingForGlobal");
  }
  	
  void Linux_SambaGlobalFileNameHandlingForGlobalDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaGlobalFileNameHandlingForGlobal"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaGlobalFileNameHandlingForGlobal");
  }
  	
  void Linux_SambaGlobalFileNameHandlingForGlobalDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaGlobalFileNameHandlingForGlobal"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaGlobalFileNameHandlingForGlobal");
  }
  	
  void Linux_SambaGlobalFileNameHandlingForGlobalDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaGlobalFileNameHandlingForGlobal"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaGlobalFileNameHandlingForGlobal");
  }
	
  
    /* Association Interface */

    void Linux_SambaGlobalFileNameHandlingForGlobalDefaultImplementation::
     referencesManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& sourceInst,
     Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getManagedElementReferences between Linux_SambaGlobalOptions and Linux_SambaGlobalFileNameHandlingOptions not implemented for Linux_SambaGlobalFileNameHandlingForGlobal");
    }

    void Linux_SambaGlobalFileNameHandlingForGlobalDefaultImplementation::
     referencesSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getSettingDataReferences between Linux_SambaGlobalOptions and Linux_SambaGlobalFileNameHandlingOptions not implemented for Linux_SambaGlobalFileNameHandlingForGlobal");
    }

    void Linux_SambaGlobalFileNameHandlingForGlobalDefaultImplementation::
     associatorsManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceEnumeration& instances){
      
      std::cout<<"Linux_SambaGlobalFileNameHandlingForGlobal : associatorsLinux_SambaGlobalOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration enumeration;
      
      referencesManagedElement(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaGlobalOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaGlobalOptionsInstanceName ManagedElement = 
         instanceName.getManagedElement();
         
        Linux_SambaGlobalOptionsInstance inst = external.getInstance(properties,ManagedElement);
        
        instances.addElement(inst);
      }
    }

    void Linux_SambaGlobalFileNameHandlingForGlobalDefaultImplementation::
     associatorsSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumeration& instances){
     
      std::cout<<"Linux_SambaGlobalFileNameHandlingForGlobal : associatorsLinux_SambaGlobalFileNameHandlingOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration enumeration;
      
      referencesSettingData(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaGlobalFileNameHandlingOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaGlobalFileNameHandlingOptionsInstanceName SettingData = 
         instanceName.getSettingData();
         
        Linux_SambaGlobalFileNameHandlingOptionsInstance inst = external.getInstance(properties,SettingData);
        
        instances.addElement(inst);
      }
    }

   
  /* extrinsic methods */
	
}

