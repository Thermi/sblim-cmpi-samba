/**
 *  Linux_SambaServiceExternal.cpp
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


#include "Linux_SambaServiceExternal.h"

namespace genProvider{
	
  Linux_SambaServiceExternal::Linux_SambaServiceExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
   
  Linux_SambaServiceExternal::
   ~Linux_SambaServiceExternal(){};
    
  void Linux_SambaServiceExternal::enumInstanceNames(
   const char *nsp,
   Linux_SambaServiceInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaService");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaServiceInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaServiceExternal::enumInstances(
   const char *nsp,
   const char* *properties,
   Linux_SambaServiceInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaService");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaServiceInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaServiceInstance
   Linux_SambaServiceExternal::getInstance(
   const char* *properties,
   const Linux_SambaServiceInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaServiceInstance(inst,instanceName.getNamespace());
  }
      
  void Linux_SambaServiceExternal::setInstance(
   const char* *properties,
   const Linux_SambaServiceInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaServiceExternal::createInstance(
   const Linux_SambaServiceInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaServiceExternal::deleteInstance(
   const Linux_SambaServiceInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    broker.deleteInstance(context,op);
  }
    
}
