/**
 *  Linux_SambaForceGroupForPrinterExternal.cpp
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


#include "Linux_SambaForceGroupForPrinterExternal.h"

namespace genProvider{
	
  Linux_SambaForceGroupForPrinterExternal::Linux_SambaForceGroupForPrinterExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
   
  Linux_SambaForceGroupForPrinterExternal::
   ~Linux_SambaForceGroupForPrinterExternal(){};
    
  void Linux_SambaForceGroupForPrinterExternal::enumInstanceNames(
   const char *nsp,
   Linux_SambaForceGroupForPrinterInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaForceGroupForPrinter");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaForceGroupForPrinterInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaForceGroupForPrinterExternal::enumInstances(
   const char *nsp,
   const char* *properties,
   Linux_SambaForceGroupForPrinterInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaForceGroupForPrinter");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaForceGroupForPrinterInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaForceGroupForPrinterInstance
   Linux_SambaForceGroupForPrinterExternal::getInstance(
   const char* *properties,
   const Linux_SambaForceGroupForPrinterInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaForceGroupForPrinterInstance(inst,instanceName.getNamespace());
  }
      
  void Linux_SambaForceGroupForPrinterExternal::setInstance(
   const char* *properties,
   const Linux_SambaForceGroupForPrinterInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaForceGroupForPrinterExternal::createInstance(
   const Linux_SambaForceGroupForPrinterInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaForceGroupForPrinterExternal::deleteInstance(
   const Linux_SambaForceGroupForPrinterInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    broker.deleteInstance(context,op);
  }
      
    //Reference calls
    
    void Linux_SambaForceGroupForPrinterExternal::
     referencesGroupComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGroupInstanceName& sourceInst,
     Linux_SambaForceGroupForPrinterInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.references
       (context, op, "Linux_SambaGroup",
        "GroupComponent", properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaForceGroupForPrinterInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaForceGroupForPrinterExternal::
     referenceNamesGroupComponent( 
     const char *nsp,
     const Linux_SambaGroupInstanceName& sourceInst,
     Linux_SambaForceGroupForPrinterInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.referenceNames
       (context, op, "Linux_SambaGroup",
        "GroupComponent");
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaForceGroupForPrinterInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }

    void Linux_SambaForceGroupForPrinterExternal::
     referencesPartComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaForceGroupForPrinterInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.references
       (context, op, "Linux_SambaPrinterOptions",
        "PartComponent", properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaForceGroupForPrinterInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaForceGroupForPrinterExternal::
     referenceNamesPartComponent( 
     const char *nsp,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaForceGroupForPrinterInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.referenceNames
       (context, op, "Linux_SambaPrinterOptions",
        "PartComponent");
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaForceGroupForPrinterInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }
     
    //Associator calls

    void Linux_SambaForceGroupForPrinterExternal::
     associatorsGroupComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGroupInstanceName& sourceInst,
     Linux_SambaPrinterOptionsInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.associators
       (context,op,0,0,0,0,properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaPrinterOptionsInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaForceGroupForPrinterExternal::
     associatorNamesGroupComponent( 
     const char *nsp,
     const Linux_SambaGroupInstanceName& sourceInst,
     Linux_SambaPrinterOptionsInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.associatorNames
       (context,op,0,0,0,0);
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaPrinterOptionsInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }

    void Linux_SambaForceGroupForPrinterExternal::
     associatorsPartComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
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

    void Linux_SambaForceGroupForPrinterExternal::
     associatorNamesPartComponent( 
     const char *nsp,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
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

      
}
