/**
 *  Linux_SambaGroupDefaultImplementation.cpp
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


#include "Linux_SambaGroupDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaGroupDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaGroupInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaGroup"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaGroup");   
  }
  	
  void Linux_SambaGroupDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaGroupManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaGroup"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaGroupInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaGroupInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaGroupManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaGroupManualInstance 
   Linux_SambaGroupDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGroupInstanceName&){
    cout<<"getInstance not supported for Linux_SambaGroup"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaGroup");
  }
  	
  void Linux_SambaGroupDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGroupManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaGroup"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaGroup");
  }
  	
  void Linux_SambaGroupDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaGroupManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaGroup"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaGroup");
  }
  	
  void Linux_SambaGroupDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaGroupInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaGroup"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaGroup");
  }
	
  
  /* extrinsic methods */

    char* Linux_SambaGroupDefaultImplementation::getAllSystemGroups(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaGroupInstanceName&){
      cout<<"getAllSystemGroups() not supported in Linux_SambaGroup"<<endl;
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getAllSystemGroups() not implemented in Linux_SambaGroup");
    };
	
}

