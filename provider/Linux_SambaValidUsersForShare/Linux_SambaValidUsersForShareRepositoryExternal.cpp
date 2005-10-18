/**
 *  Linux_SambaValidUsersForShareRepositoryExternal.cpp
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


#include "Linux_SambaValidUsersForShareRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaValidUsersForShareRepositoryExternal::Linux_SambaValidUsersForShareRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaValidUsersForShareRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaValidUsersForShareRepositoryExternal::
   ~Linux_SambaValidUsersForShareRepositoryExternal(){};
    
  void Linux_SambaValidUsersForShareRepositoryExternal::enumInstanceNames(
   Linux_SambaValidUsersForShareInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaValidUsersForShare");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaValidUsersForShareInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaValidUsersForShareRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaValidUsersForShareRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaValidUsersForShare");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaValidUsersForShareRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaValidUsersForShareRepositoryInstance
   Linux_SambaValidUsersForShareRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaValidUsersForShareInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaValidUsersForShareRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaValidUsersForShareRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaValidUsersForShareRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaValidUsersForShareInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaValidUsersForShareRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaValidUsersForShareRepositoryExternal::createInstance(
   const Linux_SambaValidUsersForShareRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaValidUsersForShareInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaValidUsersForShareRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaValidUsersForShareRepositoryExternal::deleteInstance(
   const Linux_SambaValidUsersForShareInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
