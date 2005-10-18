/**
 *  Linux_SambaGroupForUserExternal.cpp
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


#include "Linux_SambaGroupForUserExternal.h"

namespace genProvider{
	
  Linux_SambaGroupForUserExternal::Linux_SambaGroupForUserExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
   
  Linux_SambaGroupForUserExternal::
   ~Linux_SambaGroupForUserExternal(){};
    
  void Linux_SambaGroupForUserExternal::enumInstanceNames(
   const char *nsp,
   Linux_SambaGroupForUserInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaGroupForUser");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaGroupForUserInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaGroupForUserExternal::enumInstances(
   const char *nsp,
   const char* *properties,
   Linux_SambaGroupForUserInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaGroupForUser");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaGroupForUserInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaGroupForUserInstance
   Linux_SambaGroupForUserExternal::getInstance(
   const char* *properties,
   const Linux_SambaGroupForUserInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaGroupForUserInstance(inst,instanceName.getNamespace());
  }
      
  void Linux_SambaGroupForUserExternal::setInstance(
   const char* *properties,
   const Linux_SambaGroupForUserInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaGroupForUserExternal::createInstance(
   const Linux_SambaGroupForUserInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaGroupForUserExternal::deleteInstance(
   const Linux_SambaGroupForUserInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    broker.deleteInstance(context,op);
  }
      
    //Reference calls
    
    void Linux_SambaGroupForUserExternal::
     referencesGroupComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaGroupForUserInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.references
       (context, op, "Linux_SambaUser",
        "GroupComponent", properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaGroupForUserInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaGroupForUserExternal::
     referenceNamesGroupComponent( 
     const char *nsp,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaGroupForUserInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.referenceNames
       (context, op, "Linux_SambaUser",
        "GroupComponent");
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaGroupForUserInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }

    void Linux_SambaGroupForUserExternal::
     referencesPartComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGroupInstanceName& sourceInst,
     Linux_SambaGroupForUserInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.references
       (context, op, "Linux_SambaGroup",
        "PartComponent", properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaGroupForUserInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaGroupForUserExternal::
     referenceNamesPartComponent( 
     const char *nsp,
     const Linux_SambaGroupInstanceName& sourceInst,
     Linux_SambaGroupForUserInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.referenceNames
       (context, op, "Linux_SambaGroup",
        "PartComponent");
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaGroupForUserInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }
     
    //Associator calls

    void Linux_SambaGroupForUserExternal::
     associatorsGroupComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaGroupInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.associators
       (context,op,0,0,0,0,properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaGroupInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaGroupForUserExternal::
     associatorNamesGroupComponent( 
     const char *nsp,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaGroupInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.associatorNames
       (context,op,0,0,0,0);
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaGroupInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }

    void Linux_SambaGroupForUserExternal::
     associatorsPartComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGroupInstanceName& sourceInst,
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

    void Linux_SambaGroupForUserExternal::
     associatorNamesPartComponent( 
     const char *nsp,
     const Linux_SambaGroupInstanceName& sourceInst,
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

      
}
