/**
 *  Linux_SambaSharePrinterBrowseForPrinterRepositoryExternal.cpp
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


#include "Linux_SambaSharePrinterBrowseForPrinterRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaSharePrinterBrowseForPrinterRepositoryExternal::Linux_SambaSharePrinterBrowseForPrinterRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaSharePrinterBrowseForPrinterRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaSharePrinterBrowseForPrinterRepositoryExternal::
   ~Linux_SambaSharePrinterBrowseForPrinterRepositoryExternal(){};
    
  void Linux_SambaSharePrinterBrowseForPrinterRepositoryExternal::enumInstanceNames(
   Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaSharePrinterBrowseForPrinter");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaSharePrinterBrowseForPrinterInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaSharePrinterBrowseForPrinterRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaSharePrinterBrowseForPrinter");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance
   Linux_SambaSharePrinterBrowseForPrinterRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaSharePrinterBrowseForPrinterInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaSharePrinterBrowseForPrinterRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaSharePrinterBrowseForPrinterInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaSharePrinterBrowseForPrinterRepositoryExternal::createInstance(
   const Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaSharePrinterBrowseForPrinterInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaSharePrinterBrowseForPrinterRepositoryExternal::deleteInstance(
   const Linux_SambaSharePrinterBrowseForPrinterInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
