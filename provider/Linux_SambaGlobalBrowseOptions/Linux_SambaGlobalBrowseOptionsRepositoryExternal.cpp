/**
 *  Linux_SambaGlobalBrowseOptionsRepositoryExternal.cpp
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


#include "Linux_SambaGlobalBrowseOptionsRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaGlobalBrowseOptionsRepositoryExternal::Linux_SambaGlobalBrowseOptionsRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaGlobalBrowseOptionsRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaGlobalBrowseOptionsRepositoryExternal::
   ~Linux_SambaGlobalBrowseOptionsRepositoryExternal(){};
    
  void Linux_SambaGlobalBrowseOptionsRepositoryExternal::enumInstanceNames(
   Linux_SambaGlobalBrowseOptionsInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaGlobalBrowseOptions");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaGlobalBrowseOptionsInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaGlobalBrowseOptionsRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaGlobalBrowseOptionsRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaGlobalBrowseOptions");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaGlobalBrowseOptionsRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaGlobalBrowseOptionsRepositoryInstance
   Linux_SambaGlobalBrowseOptionsRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaGlobalBrowseOptionsInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaGlobalBrowseOptionsRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaGlobalBrowseOptionsRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaGlobalBrowseOptionsRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaGlobalBrowseOptionsInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaGlobalBrowseOptionsRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaGlobalBrowseOptionsRepositoryExternal::createInstance(
   const Linux_SambaGlobalBrowseOptionsRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaGlobalBrowseOptionsInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaGlobalBrowseOptionsRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaGlobalBrowseOptionsRepositoryExternal::deleteInstance(
   const Linux_SambaGlobalBrowseOptionsInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
