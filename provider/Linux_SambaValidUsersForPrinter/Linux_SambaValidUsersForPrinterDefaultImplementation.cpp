/**
 *  Linux_SambaValidUsersForPrinterDefaultImplementation.cpp
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


#include "Linux_SambaValidUsersForPrinterDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaValidUsersForPrinterDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaValidUsersForPrinterInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaValidUsersForPrinter"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaValidUsersForPrinter");   
  }
  	
  void Linux_SambaValidUsersForPrinterDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaValidUsersForPrinterManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaValidUsersForPrinter"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaValidUsersForPrinterInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaValidUsersForPrinterInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaValidUsersForPrinterManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaValidUsersForPrinterManualInstance 
   Linux_SambaValidUsersForPrinterDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaValidUsersForPrinterInstanceName&){
    cout<<"getInstance not supported for Linux_SambaValidUsersForPrinter"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaValidUsersForPrinter");
  }
  	
  void Linux_SambaValidUsersForPrinterDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaValidUsersForPrinterManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaValidUsersForPrinter"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaValidUsersForPrinter");
  }
  	
  void Linux_SambaValidUsersForPrinterDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaValidUsersForPrinterManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaValidUsersForPrinter"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaValidUsersForPrinter");
  }
  	
  void Linux_SambaValidUsersForPrinterDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaValidUsersForPrinterInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaValidUsersForPrinter"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaValidUsersForPrinter");
  }
	
  
    /* Association Interface */

    void Linux_SambaValidUsersForPrinterDefaultImplementation::
     referencesPartComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaValidUsersForPrinterManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getPartComponentReferences between Linux_SambaUser and Linux_SambaPrinterOptions not implemented for Linux_SambaValidUsersForPrinter");
    }

    void Linux_SambaValidUsersForPrinterDefaultImplementation::
     referencesGroupComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaValidUsersForPrinterManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getGroupComponentReferences between Linux_SambaUser and Linux_SambaPrinterOptions not implemented for Linux_SambaValidUsersForPrinter");
    }

    void Linux_SambaValidUsersForPrinterDefaultImplementation::
     associatorsPartComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaUserInstanceEnumeration& instances){
      
      std::cout<<"Linux_SambaValidUsersForPrinter : associatorsLinux_SambaUser() ... returns one instance"<<std::endl;
      
      Linux_SambaValidUsersForPrinterManualInstanceEnumeration enumeration;
      
      referencesPartComponent(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaUserExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaValidUsersForPrinterManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaValidUsersForPrinterInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaUserInstanceName PartComponent = 
         instanceName.getPartComponent();
         
        Linux_SambaUserInstance inst = external.getInstance(properties,PartComponent);
        
        instances.addElement(inst);
      }
    }

    void Linux_SambaValidUsersForPrinterDefaultImplementation::
     associatorsGroupComponent( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaPrinterOptionsInstanceEnumeration& instances){
     
      std::cout<<"Linux_SambaValidUsersForPrinter : associatorsLinux_SambaPrinterOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaValidUsersForPrinterManualInstanceEnumeration enumeration;
      
      referencesGroupComponent(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaPrinterOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaValidUsersForPrinterManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaValidUsersForPrinterInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaPrinterOptionsInstanceName GroupComponent = 
         instanceName.getGroupComponent();
         
        Linux_SambaPrinterOptionsInstance inst = external.getInstance(properties,GroupComponent);
        
        instances.addElement(inst);
      }
    }

   
  /* extrinsic methods */
	
}

