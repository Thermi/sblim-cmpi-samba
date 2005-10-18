/**
 *  Linux_SambaHostDefaultImplementation.cpp
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


#include "Linux_SambaHostDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaHostDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaHostInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaHost"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaHost");   
  }
  	
  void Linux_SambaHostDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaHostManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaHost"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaHostInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaHostInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaHostManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaHostManualInstance 
   Linux_SambaHostDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaHostInstanceName&){
    cout<<"getInstance not supported for Linux_SambaHost"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaHost");
  }
  	
  void Linux_SambaHostDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaHostManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaHost"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaHost");
  }
  	
  void Linux_SambaHostDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaHostManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaHost"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaHost");
  }
  	
  void Linux_SambaHostDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaHostInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaHost"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaHost");
  }
	
  
  /* extrinsic methods */
	
}

