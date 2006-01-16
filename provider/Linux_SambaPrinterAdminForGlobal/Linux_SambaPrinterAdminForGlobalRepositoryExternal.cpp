/**
 *  Linux_SambaPrinterAdminForGlobalRepositoryExternal.cpp
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


#include "Linux_SambaPrinterAdminForGlobalRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaPrinterAdminForGlobalRepositoryExternal::Linux_SambaPrinterAdminForGlobalRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaPrinterAdminForGlobalRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaPrinterAdminForGlobalRepositoryExternal::
   ~Linux_SambaPrinterAdminForGlobalRepositoryExternal(){};
    
  void Linux_SambaPrinterAdminForGlobalRepositoryExternal::enumInstanceNames(
   Linux_SambaPrinterAdminForGlobalInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaPrinterAdminForGlobal");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaPrinterAdminForGlobalInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaPrinterAdminForGlobalRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaPrinterAdminForGlobalRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaPrinterAdminForGlobal");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaPrinterAdminForGlobalRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaPrinterAdminForGlobalRepositoryInstance
   Linux_SambaPrinterAdminForGlobalRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaPrinterAdminForGlobalInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaPrinterAdminForGlobalRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaPrinterAdminForGlobalRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaPrinterAdminForGlobalRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaPrinterAdminForGlobalInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaPrinterAdminForGlobalRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaPrinterAdminForGlobalRepositoryExternal::createInstance(
   const Linux_SambaPrinterAdminForGlobalRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaPrinterAdminForGlobalInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaPrinterAdminForGlobalRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaPrinterAdminForGlobalRepositoryExternal::deleteInstance(
   const Linux_SambaPrinterAdminForGlobalInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}