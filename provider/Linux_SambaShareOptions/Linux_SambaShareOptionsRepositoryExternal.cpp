/**
 *  Linux_SambaShareOptionsRepositoryExternal.cpp
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


#include "Linux_SambaShareOptionsRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaShareOptionsRepositoryExternal::Linux_SambaShareOptionsRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaShareOptionsRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaShareOptionsRepositoryExternal::
   ~Linux_SambaShareOptionsRepositoryExternal(){};
    
  void Linux_SambaShareOptionsRepositoryExternal::enumInstanceNames(
   Linux_SambaShareOptionsInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaShareOptions");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaShareOptionsInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaShareOptionsRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaShareOptionsRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaShareOptions");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaShareOptionsRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaShareOptionsRepositoryInstance
   Linux_SambaShareOptionsRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaShareOptionsInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaShareOptionsRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaShareOptionsRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaShareOptionsRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaShareOptionsInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaShareOptionsRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaShareOptionsRepositoryExternal::createInstance(
   const Linux_SambaShareOptionsRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaShareOptionsInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaShareOptionsRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaShareOptionsRepositoryExternal::deleteInstance(
   const Linux_SambaShareOptionsInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
