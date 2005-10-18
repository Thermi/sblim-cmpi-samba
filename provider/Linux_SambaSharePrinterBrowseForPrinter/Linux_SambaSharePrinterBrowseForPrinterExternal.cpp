/**
 *  Linux_SambaSharePrinterBrowseForPrinterExternal.cpp
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


#include "Linux_SambaSharePrinterBrowseForPrinterExternal.h"

namespace genProvider{
	
  Linux_SambaSharePrinterBrowseForPrinterExternal::Linux_SambaSharePrinterBrowseForPrinterExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
   
  Linux_SambaSharePrinterBrowseForPrinterExternal::
   ~Linux_SambaSharePrinterBrowseForPrinterExternal(){};
    
  void Linux_SambaSharePrinterBrowseForPrinterExternal::enumInstanceNames(
   const char *nsp,
   Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaSharePrinterBrowseForPrinter");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaSharePrinterBrowseForPrinterInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaSharePrinterBrowseForPrinterExternal::enumInstances(
   const char *nsp,
   const char* *properties,
   Linux_SambaSharePrinterBrowseForPrinterInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaSharePrinterBrowseForPrinter");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaSharePrinterBrowseForPrinterInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaSharePrinterBrowseForPrinterInstance
   Linux_SambaSharePrinterBrowseForPrinterExternal::getInstance(
   const char* *properties,
   const Linux_SambaSharePrinterBrowseForPrinterInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaSharePrinterBrowseForPrinterInstance(inst,instanceName.getNamespace());
  }
      
  void Linux_SambaSharePrinterBrowseForPrinterExternal::setInstance(
   const char* *properties,
   const Linux_SambaSharePrinterBrowseForPrinterInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaSharePrinterBrowseForPrinterExternal::createInstance(
   const Linux_SambaSharePrinterBrowseForPrinterInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaSharePrinterBrowseForPrinterExternal::deleteInstance(
   const Linux_SambaSharePrinterBrowseForPrinterInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    broker.deleteInstance(context,op);
  }
      
    //Reference calls
    
    void Linux_SambaSharePrinterBrowseForPrinterExternal::
     referencesManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaSharePrinterBrowseOptionsInstanceName& sourceInst,
     Linux_SambaSharePrinterBrowseForPrinterInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.references
       (context, op, "Linux_SambaSharePrinterBrowseOptions",
        "ManagedElement", properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaSharePrinterBrowseForPrinterInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaSharePrinterBrowseForPrinterExternal::
     referenceNamesManagedElement( 
     const char *nsp,
     const Linux_SambaSharePrinterBrowseOptionsInstanceName& sourceInst,
     Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.referenceNames
       (context, op, "Linux_SambaSharePrinterBrowseOptions",
        "ManagedElement");
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaSharePrinterBrowseForPrinterInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }

    void Linux_SambaSharePrinterBrowseForPrinterExternal::
     referencesSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaSharePrinterBrowseForPrinterInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.references
       (context, op, "Linux_SambaPrinterOptions",
        "SettingData", properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaSharePrinterBrowseForPrinterInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaSharePrinterBrowseForPrinterExternal::
     referenceNamesSettingData( 
     const char *nsp,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.referenceNames
       (context, op, "Linux_SambaPrinterOptions",
        "SettingData");
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaSharePrinterBrowseForPrinterInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }
     
    //Associator calls

    void Linux_SambaSharePrinterBrowseForPrinterExternal::
     associatorsManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaSharePrinterBrowseOptionsInstanceName& sourceInst,
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

    void Linux_SambaSharePrinterBrowseForPrinterExternal::
     associatorNamesManagedElement( 
     const char *nsp,
     const Linux_SambaSharePrinterBrowseOptionsInstanceName& sourceInst,
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

    void Linux_SambaSharePrinterBrowseForPrinterExternal::
     associatorsSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.associators
       (context,op,0,0,0,0,properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaSharePrinterBrowseOptionsInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaSharePrinterBrowseForPrinterExternal::
     associatorNamesSettingData( 
     const char *nsp,
     const Linux_SambaPrinterOptionsInstanceName& sourceInst,
     Linux_SambaSharePrinterBrowseOptionsInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.associatorNames
       (context,op,0,0,0,0);
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaSharePrinterBrowseOptionsInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }

      
}
