/**
 *  Linux_SambaGlobalSecurityForGlobalDefaultImplementation.cpp
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


#include "Linux_SambaGlobalSecurityForGlobalDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaGlobalSecurityForGlobalDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaGlobalSecurityForGlobalInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaGlobalSecurityForGlobal"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaGlobalSecurityForGlobal");   
  }
  	
  void Linux_SambaGlobalSecurityForGlobalDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaGlobalSecurityForGlobal"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaGlobalSecurityForGlobalInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaGlobalSecurityForGlobalInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaGlobalSecurityForGlobalManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaGlobalSecurityForGlobalManualInstance 
   Linux_SambaGlobalSecurityForGlobalDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGlobalSecurityForGlobalInstanceName&){
    cout<<"getInstance not supported for Linux_SambaGlobalSecurityForGlobal"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaGlobalSecurityForGlobal");
  }
  	
  void Linux_SambaGlobalSecurityForGlobalDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGlobalSecurityForGlobalManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaGlobalSecurityForGlobal"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaGlobalSecurityForGlobal");
  }
  	
  void Linux_SambaGlobalSecurityForGlobalDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaGlobalSecurityForGlobalManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaGlobalSecurityForGlobal"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaGlobalSecurityForGlobal");
  }
  	
  void Linux_SambaGlobalSecurityForGlobalDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaGlobalSecurityForGlobalInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaGlobalSecurityForGlobal"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaGlobalSecurityForGlobal");
  }
	
  
    /* Association Interface */

    void Linux_SambaGlobalSecurityForGlobalDefaultImplementation::
     referencesSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getSettingDataReferences between Linux_SambaGlobalSecurityOptions and Linux_SambaGlobalOptions not implemented for Linux_SambaGlobalSecurityForGlobal");
    }

    void Linux_SambaGlobalSecurityForGlobalDefaultImplementation::
     referencesManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalSecurityOptionsInstanceName& sourceInst,
     Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getManagedElementReferences between Linux_SambaGlobalSecurityOptions and Linux_SambaGlobalOptions not implemented for Linux_SambaGlobalSecurityForGlobal");
    }

    void Linux_SambaGlobalSecurityForGlobalDefaultImplementation::
     associatorsSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalSecurityOptionsInstanceEnumeration& instances){
      
      std::cout<<"Linux_SambaGlobalSecurityForGlobal : associatorsLinux_SambaGlobalSecurityOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration enumeration;
      
      referencesSettingData(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaGlobalSecurityOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaGlobalSecurityForGlobalManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaGlobalSecurityForGlobalInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaGlobalSecurityOptionsInstanceName SettingData = 
         instanceName.getSettingData();
         
        Linux_SambaGlobalSecurityOptionsInstance inst = external.getInstance(properties,SettingData);
        
        instances.addElement(inst);
      }
    }

    void Linux_SambaGlobalSecurityForGlobalDefaultImplementation::
     associatorsManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalSecurityOptionsInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceEnumeration& instances){
     
      std::cout<<"Linux_SambaGlobalSecurityForGlobal : associatorsLinux_SambaGlobalOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration enumeration;
      
      referencesManagedElement(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaGlobalOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaGlobalSecurityForGlobalManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaGlobalSecurityForGlobalInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaGlobalOptionsInstanceName ManagedElement = 
         instanceName.getManagedElement();
         
        Linux_SambaGlobalOptionsInstance inst = external.getInstance(properties,ManagedElement);
        
        instances.addElement(inst);
      }
    }

   
  /* extrinsic methods */
	
}

