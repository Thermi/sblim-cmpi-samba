/**
 *  Linux_SambaHostExternal.cpp
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


#include "Linux_SambaHostExternal.h"

namespace genProvider{
	
  Linux_SambaHostExternal::Linux_SambaHostExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
   
  Linux_SambaHostExternal::
   ~Linux_SambaHostExternal(){};
    
  void Linux_SambaHostExternal::enumInstanceNames(
   const char *nsp,
   Linux_SambaHostInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaHost");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaHostInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaHostExternal::enumInstances(
   const char *nsp,
   const char* *properties,
   Linux_SambaHostInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaHost");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaHostInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaHostInstance
   Linux_SambaHostExternal::getInstance(
   const char* *properties,
   const Linux_SambaHostInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaHostInstance(inst,instanceName.getNamespace());
  }
      
  void Linux_SambaHostExternal::setInstance(
   const char* *properties,
   const Linux_SambaHostInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaHostExternal::createInstance(
   const Linux_SambaHostInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaHostExternal::deleteInstance(
   const Linux_SambaHostInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    broker.deleteInstance(context,op);
  }
    
}
