/**
 *  Linux_SambaValidUsersForGlobalDefaultImplementation.cpp
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


#include "Linux_SambaValidUsersForGlobalDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaValidUsersForGlobalDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaValidUsersForGlobalInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaValidUsersForGlobal"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaValidUsersForGlobal");   
  }
  	
  void Linux_SambaValidUsersForGlobalDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaValidUsersForGlobalManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaValidUsersForGlobal"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaValidUsersForGlobalInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaValidUsersForGlobalInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaValidUsersForGlobalManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaValidUsersForGlobalManualInstance 
   Linux_SambaValidUsersForGlobalDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaValidUsersForGlobalInstanceName&){
    cout<<"getInstance not supported for Linux_SambaValidUsersForGlobal"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaValidUsersForGlobal");
  }
  	
  void Linux_SambaValidUsersForGlobalDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaValidUsersForGlobalManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaValidUsersForGlobal"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaValidUsersForGlobal");
  }
  	
  void Linux_SambaValidUsersForGlobalDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaValidUsersForGlobalManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaValidUsersForGlobal"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaValidUsersForGlobal");
  }
  	
  void Linux_SambaValidUsersForGlobalDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaValidUsersForGlobalInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaValidUsersForGlobal"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaValidUsersForGlobal");
  }
	
  
    /* Association Interface */

    void Linux_SambaValidUsersForGlobalDefaultImplementation::
     referencesPartComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaValidUsersForGlobalManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getPartComponentReferences between Linux_SambaUser and Linux_SambaGlobalOptions not implemented for Linux_SambaValidUsersForGlobal");
    }

    void Linux_SambaValidUsersForGlobalDefaultImplementation::
     referencesGroupComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaValidUsersForGlobalManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getGroupComponentReferences between Linux_SambaUser and Linux_SambaGlobalOptions not implemented for Linux_SambaValidUsersForGlobal");
    }

    void Linux_SambaValidUsersForGlobalDefaultImplementation::
     associatorsPartComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaUserInstanceEnumeration& instances){
      
      std::cout<<"Linux_SambaValidUsersForGlobal : associatorsLinux_SambaUser() ... returns one instance"<<std::endl;
      
      Linux_SambaValidUsersForGlobalManualInstanceEnumeration enumeration;
      
      referencesPartComponent(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaUserExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaValidUsersForGlobalManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaValidUsersForGlobalInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaUserInstanceName PartComponent = 
         instanceName.getPartComponent();
         
        Linux_SambaUserInstance inst = external.getInstance(properties,PartComponent);
        
        instances.addElement(inst);
      }
    }

    void Linux_SambaValidUsersForGlobalDefaultImplementation::
     associatorsGroupComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceEnumeration& instances){
     
      std::cout<<"Linux_SambaValidUsersForGlobal : associatorsLinux_SambaGlobalOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaValidUsersForGlobalManualInstanceEnumeration enumeration;
      
      referencesGroupComponent(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaGlobalOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaValidUsersForGlobalManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaValidUsersForGlobalInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaGlobalOptionsInstanceName GroupComponent = 
         instanceName.getGroupComponent();
         
        Linux_SambaGlobalOptionsInstance inst = external.getInstance(properties,GroupComponent);
        
        instances.addElement(inst);
      }
    }

   
  /* extrinsic methods */
	
}

