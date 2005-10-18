/**
 *  Linux_SambaPrinterPrintingOptionsRepositoryExternal.cpp
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


#include "Linux_SambaPrinterPrintingOptionsRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaPrinterPrintingOptionsRepositoryExternal::Linux_SambaPrinterPrintingOptionsRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaPrinterPrintingOptionsRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaPrinterPrintingOptionsRepositoryExternal::
   ~Linux_SambaPrinterPrintingOptionsRepositoryExternal(){};
    
  void Linux_SambaPrinterPrintingOptionsRepositoryExternal::enumInstanceNames(
   Linux_SambaPrinterPrintingOptionsInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaPrinterPrintingOptions");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaPrinterPrintingOptionsInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaPrinterPrintingOptionsRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaPrinterPrintingOptions");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaPrinterPrintingOptionsRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaPrinterPrintingOptionsRepositoryInstance
   Linux_SambaPrinterPrintingOptionsRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaPrinterPrintingOptionsInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaPrinterPrintingOptionsRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaPrinterPrintingOptionsRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaPrinterPrintingOptionsRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaPrinterPrintingOptionsInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaPrinterPrintingOptionsRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaPrinterPrintingOptionsRepositoryExternal::createInstance(
   const Linux_SambaPrinterPrintingOptionsRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaPrinterPrintingOptionsInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaPrinterPrintingOptionsRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaPrinterPrintingOptionsRepositoryExternal::deleteInstance(
   const Linux_SambaPrinterPrintingOptionsInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
