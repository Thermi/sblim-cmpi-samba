/**
 *  Linux_SambaSharePrinterBrowseForPrinterDefaultImplementation.cpp
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


#include "Linux_SambaSharePrinterBrowseForPrinterDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaSharePrinterBrowseForPrinterDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaSharePrinterBrowseForPrinter"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaSharePrinterBrowseForPrinter");   
  }
  	
  void Linux_SambaSharePrinterBrowseForPrinterDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaSharePrinterBrowseForPrinter"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaSharePrinterBrowseForPrinterInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaSharePrinterBrowseForPrinterManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaSharePrinterBrowseForPrinterManualInstance 
   Linux_SambaSharePrinterBrowseForPrinterDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaSharePrinterBrowseForPrinterInstanceName&){
    cout<<"getInstance not supported for Linux_SambaSharePrinterBrowseForPrinter"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaSharePrinterBrowseForPrinter");
  }
  	
  void Linux_SambaSharePrinterBrowseForPrinterDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaSharePrinterBrowseForPrinterManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaSharePrinterBrowseForPrinter"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaSharePrinterBrowseForPrinter");
  }
  	
  void Linux_SambaSharePrinterBrowseForPrinterDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaSharePrinterBrowseForPrinterManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaSharePrinterBrowseForPrinter"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaSharePrinterBrowseForPrinter");
  }
  	
  void Linux_SambaSharePrinterBrowseForPrinterDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaSharePrinterBrowseForPrinterInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaSharePrinterBrowseForPrinter"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaSharePrinterBrowseForPrinter");
  }
	
  
    /* Association Interface */

    void Linux_SambaSharePrinterBrowseForPrinterDefaultImplementation::
     referencesManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaSharePrinterBrowseOptionsInstanceName& sourceInst,
     Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getManagedElementReferences between Linux_SambaPrinterOptions and Linux_SambaSharePrinterBrowseOptions not implemented for Linux_SambaSharePrinterBrowseForPrinter");
    }

    void Linux_SambaSharePrinterBrowseForPrinterDefaultImplementation::
     referencesSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getSettingDataReferences between Linux_SambaPrinterOptions and Linux_SambaSharePrinterBrowseOptions not implemented for Linux_SambaSharePrinterBrowseForPrinter");
    }

    void Linux_SambaSharePrinterBrowseForPrinterDefaultImplementation::
     associatorsManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaSharePrinterBrowseOptionsInstanceName& sourceInst,
     Linux_SambaPrinterOptionsInstanceEnumeration& instances){
      
      std::cout<<"Linux_SambaSharePrinterBrowseForPrinter : associatorsLinux_SambaPrinterOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration enumeration;
      
      referencesManagedElement(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaPrinterOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaSharePrinterBrowseForPrinterManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaSharePrinterBrowseForPrinterInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaPrinterOptionsInstanceName ManagedElement = 
         instanceName.getManagedElement();
         
        Linux_SambaPrinterOptionsInstance inst = external.getInstance(properties,ManagedElement);
        
        instances.addElement(inst);
      }
    }

    void Linux_SambaSharePrinterBrowseForPrinterDefaultImplementation::
     associatorsSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration& instances){
     
      std::cout<<"Linux_SambaSharePrinterBrowseForPrinter : associatorsLinux_SambaSharePrinterBrowseOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration enumeration;
      
      referencesSettingData(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaSharePrinterBrowseOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaSharePrinterBrowseForPrinterManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaSharePrinterBrowseForPrinterInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaSharePrinterBrowseOptionsInstanceName SettingData = 
         instanceName.getSettingData();
         
        Linux_SambaSharePrinterBrowseOptionsInstance inst = external.getInstance(properties,SettingData);
        
        instances.addElement(inst);
      }
    }

   
  /* extrinsic methods */
	
}

