/**
 *  Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal.cpp
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


#include "Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal::Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal::
   ~Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal(){};
    
  void Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal::enumInstanceNames(
   Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaGlobalFileNameHandlingForGlobal");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaGlobalFileNameHandlingForGlobalInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaGlobalFileNameHandlingForGlobal");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance
   Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaGlobalFileNameHandlingForGlobalInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal::createInstance(
   const Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaGlobalFileNameHandlingForGlobalInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal::deleteInstance(
   const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
