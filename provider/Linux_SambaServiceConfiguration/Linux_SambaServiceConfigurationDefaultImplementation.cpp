/**
 *  Linux_SambaServiceConfigurationDefaultImplementation.cpp
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


#include "Linux_SambaServiceConfigurationDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaServiceConfigurationDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaServiceConfigurationInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaServiceConfiguration"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaServiceConfiguration");   
  }
  	
  void Linux_SambaServiceConfigurationDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaServiceConfigurationManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaServiceConfiguration"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaServiceConfigurationInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaServiceConfigurationInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaServiceConfigurationManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaServiceConfigurationManualInstance 
   Linux_SambaServiceConfigurationDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaServiceConfigurationInstanceName&){
    cout<<"getInstance not supported for Linux_SambaServiceConfiguration"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaServiceConfiguration");
  }
  	
  void Linux_SambaServiceConfigurationDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaServiceConfigurationManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaServiceConfiguration"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaServiceConfiguration");
  }
  	
  void Linux_SambaServiceConfigurationDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaServiceConfigurationManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaServiceConfiguration"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaServiceConfiguration");
  }
  	
  void Linux_SambaServiceConfigurationDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaServiceConfigurationInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaServiceConfiguration"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaServiceConfiguration");
  }
	
  
  /* extrinsic methods */
	
}

