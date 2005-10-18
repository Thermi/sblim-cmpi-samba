/**
 *  Linux_SambaServiceConfigurationForServiceExternal.cpp
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


#include "Linux_SambaServiceConfigurationForServiceExternal.h"

namespace genProvider{
	
  Linux_SambaServiceConfigurationForServiceExternal::Linux_SambaServiceConfigurationForServiceExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
   
  Linux_SambaServiceConfigurationForServiceExternal::
   ~Linux_SambaServiceConfigurationForServiceExternal(){};
    
  void Linux_SambaServiceConfigurationForServiceExternal::enumInstanceNames(
   const char *nsp,
   Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaServiceConfigurationForService");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaServiceConfigurationForServiceInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaServiceConfigurationForServiceExternal::enumInstances(
   const char *nsp,
   const char* *properties,
   Linux_SambaServiceConfigurationForServiceInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaServiceConfigurationForService");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaServiceConfigurationForServiceInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaServiceConfigurationForServiceInstance
   Linux_SambaServiceConfigurationForServiceExternal::getInstance(
   const char* *properties,
   const Linux_SambaServiceConfigurationForServiceInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaServiceConfigurationForServiceInstance(inst,instanceName.getNamespace());
  }
      
  void Linux_SambaServiceConfigurationForServiceExternal::setInstance(
   const char* *properties,
   const Linux_SambaServiceConfigurationForServiceInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaServiceConfigurationForServiceExternal::createInstance(
   const Linux_SambaServiceConfigurationForServiceInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaServiceConfigurationForServiceExternal::deleteInstance(
   const Linux_SambaServiceConfigurationForServiceInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    broker.deleteInstance(context,op);
  }
      
    //Reference calls
    
    void Linux_SambaServiceConfigurationForServiceExternal::
     referencesConfiguration( 
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaServiceConfigurationForServiceInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.references
       (context, op, "Linux_SambaService",
        "Configuration", properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaServiceConfigurationForServiceInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaServiceConfigurationForServiceExternal::
     referenceNamesConfiguration( 
     const char *nsp,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.referenceNames
       (context, op, "Linux_SambaService",
        "Configuration");
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaServiceConfigurationForServiceInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }

    void Linux_SambaServiceConfigurationForServiceExternal::
     referencesElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceConfigurationInstanceName& sourceInst,
     Linux_SambaServiceConfigurationForServiceInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.references
       (context, op, "Linux_SambaServiceConfiguration",
        "Element", properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaServiceConfigurationForServiceInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaServiceConfigurationForServiceExternal::
     referenceNamesElement( 
     const char *nsp,
     const Linux_SambaServiceConfigurationInstanceName& sourceInst,
     Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.referenceNames
       (context, op, "Linux_SambaServiceConfiguration",
        "Element");
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaServiceConfigurationForServiceInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }
     
    //Associator calls

    void Linux_SambaServiceConfigurationForServiceExternal::
     associatorsConfiguration( 
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaServiceConfigurationInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.associators
       (context,op,0,0,0,0,properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaServiceConfigurationInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaServiceConfigurationForServiceExternal::
     associatorNamesConfiguration( 
     const char *nsp,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaServiceConfigurationInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.associatorNames
       (context,op,0,0,0,0);
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaServiceConfigurationInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }

    void Linux_SambaServiceConfigurationForServiceExternal::
     associatorsElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceConfigurationInstanceName& sourceInst,
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

    void Linux_SambaServiceConfigurationForServiceExternal::
     associatorNamesElement( 
     const char *nsp,
     const Linux_SambaServiceConfigurationInstanceName& sourceInst,
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
