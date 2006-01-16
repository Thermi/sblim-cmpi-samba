/**
 *  Linux_SambaValidUsersForGlobalExternal.cpp
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


#include "Linux_SambaValidUsersForGlobalExternal.h"

namespace genProvider{
	
  Linux_SambaValidUsersForGlobalExternal::Linux_SambaValidUsersForGlobalExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
   
  Linux_SambaValidUsersForGlobalExternal::
   ~Linux_SambaValidUsersForGlobalExternal(){};
    
  void Linux_SambaValidUsersForGlobalExternal::enumInstanceNames(
   const char *nsp,
   Linux_SambaValidUsersForGlobalInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaValidUsersForGlobal");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaValidUsersForGlobalInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaValidUsersForGlobalExternal::enumInstances(
   const char *nsp,
   const char* *properties,
   Linux_SambaValidUsersForGlobalInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaValidUsersForGlobal");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaValidUsersForGlobalInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaValidUsersForGlobalInstance
   Linux_SambaValidUsersForGlobalExternal::getInstance(
   const char* *properties,
   const Linux_SambaValidUsersForGlobalInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaValidUsersForGlobalInstance(inst,instanceName.getNamespace());
  }
      
  void Linux_SambaValidUsersForGlobalExternal::setInstance(
   const char* *properties,
   const Linux_SambaValidUsersForGlobalInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaValidUsersForGlobalExternal::createInstance(
   const Linux_SambaValidUsersForGlobalInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaValidUsersForGlobalExternal::deleteInstance(
   const Linux_SambaValidUsersForGlobalInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    broker.deleteInstance(context,op);
  }
      
    //Reference calls
    
    void Linux_SambaValidUsersForGlobalExternal::
     referencesPartComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaValidUsersForGlobalInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.references
       (context, op, "Linux_SambaGlobalOptions",
        "PartComponent", properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaValidUsersForGlobalInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaValidUsersForGlobalExternal::
     referenceNamesPartComponent( 
     const char *nsp,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaValidUsersForGlobalInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.referenceNames
       (context, op, "Linux_SambaGlobalOptions",
        "PartComponent");
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaValidUsersForGlobalInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }

    void Linux_SambaValidUsersForGlobalExternal::
     referencesGroupComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaValidUsersForGlobalInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.references
       (context, op, "Linux_SambaUser",
        "GroupComponent", properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaValidUsersForGlobalInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaValidUsersForGlobalExternal::
     referenceNamesGroupComponent( 
     const char *nsp,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaValidUsersForGlobalInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.referenceNames
       (context, op, "Linux_SambaUser",
        "GroupComponent");
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaValidUsersForGlobalInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }
     
    //Associator calls

    void Linux_SambaValidUsersForGlobalExternal::
     associatorsPartComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
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

    void Linux_SambaValidUsersForGlobalExternal::
     associatorNamesPartComponent( 
     const char *nsp,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
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

    void Linux_SambaValidUsersForGlobalExternal::
     associatorsGroupComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
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

    void Linux_SambaValidUsersForGlobalExternal::
     associatorNamesGroupComponent( 
     const char *nsp,
     const Linux_SambaUserInstanceName& sourceInst,
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

      
}