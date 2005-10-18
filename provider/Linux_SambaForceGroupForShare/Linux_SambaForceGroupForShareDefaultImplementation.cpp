/**
 *  Linux_SambaForceGroupForShareDefaultImplementation.cpp
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


#include "Linux_SambaForceGroupForShareDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaForceGroupForShareDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaForceGroupForShareInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaForceGroupForShare"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaForceGroupForShare");   
  }
  	
  void Linux_SambaForceGroupForShareDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaForceGroupForShareManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaForceGroupForShare"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaForceGroupForShareInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaForceGroupForShareInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaForceGroupForShareManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaForceGroupForShareManualInstance 
   Linux_SambaForceGroupForShareDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaForceGroupForShareInstanceName&){
    cout<<"getInstance not supported for Linux_SambaForceGroupForShare"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaForceGroupForShare");
  }
  	
  void Linux_SambaForceGroupForShareDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaForceGroupForShareManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaForceGroupForShare"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaForceGroupForShare");
  }
  	
  void Linux_SambaForceGroupForShareDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaForceGroupForShareManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaForceGroupForShare"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaForceGroupForShare");
  }
  	
  void Linux_SambaForceGroupForShareDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaForceGroupForShareInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaForceGroupForShare"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaForceGroupForShare");
  }
	
  
    /* Association Interface */

    void Linux_SambaForceGroupForShareDefaultImplementation::
     referencesGroupComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGroupInstanceName& sourceInst,
     Linux_SambaForceGroupForShareManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getGroupComponentReferences between Linux_SambaShareOptions and Linux_SambaGroup not implemented for Linux_SambaForceGroupForShare");
    }

    void Linux_SambaForceGroupForShareDefaultImplementation::
     referencesPartComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaForceGroupForShareManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getPartComponentReferences between Linux_SambaShareOptions and Linux_SambaGroup not implemented for Linux_SambaForceGroupForShare");
    }

    void Linux_SambaForceGroupForShareDefaultImplementation::
     associatorsGroupComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGroupInstanceName& sourceInst,
     Linux_SambaShareOptionsInstanceEnumeration& instances){
      
      std::cout<<"Linux_SambaForceGroupForShare : associatorsLinux_SambaShareOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaForceGroupForShareManualInstanceEnumeration enumeration;
      
      referencesGroupComponent(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaShareOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaForceGroupForShareManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaForceGroupForShareInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaShareOptionsInstanceName GroupComponent = 
         instanceName.getGroupComponent();
         
        Linux_SambaShareOptionsInstance inst = external.getInstance(properties,GroupComponent);
        
        instances.addElement(inst);
      }
    }

    void Linux_SambaForceGroupForShareDefaultImplementation::
     associatorsPartComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaGroupInstanceEnumeration& instances){
     
      std::cout<<"Linux_SambaForceGroupForShare : associatorsLinux_SambaGroup() ... returns one instance"<<std::endl;
      
      Linux_SambaForceGroupForShareManualInstanceEnumeration enumeration;
      
      referencesPartComponent(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaGroupExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaForceGroupForShareManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaForceGroupForShareInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaGroupInstanceName PartComponent = 
         instanceName.getPartComponent();
         
        Linux_SambaGroupInstance inst = external.getInstance(properties,PartComponent);
        
        instances.addElement(inst);
      }
    }

   
  /* extrinsic methods */
	
}

