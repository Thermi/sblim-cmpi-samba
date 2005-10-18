/**
 *  Linux_SambaGlobalPrintingOptionsRepositoryExternal.cpp
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


#include "Linux_SambaGlobalPrintingOptionsRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaGlobalPrintingOptionsRepositoryExternal::Linux_SambaGlobalPrintingOptionsRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaGlobalPrintingOptionsRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaGlobalPrintingOptionsRepositoryExternal::
   ~Linux_SambaGlobalPrintingOptionsRepositoryExternal(){};
    
  void Linux_SambaGlobalPrintingOptionsRepositoryExternal::enumInstanceNames(
   Linux_SambaGlobalPrintingOptionsInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaGlobalPrintingOptions");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaGlobalPrintingOptionsInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaGlobalPrintingOptionsRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaGlobalPrintingOptions");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaGlobalPrintingOptionsRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaGlobalPrintingOptionsRepositoryInstance
   Linux_SambaGlobalPrintingOptionsRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaGlobalPrintingOptionsInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaGlobalPrintingOptionsRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaGlobalPrintingOptionsRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaGlobalPrintingOptionsRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaGlobalPrintingOptionsInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaGlobalPrintingOptionsRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaGlobalPrintingOptionsRepositoryExternal::createInstance(
   const Linux_SambaGlobalPrintingOptionsRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaGlobalPrintingOptionsInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaGlobalPrintingOptionsRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaGlobalPrintingOptionsRepositoryExternal::deleteInstance(
   const Linux_SambaGlobalPrintingOptionsInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
