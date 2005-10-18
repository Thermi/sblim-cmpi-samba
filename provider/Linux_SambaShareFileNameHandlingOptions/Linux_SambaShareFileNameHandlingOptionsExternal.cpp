/**
 *  Linux_SambaShareFileNameHandlingOptionsExternal.cpp
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


#include "Linux_SambaShareFileNameHandlingOptionsExternal.h"

namespace genProvider{
	
  Linux_SambaShareFileNameHandlingOptionsExternal::Linux_SambaShareFileNameHandlingOptionsExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
   
  Linux_SambaShareFileNameHandlingOptionsExternal::
   ~Linux_SambaShareFileNameHandlingOptionsExternal(){};
    
  void Linux_SambaShareFileNameHandlingOptionsExternal::enumInstanceNames(
   const char *nsp,
   Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaShareFileNameHandlingOptions");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaShareFileNameHandlingOptionsInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaShareFileNameHandlingOptionsExternal::enumInstances(
   const char *nsp,
   const char* *properties,
   Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaShareFileNameHandlingOptions");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaShareFileNameHandlingOptionsInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaShareFileNameHandlingOptionsInstance
   Linux_SambaShareFileNameHandlingOptionsExternal::getInstance(
   const char* *properties,
   const Linux_SambaShareFileNameHandlingOptionsInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaShareFileNameHandlingOptionsInstance(inst,instanceName.getNamespace());
  }
      
  void Linux_SambaShareFileNameHandlingOptionsExternal::setInstance(
   const char* *properties,
   const Linux_SambaShareFileNameHandlingOptionsInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaShareFileNameHandlingOptionsExternal::createInstance(
   const Linux_SambaShareFileNameHandlingOptionsInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaShareFileNameHandlingOptionsExternal::deleteInstance(
   const Linux_SambaShareFileNameHandlingOptionsInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    broker.deleteInstance(context,op);
  }
    
}
