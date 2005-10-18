/**
 *  Linux_SambaServiceConfigurationExternal.cpp
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


#include "Linux_SambaServiceConfigurationExternal.h"

namespace genProvider{
	
  Linux_SambaServiceConfigurationExternal::Linux_SambaServiceConfigurationExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
   
  Linux_SambaServiceConfigurationExternal::
   ~Linux_SambaServiceConfigurationExternal(){};
    
  void Linux_SambaServiceConfigurationExternal::enumInstanceNames(
   const char *nsp,
   Linux_SambaServiceConfigurationInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaServiceConfiguration");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaServiceConfigurationInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaServiceConfigurationExternal::enumInstances(
   const char *nsp,
   const char* *properties,
   Linux_SambaServiceConfigurationInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaServiceConfiguration");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaServiceConfigurationInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaServiceConfigurationInstance
   Linux_SambaServiceConfigurationExternal::getInstance(
   const char* *properties,
   const Linux_SambaServiceConfigurationInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaServiceConfigurationInstance(inst,instanceName.getNamespace());
  }
      
  void Linux_SambaServiceConfigurationExternal::setInstance(
   const char* *properties,
   const Linux_SambaServiceConfigurationInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaServiceConfigurationExternal::createInstance(
   const Linux_SambaServiceConfigurationInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaServiceConfigurationExternal::deleteInstance(
   const Linux_SambaServiceConfigurationInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    broker.deleteInstance(context,op);
  }
    
}
