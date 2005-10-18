/**
 *  Linux_SambaGlobalSecurityForGlobalRepositoryExternal.cpp
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


#include "Linux_SambaGlobalSecurityForGlobalRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaGlobalSecurityForGlobalRepositoryExternal::Linux_SambaGlobalSecurityForGlobalRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaGlobalSecurityForGlobalRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaGlobalSecurityForGlobalRepositoryExternal::
   ~Linux_SambaGlobalSecurityForGlobalRepositoryExternal(){};
    
  void Linux_SambaGlobalSecurityForGlobalRepositoryExternal::enumInstanceNames(
   Linux_SambaGlobalSecurityForGlobalInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaGlobalSecurityForGlobal");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaGlobalSecurityForGlobalInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaGlobalSecurityForGlobalRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaGlobalSecurityForGlobal");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaGlobalSecurityForGlobalRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaGlobalSecurityForGlobalRepositoryInstance
   Linux_SambaGlobalSecurityForGlobalRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaGlobalSecurityForGlobalInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaGlobalSecurityForGlobalRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaGlobalSecurityForGlobalRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaGlobalSecurityForGlobalRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaGlobalSecurityForGlobalInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaGlobalSecurityForGlobalRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaGlobalSecurityForGlobalRepositoryExternal::createInstance(
   const Linux_SambaGlobalSecurityForGlobalRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaGlobalSecurityForGlobalInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaGlobalSecurityForGlobalRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaGlobalSecurityForGlobalRepositoryExternal::deleteInstance(
   const Linux_SambaGlobalSecurityForGlobalInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
