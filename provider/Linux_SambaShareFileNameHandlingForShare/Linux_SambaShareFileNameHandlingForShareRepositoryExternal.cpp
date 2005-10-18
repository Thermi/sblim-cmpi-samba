/**
 *  Linux_SambaShareFileNameHandlingForShareRepositoryExternal.cpp
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


#include "Linux_SambaShareFileNameHandlingForShareRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaShareFileNameHandlingForShareRepositoryExternal::Linux_SambaShareFileNameHandlingForShareRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaShareFileNameHandlingForShareRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaShareFileNameHandlingForShareRepositoryExternal::
   ~Linux_SambaShareFileNameHandlingForShareRepositoryExternal(){};
    
  void Linux_SambaShareFileNameHandlingForShareRepositoryExternal::enumInstanceNames(
   Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaShareFileNameHandlingForShare");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaShareFileNameHandlingForShareInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaShareFileNameHandlingForShareRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaShareFileNameHandlingForShare");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaShareFileNameHandlingForShareRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaShareFileNameHandlingForShareRepositoryInstance
   Linux_SambaShareFileNameHandlingForShareRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaShareFileNameHandlingForShareInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaShareFileNameHandlingForShareRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaShareFileNameHandlingForShareRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaShareFileNameHandlingForShareRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaShareFileNameHandlingForShareInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaShareFileNameHandlingForShareRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaShareFileNameHandlingForShareRepositoryExternal::createInstance(
   const Linux_SambaShareFileNameHandlingForShareRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaShareFileNameHandlingForShareInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaShareFileNameHandlingForShareRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaShareFileNameHandlingForShareRepositoryExternal::deleteInstance(
   const Linux_SambaShareFileNameHandlingForShareInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
