/**
 *  Linux_SambaShareProtocolForShareExternal.cpp
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


#include "Linux_SambaShareProtocolForShareExternal.h"

namespace genProvider{
	
  Linux_SambaShareProtocolForShareExternal::Linux_SambaShareProtocolForShareExternal(
   const CmpiBroker& brkr, const CmpiContext& ctx ) 
   : broker(brkr), context(ctx) {};
   
  Linux_SambaShareProtocolForShareExternal::
   ~Linux_SambaShareProtocolForShareExternal(){};
    
  void Linux_SambaShareProtocolForShareExternal::enumInstanceNames(
   const char *nsp,
   Linux_SambaShareProtocolForShareInstanceNameEnumeration& instnames) {

    CmpiObjectPath op(nsp,"Linux_SambaShareProtocolForShare");
    CmpiEnumeration en=broker.enumInstanceNames(context,op);
    while(en.hasNext()) {
      CmpiObjectPath opi = en.getNext();
      Linux_SambaShareProtocolForShareInstanceName iname(opi);
      instnames.addElement(iname);
    }
  };
  	  
  void Linux_SambaShareProtocolForShareExternal::enumInstances(
   const char *nsp,
   const char* *properties,
   Linux_SambaShareProtocolForShareInstanceEnumeration& instances) {
   		
    CmpiObjectPath op(nsp,"Linux_SambaShareProtocolForShare");
    CmpiEnumeration en=broker.enumInstances(context,op,properties);
    while(en.hasNext()) {
      CmpiInstance inst = en.getNext();
      Linux_SambaShareProtocolForShareInstance instance(inst,nsp);
      instances.addElement(instance);
    }
  };
  	  
  Linux_SambaShareProtocolForShareInstance
   Linux_SambaShareProtocolForShareExternal::getInstance(
   const char* *properties,
   const Linux_SambaShareProtocolForShareInstanceName& instanceName) {
    
    CmpiObjectPath op=instanceName.getObjectPath();
    CmpiInstance inst=broker.getInstance(context,op,properties);
    return Linux_SambaShareProtocolForShareInstance(inst,instanceName.getNamespace());
  }
      
  void Linux_SambaShareProtocolForShareExternal::setInstance(
   const char* *properties,
   const Linux_SambaShareProtocolForShareInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.setInstance(context,op,inst,properties);
  }
      
  void Linux_SambaShareProtocolForShareExternal::createInstance(
   const Linux_SambaShareProtocolForShareInstance& instance){
  
    CmpiObjectPath op=instance.getInstanceName().getObjectPath();
    CmpiInstance inst=instance.getCmpiInstance();
    broker.createInstance(context,op,inst);
  }
  
  void Linux_SambaShareProtocolForShareExternal::deleteInstance(
   const Linux_SambaShareProtocolForShareInstanceName& instanceName){
    
    CmpiObjectPath op=instanceName.getObjectPath();
    broker.deleteInstance(context,op);
  }
      
    //Reference calls
    
    void Linux_SambaShareProtocolForShareExternal::
     referencesManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaShareProtocolOptionsInstanceName& sourceInst,
     Linux_SambaShareProtocolForShareInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.references
       (context, op, "Linux_SambaShareProtocolOptions",
        "ManagedElement", properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaShareProtocolForShareInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaShareProtocolForShareExternal::
     referenceNamesManagedElement( 
     const char *nsp,
     const Linux_SambaShareProtocolOptionsInstanceName& sourceInst,
     Linux_SambaShareProtocolForShareInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.referenceNames
       (context, op, "Linux_SambaShareProtocolOptions",
        "ManagedElement");
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaShareProtocolForShareInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }

    void Linux_SambaShareProtocolForShareExternal::
     referencesSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareProtocolForShareInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.references
       (context, op, "Linux_SambaShareOptions",
        "SettingData", properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaShareProtocolForShareInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaShareProtocolForShareExternal::
     referenceNamesSettingData( 
     const char *nsp,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareProtocolForShareInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.referenceNames
       (context, op, "Linux_SambaShareOptions",
        "SettingData");
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaShareProtocolForShareInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }
     
    //Associator calls

    void Linux_SambaShareProtocolForShareExternal::
     associatorsManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaShareProtocolOptionsInstanceName& sourceInst,
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

    void Linux_SambaShareProtocolForShareExternal::
     associatorNamesManagedElement( 
     const char *nsp,
     const Linux_SambaShareProtocolOptionsInstanceName& sourceInst,
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

    void Linux_SambaShareProtocolForShareExternal::
     associatorsSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareProtocolOptionsInstanceEnumeration& instances){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.associators
       (context,op,0,0,0,0,properties);
      while(en.hasNext()) {
        CmpiInstance inst = en.getNext();
        Linux_SambaShareProtocolOptionsInstance instance(inst,nsp);
        instances.addElement(instance);
      }      
    }

    void Linux_SambaShareProtocolForShareExternal::
     associatorNamesSettingData( 
     const char *nsp,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareProtocolOptionsInstanceNameEnumeration& instanceNames){
      
      CmpiObjectPath op=sourceInst.getObjectPath();
      CmpiEnumeration en=broker.associatorNames
       (context,op,0,0,0,0);
      while(en.hasNext()) {
        CmpiObjectPath instName = en.getNext();
        Linux_SambaShareProtocolOptionsInstanceName instanceName(instName);
        instanceNames.addElement(instanceName);
      }      
    }

      
}
