/**
 *  Linux_SambaCommonSecurityForPrinterDefaultImplementation.cpp
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


#include "Linux_SambaCommonSecurityForPrinterDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaCommonSecurityForPrinterDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaCommonSecurityForPrinterInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaCommonSecurityForPrinter"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaCommonSecurityForPrinter");   
  }
  	
  void Linux_SambaCommonSecurityForPrinterDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaCommonSecurityForPrinter"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaCommonSecurityForPrinterInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaCommonSecurityForPrinterInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaCommonSecurityForPrinterManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaCommonSecurityForPrinterManualInstance 
   Linux_SambaCommonSecurityForPrinterDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaCommonSecurityForPrinterInstanceName&){
    cout<<"getInstance not supported for Linux_SambaCommonSecurityForPrinter"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaCommonSecurityForPrinter");
  }
  	
  void Linux_SambaCommonSecurityForPrinterDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaCommonSecurityForPrinterManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaCommonSecurityForPrinter"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaCommonSecurityForPrinter");
  }
  	
  void Linux_SambaCommonSecurityForPrinterDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaCommonSecurityForPrinterManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaCommonSecurityForPrinter"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaCommonSecurityForPrinter");
  }
  	
  void Linux_SambaCommonSecurityForPrinterDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaCommonSecurityForPrinterInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaCommonSecurityForPrinter"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaCommonSecurityForPrinter");
  }
	
  
    /* Association Interface */

    void Linux_SambaCommonSecurityForPrinterDefaultImplementation::
     referencesSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getSettingDataReferences between Linux_SambaCommonSecurityOptions and Linux_SambaPrinterOptions not implemented for Linux_SambaCommonSecurityForPrinter");
    }

    void Linux_SambaCommonSecurityForPrinterDefaultImplementation::
     referencesManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaCommonSecurityOptionsInstanceName& sourceInst,
     Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getManagedElementReferences between Linux_SambaCommonSecurityOptions and Linux_SambaPrinterOptions not implemented for Linux_SambaCommonSecurityForPrinter");
    }

    void Linux_SambaCommonSecurityForPrinterDefaultImplementation::
     associatorsSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaCommonSecurityOptionsInstanceEnumeration& instances){
      
      std::cout<<"Linux_SambaCommonSecurityForPrinter : associatorsLinux_SambaCommonSecurityOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration enumeration;
      
      referencesSettingData(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaCommonSecurityOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaCommonSecurityForPrinterManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaCommonSecurityForPrinterInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaCommonSecurityOptionsInstanceName SettingData = 
         instanceName.getSettingData();
         
        Linux_SambaCommonSecurityOptionsInstance inst = external.getInstance(properties,SettingData);
        
        instances.addElement(inst);
      }
    }

    void Linux_SambaCommonSecurityForPrinterDefaultImplementation::
     associatorsManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaCommonSecurityOptionsInstanceName& sourceInst,
     Linux_SambaPrinterOptionsInstanceEnumeration& instances){
     
      std::cout<<"Linux_SambaCommonSecurityForPrinter : associatorsLinux_SambaPrinterOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration enumeration;
      
      referencesManagedElement(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaPrinterOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaCommonSecurityForPrinterManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaCommonSecurityForPrinterInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaPrinterOptionsInstanceName ManagedElement = 
         instanceName.getManagedElement();
         
        Linux_SambaPrinterOptionsInstance inst = external.getInstance(properties,ManagedElement);
        
        instances.addElement(inst);
      }
    }

   
  /* extrinsic methods */
	
}

