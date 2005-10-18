/**
 *  Linux_SambaForceGroupForPrinterDefaultImplementation.cpp
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


#include "Linux_SambaForceGroupForPrinterDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaForceGroupForPrinterDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaForceGroupForPrinterInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaForceGroupForPrinter"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaForceGroupForPrinter");   
  }
  	
  void Linux_SambaForceGroupForPrinterDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaForceGroupForPrinterManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaForceGroupForPrinter"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaForceGroupForPrinterInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaForceGroupForPrinterInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaForceGroupForPrinterManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaForceGroupForPrinterManualInstance 
   Linux_SambaForceGroupForPrinterDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaForceGroupForPrinterInstanceName&){
    cout<<"getInstance not supported for Linux_SambaForceGroupForPrinter"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaForceGroupForPrinter");
  }
  	
  void Linux_SambaForceGroupForPrinterDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaForceGroupForPrinterManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaForceGroupForPrinter"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaForceGroupForPrinter");
  }
  	
  void Linux_SambaForceGroupForPrinterDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaForceGroupForPrinterManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaForceGroupForPrinter"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaForceGroupForPrinter");
  }
  	
  void Linux_SambaForceGroupForPrinterDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaForceGroupForPrinterInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaForceGroupForPrinter"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaForceGroupForPrinter");
  }
	
  
    /* Association Interface */

    void Linux_SambaForceGroupForPrinterDefaultImplementation::
     referencesGroupComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGroupInstanceName& sourceInst,
     Linux_SambaForceGroupForPrinterManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getGroupComponentReferences between Linux_SambaPrinterOptions and Linux_SambaGroup not implemented for Linux_SambaForceGroupForPrinter");
    }

    void Linux_SambaForceGroupForPrinterDefaultImplementation::
     referencesPartComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaForceGroupForPrinterManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getPartComponentReferences between Linux_SambaPrinterOptions and Linux_SambaGroup not implemented for Linux_SambaForceGroupForPrinter");
    }

    void Linux_SambaForceGroupForPrinterDefaultImplementation::
     associatorsGroupComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaGroupInstanceName& sourceInst,
     Linux_SambaPrinterOptionsInstanceEnumeration& instances){
      
      std::cout<<"Linux_SambaForceGroupForPrinter : associatorsLinux_SambaPrinterOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaForceGroupForPrinterManualInstanceEnumeration enumeration;
      
      referencesGroupComponent(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaPrinterOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaForceGroupForPrinterManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaForceGroupForPrinterInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaPrinterOptionsInstanceName GroupComponent = 
         instanceName.getGroupComponent();
         
        Linux_SambaPrinterOptionsInstance inst = external.getInstance(properties,GroupComponent);
        
        instances.addElement(inst);
      }
    }

    void Linux_SambaForceGroupForPrinterDefaultImplementation::
     associatorsPartComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaGroupInstanceEnumeration& instances){
     
      std::cout<<"Linux_SambaForceGroupForPrinter : associatorsLinux_SambaGroup() ... returns one instance"<<std::endl;
      
      Linux_SambaForceGroupForPrinterManualInstanceEnumeration enumeration;
      
      referencesPartComponent(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaGroupExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaForceGroupForPrinterManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaForceGroupForPrinterInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaGroupInstanceName PartComponent = 
         instanceName.getPartComponent();
         
        Linux_SambaGroupInstance inst = external.getInstance(properties,PartComponent);
        
        instances.addElement(inst);
      }
    }

   
  /* extrinsic methods */
	
}

