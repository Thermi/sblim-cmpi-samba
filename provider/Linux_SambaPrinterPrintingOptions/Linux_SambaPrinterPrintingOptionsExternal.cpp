/**
 *  Linux_SambaPrinterPrintingOptionsExternal.cpp
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


#include "Linux_SambaPrinterPrintingOptionsExternal.h"

namespace genProvider{
	
  Linux_SambaPrinterPrintingOptionsExternal::Linux_SambaPrinterPrintingOptionsExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
   
  Linux_SambaPrinterPrintingOptionsExternal::
   ~Linux_SambaPrinterPrintingOptionsExternal(){};
    
  void Linux_SambaPrinterPrintingOptionsExternal::enumInstanceNames(
   const char *nsp,
   Linux_SambaPrinterPrintingOptionsInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaPrinterPrintingOptions");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaPrinterPrintingOptionsInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaPrinterPrintingOptionsExternal::enumInstances(
   const char *nsp,
   const char* *properties,
   Linux_SambaPrinterPrintingOptionsInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaPrinterPrintingOptions");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaPrinterPrintingOptionsInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaPrinterPrintingOptionsInstance
   Linux_SambaPrinterPrintingOptionsExternal::getInstance(
   const char* *properties,
   const Linux_SambaPrinterPrintingOptionsInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaPrinterPrintingOptionsInstance(inst,instanceName.getNamespace());
  }
      
  void Linux_SambaPrinterPrintingOptionsExternal::setInstance(
   const char* *properties,
   const Linux_SambaPrinterPrintingOptionsInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaPrinterPrintingOptionsExternal::createInstance(
   const Linux_SambaPrinterPrintingOptionsInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaPrinterPrintingOptionsExternal::deleteInstance(
   const Linux_SambaPrinterPrintingOptionsInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    broker.deleteInstance(context,op);
  }
    
}
