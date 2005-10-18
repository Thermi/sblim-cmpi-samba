/**
 *  Linux_SambaShareSecurityOptionsDefaultImplementation.cpp
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


#include "Linux_SambaShareSecurityOptionsDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaShareSecurityOptionsDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaShareSecurityOptionsInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaShareSecurityOptions"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaShareSecurityOptions");   
  }
  	
  void Linux_SambaShareSecurityOptionsDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaShareSecurityOptionsManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaShareSecurityOptions"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaShareSecurityOptionsInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaShareSecurityOptionsInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaShareSecurityOptionsManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaShareSecurityOptionsManualInstance 
   Linux_SambaShareSecurityOptionsDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaShareSecurityOptionsInstanceName&){
    cout<<"getInstance not supported for Linux_SambaShareSecurityOptions"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaShareSecurityOptions");
  }
  	
  void Linux_SambaShareSecurityOptionsDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaShareSecurityOptionsManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaShareSecurityOptions"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaShareSecurityOptions");
  }
  	
  void Linux_SambaShareSecurityOptionsDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaShareSecurityOptionsManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaShareSecurityOptions"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaShareSecurityOptions");
  }
  	
  void Linux_SambaShareSecurityOptionsDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaShareSecurityOptionsInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaShareSecurityOptions"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaShareSecurityOptions");
  }
	
  
  /* extrinsic methods */
	
}

