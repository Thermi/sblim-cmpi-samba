/**
 *  Linux_SambaInvalidUsersForGlobalRepositoryExternal.cpp
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


#include "Linux_SambaInvalidUsersForGlobalRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaInvalidUsersForGlobalRepositoryExternal::Linux_SambaInvalidUsersForGlobalRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaInvalidUsersForGlobalRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaInvalidUsersForGlobalRepositoryExternal::
   ~Linux_SambaInvalidUsersForGlobalRepositoryExternal(){};
    
  void Linux_SambaInvalidUsersForGlobalRepositoryExternal::enumInstanceNames(
   Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaInvalidUsersForGlobal");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaInvalidUsersForGlobalInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaInvalidUsersForGlobalRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaInvalidUsersForGlobal");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaInvalidUsersForGlobalRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaInvalidUsersForGlobalRepositoryInstance
   Linux_SambaInvalidUsersForGlobalRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaInvalidUsersForGlobalInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaInvalidUsersForGlobalRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaInvalidUsersForGlobalRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaInvalidUsersForGlobalRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaInvalidUsersForGlobalInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaInvalidUsersForGlobalRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaInvalidUsersForGlobalRepositoryExternal::createInstance(
   const Linux_SambaInvalidUsersForGlobalRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaInvalidUsersForGlobalInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaInvalidUsersForGlobalRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaInvalidUsersForGlobalRepositoryExternal::deleteInstance(
   const Linux_SambaInvalidUsersForGlobalInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
