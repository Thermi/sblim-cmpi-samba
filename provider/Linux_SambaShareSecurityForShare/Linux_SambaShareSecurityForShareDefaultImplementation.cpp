/**
 *  Linux_SambaShareSecurityForShareDefaultImplementation.cpp
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


#include "Linux_SambaShareSecurityForShareDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaShareSecurityForShareDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaShareSecurityForShareInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaShareSecurityForShare"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaShareSecurityForShare");   
  }
  	
  void Linux_SambaShareSecurityForShareDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaShareSecurityForShareManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaShareSecurityForShare"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaShareSecurityForShareInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaShareSecurityForShareInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaShareSecurityForShareManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaShareSecurityForShareManualInstance 
   Linux_SambaShareSecurityForShareDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaShareSecurityForShareInstanceName&){
    cout<<"getInstance not supported for Linux_SambaShareSecurityForShare"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaShareSecurityForShare");
  }
  	
  void Linux_SambaShareSecurityForShareDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaShareSecurityForShareManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaShareSecurityForShare"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaShareSecurityForShare");
  }
  	
  void Linux_SambaShareSecurityForShareDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaShareSecurityForShareManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaShareSecurityForShare"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaShareSecurityForShare");
  }
  	
  void Linux_SambaShareSecurityForShareDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaShareSecurityForShareInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaShareSecurityForShare"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaShareSecurityForShare");
  }
	
  
    /* Association Interface */

    void Linux_SambaShareSecurityForShareDefaultImplementation::
     referencesSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareSecurityForShareManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getSettingDataReferences between Linux_SambaShareSecurityOptions and Linux_SambaShareOptions not implemented for Linux_SambaShareSecurityForShare");
    }

    void Linux_SambaShareSecurityForShareDefaultImplementation::
     referencesManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareSecurityOptionsInstanceName& sourceInst,
     Linux_SambaShareSecurityForShareManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getManagedElementReferences between Linux_SambaShareSecurityOptions and Linux_SambaShareOptions not implemented for Linux_SambaShareSecurityForShare");
    }

    void Linux_SambaShareSecurityForShareDefaultImplementation::
     associatorsSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareSecurityOptionsInstanceEnumeration& instances){
      
      std::cout<<"Linux_SambaShareSecurityForShare : associatorsLinux_SambaShareSecurityOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaShareSecurityForShareManualInstanceEnumeration enumeration;
      
      referencesSettingData(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaShareSecurityOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaShareSecurityForShareManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaShareSecurityForShareInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaShareSecurityOptionsInstanceName SettingData = 
         instanceName.getSettingData();
         
        Linux_SambaShareSecurityOptionsInstance inst = external.getInstance(properties,SettingData);
        
        instances.addElement(inst);
      }
    }

    void Linux_SambaShareSecurityForShareDefaultImplementation::
     associatorsManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareSecurityOptionsInstanceName& sourceInst,
     Linux_SambaShareOptionsInstanceEnumeration& instances){
     
      std::cout<<"Linux_SambaShareSecurityForShare : associatorsLinux_SambaShareOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaShareSecurityForShareManualInstanceEnumeration enumeration;
      
      referencesManagedElement(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaShareOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaShareSecurityForShareManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaShareSecurityForShareInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaShareOptionsInstanceName ManagedElement = 
         instanceName.getManagedElement();
         
        Linux_SambaShareOptionsInstance inst = external.getInstance(properties,ManagedElement);
        
        instances.addElement(inst);
      }
    }

   
  /* extrinsic methods */
	
}

