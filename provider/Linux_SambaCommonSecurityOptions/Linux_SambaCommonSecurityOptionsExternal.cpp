/**
 *  Linux_SambaCommonSecurityOptionsExternal.cpp
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


#include "Linux_SambaCommonSecurityOptionsExternal.h"

namespace genProvider{
	
  Linux_SambaCommonSecurityOptionsExternal::Linux_SambaCommonSecurityOptionsExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
   
  Linux_SambaCommonSecurityOptionsExternal::
   ~Linux_SambaCommonSecurityOptionsExternal(){};
    
  void Linux_SambaCommonSecurityOptionsExternal::enumInstanceNames(
   const char *nsp,
   Linux_SambaCommonSecurityOptionsInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaCommonSecurityOptions");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaCommonSecurityOptionsInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaCommonSecurityOptionsExternal::enumInstances(
   const char *nsp,
   const char* *properties,
   Linux_SambaCommonSecurityOptionsInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaCommonSecurityOptions");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaCommonSecurityOptionsInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaCommonSecurityOptionsInstance
   Linux_SambaCommonSecurityOptionsExternal::getInstance(
   const char* *properties,
   const Linux_SambaCommonSecurityOptionsInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaCommonSecurityOptionsInstance(inst,instanceName.getNamespace());
  }
      
  void Linux_SambaCommonSecurityOptionsExternal::setInstance(
   const char* *properties,
   const Linux_SambaCommonSecurityOptionsInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaCommonSecurityOptionsExternal::createInstance(
   const Linux_SambaCommonSecurityOptionsInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaCommonSecurityOptionsExternal::deleteInstance(
   const Linux_SambaCommonSecurityOptionsInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    broker.deleteInstance(context,op);
  }
    
}
