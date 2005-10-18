/**
 *  Linux_SambaUsersForServiceRepositoryExternal.cpp
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


#include "Linux_SambaUsersForServiceRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaUsersForServiceRepositoryExternal::Linux_SambaUsersForServiceRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaUsersForServiceRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaUsersForServiceRepositoryExternal::
   ~Linux_SambaUsersForServiceRepositoryExternal(){};
    
  void Linux_SambaUsersForServiceRepositoryExternal::enumInstanceNames(
   Linux_SambaUsersForServiceInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaUsersForService");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaUsersForServiceInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaUsersForServiceRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaUsersForServiceRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaUsersForService");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaUsersForServiceRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaUsersForServiceRepositoryInstance
   Linux_SambaUsersForServiceRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaUsersForServiceInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaUsersForServiceRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaUsersForServiceRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaUsersForServiceRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaUsersForServiceInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaUsersForServiceRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaUsersForServiceRepositoryExternal::createInstance(
   const Linux_SambaUsersForServiceRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaUsersForServiceInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaUsersForServiceRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaUsersForServiceRepositoryExternal::deleteInstance(
   const Linux_SambaUsersForServiceInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
