/**
 *  Linux_SambaInvalidUsersForPrinterExternal.cpp
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


#include "Linux_SambaInvalidUsersForPrinterExternal.h"

namespace genProvider{
	
  Linux_SambaInvalidUsersForPrinterExternal::Linux_SambaInvalidUsersForPrinterExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
   
  Linux_SambaInvalidUsersForPrinterExternal::
   ~Linux_SambaInvalidUsersForPrinterExternal(){};
    
  void Linux_SambaInvalidUsersForPrinterExternal::enumInstanceNames(
   const char *nsp,
   Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaInvalidUsersForPrinter");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaInvalidUsersForPrinterInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaInvalidUsersForPrinterExternal::enumInstances(
   const char *nsp,
   const char* *properties,
   Linux_SambaInvalidUsersForPrinterInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaInvalidUsersForPrinter");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaInvalidUsersForPrinterInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaInvalidUsersForPrinterInstance
   Linux_SambaInvalidUsersForPrinterExternal::getInstance(
   const char* *properties,
   const Linux_SambaInvalidUsersForPrinterInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaInvalidUsersForPrinterInstance(inst,instanceName.getNamespace());
  }
      
  void Linux_SambaInvalidUsersForPrinterExternal::setInstance(
   const char* *properties,
   const Linux_SambaInvalidUsersForPrinterInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaInvalidUsersForPrinterExternal::createInstance(
   const Linux_SambaInvalidUsersForPrinterInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaInvalidUsersForPrinterExternal::deleteInstance(
   const Linux_SambaInvalidUsersForPrinterInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    broker.deleteInstance(context,op);
  }
      
    //Reference calls
    
    void Linux_SambaInvalidUsersForPrinterExternal::
     referencesPartComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaInvalidUsersForPrinterInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.references
       (context, op, "Linux_SambaPrinterOptions",
        "PartComponent", properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaInvalidUsersForPrinterInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaInvalidUsersForPrinterExternal::
     referenceNamesPartComponent( 
     const char *nsp,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.referenceNames
       (context, op, "Linux_SambaPrinterOptions",
        "PartComponent");
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaInvalidUsersForPrinterInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }

    void Linux_SambaInvalidUsersForPrinterExternal::
     referencesGroupComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaInvalidUsersForPrinterInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.references
       (context, op, "Linux_SambaUser",
        "GroupComponent", properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaInvalidUsersForPrinterInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaInvalidUsersForPrinterExternal::
     referenceNamesGroupComponent( 
     const char *nsp,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.referenceNames
       (context, op, "Linux_SambaUser",
        "GroupComponent");
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaInvalidUsersForPrinterInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }
     
    //Associator calls

    void Linux_SambaInvalidUsersForPrinterExternal::
     associatorsPartComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
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

    void Linux_SambaInvalidUsersForPrinterExternal::
     associatorNamesPartComponent( 
     const char *nsp,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
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

    void Linux_SambaInvalidUsersForPrinterExternal::
     associatorsGroupComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
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

    void Linux_SambaInvalidUsersForPrinterExternal::
     associatorNamesGroupComponent( 
     const char *nsp,
     const Linux_SambaUserInstanceName& sourceInst,
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

      
}
