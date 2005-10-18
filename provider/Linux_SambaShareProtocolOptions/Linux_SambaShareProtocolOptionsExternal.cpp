/**
 *  Linux_SambaShareProtocolOptionsExternal.cpp
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


#include "Linux_SambaShareProtocolOptionsExternal.h"

namespace genProvider{
	
  Linux_SambaShareProtocolOptionsExternal::Linux_SambaShareProtocolOptionsExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
   
  Linux_SambaShareProtocolOptionsExternal::
   ~Linux_SambaShareProtocolOptionsExternal(){};
    
  void Linux_SambaShareProtocolOptionsExternal::enumInstanceNames(
   const char *nsp,
   Linux_SambaShareProtocolOptionsInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaShareProtocolOptions");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaShareProtocolOptionsInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaShareProtocolOptionsExternal::enumInstances(
   const char *nsp,
   const char* *properties,
   Linux_SambaShareProtocolOptionsInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaShareProtocolOptions");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaShareProtocolOptionsInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaShareProtocolOptionsInstance
   Linux_SambaShareProtocolOptionsExternal::getInstance(
   const char* *properties,
   const Linux_SambaShareProtocolOptionsInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaShareProtocolOptionsInstance(inst,instanceName.getNamespace());
  }
      
  void Linux_SambaShareProtocolOptionsExternal::setInstance(
   const char* *properties,
   const Linux_SambaShareProtocolOptionsInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaShareProtocolOptionsExternal::createInstance(
   const Linux_SambaShareProtocolOptionsInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaShareProtocolOptionsExternal::deleteInstance(
   const Linux_SambaShareProtocolOptionsInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    broker.deleteInstance(context,op);
  }
    
}
