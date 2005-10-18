/**
 *  Linux_SambaGroupForUserRepositoryExternal.cpp
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


#include "Linux_SambaGroupForUserRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaGroupForUserRepositoryExternal::Linux_SambaGroupForUserRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaGroupForUserRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaGroupForUserRepositoryExternal::
   ~Linux_SambaGroupForUserRepositoryExternal(){};
    
  void Linux_SambaGroupForUserRepositoryExternal::enumInstanceNames(
   Linux_SambaGroupForUserInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaGroupForUser");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaGroupForUserInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaGroupForUserRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaGroupForUserRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaGroupForUser");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaGroupForUserRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaGroupForUserRepositoryInstance
   Linux_SambaGroupForUserRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaGroupForUserInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaGroupForUserRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaGroupForUserRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaGroupForUserRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaGroupForUserInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaGroupForUserRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaGroupForUserRepositoryExternal::createInstance(
   const Linux_SambaGroupForUserRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaGroupForUserInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaGroupForUserRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaGroupForUserRepositoryExternal::deleteInstance(
   const Linux_SambaGroupForUserInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
