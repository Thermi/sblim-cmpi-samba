/**
 *  Linux_SambaScriptingForGlobalExternal.cpp
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


#include "Linux_SambaScriptingForGlobalExternal.h"

namespace genProvider{
	
  Linux_SambaScriptingForGlobalExternal::Linux_SambaScriptingForGlobalExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
   
  Linux_SambaScriptingForGlobalExternal::
   ~Linux_SambaScriptingForGlobalExternal(){};
    
  void Linux_SambaScriptingForGlobalExternal::enumInstanceNames(
   const char *nsp,
   Linux_SambaScriptingForGlobalInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaScriptingForGlobal");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaScriptingForGlobalInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaScriptingForGlobalExternal::enumInstances(
   const char *nsp,
   const char* *properties,
   Linux_SambaScriptingForGlobalInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaScriptingForGlobal");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaScriptingForGlobalInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaScriptingForGlobalInstance
   Linux_SambaScriptingForGlobalExternal::getInstance(
   const char* *properties,
   const Linux_SambaScriptingForGlobalInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaScriptingForGlobalInstance(inst,instanceName.getNamespace());
  }
      
  void Linux_SambaScriptingForGlobalExternal::setInstance(
   const char* *properties,
   const Linux_SambaScriptingForGlobalInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaScriptingForGlobalExternal::createInstance(
   const Linux_SambaScriptingForGlobalInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaScriptingForGlobalExternal::deleteInstance(
   const Linux_SambaScriptingForGlobalInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    broker.deleteInstance(context,op);
  }
      
    //Reference calls
    
    void Linux_SambaScriptingForGlobalExternal::
     referencesManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaScriptingOptionsInstanceName& sourceInst,
     Linux_SambaScriptingForGlobalInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.references
       (context, op, "Linux_SambaScriptingOptions",
        "ManagedElement", properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaScriptingForGlobalInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaScriptingForGlobalExternal::
     referenceNamesManagedElement( 
     const char *nsp,
     const Linux_SambaScriptingOptionsInstanceName& sourceInst,
     Linux_SambaScriptingForGlobalInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.referenceNames
       (context, op, "Linux_SambaScriptingOptions",
        "ManagedElement");
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaScriptingForGlobalInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }

    void Linux_SambaScriptingForGlobalExternal::
     referencesSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaScriptingForGlobalInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.references
       (context, op, "Linux_SambaGlobalOptions",
        "SettingData", properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaScriptingForGlobalInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaScriptingForGlobalExternal::
     referenceNamesSettingData( 
     const char *nsp,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaScriptingForGlobalInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.referenceNames
       (context, op, "Linux_SambaGlobalOptions",
        "SettingData");
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaScriptingForGlobalInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }
     
    //Associator calls

    void Linux_SambaScriptingForGlobalExternal::
     associatorsManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaScriptingOptionsInstanceName& sourceInst,
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

    void Linux_SambaScriptingForGlobalExternal::
     associatorNamesManagedElement( 
     const char *nsp,
     const Linux_SambaScriptingOptionsInstanceName& sourceInst,
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

    void Linux_SambaScriptingForGlobalExternal::
     associatorsSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaScriptingOptionsInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.associators
       (context,op,0,0,0,0,properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaScriptingOptionsInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaScriptingForGlobalExternal::
     associatorNamesSettingData( 
     const char *nsp,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaScriptingOptionsInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.associatorNames
       (context,op,0,0,0,0);
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaScriptingOptionsInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }

      
}
