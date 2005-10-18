/**
 *  Linux_SambaCommonSecurityForGlobalExternal.cpp
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


#include "Linux_SambaCommonSecurityForGlobalExternal.h"

namespace genProvider{
	
  Linux_SambaCommonSecurityForGlobalExternal::Linux_SambaCommonSecurityForGlobalExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
   
  Linux_SambaCommonSecurityForGlobalExternal::
   ~Linux_SambaCommonSecurityForGlobalExternal(){};
    
  void Linux_SambaCommonSecurityForGlobalExternal::enumInstanceNames(
   const char *nsp,
   Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaCommonSecurityForGlobal");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaCommonSecurityForGlobalInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaCommonSecurityForGlobalExternal::enumInstances(
   const char *nsp,
   const char* *properties,
   Linux_SambaCommonSecurityForGlobalInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaCommonSecurityForGlobal");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaCommonSecurityForGlobalInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaCommonSecurityForGlobalInstance
   Linux_SambaCommonSecurityForGlobalExternal::getInstance(
   const char* *properties,
   const Linux_SambaCommonSecurityForGlobalInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaCommonSecurityForGlobalInstance(inst,instanceName.getNamespace());
  }
      
  void Linux_SambaCommonSecurityForGlobalExternal::setInstance(
   const char* *properties,
   const Linux_SambaCommonSecurityForGlobalInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaCommonSecurityForGlobalExternal::createInstance(
   const Linux_SambaCommonSecurityForGlobalInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaCommonSecurityForGlobalExternal::deleteInstance(
   const Linux_SambaCommonSecurityForGlobalInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    broker.deleteInstance(context,op);
  }
      
    //Reference calls
    
    void Linux_SambaCommonSecurityForGlobalExternal::
     referencesSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaCommonSecurityForGlobalInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.references
       (context, op, "Linux_SambaGlobalOptions",
        "SettingData", properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaCommonSecurityForGlobalInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaCommonSecurityForGlobalExternal::
     referenceNamesSettingData( 
     const char *nsp,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.referenceNames
       (context, op, "Linux_SambaGlobalOptions",
        "SettingData");
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaCommonSecurityForGlobalInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }

    void Linux_SambaCommonSecurityForGlobalExternal::
     referencesManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaCommonSecurityOptionsInstanceName& sourceInst,
     Linux_SambaCommonSecurityForGlobalInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.references
       (context, op, "Linux_SambaCommonSecurityOptions",
        "ManagedElement", properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaCommonSecurityForGlobalInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaCommonSecurityForGlobalExternal::
     referenceNamesManagedElement( 
     const char *nsp,
     const Linux_SambaCommonSecurityOptionsInstanceName& sourceInst,
     Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.referenceNames
       (context, op, "Linux_SambaCommonSecurityOptions",
        "ManagedElement");
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaCommonSecurityForGlobalInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }
     
    //Associator calls

    void Linux_SambaCommonSecurityForGlobalExternal::
     associatorsSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaCommonSecurityOptionsInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.associators
       (context,op,0,0,0,0,properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaCommonSecurityOptionsInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaCommonSecurityForGlobalExternal::
     associatorNamesSettingData( 
     const char *nsp,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaCommonSecurityOptionsInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.associatorNames
       (context,op,0,0,0,0);
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaCommonSecurityOptionsInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }

    void Linux_SambaCommonSecurityForGlobalExternal::
     associatorsManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaCommonSecurityOptionsInstanceName& sourceInst,
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

    void Linux_SambaCommonSecurityForGlobalExternal::
     associatorNamesManagedElement( 
     const char *nsp,
     const Linux_SambaCommonSecurityOptionsInstanceName& sourceInst,
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
