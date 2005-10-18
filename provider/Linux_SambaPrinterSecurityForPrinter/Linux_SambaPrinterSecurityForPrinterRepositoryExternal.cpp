/**
 *  Linux_SambaPrinterSecurityForPrinterRepositoryExternal.cpp
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


#include "Linux_SambaPrinterSecurityForPrinterRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaPrinterSecurityForPrinterRepositoryExternal::Linux_SambaPrinterSecurityForPrinterRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaPrinterSecurityForPrinterRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaPrinterSecurityForPrinterRepositoryExternal::
   ~Linux_SambaPrinterSecurityForPrinterRepositoryExternal(){};
    
  void Linux_SambaPrinterSecurityForPrinterRepositoryExternal::enumInstanceNames(
   Linux_SambaPrinterSecurityForPrinterInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaPrinterSecurityForPrinter");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaPrinterSecurityForPrinterInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaPrinterSecurityForPrinterRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaPrinterSecurityForPrinter");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaPrinterSecurityForPrinterRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaPrinterSecurityForPrinterRepositoryInstance
   Linux_SambaPrinterSecurityForPrinterRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaPrinterSecurityForPrinterInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaPrinterSecurityForPrinterRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaPrinterSecurityForPrinterRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaPrinterSecurityForPrinterRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaPrinterSecurityForPrinterInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaPrinterSecurityForPrinterRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaPrinterSecurityForPrinterRepositoryExternal::createInstance(
   const Linux_SambaPrinterSecurityForPrinterRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaPrinterSecurityForPrinterInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaPrinterSecurityForPrinterRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaPrinterSecurityForPrinterRepositoryExternal::deleteInstance(
   const Linux_SambaPrinterSecurityForPrinterInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
