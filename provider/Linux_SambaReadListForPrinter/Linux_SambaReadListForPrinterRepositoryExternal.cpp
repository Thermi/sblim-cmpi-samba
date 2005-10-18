/**
 *  Linux_SambaReadListForPrinterRepositoryExternal.cpp
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


#include "Linux_SambaReadListForPrinterRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaReadListForPrinterRepositoryExternal::Linux_SambaReadListForPrinterRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaReadListForPrinterRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaReadListForPrinterRepositoryExternal::
   ~Linux_SambaReadListForPrinterRepositoryExternal(){};
    
  void Linux_SambaReadListForPrinterRepositoryExternal::enumInstanceNames(
   Linux_SambaReadListForPrinterInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaReadListForPrinter");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaReadListForPrinterInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaReadListForPrinterRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaReadListForPrinterRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaReadListForPrinter");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaReadListForPrinterRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaReadListForPrinterRepositoryInstance
   Linux_SambaReadListForPrinterRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaReadListForPrinterInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaReadListForPrinterRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaReadListForPrinterRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaReadListForPrinterRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaReadListForPrinterInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaReadListForPrinterRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaReadListForPrinterRepositoryExternal::createInstance(
   const Linux_SambaReadListForPrinterRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaReadListForPrinterInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaReadListForPrinterRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaReadListForPrinterRepositoryExternal::deleteInstance(
   const Linux_SambaReadListForPrinterInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
