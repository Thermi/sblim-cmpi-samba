/**
 *  Linux_SambaGroupForUserDefaultImplementation.cpp
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


#include "Linux_SambaGroupForUserDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaGroupForUserDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaGroupForUserInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaGroupForUser"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaGroupForUser");   
  }
  	
  void Linux_SambaGroupForUserDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaGroupForUserManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaGroupForUser"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaGroupForUserInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaGroupForUserInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaGroupForUserManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaGroupForUserManualInstance 
   Linux_SambaGroupForUserDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGroupForUserInstanceName&){
    cout<<"getInstance not supported for Linux_SambaGroupForUser"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaGroupForUser");
  }
  	
  void Linux_SambaGroupForUserDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGroupForUserManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaGroupForUser"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaGroupForUser");
  }
  	
  void Linux_SambaGroupForUserDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaGroupForUserManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaGroupForUser"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaGroupForUser");
  }
  	
  void Linux_SambaGroupForUserDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaGroupForUserInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaGroupForUser"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaGroupForUser");
  }
	
  
    /* Association Interface */

    void Linux_SambaGroupForUserDefaultImplementation::
     referencesGroupComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaGroupForUserManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getGroupComponentReferences between Linux_SambaGroup and Linux_SambaUser not implemented for Linux_SambaGroupForUser");
    }

    void Linux_SambaGroupForUserDefaultImplementation::
     referencesPartComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGroupInstanceName& sourceInst,
     Linux_SambaGroupForUserManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getPartComponentReferences between Linux_SambaGroup and Linux_SambaUser not implemented for Linux_SambaGroupForUser");
    }

    void Linux_SambaGroupForUserDefaultImplementation::
     associatorsGroupComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaGroupInstanceEnumeration& instances){
      
      std::cout<<"Linux_SambaGroupForUser : associatorsLinux_SambaGroup() ... returns one instance"<<std::endl;
      
      Linux_SambaGroupForUserManualInstanceEnumeration enumeration;
      
      referencesGroupComponent(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaGroupExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaGroupForUserManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaGroupForUserInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaGroupInstanceName GroupComponent = 
         instanceName.getGroupComponent();
         
        Linux_SambaGroupInstance inst = external.getInstance(properties,GroupComponent);
        
        instances.addElement(inst);
      }
    }

    void Linux_SambaGroupForUserDefaultImplementation::
     associatorsPartComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGroupInstanceName& sourceInst,
     Linux_SambaUserInstanceEnumeration& instances){
     
      std::cout<<"Linux_SambaGroupForUser : associatorsLinux_SambaUser() ... returns one instance"<<std::endl;
      
      Linux_SambaGroupForUserManualInstanceEnumeration enumeration;
      
      referencesPartComponent(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaUserExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaGroupForUserManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaGroupForUserInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaUserInstanceName PartComponent = 
         instanceName.getPartComponent();
         
        Linux_SambaUserInstance inst = external.getInstance(properties,PartComponent);
        
        instances.addElement(inst);
      }
    }

   
  /* extrinsic methods */
	
}

