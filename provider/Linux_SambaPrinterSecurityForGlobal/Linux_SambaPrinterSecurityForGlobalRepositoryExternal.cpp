/**
 *  Linux_SambaPrinterSecurityForGlobalRepositoryExternal.cpp
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


#include "Linux_SambaPrinterSecurityForGlobalRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaPrinterSecurityForGlobalRepositoryExternal::Linux_SambaPrinterSecurityForGlobalRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaPrinterSecurityForGlobalRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaPrinterSecurityForGlobalRepositoryExternal::
   ~Linux_SambaPrinterSecurityForGlobalRepositoryExternal(){};
    
  void Linux_SambaPrinterSecurityForGlobalRepositoryExternal::enumInstanceNames(
   Linux_SambaPrinterSecurityForGlobalInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaPrinterSecurityForGlobal");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaPrinterSecurityForGlobalInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaPrinterSecurityForGlobalRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaPrinterSecurityForGlobalRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaPrinterSecurityForGlobal");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaPrinterSecurityForGlobalRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaPrinterSecurityForGlobalRepositoryInstance
   Linux_SambaPrinterSecurityForGlobalRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaPrinterSecurityForGlobalInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaPrinterSecurityForGlobalRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaPrinterSecurityForGlobalRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaPrinterSecurityForGlobalRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaPrinterSecurityForGlobalInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaPrinterSecurityForGlobalRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaPrinterSecurityForGlobalRepositoryExternal::createInstance(
   const Linux_SambaPrinterSecurityForGlobalRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaPrinterSecurityForGlobalInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaPrinterSecurityForGlobalRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaPrinterSecurityForGlobalRepositoryExternal::deleteInstance(
   const Linux_SambaPrinterSecurityForGlobalInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
