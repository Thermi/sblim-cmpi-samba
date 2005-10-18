/**
 *  Linux_SambaCommonSecurityForShareRepositoryExternal.cpp
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


#include "Linux_SambaCommonSecurityForShareRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaCommonSecurityForShareRepositoryExternal::Linux_SambaCommonSecurityForShareRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaCommonSecurityForShareRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaCommonSecurityForShareRepositoryExternal::
   ~Linux_SambaCommonSecurityForShareRepositoryExternal(){};
    
  void Linux_SambaCommonSecurityForShareRepositoryExternal::enumInstanceNames(
   Linux_SambaCommonSecurityForShareInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaCommonSecurityForShare");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaCommonSecurityForShareInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaCommonSecurityForShareRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaCommonSecurityForShareRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaCommonSecurityForShare");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaCommonSecurityForShareRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaCommonSecurityForShareRepositoryInstance
   Linux_SambaCommonSecurityForShareRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaCommonSecurityForShareInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaCommonSecurityForShareRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaCommonSecurityForShareRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaCommonSecurityForShareRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaCommonSecurityForShareInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaCommonSecurityForShareRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaCommonSecurityForShareRepositoryExternal::createInstance(
   const Linux_SambaCommonSecurityForShareRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaCommonSecurityForShareInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaCommonSecurityForShareRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaCommonSecurityForShareRepositoryExternal::deleteInstance(
   const Linux_SambaCommonSecurityForShareInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
