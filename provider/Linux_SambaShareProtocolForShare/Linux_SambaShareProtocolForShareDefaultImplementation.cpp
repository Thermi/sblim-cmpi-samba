/**
 *  Linux_SambaShareProtocolForShareDefaultImplementation.cpp
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


#include "Linux_SambaShareProtocolForShareDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaShareProtocolForShareDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaShareProtocolForShareInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaShareProtocolForShare"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaShareProtocolForShare");   
  }
  	
  void Linux_SambaShareProtocolForShareDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaShareProtocolForShareManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaShareProtocolForShare"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaShareProtocolForShareInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaShareProtocolForShareInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaShareProtocolForShareManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaShareProtocolForShareManualInstance 
   Linux_SambaShareProtocolForShareDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaShareProtocolForShareInstanceName&){
    cout<<"getInstance not supported for Linux_SambaShareProtocolForShare"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaShareProtocolForShare");
  }
  	
  void Linux_SambaShareProtocolForShareDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaShareProtocolForShareManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaShareProtocolForShare"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaShareProtocolForShare");
  }
  	
  void Linux_SambaShareProtocolForShareDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaShareProtocolForShareManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaShareProtocolForShare"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaShareProtocolForShare");
  }
  	
  void Linux_SambaShareProtocolForShareDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaShareProtocolForShareInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaShareProtocolForShare"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaShareProtocolForShare");
  }
	
  
    /* Association Interface */

    void Linux_SambaShareProtocolForShareDefaultImplementation::
     referencesManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareProtocolOptionsInstanceName& sourceInst,
     Linux_SambaShareProtocolForShareManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getManagedElementReferences between Linux_SambaShareOptions and Linux_SambaShareProtocolOptions not implemented for Linux_SambaShareProtocolForShare");
    }

    void Linux_SambaShareProtocolForShareDefaultImplementation::
     referencesSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareProtocolForShareManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getSettingDataReferences between Linux_SambaShareOptions and Linux_SambaShareProtocolOptions not implemented for Linux_SambaShareProtocolForShare");
    }

    void Linux_SambaShareProtocolForShareDefaultImplementation::
     associatorsManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareProtocolOptionsInstanceName& sourceInst,
     Linux_SambaShareOptionsInstanceEnumeration& instances){
      
      std::cout<<"Linux_SambaShareProtocolForShare : associatorsLinux_SambaShareOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaShareProtocolForShareManualInstanceEnumeration enumeration;
      
      referencesManagedElement(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaShareOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaShareProtocolForShareManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaShareProtocolForShareInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaShareOptionsInstanceName ManagedElement = 
         instanceName.getManagedElement();
         
        Linux_SambaShareOptionsInstance inst = external.getInstance(properties,ManagedElement);
        
        instances.addElement(inst);
      }
    }

    void Linux_SambaShareProtocolForShareDefaultImplementation::
     associatorsSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareProtocolOptionsInstanceEnumeration& instances){
     
      std::cout<<"Linux_SambaShareProtocolForShare : associatorsLinux_SambaShareProtocolOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaShareProtocolForShareManualInstanceEnumeration enumeration;
      
      referencesSettingData(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaShareProtocolOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaShareProtocolForShareManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaShareProtocolForShareInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaShareProtocolOptionsInstanceName SettingData = 
         instanceName.getSettingData();
         
        Linux_SambaShareProtocolOptionsInstance inst = external.getInstance(properties,SettingData);
        
        instances.addElement(inst);
      }
    }

   
  /* extrinsic methods */
	
}

