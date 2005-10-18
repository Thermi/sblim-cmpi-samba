/**
 *  Linux_SambaValidUsersForGlobalRepositoryExternal.cpp
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


#include "Linux_SambaValidUsersForGlobalRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaValidUsersForGlobalRepositoryExternal::Linux_SambaValidUsersForGlobalRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaValidUsersForGlobalRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaValidUsersForGlobalRepositoryExternal::
   ~Linux_SambaValidUsersForGlobalRepositoryExternal(){};
    
  void Linux_SambaValidUsersForGlobalRepositoryExternal::enumInstanceNames(
   Linux_SambaValidUsersForGlobalInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaValidUsersForGlobal");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaValidUsersForGlobalInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaValidUsersForGlobalRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaValidUsersForGlobalRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaValidUsersForGlobal");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaValidUsersForGlobalRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaValidUsersForGlobalRepositoryInstance
   Linux_SambaValidUsersForGlobalRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaValidUsersForGlobalInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaValidUsersForGlobalRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaValidUsersForGlobalRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaValidUsersForGlobalRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaValidUsersForGlobalInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaValidUsersForGlobalRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaValidUsersForGlobalRepositoryExternal::createInstance(
   const Linux_SambaValidUsersForGlobalRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaValidUsersForGlobalInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaValidUsersForGlobalRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaValidUsersForGlobalRepositoryExternal::deleteInstance(
   const Linux_SambaValidUsersForGlobalInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
