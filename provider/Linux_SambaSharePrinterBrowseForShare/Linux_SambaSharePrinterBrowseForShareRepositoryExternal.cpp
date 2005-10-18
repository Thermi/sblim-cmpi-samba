/**
 *  Linux_SambaSharePrinterBrowseForShareRepositoryExternal.cpp
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


#include "Linux_SambaSharePrinterBrowseForShareRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaSharePrinterBrowseForShareRepositoryExternal::Linux_SambaSharePrinterBrowseForShareRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaSharePrinterBrowseForShareRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaSharePrinterBrowseForShareRepositoryExternal::
   ~Linux_SambaSharePrinterBrowseForShareRepositoryExternal(){};
    
  void Linux_SambaSharePrinterBrowseForShareRepositoryExternal::enumInstanceNames(
   Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaSharePrinterBrowseForShare");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaSharePrinterBrowseForShareInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaSharePrinterBrowseForShareRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaSharePrinterBrowseForShare");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaSharePrinterBrowseForShareRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaSharePrinterBrowseForShareRepositoryInstance
   Linux_SambaSharePrinterBrowseForShareRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaSharePrinterBrowseForShareInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaSharePrinterBrowseForShareRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaSharePrinterBrowseForShareRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaSharePrinterBrowseForShareRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaSharePrinterBrowseForShareInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaSharePrinterBrowseForShareRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaSharePrinterBrowseForShareRepositoryExternal::createInstance(
   const Linux_SambaSharePrinterBrowseForShareRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaSharePrinterBrowseForShareInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaSharePrinterBrowseForShareRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaSharePrinterBrowseForShareRepositoryExternal::deleteInstance(
   const Linux_SambaSharePrinterBrowseForShareInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
