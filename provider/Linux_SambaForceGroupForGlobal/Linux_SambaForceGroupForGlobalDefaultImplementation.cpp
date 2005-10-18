/**
 *  Linux_SambaForceGroupForGlobalDefaultImplementation.cpp
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


#include "Linux_SambaForceGroupForGlobalDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaForceGroupForGlobalDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaForceGroupForGlobalInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaForceGroupForGlobal"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaForceGroupForGlobal");   
  }
  	
  void Linux_SambaForceGroupForGlobalDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaForceGroupForGlobalManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaForceGroupForGlobal"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaForceGroupForGlobalInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaForceGroupForGlobalInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaForceGroupForGlobalManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaForceGroupForGlobalManualInstance 
   Linux_SambaForceGroupForGlobalDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaForceGroupForGlobalInstanceName&){
    cout<<"getInstance not supported for Linux_SambaForceGroupForGlobal"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaForceGroupForGlobal");
  }
  	
  void Linux_SambaForceGroupForGlobalDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaForceGroupForGlobalManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaForceGroupForGlobal"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaForceGroupForGlobal");
  }
  	
  void Linux_SambaForceGroupForGlobalDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaForceGroupForGlobalManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaForceGroupForGlobal"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaForceGroupForGlobal");
  }
  	
  void Linux_SambaForceGroupForGlobalDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaForceGroupForGlobalInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaForceGroupForGlobal"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaForceGroupForGlobal");
  }
	
  
    /* Association Interface */

    void Linux_SambaForceGroupForGlobalDefaultImplementation::
     referencesGroupComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGroupInstanceName& sourceInst,
     Linux_SambaForceGroupForGlobalManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getGroupComponentReferences between Linux_SambaGlobalOptions and Linux_SambaGroup not implemented for Linux_SambaForceGroupForGlobal");
    }

    void Linux_SambaForceGroupForGlobalDefaultImplementation::
     referencesPartComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaForceGroupForGlobalManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getPartComponentReferences between Linux_SambaGlobalOptions and Linux_SambaGroup not implemented for Linux_SambaForceGroupForGlobal");
    }

    void Linux_SambaForceGroupForGlobalDefaultImplementation::
     associatorsGroupComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGroupInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceEnumeration& instances){
      
      std::cout<<"Linux_SambaForceGroupForGlobal : associatorsLinux_SambaGlobalOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaForceGroupForGlobalManualInstanceEnumeration enumeration;
      
      referencesGroupComponent(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaGlobalOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaForceGroupForGlobalManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaForceGroupForGlobalInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaGlobalOptionsInstanceName GroupComponent = 
         instanceName.getGroupComponent();
         
        Linux_SambaGlobalOptionsInstance inst = external.getInstance(properties,GroupComponent);
        
        instances.addElement(inst);
      }
    }

    void Linux_SambaForceGroupForGlobalDefaultImplementation::
     associatorsPartComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGroupInstanceEnumeration& instances){
     
      std::cout<<"Linux_SambaForceGroupForGlobal : associatorsLinux_SambaGroup() ... returns one instance"<<std::endl;
      
      Linux_SambaForceGroupForGlobalManualInstanceEnumeration enumeration;
      
      referencesPartComponent(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaGroupExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaForceGroupForGlobalManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaForceGroupForGlobalInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaGroupInstanceName PartComponent = 
         instanceName.getPartComponent();
         
        Linux_SambaGroupInstance inst = external.getInstance(properties,PartComponent);
        
        instances.addElement(inst);
      }
    }

   
  /* extrinsic methods */
	
}

