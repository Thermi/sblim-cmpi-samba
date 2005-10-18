/**
 *  Linux_SambaGroupExternal.cpp
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


#include "Linux_SambaGroupExternal.h"

namespace genProvider{
	
  Linux_SambaGroupExternal::Linux_SambaGroupExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
   
  Linux_SambaGroupExternal::
   ~Linux_SambaGroupExternal(){};
    
  void Linux_SambaGroupExternal::enumInstanceNames(
   const char *nsp,
   Linux_SambaGroupInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaGroup");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaGroupInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaGroupExternal::enumInstances(
   const char *nsp,
   const char* *properties,
   Linux_SambaGroupInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaGroup");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaGroupInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaGroupInstance
   Linux_SambaGroupExternal::getInstance(
   const char* *properties,
   const Linux_SambaGroupInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaGroupInstance(inst,instanceName.getNamespace());
  }
      
  void Linux_SambaGroupExternal::setInstance(
   const char* *properties,
   const Linux_SambaGroupInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaGroupExternal::createInstance(
   const Linux_SambaGroupInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaGroupExternal::deleteInstance(
   const Linux_SambaGroupInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    broker.deleteInstance(context,op);
  }
    
}
