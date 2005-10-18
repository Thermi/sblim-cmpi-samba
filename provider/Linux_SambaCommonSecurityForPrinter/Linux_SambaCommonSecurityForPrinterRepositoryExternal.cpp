/**
 *  Linux_SambaCommonSecurityForPrinterRepositoryExternal.cpp
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


#include "Linux_SambaCommonSecurityForPrinterRepositoryExternal.h"

namespace genProvider{
	
  Linux_SambaCommonSecurityForPrinterRepositoryExternal::Linux_SambaCommonSecurityForPrinterRepositoryExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
  
  const char * Linux_SambaCommonSecurityForPrinterRepositoryExternal::
   nsp="IBMShadow/cimv2";
   
  Linux_SambaCommonSecurityForPrinterRepositoryExternal::
   ~Linux_SambaCommonSecurityForPrinterRepositoryExternal(){};
    
  void Linux_SambaCommonSecurityForPrinterRepositoryExternal::enumInstanceNames(
   Linux_SambaCommonSecurityForPrinterInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaCommonSecurityForPrinter");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaCommonSecurityForPrinterInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaCommonSecurityForPrinterRepositoryExternal::enumInstances(
   const char* *properties,
   Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaCommonSecurityForPrinter");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaCommonSecurityForPrinterRepositoryInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaCommonSecurityForPrinterRepositoryInstance
   Linux_SambaCommonSecurityForPrinterRepositoryExternal::getInstance(
   const char* *properties,
   const Linux_SambaCommonSecurityForPrinterInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaCommonSecurityForPrinterRepositoryInstance(inst,nsp);
  }
      
  void Linux_SambaCommonSecurityForPrinterRepositoryExternal::setInstance(
   const char* *properties,
   const Linux_SambaCommonSecurityForPrinterRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaCommonSecurityForPrinterInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaCommonSecurityForPrinterRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaCommonSecurityForPrinterRepositoryExternal::createInstance(
   const Linux_SambaCommonSecurityForPrinterRepositoryInstance& instance){
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaCommonSecurityForPrinterInstanceName instanceName(instance.getInstanceName());
    instanceName.setNamespace(nsp,1);
    Linux_SambaCommonSecurityForPrinterRepositoryInstance copiedInstance(instance);
    copiedInstance.setInstanceName(instanceName);
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=copiedInstance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaCommonSecurityForPrinterRepositoryExternal::deleteInstance(
   const Linux_SambaCommonSecurityForPrinterInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    op.setNameSpace(nsp);
    broker.deleteInstance(context,op);
  }  
}
