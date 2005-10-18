/**
 *  Linux_SambaShareFileNameHandlingOptionsDefaultImplementation.cpp
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


#include "Linux_SambaShareFileNameHandlingOptionsDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaShareFileNameHandlingOptionsDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaShareFileNameHandlingOptions"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaShareFileNameHandlingOptions");   
  }
  	
  void Linux_SambaShareFileNameHandlingOptionsDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaShareFileNameHandlingOptions"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaShareFileNameHandlingOptionsInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaShareFileNameHandlingOptionsManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaShareFileNameHandlingOptionsManualInstance 
   Linux_SambaShareFileNameHandlingOptionsDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaShareFileNameHandlingOptionsInstanceName&){
    cout<<"getInstance not supported for Linux_SambaShareFileNameHandlingOptions"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaShareFileNameHandlingOptions");
  }
  	
  void Linux_SambaShareFileNameHandlingOptionsDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaShareFileNameHandlingOptionsManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaShareFileNameHandlingOptions"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaShareFileNameHandlingOptions");
  }
  	
  void Linux_SambaShareFileNameHandlingOptionsDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaShareFileNameHandlingOptionsManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaShareFileNameHandlingOptions"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaShareFileNameHandlingOptions");
  }
  	
  void Linux_SambaShareFileNameHandlingOptionsDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaShareFileNameHandlingOptionsInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaShareFileNameHandlingOptions"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaShareFileNameHandlingOptions");
  }
	
  
  /* extrinsic methods */
	
}

