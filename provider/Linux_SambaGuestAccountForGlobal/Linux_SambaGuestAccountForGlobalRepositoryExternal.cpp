/**
 *  Linux_SambaGuestAccountForGlobalRepositoryExternal.cpp
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


#include "Linux_SambaGuestAccountForGlobalRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaGuestAccountForGlobalRepositoryExternal::Linux_SambaGuestAccountForGlobalRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaGuestAccountForGlobalRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaGuestAccountForGlobalRepositoryExternal::
   ~Linux_SambaGuestAccountForGlobalRepositoryExternal(){};
    
  void Linux_SambaGuestAccountForGlobalRepositoryExternal::enumInstanceNames(
   Linux_SambaGuestAccountForGlobalInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaGuestAccountForGlobal");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaGuestAccountForGlobalInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaGuestAccountForGlobalRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaGuestAccountForGlobal");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaGuestAccountForGlobalRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaGuestAccountForGlobalRepositoryInstance
   Linux_SambaGuestAccountForGlobalRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaGuestAccountForGlobalInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaGuestAccountForGlobalRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaGuestAccountForGlobalRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaGuestAccountForGlobalRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaGuestAccountForGlobalInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaGuestAccountForGlobalRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaGuestAccountForGlobalRepositoryExternal::createInstance(
   const Linux_SambaGuestAccountForGlobalRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaGuestAccountForGlobalInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaGuestAccountForGlobalRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaGuestAccountForGlobalRepositoryExternal::deleteInstance(
   const Linux_SambaGuestAccountForGlobalInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
