/**
 *  Linux_SambaReadListForGlobalRepositoryExternal.cpp
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


#include "Linux_SambaReadListForGlobalRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaReadListForGlobalRepositoryExternal::Linux_SambaReadListForGlobalRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaReadListForGlobalRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaReadListForGlobalRepositoryExternal::
   ~Linux_SambaReadListForGlobalRepositoryExternal(){};
    
  void Linux_SambaReadListForGlobalRepositoryExternal::enumInstanceNames(
   Linux_SambaReadListForGlobalInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaReadListForGlobal");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaReadListForGlobalInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaReadListForGlobalRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaReadListForGlobalRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaReadListForGlobal");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaReadListForGlobalRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaReadListForGlobalRepositoryInstance
   Linux_SambaReadListForGlobalRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaReadListForGlobalInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaReadListForGlobalRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaReadListForGlobalRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaReadListForGlobalRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaReadListForGlobalInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaReadListForGlobalRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaReadListForGlobalRepositoryExternal::createInstance(
   const Linux_SambaReadListForGlobalRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaReadListForGlobalInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaReadListForGlobalRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaReadListForGlobalRepositoryExternal::deleteInstance(
   const Linux_SambaReadListForGlobalInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
