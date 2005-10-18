/**
 *  Linux_SambaShareFileNameHandlingForShareDefaultImplementation.cpp
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


#include "Linux_SambaShareFileNameHandlingForShareDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaShareFileNameHandlingForShareDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaShareFileNameHandlingForShare"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaShareFileNameHandlingForShare");   
  }
  	
  void Linux_SambaShareFileNameHandlingForShareDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaShareFileNameHandlingForShare"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaShareFileNameHandlingForShareInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaShareFileNameHandlingForShareManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaShareFileNameHandlingForShareManualInstance 
   Linux_SambaShareFileNameHandlingForShareDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaShareFileNameHandlingForShareInstanceName&){
    cout<<"getInstance not supported for Linux_SambaShareFileNameHandlingForShare"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaShareFileNameHandlingForShare");
  }
  	
  void Linux_SambaShareFileNameHandlingForShareDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaShareFileNameHandlingForShareManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaShareFileNameHandlingForShare"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaShareFileNameHandlingForShare");
  }
  	
  void Linux_SambaShareFileNameHandlingForShareDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaShareFileNameHandlingForShareManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaShareFileNameHandlingForShare"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaShareFileNameHandlingForShare");
  }
  	
  void Linux_SambaShareFileNameHandlingForShareDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaShareFileNameHandlingForShareInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaShareFileNameHandlingForShare"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaShareFileNameHandlingForShare");
  }
	
  
    /* Association Interface */

    void Linux_SambaShareFileNameHandlingForShareDefaultImplementation::
     referencesSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getSettingDataReferences between Linux_SambaShareFileNameHandlingOptions and Linux_SambaShareOptions not implemented for Linux_SambaShareFileNameHandlingForShare");
    }

    void Linux_SambaShareFileNameHandlingForShareDefaultImplementation::
     referencesManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareFileNameHandlingOptionsInstanceName& sourceInst,
     Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getManagedElementReferences between Linux_SambaShareFileNameHandlingOptions and Linux_SambaShareOptions not implemented for Linux_SambaShareFileNameHandlingForShare");
    }

    void Linux_SambaShareFileNameHandlingForShareDefaultImplementation::
     associatorsSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration& instances){
      
      std::cout<<"Linux_SambaShareFileNameHandlingForShare : associatorsLinux_SambaShareFileNameHandlingOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration enumeration;
      
      referencesSettingData(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaShareFileNameHandlingOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaShareFileNameHandlingForShareManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaShareFileNameHandlingForShareInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaShareFileNameHandlingOptionsInstanceName SettingData = 
         instanceName.getSettingData();
         
        Linux_SambaShareFileNameHandlingOptionsInstance inst = external.getInstance(properties,SettingData);
        
        instances.addElement(inst);
      }
    }

    void Linux_SambaShareFileNameHandlingForShareDefaultImplementation::
     associatorsManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareFileNameHandlingOptionsInstanceName& sourceInst,
     Linux_SambaShareOptionsInstanceEnumeration& instances){
     
      std::cout<<"Linux_SambaShareFileNameHandlingForShare : associatorsLinux_SambaShareOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration enumeration;
      
      referencesManagedElement(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaShareOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaShareFileNameHandlingForShareManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaShareFileNameHandlingForShareInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaShareOptionsInstanceName ManagedElement = 
         instanceName.getManagedElement();
         
        Linux_SambaShareOptionsInstance inst = external.getInstance(properties,ManagedElement);
        
        instances.addElement(inst);
      }
    }

   
  /* extrinsic methods */
	
}

