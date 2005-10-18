/**
 *  Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal.cpp
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


#include "Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal::Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal::
   ~Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal(){};
    
  void Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal::enumInstanceNames(
   Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaGlobalFileNameHandlingOptions");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaGlobalFileNameHandlingOptionsInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaGlobalFileNameHandlingOptions");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance
   Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaGlobalFileNameHandlingOptionsInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal::createInstance(
   const Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaGlobalFileNameHandlingOptionsInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal::deleteInstance(
   const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
