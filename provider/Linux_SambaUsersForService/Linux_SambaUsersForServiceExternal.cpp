/**
 *  Linux_SambaUsersForServiceExternal.cpp
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


#include "Linux_SambaUsersForServiceExternal.h"

namespace genProvider{
	
  Linux_SambaUsersForServiceExternal::Linux_SambaUsersForServiceExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
   
  Linux_SambaUsersForServiceExternal::
   ~Linux_SambaUsersForServiceExternal(){};
    
  void Linux_SambaUsersForServiceExternal::enumInstanceNames(
   const char *nsp,
   Linux_SambaUsersForServiceInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaUsersForService");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaUsersForServiceInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaUsersForServiceExternal::enumInstances(
   const char *nsp,
   const char* *properties,
   Linux_SambaUsersForServiceInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaUsersForService");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaUsersForServiceInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaUsersForServiceInstance
   Linux_SambaUsersForServiceExternal::getInstance(
   const char* *properties,
   const Linux_SambaUsersForServiceInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaUsersForServiceInstance(inst,instanceName.getNamespace());
  }
      
  void Linux_SambaUsersForServiceExternal::setInstance(
   const char* *properties,
   const Linux_SambaUsersForServiceInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaUsersForServiceExternal::createInstance(
   const Linux_SambaUsersForServiceInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaUsersForServiceExternal::deleteInstance(
   const Linux_SambaUsersForServiceInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    broker.deleteInstance(context,op);
  }
      
    //Reference calls
    
    void Linux_SambaUsersForServiceExternal::
     referencesPartComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaUsersForServiceInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.references
       (context, op, "Linux_SambaService",
        "PartComponent", properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaUsersForServiceInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaUsersForServiceExternal::
     referenceNamesPartComponent( 
     const char *nsp,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaUsersForServiceInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.referenceNames
       (context, op, "Linux_SambaService",
        "PartComponent");
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaUsersForServiceInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }

    void Linux_SambaUsersForServiceExternal::
     referencesGroupComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaUsersForServiceInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.references
       (context, op, "Linux_SambaUser",
        "GroupComponent", properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaUsersForServiceInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaUsersForServiceExternal::
     referenceNamesGroupComponent( 
     const char *nsp,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaUsersForServiceInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.referenceNames
       (context, op, "Linux_SambaUser",
        "GroupComponent");
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaUsersForServiceInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }
     
    //Associator calls

    void Linux_SambaUsersForServiceExternal::
     associatorsPartComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaUserInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.associators
       (context,op,0,0,0,0,properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaUserInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaUsersForServiceExternal::
     associatorNamesPartComponent( 
     const char *nsp,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaUserInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.associatorNames
       (context,op,0,0,0,0);
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaUserInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }

    void Linux_SambaUsersForServiceExternal::
     associatorsGroupComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
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

    void Linux_SambaUsersForServiceExternal::
     associatorNamesGroupComponent( 
     const char *nsp,
     const Linux_SambaUserInstanceName& sourceInst,
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
