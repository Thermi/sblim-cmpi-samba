/**
 *  Linux_SambaServiceRepositoryExternal.cpp
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


#include "Linux_SambaServiceRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaServiceRepositoryExternal::Linux_SambaServiceRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaServiceRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaServiceRepositoryExternal::
   ~Linux_SambaServiceRepositoryExternal(){};
    
  void Linux_SambaServiceRepositoryExternal::enumInstanceNames(
   Linux_SambaServiceInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaService");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaServiceInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaServiceRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaServiceRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaService");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaServiceRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaServiceRepositoryInstance
   Linux_SambaServiceRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaServiceInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaServiceRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaServiceRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaServiceRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaServiceInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaServiceRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaServiceRepositoryExternal::createInstance(
   const Linux_SambaServiceRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaServiceInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaServiceRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaServiceRepositoryExternal::deleteInstance(
   const Linux_SambaServiceInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
