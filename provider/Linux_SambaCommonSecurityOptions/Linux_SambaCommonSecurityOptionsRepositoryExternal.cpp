/**
 *  Linux_SambaCommonSecurityOptionsRepositoryExternal.cpp
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


#include "Linux_SambaCommonSecurityOptionsRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaCommonSecurityOptionsRepositoryExternal::Linux_SambaCommonSecurityOptionsRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaCommonSecurityOptionsRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaCommonSecurityOptionsRepositoryExternal::
   ~Linux_SambaCommonSecurityOptionsRepositoryExternal(){};
    
  void Linux_SambaCommonSecurityOptionsRepositoryExternal::enumInstanceNames(
   Linux_SambaCommonSecurityOptionsInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaCommonSecurityOptions");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaCommonSecurityOptionsInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaCommonSecurityOptionsRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaCommonSecurityOptions");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaCommonSecurityOptionsRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaCommonSecurityOptionsRepositoryInstance
   Linux_SambaCommonSecurityOptionsRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaCommonSecurityOptionsInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaCommonSecurityOptionsRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaCommonSecurityOptionsRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaCommonSecurityOptionsRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaCommonSecurityOptionsInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaCommonSecurityOptionsRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaCommonSecurityOptionsRepositoryExternal::createInstance(
   const Linux_SambaCommonSecurityOptionsRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaCommonSecurityOptionsInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaCommonSecurityOptionsRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaCommonSecurityOptionsRepositoryExternal::deleteInstance(
   const Linux_SambaCommonSecurityOptionsInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
