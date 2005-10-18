/**
 *  Linux_SambaInvalidUsersForShareRepositoryExternal.cpp
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


#include "Linux_SambaInvalidUsersForShareRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaInvalidUsersForShareRepositoryExternal::Linux_SambaInvalidUsersForShareRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaInvalidUsersForShareRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaInvalidUsersForShareRepositoryExternal::
   ~Linux_SambaInvalidUsersForShareRepositoryExternal(){};
    
  void Linux_SambaInvalidUsersForShareRepositoryExternal::enumInstanceNames(
   Linux_SambaInvalidUsersForShareInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaInvalidUsersForShare");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaInvalidUsersForShareInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaInvalidUsersForShareRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaInvalidUsersForShareRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaInvalidUsersForShare");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaInvalidUsersForShareRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaInvalidUsersForShareRepositoryInstance
   Linux_SambaInvalidUsersForShareRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaInvalidUsersForShareInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaInvalidUsersForShareRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaInvalidUsersForShareRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaInvalidUsersForShareRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaInvalidUsersForShareInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaInvalidUsersForShareRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaInvalidUsersForShareRepositoryExternal::createInstance(
   const Linux_SambaInvalidUsersForShareRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaInvalidUsersForShareInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaInvalidUsersForShareRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaInvalidUsersForShareRepositoryExternal::deleteInstance(
   const Linux_SambaInvalidUsersForShareInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
