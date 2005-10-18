/**
 *  Linux_SambaPrinterSecurityOptionsExternal.cpp
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


#include "Linux_SambaPrinterSecurityOptionsExternal.h"

namespace genProvider{
	
  Linux_SambaPrinterSecurityOptionsExternal::Linux_SambaPrinterSecurityOptionsExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
   
  Linux_SambaPrinterSecurityOptionsExternal::
   ~Linux_SambaPrinterSecurityOptionsExternal(){};
    
  void Linux_SambaPrinterSecurityOptionsExternal::enumInstanceNames(
   const char *nsp,
   Linux_SambaPrinterSecurityOptionsInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaPrinterSecurityOptions");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaPrinterSecurityOptionsInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaPrinterSecurityOptionsExternal::enumInstances(
   const char *nsp,
   const char* *properties,
   Linux_SambaPrinterSecurityOptionsInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaPrinterSecurityOptions");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaPrinterSecurityOptionsInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaPrinterSecurityOptionsInstance
   Linux_SambaPrinterSecurityOptionsExternal::getInstance(
   const char* *properties,
   const Linux_SambaPrinterSecurityOptionsInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaPrinterSecurityOptionsInstance(inst,instanceName.getNamespace());
  }
      
  void Linux_SambaPrinterSecurityOptionsExternal::setInstance(
   const char* *properties,
   const Linux_SambaPrinterSecurityOptionsInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaPrinterSecurityOptionsExternal::createInstance(
   const Linux_SambaPrinterSecurityOptionsInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaPrinterSecurityOptionsExternal::deleteInstance(
   const Linux_SambaPrinterSecurityOptionsInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    broker.deleteInstance(context,op);
  }
    
}
