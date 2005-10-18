/**
 *  Linux_SambaPrinterSecurityOptionsRepositoryExternal.cpp
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


#include "Linux_SambaPrinterSecurityOptionsRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaPrinterSecurityOptionsRepositoryExternal::Linux_SambaPrinterSecurityOptionsRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaPrinterSecurityOptionsRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaPrinterSecurityOptionsRepositoryExternal::
   ~Linux_SambaPrinterSecurityOptionsRepositoryExternal(){};
    
  void Linux_SambaPrinterSecurityOptionsRepositoryExternal::enumInstanceNames(
   Linux_SambaPrinterSecurityOptionsInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaPrinterSecurityOptions");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaPrinterSecurityOptionsInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaPrinterSecurityOptionsRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaPrinterSecurityOptionsRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaPrinterSecurityOptions");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaPrinterSecurityOptionsRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaPrinterSecurityOptionsRepositoryInstance
   Linux_SambaPrinterSecurityOptionsRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaPrinterSecurityOptionsInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaPrinterSecurityOptionsRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaPrinterSecurityOptionsRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaPrinterSecurityOptionsRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaPrinterSecurityOptionsInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaPrinterSecurityOptionsRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaPrinterSecurityOptionsRepositoryExternal::createInstance(
   const Linux_SambaPrinterSecurityOptionsRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaPrinterSecurityOptionsInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaPrinterSecurityOptionsRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaPrinterSecurityOptionsRepositoryExternal::deleteInstance(
   const Linux_SambaPrinterSecurityOptionsInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
