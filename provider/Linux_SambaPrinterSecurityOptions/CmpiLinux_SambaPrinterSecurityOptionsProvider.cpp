/**
 *  CmpiLinux_SambaPrinterSecurityOptionsProvider.cpp
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


#include "CmpiLinux_SambaPrinterSecurityOptionsProvider.h"
#include "ArrayConverter.h"
#include "Linux_SambaPrinterSecurityOptionsManualInstance.h"
#include "Linux_SambaPrinterSecurityOptionsRepositoryInstance.h"

#include <iostream>
#include <strings.h>

using namespace std;

namespace genProvider {

  CmpiLinux_SambaPrinterSecurityOptionsProvider::
   CmpiLinux_SambaPrinterSecurityOptionsProvider (
   const CmpiBroker &mbp, const CmpiContext& ctx):
    CmpiBaseMI(mbp, ctx), CmpiInstanceMI(mbp,ctx),
    CmpiMethodMI(mbp,ctx), cppBroker(mbp) {
      
      interfaceP=Linux_SambaPrinterSecurityOptionsFactory::getImplementation();           
      cout<<"Provider was constructed"<<endl;
  };
    
        
  const char * CmpiLinux_SambaPrinterSecurityOptionsProvider::
   shadowNameSpaceP="IBMShadow/cimv2";
        
  CmpiLinux_SambaPrinterSecurityOptionsProvider::
   ~CmpiLinux_SambaPrinterSecurityOptionsProvider(){
	  delete interfaceP;
  };
  
  int CmpiLinux_SambaPrinterSecurityOptionsProvider::isUnloadable() const{
    return 0;
  }
	
  /* -----------------------------------------------------------------------*/
  /*                       Adding shadow properties                         */
  /* -----------------------------------------------------------------------*/

  void CmpiLinux_SambaPrinterSecurityOptionsProvider::completeInstance(
   const Linux_SambaPrinterSecurityOptionsInstanceName& instanceName,
   CmpiInstance& target, const CmpiContext& ctx){
	  	
    Linux_SambaPrinterSecurityOptionsInstanceName shadowInstanceName(instanceName);
    shadowInstanceName.setNamespace(shadowNameSpaceP);
    CmpiObjectPath cmpiObjectPath=shadowInstanceName.getObjectPath();
	  
    try{
      const char* propertiesP=0;
      CmpiInstance shadowInstance=cppBroker.getInstance (
       ctx, cmpiObjectPath,&propertiesP);
      copyShadowData(&shadowInstance,&target);
    }catch(const CmpiStatus& rc){};                             
  };
	
	
  void CmpiLinux_SambaPrinterSecurityOptionsProvider::copyShadowData (
   const CmpiInstance* source, CmpiInstance* target){
    
	  
  };
    
  /* -----------------------------------------------------------------------*/
  /*                       Extracting shadow instance                         */
  /* -----------------------------------------------------------------------*/

  CmpiInstance* CmpiLinux_SambaPrinterSecurityOptionsProvider::
   getShadowInstance (const CmpiInstance& original,
   const Linux_SambaPrinterSecurityOptionsInstanceName& instanceName){
     
    Linux_SambaPrinterSecurityOptionsInstanceName shadowInstanceName(instanceName);
    shadowInstanceName.setNamespace(shadowNameSpaceP);
    CmpiObjectPath cmpiObjectPath=shadowInstanceName.getObjectPath();
      
    CmpiInstance* targetP=new CmpiInstance(cmpiObjectPath);
      
    copyShadowData(&original,targetP);
      
    if(targetP->getPropertyCount()==0)
      return 0;
    else
      return targetP;
  }

  /* -----------------------------------------------------------------------*/
  /*                          House keeping                              */
  /* -----------------------------------------------------------------------*/

  void CmpiLinux_SambaPrinterSecurityOptionsProvider::removeDanglingShadowInstances (
   const Linux_SambaPrinterSecurityOptionsInstanceNameEnumeration& dinInsNames){
	
    //TODO: enumerate shadow instance names and remove those not included
	// in dinInsNames
	
  };	 	
	
  /* -----------------------------------------------------------------------*/
  /*                          Provider Factory                              */
  /* -----------------------------------------------------------------------*/

  CMProviderBase(CmpiLinux_SambaPrinterSecurityOptionsProvider);

  CMInstanceMIFactory(
   CmpiLinux_SambaPrinterSecurityOptionsProvider, CmpiLinux_SambaPrinterSecurityOptionsProvider);

  CMMethodMIFactory(
   CmpiLinux_SambaPrinterSecurityOptionsProvider, CmpiLinux_SambaPrinterSecurityOptionsProvider);

	
	
  /* -----------------------------------------------------------------------*/
  /*                      Instance Provider Interface                       */
  /* -----------------------------------------------------------------------*/

  //enumInstanceNames
	
  CmpiStatus CmpiLinux_SambaPrinterSecurityOptionsProvider::enumInstanceNames (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop){
      
    cout<<"enumerating instanceNames"<<endl;
    CmpiString nameSpace=cop.getNameSpace();
    const char* nameSpaceP=nameSpace.charPtr();

    Linux_SambaPrinterSecurityOptionsInstanceNameEnumeration enumeration;
    interfaceP->enumInstanceNames(ctx, cppBroker, nameSpaceP, enumeration);
                   
    while ( enumeration.hasNext() ){
      const Linux_SambaPrinterSecurityOptionsInstanceName& instanceName=
      enumeration.getNext();
        
      CmpiObjectPath objectPath=instanceName.getObjectPath();
        
      rslt.returnData(objectPath);
    }
      
    //we make housekeeping
    removeDanglingShadowInstances(enumeration);
      
    rslt.returnDone();
    return CmpiStatus(CMPI_RC_OK);
  };
     
     
  //enumInstances
     
  CmpiStatus CmpiLinux_SambaPrinterSecurityOptionsProvider::enumInstances (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop, const char* *properties){
     
    cout<<"enumerating instances"<<endl;
    CmpiString nameSpace=cop.getNameSpace();
    const char* nameSpaceP=nameSpace.charPtr();
      
    Linux_SambaPrinterSecurityOptionsManualInstanceEnumeration enumeration;
    interfaceP->enumInstances(ctx, cppBroker, nameSpaceP, properties, enumeration);
      
    cout<<"enumerated"<<endl;
      
    while ( enumeration.hasNext() ){
      	
   	  const Linux_SambaPrinterSecurityOptionsManualInstance& instance=
       enumeration.getNext();
      	
      cout<<"enumerating getNext"<<endl;
      	
      CmpiInstance cmpiInstance=instance.getCmpiInstance(properties);
      cout<<"transformed"<<endl;
      	
      //add the static data
      completeInstance(instance.getInstanceName(),cmpiInstance,ctx);
      	
      rslt.returnData(cmpiInstance);
    }
      
    rslt.returnDone();
    return CmpiStatus(CMPI_RC_OK);
  };
    
    
  //getInstance
    
  CmpiStatus CmpiLinux_SambaPrinterSecurityOptionsProvider::getInstance (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop, const char* *properties){
     	
    //covert to instanceName
    Linux_SambaPrinterSecurityOptionsInstanceName instanceName(cop);
      
    //get instance for instanceName
    Linux_SambaPrinterSecurityOptionsManualInstance instance;
    instance=interfaceP->getInstance(ctx, cppBroker, properties, instanceName);
      
    //we convert the instance in a cmpiInstance
    CmpiInstance cmpiInstance=instance.getCmpiInstance(properties);
      
    //add the static data
    completeInstance(instance.getInstanceName(), cmpiInstance, ctx);
      
    rslt.returnData(cmpiInstance);
      
    rslt.returnDone();
    return CmpiStatus(CMPI_RC_OK);
  };
    
    
  CmpiStatus CmpiLinux_SambaPrinterSecurityOptionsProvider::createInstance (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop,const CmpiInstance& inst){
   	
   	Linux_SambaPrinterSecurityOptionsManualInstance instance (
     inst,cop.getNameSpace().charPtr());
    
    //REPOSITORY DATA    
   //  CmpiInstance* backupShadowInstance=0;
//    	CmpiInstance shadowInstance=
//      Linux_SambaPrinterSecurityOptionsRepositoryInstance(inst,shadowNameSpaceP)
//      .getCmpiInstance(0);     
     
//    	//We keep a backup of the existing data for recovering previous
//    	//state if the resource access raise an exception
//    	CmpiObjectPath shadowOp=shadowInstance.getObjectPath();
//     try{
//    	  backupShadowInstance=new CmpiInstance(
//    	   cppBroker.getInstance (ctx, shadowOp,0));
//    	  //if the shadow instance exist we delete it
//    	  cppBroker.deleteInstance(ctx, shadowOp);   	    
//    	}catch(CmpiStatus& rc){};   	
    
//     cppBroker.createInstance(ctx, shadowOp,shadowInstance);     
         	
    
    //RESOURCE ACCESS DATA   
    try{
      interfaceP->createInstance(ctx, cppBroker, instance);
    }catch(CmpiStatus& rc){
      //If something went wrong we recover the previous state
     //  cppBroker.deleteInstance(ctx, shadowOp);
//       if(backupShadowInstance){
//         cppBroker.createInstance(ctx, shadowOp,*backupShadowInstance);
//       }
      throw rc;
    }
    
 //    if(backupShadowInstance)
//       delete(backupShadowInstance);
    
    rslt.returnData( instance.getInstanceName().getObjectPath() );

    rslt.returnDone();
    return CmpiStatus(CMPI_RC_OK);
  };
    
    
  CmpiStatus CmpiLinux_SambaPrinterSecurityOptionsProvider::setInstance (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop, const CmpiInstance& inst,
   const char* *properties){
   	
   	Linux_SambaPrinterSecurityOptionsManualInstance instance (
     inst,cop.getNameSpace().charPtr());
    
    //REPOSITORY DATA    
  //   CmpiInstance* backupShadowInstance=0;
//     CmpiInstance shadowInstance=
//      Linux_SambaPrinterSecurityOptionsRepositoryInstance(inst,shadowNameSpaceP)
//      .getCmpiInstance(0);     
     
//    	//We keep a backup of the existing data for recovering previous
//    	//state if the resource access raise an exception
//    	CmpiObjectPath shadowOp=shadowInstance.getObjectPath();
//     try{
//    	  backupShadowInstance=new CmpiInstance(
//    	   cppBroker.getInstance (ctx, shadowOp,0));
//    	}catch(CmpiStatus& rc){};   	
    
//     //if the instance existed before we delete it
//     //(setInstance is buggy in Pegasus)
//     if(backupShadowInstance)
//       cppBroker.setInstance(ctx, shadowOp,shadowInstance,properties);
//     else
//       cppBroker.createInstance(ctx, shadowOp,shadowInstance);      
    
    
    //RESOURCE ACCESS DATA   
    try{
      interfaceP->setInstance(ctx, cppBroker, properties, instance);
    }catch(CmpiStatus& rc){
      //If something went wrong we recover the previous state
     //  cppBroker.deleteInstance(ctx, shadowOp);
//       if(backupShadowInstance){
//         cppBroker.createInstance(ctx, shadowOp,*backupShadowInstance);
//       }
      throw rc;
    };
      
   //  if(backupShadowInstance)
//       delete(backupShadowInstance);
        
    rslt.returnDone();
    return CmpiStatus(CMPI_RC_OK);
  };
    
    
  CmpiStatus CmpiLinux_SambaPrinterSecurityOptionsProvider::deleteInstance (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop){
      
    Linux_SambaPrinterSecurityOptionsInstanceName instanceName=
     Linux_SambaPrinterSecurityOptionsInstanceName(cop);
    interfaceP->deleteInstance(ctx, cppBroker, instanceName);

    instanceName.setNamespace(shadowNameSpaceP);
    CmpiObjectPath op=instanceName.getObjectPath();
      
    try{  //The instance could not have static data
      cppBroker.deleteInstance(ctx, op);
    }catch(CmpiStatus& rc){};
      
    rslt.returnDone();
    return CmpiStatus(CMPI_RC_OK);
  };
    
    
  CmpiStatus CmpiLinux_SambaPrinterSecurityOptionsProvider::invokeMethod (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& ref, const char* methodName,
   const CmpiArgs& in, CmpiArgs& out){
     	
    Linux_SambaPrinterSecurityOptionsInstanceName instanceName=
     Linux_SambaPrinterSecurityOptionsInstanceName(ref);
     
    {
     rslt.returnDone();
      return CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::METHOD_NOT_FOUND,
   	   "Method not available");
    }
      
    rslt.returnDone();
    return CmpiStatus(CMPI_RC_OK);      
  };
 
}	

