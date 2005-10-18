/**
 *  Linux_SambaSharePrinterBrowseOptionsDefaultImplementation.cpp
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


#include "Linux_SambaSharePrinterBrowseOptionsDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaSharePrinterBrowseOptionsDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaSharePrinterBrowseOptionsInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaSharePrinterBrowseOptions"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaSharePrinterBrowseOptions");   
  }
  	
  void Linux_SambaSharePrinterBrowseOptionsDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaSharePrinterBrowseOptions"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaSharePrinterBrowseOptionsInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaSharePrinterBrowseOptionsInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaSharePrinterBrowseOptionsManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaSharePrinterBrowseOptionsManualInstance 
   Linux_SambaSharePrinterBrowseOptionsDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaSharePrinterBrowseOptionsInstanceName&){
    cout<<"getInstance not supported for Linux_SambaSharePrinterBrowseOptions"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaSharePrinterBrowseOptions");
  }
  	
  void Linux_SambaSharePrinterBrowseOptionsDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaSharePrinterBrowseOptionsManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaSharePrinterBrowseOptions"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaSharePrinterBrowseOptions");
  }
  	
  void Linux_SambaSharePrinterBrowseOptionsDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaSharePrinterBrowseOptionsManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaSharePrinterBrowseOptions"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaSharePrinterBrowseOptions");
  }
  	
  void Linux_SambaSharePrinterBrowseOptionsDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaSharePrinterBrowseOptionsInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaSharePrinterBrowseOptions"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaSharePrinterBrowseOptions");
  }
	
  
  /* extrinsic methods */
	
}

