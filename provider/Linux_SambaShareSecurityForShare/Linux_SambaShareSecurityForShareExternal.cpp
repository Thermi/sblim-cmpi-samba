/**
 *  Linux_SambaShareSecurityForShareExternal.cpp
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


#include "Linux_SambaShareSecurityForShareExternal.h"

namespace genProvider{
	
  Linux_SambaShareSecurityForShareExternal::Linux_SambaShareSecurityForShareExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
   
  Linux_SambaShareSecurityForShareExternal::
   ~Linux_SambaShareSecurityForShareExternal(){};
    
  void Linux_SambaShareSecurityForShareExternal::enumInstanceNames(
   const char *nsp,
   Linux_SambaShareSecurityForShareInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaShareSecurityForShare");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaShareSecurityForShareInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaShareSecurityForShareExternal::enumInstances(
   const char *nsp,
   const char* *properties,
   Linux_SambaShareSecurityForShareInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaShareSecurityForShare");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaShareSecurityForShareInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaShareSecurityForShareInstance
   Linux_SambaShareSecurityForShareExternal::getInstance(
   const char* *properties,
   const Linux_SambaShareSecurityForShareInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaShareSecurityForShareInstance(inst,instanceName.getNamespace());
  }
      
  void Linux_SambaShareSecurityForShareExternal::setInstance(
   const char* *properties,
   const Linux_SambaShareSecurityForShareInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaShareSecurityForShareExternal::createInstance(
   const Linux_SambaShareSecurityForShareInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaShareSecurityForShareExternal::deleteInstance(
   const Linux_SambaShareSecurityForShareInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    broker.deleteInstance(context,op);
  }
      
    //Reference calls
    
    void Linux_SambaShareSecurityForShareExternal::
     referencesSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareSecurityForShareInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.references
       (context, op, "Linux_SambaShareOptions",
        "SettingData", properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaShareSecurityForShareInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaShareSecurityForShareExternal::
     referenceNamesSettingData( 
     const char *nsp,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareSecurityForShareInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.referenceNames
       (context, op, "Linux_SambaShareOptions",
        "SettingData");
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaShareSecurityForShareInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }

    void Linux_SambaShareSecurityForShareExternal::
     referencesManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaShareSecurityOptionsInstanceName& sourceInst,
     Linux_SambaShareSecurityForShareInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.references
       (context, op, "Linux_SambaShareSecurityOptions",
        "ManagedElement", properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaShareSecurityForShareInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaShareSecurityForShareExternal::
     referenceNamesManagedElement( 
     const char *nsp,
     const Linux_SambaShareSecurityOptionsInstanceName& sourceInst,
     Linux_SambaShareSecurityForShareInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.referenceNames
       (context, op, "Linux_SambaShareSecurityOptions",
        "ManagedElement");
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaShareSecurityForShareInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }
     
    //Associator calls

    void Linux_SambaShareSecurityForShareExternal::
     associatorsSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareSecurityOptionsInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.associators
       (context,op,0,0,0,0,properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaShareSecurityOptionsInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaShareSecurityForShareExternal::
     associatorNamesSettingData( 
     const char *nsp,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareSecurityOptionsInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.associatorNames
       (context,op,0,0,0,0);
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaShareSecurityOptionsInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }

    void Linux_SambaShareSecurityForShareExternal::
     associatorsManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaShareSecurityOptionsInstanceName& sourceInst,
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

    void Linux_SambaShareSecurityForShareExternal::
     associatorNamesManagedElement( 
     const char *nsp,
     const Linux_SambaShareSecurityOptionsInstanceName& sourceInst,
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
