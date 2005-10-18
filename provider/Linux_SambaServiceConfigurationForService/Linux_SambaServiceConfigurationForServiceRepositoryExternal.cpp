/**
 *  Linux_SambaServiceConfigurationForServiceRepositoryExternal.cpp
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


#include "Linux_SambaServiceConfigurationForServiceRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaServiceConfigurationForServiceRepositoryExternal::Linux_SambaServiceConfigurationForServiceRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaServiceConfigurationForServiceRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaServiceConfigurationForServiceRepositoryExternal::
   ~Linux_SambaServiceConfigurationForServiceRepositoryExternal(){};
    
  void Linux_SambaServiceConfigurationForServiceRepositoryExternal::enumInstanceNames(
   Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaServiceConfigurationForService");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaServiceConfigurationForServiceInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaServiceConfigurationForServiceRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaServiceConfigurationForService");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaServiceConfigurationForServiceRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaServiceConfigurationForServiceRepositoryInstance
   Linux_SambaServiceConfigurationForServiceRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaServiceConfigurationForServiceInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaServiceConfigurationForServiceRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaServiceConfigurationForServiceRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaServiceConfigurationForServiceRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaServiceConfigurationForServiceInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaServiceConfigurationForServiceRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaServiceConfigurationForServiceRepositoryExternal::createInstance(
   const Linux_SambaServiceConfigurationForServiceRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaServiceConfigurationForServiceInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaServiceConfigurationForServiceRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaServiceConfigurationForServiceRepositoryExternal::deleteInstance(
   const Linux_SambaServiceConfigurationForServiceInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
