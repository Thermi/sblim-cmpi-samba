/**
 *  Linux_SambaSharePrinterBrowseForShareDefaultImplementation.cpp
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


#include "Linux_SambaSharePrinterBrowseForShareDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaSharePrinterBrowseForShareDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaSharePrinterBrowseForShare"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaSharePrinterBrowseForShare");   
  }
  	
  void Linux_SambaSharePrinterBrowseForShareDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaSharePrinterBrowseForShare"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaSharePrinterBrowseForShareInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaSharePrinterBrowseForShareManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaSharePrinterBrowseForShareManualInstance 
   Linux_SambaSharePrinterBrowseForShareDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaSharePrinterBrowseForShareInstanceName&){
    cout<<"getInstance not supported for Linux_SambaSharePrinterBrowseForShare"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaSharePrinterBrowseForShare");
  }
  	
  void Linux_SambaSharePrinterBrowseForShareDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaSharePrinterBrowseForShareManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaSharePrinterBrowseForShare"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaSharePrinterBrowseForShare");
  }
  	
  void Linux_SambaSharePrinterBrowseForShareDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaSharePrinterBrowseForShareManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaSharePrinterBrowseForShare"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaSharePrinterBrowseForShare");
  }
  	
  void Linux_SambaSharePrinterBrowseForShareDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaSharePrinterBrowseForShareInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaSharePrinterBrowseForShare"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaSharePrinterBrowseForShare");
  }
	
  
    /* Association Interface */

    void Linux_SambaSharePrinterBrowseForShareDefaultImplementation::
     referencesSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getSettingDataReferences between Linux_SambaSharePrinterBrowseOptions and Linux_SambaShareOptions not implemented for Linux_SambaSharePrinterBrowseForShare");
    }

    void Linux_SambaSharePrinterBrowseForShareDefaultImplementation::
     referencesManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaSharePrinterBrowseOptionsInstanceName& sourceInst,
     Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration& instances){
      throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getManagedElementReferences between Linux_SambaSharePrinterBrowseOptions and Linux_SambaShareOptions not implemented for Linux_SambaSharePrinterBrowseForShare");
    }

    void Linux_SambaSharePrinterBrowseForShareDefaultImplementation::
     associatorsSettingData( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration& instances){
      
      std::cout<<"Linux_SambaSharePrinterBrowseForShare : associatorsLinux_SambaSharePrinterBrowseOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration enumeration;
      
      referencesSettingData(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaSharePrinterBrowseOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaSharePrinterBrowseForShareManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaSharePrinterBrowseForShareInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaSharePrinterBrowseOptionsInstanceName SettingData = 
         instanceName.getSettingData();
         
        Linux_SambaSharePrinterBrowseOptionsInstance inst = external.getInstance(properties,SettingData);
        
        instances.addElement(inst);
      }
    }

    void Linux_SambaSharePrinterBrowseForShareDefaultImplementation::
     associatorsManagedElement( 
     const CmpiContext& ctx,  
     const CmpiBroker &mbp,
     const char *nsp,
     const char** properties,
     const Linux_SambaSharePrinterBrowseOptionsInstanceName& sourceInst,
     Linux_SambaShareOptionsInstanceEnumeration& instances){
     
      std::cout<<"Linux_SambaSharePrinterBrowseForShare : associatorsLinux_SambaShareOptions() ... returns one instance"<<std::endl;
      
      Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration enumeration;
      
      referencesManagedElement(ctx, mbp, sourceInst.getNamespace(), 
       properties, sourceInst, enumeration);

      Linux_SambaShareOptionsExternal external(mbp, ctx);

      while(enumeration.hasNext()) {
        const Linux_SambaSharePrinterBrowseForShareManualInstance instance =
	     enumeration.getNext();
	     
        const Linux_SambaSharePrinterBrowseForShareInstanceName instanceName = 
         instance.getInstanceName();
         
        const Linux_SambaShareOptionsInstanceName ManagedElement = 
         instanceName.getManagedElement();
         
        Linux_SambaShareOptionsInstance inst = external.getInstance(properties,ManagedElement);
        
        instances.addElement(inst);
      }
    }

   
  /* extrinsic methods */
	
}

