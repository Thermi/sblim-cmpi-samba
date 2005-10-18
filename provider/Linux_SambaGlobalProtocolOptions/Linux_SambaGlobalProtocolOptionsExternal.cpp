/**
 *  Linux_SambaGlobalProtocolOptionsExternal.cpp
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


#include "Linux_SambaGlobalProtocolOptionsExternal.h"

namespace genProvider{
	
  Linux_SambaGlobalProtocolOptionsExternal::Linux_SambaGlobalProtocolOptionsExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
   
  Linux_SambaGlobalProtocolOptionsExternal::
   ~Linux_SambaGlobalProtocolOptionsExternal(){};
    
  void Linux_SambaGlobalProtocolOptionsExternal::enumInstanceNames(
   const char *nsp,
   Linux_SambaGlobalProtocolOptionsInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaGlobalProtocolOptions");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaGlobalProtocolOptionsInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaGlobalProtocolOptionsExternal::enumInstances(
   const char *nsp,
   const char* *properties,
   Linux_SambaGlobalProtocolOptionsInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaGlobalProtocolOptions");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaGlobalProtocolOptionsInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaGlobalProtocolOptionsInstance
   Linux_SambaGlobalProtocolOptionsExternal::getInstance(
   const char* *properties,
   const Linux_SambaGlobalProtocolOptionsInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaGlobalProtocolOptionsInstance(inst,instanceName.getNamespace());
  }
      
  void Linux_SambaGlobalProtocolOptionsExternal::setInstance(
   const char* *properties,
   const Linux_SambaGlobalProtocolOptionsInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaGlobalProtocolOptionsExternal::createInstance(
   const Linux_SambaGlobalProtocolOptionsInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaGlobalProtocolOptionsExternal::deleteInstance(
   const Linux_SambaGlobalProtocolOptionsInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    broker.deleteInstance(context,op);
  }
    
}
