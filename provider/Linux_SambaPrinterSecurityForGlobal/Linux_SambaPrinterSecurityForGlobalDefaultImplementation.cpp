/**
 *  Linux_SambaPrinterSecurityForGlobalDefaultImplementation.cpp
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


#include "Linux_SambaPrinterSecurityForGlobalDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaPrinterSecurityForGlobalDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaPrinterSecurityForGlobalInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaPrinterSecurityForGlobal"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaPrinterSecurityForGlobal");   
  }
  	
  void Linux_SambaPrinterSecurityForGlobalDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaPrinterSecurityForGlobalManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaPrinterSecurityForGlobal"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaPrinterSecurityForGlobalInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaPrinterSecurityForGlobalInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaPrinterSecurityForGlobalManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaPrinterSecurityForGlobalManualInstance 
   Linux_SambaPrinterSecurityForGlobalDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaPrinterSecurityForGlobalInstanceName&){
    cout<<"getInstance not supported for Linux_SambaPrinterSecurityForGlobal"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaPrinterSecurityForGlobal");
  }
  	
  void Linux_SambaPrinterSecurityForGlobalDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaPrinterSecurityForGlobalManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaPrinterSecurityForGlobal"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaPrinterSecurityForGlobal");
  }
  	
  void Linux_SambaPrinterSecurityForGlobalDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaPrinterSecurityForGlobalManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaPrinterSecurityForGlobal"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaPrinterSecurityForGlobal");
  }
  	
  void Linux_SambaPrinterSecurityForGlobalDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaPrinterSecurityForGlobalInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaPrinterSecurityForGlobal"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaPrinterSecurityForGlobal");
  }
	
  
    /* Association Interface */

    void Linux_SambaPrinterSecurityForGlobalDefaultImplementation::
     referencesSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaPrinterSecurityForGlobalManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getSettingDataReferences between Linux_SambaPrinterSecurityOptions and Linux_SambaGlobalOptions not implemented for Linux_SambaPrinterSecurityForGlobal");
    }

    void Linux_SambaPrinterSecurityForGlobalDefaultImplementation::
     referencesManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterSecurityOptionsInstanceName& sourceInst,
     Linux_SambaPrinterSecurityForGlobalManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getManagedElementReferences between Linux_SambaPrinterSecurityOptions and Linux_SambaGlobalOptions not implemented for Linux_SambaPrinterSecurityForGlobal");
    }

    void Linux_SambaPrinterSecurityForGlobalDefaultImplementation::
     associatorsSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaPrinterSecurityOptionsInstanceEnumeration& instances){
      
      std::cout<<"Linux_SambaPrinterSecurityForGlobal : associatorsLinux_SambaPrinterSecurityOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaPrinterSecurityForGlobalManualInstanceEnumeration enumeration;
      
      referencesSettingData(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaPrinterSecurityOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaPrinterSecurityForGlobalManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaPrinterSecurityForGlobalInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaPrinterSecurityOptionsInstanceName SettingData = 
         instanceName.getSettingData();
         
        Linux_SambaPrinterSecurityOptionsInstance inst = external.getInstance(properties,SettingData);
        
        instances.addElement(inst);
      }
    }

    void Linux_SambaPrinterSecurityForGlobalDefaultImplementation::
     associatorsManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterSecurityOptionsInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceEnumeration& instances){
     
      std::cout<<"Linux_SambaPrinterSecurityForGlobal : associatorsLinux_SambaGlobalOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaPrinterSecurityForGlobalManualInstanceEnumeration enumeration;
      
      referencesManagedElement(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaGlobalOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaPrinterSecurityForGlobalManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaPrinterSecurityForGlobalInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaGlobalOptionsInstanceName ManagedElement = 
         instanceName.getManagedElement();
         
        Linux_SambaGlobalOptionsInstance inst = external.getInstance(properties,ManagedElement);
        
        instances.addElement(inst);
      }
    }

   
  /* extrinsic methods */
	
}

