/**
 *  Linux_SambaScriptingOptionsDefaultImplementation.cpp
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


#include "Linux_SambaScriptingOptionsDefaultImplementation.h"
#include <iostream>

using namespace std;

namespace genProvider {

  /* intrinsic methods */
  void Linux_SambaScriptingOptionsDefaultImplementation::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaScriptingOptionsInstanceNameEnumeration& instnames){
   	cout<<"enumInstances not supported for Linux_SambaScriptingOptions"<<endl;
   	throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "enumInstances not implemented for Linux_SambaScriptingOptions");   
  }
  	
  void Linux_SambaScriptingOptionsDefaultImplementation::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaScriptingOptionsManualInstanceEnumeration& instances){
    
    cout<<"Using default enumInstances implementation for Linux_SambaScriptingOptions"<<endl;
    cout<<"Let}s get the instanceNames"<<endl;
    Linux_SambaScriptingOptionsInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(ctx, mbp,nsp,namesEnumeration);
    cout<<"Getting each instance"<<endl;
    while(namesEnumeration.hasNext()){
      Linux_SambaScriptingOptionsInstanceName name=
    	  namesEnumeration.getNext();
    	cout<<"Getting an instance for instanceName"<<endl;
    	Linux_SambaScriptingOptionsManualInstance instance=
    	  getInstance(ctx, mbp, properties, name);
    	cout<<"adding instance to enum"<<endl;
    	instances.addElement(instance);
    	cout<<"Added!"<<endl;
    };
  }
  	
  Linux_SambaScriptingOptionsManualInstance 
   Linux_SambaScriptingOptionsDefaultImplementation::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaScriptingOptionsInstanceName&){
    cout<<"getInstance not supported for Linux_SambaScriptingOptions"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "getInstance not implemented for Linux_SambaScriptingOptions");
  }
  	
  void Linux_SambaScriptingOptionsDefaultImplementation::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaScriptingOptionsManualInstance&){
   	cout<<"setInstance not supported for Linux_SambaScriptingOptions"<<endl;
     throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "setInstance not implemented for Linux_SambaScriptingOptions");
  }
  	
  void Linux_SambaScriptingOptionsDefaultImplementation::
   createInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaScriptingOptionsManualInstance&){
   	cout<<"createInstance not supported for Linux_SambaScriptingOptions"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance not implemented for Linux_SambaScriptingOptions");
  }
  	
  void Linux_SambaScriptingOptionsDefaultImplementation::
   deleteInstance(const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaScriptingOptionsInstanceName&){
   	cout<<"deleteInstance not supported for Linux_SambaScriptingOptions"<<endl;
    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "deleteInstance not implemented for Linux_SambaScriptingOptions");
  }
	
  
  /* extrinsic methods */
	
}

