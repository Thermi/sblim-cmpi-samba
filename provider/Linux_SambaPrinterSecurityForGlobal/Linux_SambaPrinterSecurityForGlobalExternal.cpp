/**
 *  Linux_SambaPrinterSecurityForGlobalExternal.cpp
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


#include "Linux_SambaPrinterSecurityForGlobalExternal.h"

namespace genProvider{
	
  Linux_SambaPrinterSecurityForGlobalExternal::Linux_SambaPrinterSecurityForGlobalExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
   
  Linux_SambaPrinterSecurityForGlobalExternal::
   ~Linux_SambaPrinterSecurityForGlobalExternal(){};
    
  void Linux_SambaPrinterSecurityForGlobalExternal::enumInstanceNames(
   const char *nsp,
   Linux_SambaPrinterSecurityForGlobalInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaPrinterSecurityForGlobal");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaPrinterSecurityForGlobalInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaPrinterSecurityForGlobalExternal::enumInstances(
   const char *nsp,
   const char* *properties,
   Linux_SambaPrinterSecurityForGlobalInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaPrinterSecurityForGlobal");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaPrinterSecurityForGlobalInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaPrinterSecurityForGlobalInstance
   Linux_SambaPrinterSecurityForGlobalExternal::getInstance(
   const char* *properties,
   const Linux_SambaPrinterSecurityForGlobalInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaPrinterSecurityForGlobalInstance(inst,instanceName.getNamespace());
  }
      
  void Linux_SambaPrinterSecurityForGlobalExternal::setInstance(
   const char* *properties,
   const Linux_SambaPrinterSecurityForGlobalInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaPrinterSecurityForGlobalExternal::createInstance(
   const Linux_SambaPrinterSecurityForGlobalInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaPrinterSecurityForGlobalExternal::deleteInstance(
   const Linux_SambaPrinterSecurityForGlobalInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    broker.deleteInstance(context,op);
  }
      
    //Reference calls
    
    void Linux_SambaPrinterSecurityForGlobalExternal::
     referencesSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaPrinterSecurityForGlobalInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.references
       (context, op, "Linux_SambaGlobalOptions",
        "SettingData", properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaPrinterSecurityForGlobalInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaPrinterSecurityForGlobalExternal::
     referenceNamesSettingData( 
     const char *nsp,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaPrinterSecurityForGlobalInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.referenceNames
       (context, op, "Linux_SambaGlobalOptions",
        "SettingData");
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaPrinterSecurityForGlobalInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }

    void Linux_SambaPrinterSecurityForGlobalExternal::
     referencesManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterSecurityOptionsInstanceName& sourceInst,
     Linux_SambaPrinterSecurityForGlobalInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.references
       (context, op, "Linux_SambaPrinterSecurityOptions",
        "ManagedElement", properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaPrinterSecurityForGlobalInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaPrinterSecurityForGlobalExternal::
     referenceNamesManagedElement( 
     const char *nsp,
     const Linux_SambaPrinterSecurityOptionsInstanceName& sourceInst,
     Linux_SambaPrinterSecurityForGlobalInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.referenceNames
       (context, op, "Linux_SambaPrinterSecurityOptions",
        "ManagedElement");
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaPrinterSecurityForGlobalInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }
     
    //Associator calls

    void Linux_SambaPrinterSecurityForGlobalExternal::
     associatorsSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaPrinterSecurityOptionsInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.associators
       (context,op,0,0,0,0,properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaPrinterSecurityOptionsInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaPrinterSecurityForGlobalExternal::
     associatorNamesSettingData( 
     const char *nsp,
     const Linux_SambaGlobalOptionsInstanceName& sourceInst,
     Linux_SambaPrinterSecurityOptionsInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.associatorNames
       (context,op,0,0,0,0);
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaPrinterSecurityOptionsInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }

    void Linux_SambaPrinterSecurityForGlobalExternal::
     associatorsManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterSecurityOptionsInstanceName& sourceInst,
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

    void Linux_SambaPrinterSecurityForGlobalExternal::
     associatorNamesManagedElement( 
     const char *nsp,
     const Linux_SambaPrinterSecurityOptionsInstanceName& sourceInst,
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
