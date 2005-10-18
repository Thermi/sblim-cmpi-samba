/**
 *  Linux_SambaGlobalOptionsDefaultImplementation.cpp
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


#include "Linux_SambaGlobalOptionsDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaGlobalOptionsDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaGlobalOptionsInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaGlobalOptions"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaGlobalOptions");   
  }
  	
  void Linux_SambaGlobalOptionsDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaGlobalOptionsManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaGlobalOptions"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaGlobalOptionsInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaGlobalOptionsInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaGlobalOptionsManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaGlobalOptionsManualInstance 
   Linux_SambaGlobalOptionsDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGlobalOptionsInstanceName&){
    cout<<"getInstance not supported for Linux_SambaGlobalOptions"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaGlobalOptions");
  }
  	
  void Linux_SambaGlobalOptionsDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGlobalOptionsManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaGlobalOptions"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaGlobalOptions");
  }
  	
  void Linux_SambaGlobalOptionsDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaGlobalOptionsManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaGlobalOptions"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaGlobalOptions");
  }
  	
  void Linux_SambaGlobalOptionsDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaGlobalOptionsInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaGlobalOptions"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaGlobalOptions");
  }
	
  
  /* extrinsic methods */
	
}

