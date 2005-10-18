/**
 *  Linux_SambaGlobalFileNameHandlingOptionsExternal.cpp
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


#include "Linux_SambaGlobalFileNameHandlingOptionsExternal.h"

namespace genProvider{
	
  Linux_SambaGlobalFileNameHandlingOptionsExternal::Linux_SambaGlobalFileNameHandlingOptionsExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
   
  Linux_SambaGlobalFileNameHandlingOptionsExternal::
   ~Linux_SambaGlobalFileNameHandlingOptionsExternal(){};
    
  void Linux_SambaGlobalFileNameHandlingOptionsExternal::enumInstanceNames(
   const char *nsp,
   Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaGlobalFileNameHandlingOptions");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaGlobalFileNameHandlingOptionsInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaGlobalFileNameHandlingOptionsExternal::enumInstances(
   const char *nsp,
   const char* *properties,
   Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaGlobalFileNameHandlingOptions");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaGlobalFileNameHandlingOptionsInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaGlobalFileNameHandlingOptionsInstance
   Linux_SambaGlobalFileNameHandlingOptionsExternal::getInstance(
   const char* *properties,
   const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaGlobalFileNameHandlingOptionsInstance(inst,instanceName.getNamespace());
  }
      
  void Linux_SambaGlobalFileNameHandlingOptionsExternal::setInstance(
   const char* *properties,
   const Linux_SambaGlobalFileNameHandlingOptionsInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaGlobalFileNameHandlingOptionsExternal::createInstance(
   const Linux_SambaGlobalFileNameHandlingOptionsInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaGlobalFileNameHandlingOptionsExternal::deleteInstance(
   const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    broker.deleteInstance(context,op);
  }
    
}
