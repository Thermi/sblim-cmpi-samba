/**
 *  Linux_SambaReadListForShareExternal.cpp
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


#include "Linux_SambaReadListForShareExternal.h"

namespace genProvider{
	
  Linux_SambaReadListForShareExternal::Linux_SambaReadListForShareExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
   
  Linux_SambaReadListForShareExternal::
   ~Linux_SambaReadListForShareExternal(){};
    
  void Linux_SambaReadListForShareExternal::enumInstanceNames(
   const char *nsp,
   Linux_SambaReadListForShareInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaReadListForShare");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaReadListForShareInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaReadListForShareExternal::enumInstances(
   const char *nsp,
   const char* *properties,
   Linux_SambaReadListForShareInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaReadListForShare");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaReadListForShareInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaReadListForShareInstance
   Linux_SambaReadListForShareExternal::getInstance(
   const char* *properties,
   const Linux_SambaReadListForShareInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaReadListForShareInstance(inst,instanceName.getNamespace());
  }
      
  void Linux_SambaReadListForShareExternal::setInstance(
   const char* *properties,
   const Linux_SambaReadListForShareInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaReadListForShareExternal::createInstance(
   const Linux_SambaReadListForShareInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaReadListForShareExternal::deleteInstance(
   const Linux_SambaReadListForShareInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    broker.deleteInstance(context,op);
  }
      
    //Reference calls
    
    void Linux_SambaReadListForShareExternal::
     referencesPartComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaReadListForShareInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.references
       (context, op, "Linux_SambaShareOptions",
        "PartComponent", properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaReadListForShareInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaReadListForShareExternal::
     referenceNamesPartComponent( 
     const char *nsp,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaReadListForShareInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.referenceNames
       (context, op, "Linux_SambaShareOptions",
        "PartComponent");
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaReadListForShareInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }

    void Linux_SambaReadListForShareExternal::
     referencesGroupComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaReadListForShareInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.references
       (context, op, "Linux_SambaUser",
        "GroupComponent", properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaReadListForShareInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaReadListForShareExternal::
     referenceNamesGroupComponent( 
     const char *nsp,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaReadListForShareInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.referenceNames
       (context, op, "Linux_SambaUser",
        "GroupComponent");
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaReadListForShareInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }
     
    //Associator calls

    void Linux_SambaReadListForShareExternal::
     associatorsPartComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
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

    void Linux_SambaReadListForShareExternal::
     associatorNamesPartComponent( 
     const char *nsp,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
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

    void Linux_SambaReadListForShareExternal::
     associatorsGroupComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaShareOptionsInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.associators
       (context,op,0,0,0,0,properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaShareOptionsInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaReadListForShareExternal::
     associatorNamesGroupComponent( 
     const char *nsp,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaShareOptionsInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.associatorNames
       (context,op,0,0,0,0);
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaShareOptionsInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }

      
}
