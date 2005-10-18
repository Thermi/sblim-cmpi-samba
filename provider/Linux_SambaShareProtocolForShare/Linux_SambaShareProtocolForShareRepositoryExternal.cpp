/**
 *  Linux_SambaShareProtocolForShareRepositoryExternal.cpp
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


#include "Linux_SambaShareProtocolForShareRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaShareProtocolForShareRepositoryExternal::Linux_SambaShareProtocolForShareRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaShareProtocolForShareRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaShareProtocolForShareRepositoryExternal::
   ~Linux_SambaShareProtocolForShareRepositoryExternal(){};
    
  void Linux_SambaShareProtocolForShareRepositoryExternal::enumInstanceNames(
   Linux_SambaShareProtocolForShareInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaShareProtocolForShare");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaShareProtocolForShareInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaShareProtocolForShareRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaShareProtocolForShareRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaShareProtocolForShare");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaShareProtocolForShareRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaShareProtocolForShareRepositoryInstance
   Linux_SambaShareProtocolForShareRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaShareProtocolForShareInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaShareProtocolForShareRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaShareProtocolForShareRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaShareProtocolForShareRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaShareProtocolForShareInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaShareProtocolForShareRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaShareProtocolForShareRepositoryExternal::createInstance(
   const Linux_SambaShareProtocolForShareRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaShareProtocolForShareInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaShareProtocolForShareRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaShareProtocolForShareRepositoryExternal::deleteInstance(
   const Linux_SambaShareProtocolForShareInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
