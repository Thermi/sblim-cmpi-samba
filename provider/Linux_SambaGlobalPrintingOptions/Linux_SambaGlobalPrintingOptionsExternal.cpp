/**
 *  Linux_SambaGlobalPrintingOptionsExternal.cpp
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


#include "Linux_SambaGlobalPrintingOptionsExternal.h"

namespace genProvider{
	
  Linux_SambaGlobalPrintingOptionsExternal::Linux_SambaGlobalPrintingOptionsExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
   
  Linux_SambaGlobalPrintingOptionsExternal::
   ~Linux_SambaGlobalPrintingOptionsExternal(){};
    
  void Linux_SambaGlobalPrintingOptionsExternal::enumInstanceNames(
   const char *nsp,
   Linux_SambaGlobalPrintingOptionsInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaGlobalPrintingOptions");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaGlobalPrintingOptionsInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaGlobalPrintingOptionsExternal::enumInstances(
   const char *nsp,
   const char* *properties,
   Linux_SambaGlobalPrintingOptionsInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaGlobalPrintingOptions");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaGlobalPrintingOptionsInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaGlobalPrintingOptionsInstance
   Linux_SambaGlobalPrintingOptionsExternal::getInstance(
   const char* *properties,
   const Linux_SambaGlobalPrintingOptionsInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaGlobalPrintingOptionsInstance(inst,instanceName.getNamespace());
  }
      
  void Linux_SambaGlobalPrintingOptionsExternal::setInstance(
   const char* *properties,
   const Linux_SambaGlobalPrintingOptionsInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaGlobalPrintingOptionsExternal::createInstance(
   const Linux_SambaGlobalPrintingOptionsInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaGlobalPrintingOptionsExternal::deleteInstance(
   const Linux_SambaGlobalPrintingOptionsInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    broker.deleteInstance(context,op);
  }
    
}
