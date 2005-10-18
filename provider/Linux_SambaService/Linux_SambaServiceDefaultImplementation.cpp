/**
 *  Linux_SambaServiceDefaultImplementation.cpp
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


#include "Linux_SambaServiceDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaServiceDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaServiceInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaService"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaService");   
  }
  	
  void Linux_SambaServiceDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaServiceManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaService"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaServiceInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaServiceInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaServiceManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaServiceManualInstance 
   Linux_SambaServiceDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaServiceInstanceName&){
    cout<<"getInstance not supported for Linux_SambaService"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaService");
  }
  	
  void Linux_SambaServiceDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaServiceManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaService"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaService");
  }
  	
  void Linux_SambaServiceDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaServiceManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaService"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaService");
  }
  	
  void Linux_SambaServiceDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaServiceInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaService"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaService");
  }
	
  
  /* extrinsic methods */

    CMPIUint32 Linux_SambaServiceDefaultImplementation::RequestStateChange(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaServiceInstanceName&,
      const CMPIUint16 &RequestedState,
      int isRequestedStatePresent,
      CIM_ConcreteJobInstanceName &Job,
      const CmpiDateTime &TimeoutPeriod,
      int isTimeoutPeriodPresent){
      cout<<"RequestStateChange() not supported in Linux_SambaService"<<endl;
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "RequestStateChange() not implemented in Linux_SambaService");
    };

    CMPIUint32 Linux_SambaServiceDefaultImplementation::StartService(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaServiceInstanceName&){
      cout<<"StartService() not supported in Linux_SambaService"<<endl;
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "StartService() not implemented in Linux_SambaService");
    };

    CMPIUint32 Linux_SambaServiceDefaultImplementation::StopService(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaServiceInstanceName&){
      cout<<"StopService() not supported in Linux_SambaService"<<endl;
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "StopService() not implemented in Linux_SambaService");
    };
	
}

