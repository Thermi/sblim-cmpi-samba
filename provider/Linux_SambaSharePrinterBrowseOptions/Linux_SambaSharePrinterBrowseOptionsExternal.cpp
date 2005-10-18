/**
 *  Linux_SambaSharePrinterBrowseOptionsExternal.cpp
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


#include "Linux_SambaSharePrinterBrowseOptionsExternal.h"

namespace genProvider{
	
  Linux_SambaSharePrinterBrowseOptionsExternal::Linux_SambaSharePrinterBrowseOptionsExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
   
  Linux_SambaSharePrinterBrowseOptionsExternal::
   ~Linux_SambaSharePrinterBrowseOptionsExternal(){};
    
  void Linux_SambaSharePrinterBrowseOptionsExternal::enumInstanceNames(
   const char *nsp,
   Linux_SambaSharePrinterBrowseOptionsInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaSharePrinterBrowseOptions");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaSharePrinterBrowseOptionsInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaSharePrinterBrowseOptionsExternal::enumInstances(
   const char *nsp,
   const char* *properties,
   Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaSharePrinterBrowseOptions");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaSharePrinterBrowseOptionsInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaSharePrinterBrowseOptionsInstance
   Linux_SambaSharePrinterBrowseOptionsExternal::getInstance(
   const char* *properties,
   const Linux_SambaSharePrinterBrowseOptionsInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaSharePrinterBrowseOptionsInstance(inst,instanceName.getNamespace());
  }
      
  void Linux_SambaSharePrinterBrowseOptionsExternal::setInstance(
   const char* *properties,
   const Linux_SambaSharePrinterBrowseOptionsInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaSharePrinterBrowseOptionsExternal::createInstance(
   const Linux_SambaSharePrinterBrowseOptionsInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaSharePrinterBrowseOptionsExternal::deleteInstance(
   const Linux_SambaSharePrinterBrowseOptionsInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    broker.deleteInstance(context,op);
  }
    
}
