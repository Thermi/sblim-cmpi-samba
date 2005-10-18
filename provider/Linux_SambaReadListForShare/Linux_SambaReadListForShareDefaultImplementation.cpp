/**
 *  Linux_SambaReadListForShareDefaultImplementation.cpp
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


#include "Linux_SambaReadListForShareDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaReadListForShareDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaReadListForShareInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaReadListForShare"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaReadListForShare");   
  }
  	
  void Linux_SambaReadListForShareDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaReadListForShareManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaReadListForShare"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaReadListForShareInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaReadListForShareInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaReadListForShareManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaReadListForShareManualInstance 
   Linux_SambaReadListForShareDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaReadListForShareInstanceName&){
    cout<<"getInstance not supported for Linux_SambaReadListForShare"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaReadListForShare");
  }
  	
  void Linux_SambaReadListForShareDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaReadListForShareManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaReadListForShare"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaReadListForShare");
  }
  	
  void Linux_SambaReadListForShareDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaReadListForShareManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaReadListForShare"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaReadListForShare");
  }
  	
  void Linux_SambaReadListForShareDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaReadListForShareInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaReadListForShare"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaReadListForShare");
  }
	
  
    /* Association Interface */

    void Linux_SambaReadListForShareDefaultImplementation::
     referencesPartComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaReadListForShareManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getPartComponentReferences between Linux_SambaUser and Linux_SambaShareOptions not implemented for Linux_SambaReadListForShare");
    }

    void Linux_SambaReadListForShareDefaultImplementation::
     referencesGroupComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaReadListForShareManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getGroupComponentReferences between Linux_SambaUser and Linux_SambaShareOptions not implemented for Linux_SambaReadListForShare");
    }

    void Linux_SambaReadListForShareDefaultImplementation::
     associatorsPartComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaUserInstanceEnumeration& instances){
      
      std::cout<<"Linux_SambaReadListForShare : associatorsLinux_SambaUser() ... returns one instance"<<std::endl;
      
      Linux_SambaReadListForShareManualInstanceEnumeration enumeration;
      
      referencesPartComponent(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaUserExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaReadListForShareManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaReadListForShareInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaUserInstanceName PartComponent = 
         instanceName.getPartComponent();
         
        Linux_SambaUserInstance inst = external.getInstance(properties,PartComponent);
        
        instances.addElement(inst);
      }
    }

    void Linux_SambaReadListForShareDefaultImplementation::
     associatorsGroupComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaShareOptionsInstanceEnumeration& instances){
     
      std::cout<<"Linux_SambaReadListForShare : associatorsLinux_SambaShareOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaReadListForShareManualInstanceEnumeration enumeration;
      
      referencesGroupComponent(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaShareOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaReadListForShareManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaReadListForShareInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaShareOptionsInstanceName GroupComponent = 
         instanceName.getGroupComponent();
         
        Linux_SambaShareOptionsInstance inst = external.getInstance(properties,GroupComponent);
        
        instances.addElement(inst);
      }
    }

   
  /* extrinsic methods */
	
}

