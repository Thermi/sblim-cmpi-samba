/**
 *  Linux_SambaUserDefaultImplementation.cpp
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


#include "Linux_SambaUserDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaUserDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaUserInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaUser"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaUser");   
  }
  	
  void Linux_SambaUserDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaUserManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaUser"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaUserInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaUserInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaUserManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaUserManualInstance 
   Linux_SambaUserDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaUserInstanceName&){
    cout<<"getInstance not supported for Linux_SambaUser"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaUser");
  }
  	
  void Linux_SambaUserDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaUserManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaUser"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaUser");
  }
  	
  void Linux_SambaUserDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaUserManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaUser"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaUser");
  }
  	
  void Linux_SambaUserDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaUserInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaUser"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaUser");
  }
	
  
  /* extrinsic methods */

    char* Linux_SambaUserDefaultImplementation::getAllSystemGroups(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaUserInstanceName&){
      cout<<"getAllSystemGroups() not supported in Linux_SambaUser"<<endl;
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getAllSystemGroups() not implemented in Linux_SambaUser");
    };

    char* Linux_SambaUserDefaultImplementation::getAllSystemUsers(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaUserInstanceName&){
      cout<<"getAllSystemUsers() not supported in Linux_SambaUser"<<endl;
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_IMPLEMENTED,
   	   "getAllSystemUsers() not implemented in Linux_SambaUser");
    };
	
}

