/**
 *  Linux_SambaServiceConfigurationRepositoryExternal.cpp
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


#include "Linux_SambaServiceConfigurationRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaServiceConfigurationRepositoryExternal::Linux_SambaServiceConfigurationRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaServiceConfigurationRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaServiceConfigurationRepositoryExternal::
   ~Linux_SambaServiceConfigurationRepositoryExternal(){};
    
  void Linux_SambaServiceConfigurationRepositoryExternal::enumInstanceNames(
   Linux_SambaServiceConfigurationInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaServiceConfiguration");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaServiceConfigurationInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaServiceConfigurationRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaServiceConfigurationRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaServiceConfiguration");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaServiceConfigurationRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaServiceConfigurationRepositoryInstance
   Linux_SambaServiceConfigurationRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaServiceConfigurationInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaServiceConfigurationRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaServiceConfigurationRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaServiceConfigurationRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaServiceConfigurationInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaServiceConfigurationRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaServiceConfigurationRepositoryExternal::createInstance(
   const Linux_SambaServiceConfigurationRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaServiceConfigurationInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaServiceConfigurationRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaServiceConfigurationRepositoryExternal::deleteInstance(
   const Linux_SambaServiceConfigurationInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}