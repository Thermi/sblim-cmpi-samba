/**
 *  Linux_SambaGlobalForServiceExternal.cpp
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


#include "Linux_SambaGlobalForServiceExternal.h"

namespace genProvider{
	
  Linux_SambaGlobalForServiceExternal::Linux_SambaGlobalForServiceExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
   
  Linux_SambaGlobalForServiceExternal::
   ~Linux_SambaGlobalForServiceExternal(){};
    
  void Linux_SambaGlobalForServiceExternal::enumInstanceNames(
   const char *nsp,
   Linux_SambaGlobalForServiceInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaGlobalForService");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaGlobalForServiceInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaGlobalForServiceExternal::enumInstances(
   const char *nsp,
   const char* *properties,
   Linux_SambaGlobalForServiceInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaGlobalForService");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaGlobalForServiceInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaGlobalForServiceInstance
   Linux_SambaGlobalForServiceExternal::getInstance(
   const char* *properties,
   const Linux_SambaGlobalForServiceInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaGlobalForServiceInstance(inst,instanceName.getNamespace());
  }
      
  void Linux_SambaGlobalForServiceExternal::setInstance(
   const char* *properties,
   const Linux_SambaGlobalForServiceInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaGlobalForServiceExternal::createInstance(
   const Linux_SambaGlobalForServiceInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaGlobalForServiceExternal::deleteInstance(
   const Linux_SambaGlobalForServiceInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    broker.deleteInstance(context,op);
  }
      
    //Reference calls
    
    void Linux_SambaGlobalForServiceExternal::
     referencesSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaGlobalForServiceInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.references
       (context, op, "Linux_SambaService",
        "SettingData", properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaGlobalForServiceInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaGlobalForServiceExternal::
     referenceNamesSettingData( 
     const char *nsp,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaGlobalForServiceInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.referenceNames
       (context, op, "Linux_SambaService",
        "SettingData");
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaGlobalForServiceInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }

    void Linux_SambaGlobalForServiceExternal::
     referencesManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalForServiceInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.references
       (context, op, "Linux_SambaGlobalOptions",
        "ManagedElement", properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaGlobalForServiceInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaGlobalForServiceExternal::
     referenceNamesManagedElement( 
     const char *nsp,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaGlobalForServiceInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.referenceNames
       (context, op, "Linux_SambaGlobalOptions",
        "ManagedElement");
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaGlobalForServiceInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }
     
    //Associator calls

    void Linux_SambaGlobalForServiceExternal::
     associatorsSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.associators
       (context,op,0,0,0,0,properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaGlobalOptionsInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaGlobalForServiceExternal::
     associatorNamesSettingData( 
     const char *nsp,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaGlobalOptionsInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.associatorNames
       (context,op,0,0,0,0);
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaGlobalOptionsInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }

    void Linux_SambaGlobalForServiceExternal::
     associatorsManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaServiceInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.associators
       (context,op,0,0,0,0,properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaServiceInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaGlobalForServiceExternal::
     associatorNamesManagedElement( 
     const char *nsp,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaServiceInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.associatorNames
       (context,op,0,0,0,0);
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaServiceInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }

      
}
