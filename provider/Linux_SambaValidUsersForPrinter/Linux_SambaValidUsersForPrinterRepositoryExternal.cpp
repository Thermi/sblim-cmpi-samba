/**
 *  Linux_SambaValidUsersForPrinterRepositoryExternal.cpp
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


#include "Linux_SambaValidUsersForPrinterRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaValidUsersForPrinterRepositoryExternal::Linux_SambaValidUsersForPrinterRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaValidUsersForPrinterRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaValidUsersForPrinterRepositoryExternal::
   ~Linux_SambaValidUsersForPrinterRepositoryExternal(){};
    
  void Linux_SambaValidUsersForPrinterRepositoryExternal::enumInstanceNames(
   Linux_SambaValidUsersForPrinterInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaValidUsersForPrinter");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaValidUsersForPrinterInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaValidUsersForPrinterRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaValidUsersForPrinterRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaValidUsersForPrinter");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaValidUsersForPrinterRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaValidUsersForPrinterRepositoryInstance
   Linux_SambaValidUsersForPrinterRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaValidUsersForPrinterInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaValidUsersForPrinterRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaValidUsersForPrinterRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaValidUsersForPrinterRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaValidUsersForPrinterInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaValidUsersForPrinterRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaValidUsersForPrinterRepositoryExternal::createInstance(
   const Linux_SambaValidUsersForPrinterRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaValidUsersForPrinterInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaValidUsersForPrinterRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaValidUsersForPrinterRepositoryExternal::deleteInstance(
   const Linux_SambaValidUsersForPrinterInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
