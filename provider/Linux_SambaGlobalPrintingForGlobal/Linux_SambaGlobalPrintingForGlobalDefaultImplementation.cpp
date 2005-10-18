/**
 *  Linux_SambaGlobalPrintingForGlobalDefaultImplementation.cpp
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


#include "Linux_SambaGlobalPrintingForGlobalDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaGlobalPrintingForGlobalDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaGlobalPrintingForGlobal"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaGlobalPrintingForGlobal");   
  }
  	
  void Linux_SambaGlobalPrintingForGlobalDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaGlobalPrintingForGlobal"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaGlobalPrintingForGlobalInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaGlobalPrintingForGlobalManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaGlobalPrintingForGlobalManualInstance 
   Linux_SambaGlobalPrintingForGlobalDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGlobalPrintingForGlobalInstanceName&){
    cout<<"getInstance not supported for Linux_SambaGlobalPrintingForGlobal"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaGlobalPrintingForGlobal");
  }
  	
  void Linux_SambaGlobalPrintingForGlobalDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGlobalPrintingForGlobalManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaGlobalPrintingForGlobal"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaGlobalPrintingForGlobal");
  }
  	
  void Linux_SambaGlobalPrintingForGlobalDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaGlobalPrintingForGlobalManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaGlobalPrintingForGlobal"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaGlobalPrintingForGlobal");
  }
  	
  void Linux_SambaGlobalPrintingForGlobalDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaGlobalPrintingForGlobalInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaGlobalPrintingForGlobal"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaGlobalPrintingForGlobal");
  }
	
  
    /* Association Interface */

    void Linux_SambaGlobalPrintingForGlobalDefaultImplementation::
     referencesSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getSettingDataReferences between Linux_SambaGlobalPrintingOptions and Linux_SambaGlobalOptions not implemented for Linux_SambaGlobalPrintingForGlobal");
    }

    void Linux_SambaGlobalPrintingForGlobalDefaultImplementation::
     referencesManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalPrintingOptionsInstanceName& sourceInst,
     Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getManagedElementReferences between Linux_SambaGlobalPrintingOptions and Linux_SambaGlobalOptions not implemented for Linux_SambaGlobalPrintingForGlobal");
    }

    void Linux_SambaGlobalPrintingForGlobalDefaultImplementation::
     associatorsSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalPrintingOptionsInstanceEnumeration& instances){
      
      std::cout<<"Linux_SambaGlobalPrintingForGlobal : associatorsLinux_SambaGlobalPrintingOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration enumeration;
      
      referencesSettingData(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaGlobalPrintingOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaGlobalPrintingForGlobalManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaGlobalPrintingForGlobalInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaGlobalPrintingOptionsInstanceName SettingData = 
         instanceName.getSettingData();
         
        Linux_SambaGlobalPrintingOptionsInstance inst = external.getInstance(properties,SettingData);
        
        instances.addElement(inst);
      }
    }

    void Linux_SambaGlobalPrintingForGlobalDefaultImplementation::
     associatorsManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalPrintingOptionsInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceEnumeration& instances){
     
      std::cout<<"Linux_SambaGlobalPrintingForGlobal : associatorsLinux_SambaGlobalOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration enumeration;
      
      referencesManagedElement(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaGlobalOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaGlobalPrintingForGlobalManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaGlobalPrintingForGlobalInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaGlobalOptionsInstanceName ManagedElement = 
         instanceName.getManagedElement();
         
        Linux_SambaGlobalOptionsInstance inst = external.getInstance(properties,ManagedElement);
        
        instances.addElement(inst);
      }
    }

   
  /* extrinsic methods */
	
}

