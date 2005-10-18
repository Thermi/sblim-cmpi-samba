/**
 *  Linux_SambaShareFileNameHandlingOptionsRepositoryExternal.cpp
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


#include "Linux_SambaShareFileNameHandlingOptionsRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaShareFileNameHandlingOptionsRepositoryExternal::Linux_SambaShareFileNameHandlingOptionsRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaShareFileNameHandlingOptionsRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaShareFileNameHandlingOptionsRepositoryExternal::
   ~Linux_SambaShareFileNameHandlingOptionsRepositoryExternal(){};
    
  void Linux_SambaShareFileNameHandlingOptionsRepositoryExternal::enumInstanceNames(
   Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaShareFileNameHandlingOptions");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaShareFileNameHandlingOptionsInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaShareFileNameHandlingOptionsRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaShareFileNameHandlingOptions");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaShareFileNameHandlingOptionsRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaShareFileNameHandlingOptionsRepositoryInstance
   Linux_SambaShareFileNameHandlingOptionsRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaShareFileNameHandlingOptionsInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaShareFileNameHandlingOptionsRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaShareFileNameHandlingOptionsRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaShareFileNameHandlingOptionsRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaShareFileNameHandlingOptionsInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaShareFileNameHandlingOptionsRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaShareFileNameHandlingOptionsRepositoryExternal::createInstance(
   const Linux_SambaShareFileNameHandlingOptionsRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaShareFileNameHandlingOptionsInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaShareFileNameHandlingOptionsRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaShareFileNameHandlingOptionsRepositoryExternal::deleteInstance(
   const Linux_SambaShareFileNameHandlingOptionsInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
