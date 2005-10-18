/**
 *  Linux_SambaGlobalProtocolForGlobalDefaultImplementation.cpp
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


#include "Linux_SambaGlobalProtocolForGlobalDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaGlobalProtocolForGlobalDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaGlobalProtocolForGlobalInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaGlobalProtocolForGlobal"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaGlobalProtocolForGlobal");   
  }
  	
  void Linux_SambaGlobalProtocolForGlobalDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaGlobalProtocolForGlobal"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaGlobalProtocolForGlobalInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaGlobalProtocolForGlobalInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaGlobalProtocolForGlobalManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaGlobalProtocolForGlobalManualInstance 
   Linux_SambaGlobalProtocolForGlobalDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGlobalProtocolForGlobalInstanceName&){
    cout<<"getInstance not supported for Linux_SambaGlobalProtocolForGlobal"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaGlobalProtocolForGlobal");
  }
  	
  void Linux_SambaGlobalProtocolForGlobalDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGlobalProtocolForGlobalManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaGlobalProtocolForGlobal"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaGlobalProtocolForGlobal");
  }
  	
  void Linux_SambaGlobalProtocolForGlobalDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaGlobalProtocolForGlobalManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaGlobalProtocolForGlobal"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaGlobalProtocolForGlobal");
  }
  	
  void Linux_SambaGlobalProtocolForGlobalDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaGlobalProtocolForGlobalInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaGlobalProtocolForGlobal"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaGlobalProtocolForGlobal");
  }
	
  
    /* Association Interface */

    void Linux_SambaGlobalProtocolForGlobalDefaultImplementation::
     referencesSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getSettingDataReferences between Linux_SambaGlobalProtocolOptions and Linux_SambaGlobalOptions not implemented for Linux_SambaGlobalProtocolForGlobal");
    }

    void Linux_SambaGlobalProtocolForGlobalDefaultImplementation::
     referencesManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalProtocolOptionsInstanceName& sourceInst,
     Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getManagedElementReferences between Linux_SambaGlobalProtocolOptions and Linux_SambaGlobalOptions not implemented for Linux_SambaGlobalProtocolForGlobal");
    }

    void Linux_SambaGlobalProtocolForGlobalDefaultImplementation::
     associatorsSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalProtocolOptionsInstanceEnumeration& instances){
      
      std::cout<<"Linux_SambaGlobalProtocolForGlobal : associatorsLinux_SambaGlobalProtocolOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration enumeration;
      
      referencesSettingData(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaGlobalProtocolOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaGlobalProtocolForGlobalManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaGlobalProtocolForGlobalInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaGlobalProtocolOptionsInstanceName SettingData = 
         instanceName.getSettingData();
         
        Linux_SambaGlobalProtocolOptionsInstance inst = external.getInstance(properties,SettingData);
        
        instances.addElement(inst);
      }
    }

    void Linux_SambaGlobalProtocolForGlobalDefaultImplementation::
     associatorsManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalProtocolOptionsInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceEnumeration& instances){
     
      std::cout<<"Linux_SambaGlobalProtocolForGlobal : associatorsLinux_SambaGlobalOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration enumeration;
      
      referencesManagedElement(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaGlobalOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaGlobalProtocolForGlobalManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaGlobalProtocolForGlobalInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaGlobalOptionsInstanceName ManagedElement = 
         instanceName.getManagedElement();
         
        Linux_SambaGlobalOptionsInstance inst = external.getInstance(properties,ManagedElement);
        
        instances.addElement(inst);
      }
    }

   
  /* extrinsic methods */
	
}

