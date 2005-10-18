/**
 *  Linux_SambaUserExternal.cpp
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


#include "Linux_SambaUserExternal.h"

namespace genProvider{
	
  Linux_SambaUserExternal::Linux_SambaUserExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
   
  Linux_SambaUserExternal::
   ~Linux_SambaUserExternal(){};
    
  void Linux_SambaUserExternal::enumInstanceNames(
   const char *nsp,
   Linux_SambaUserInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaUser");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaUserInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaUserExternal::enumInstances(
   const char *nsp,
   const char* *properties,
   Linux_SambaUserInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaUser");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaUserInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaUserInstance
   Linux_SambaUserExternal::getInstance(
   const char* *properties,
   const Linux_SambaUserInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaUserInstance(inst,instanceName.getNamespace());
  }
      
  void Linux_SambaUserExternal::setInstance(
   const char* *properties,
   const Linux_SambaUserInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaUserExternal::createInstance(
   const Linux_SambaUserInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaUserExternal::deleteInstance(
   const Linux_SambaUserInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    broker.deleteInstance(context,op);
  }
    
}
