/**
 *  CmpiLinux_SambaWriteListForPrinterProvider.cpp
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


#include "CmpiLinux_SambaWriteListForPrinterProvider.h"
#include "ArrayConverter.h"
#include "Linux_SambaWriteListForPrinterManualInstance.h"
#include "Linux_SambaWriteListForPrinterRepositoryInstance.h"
#include "Linux_SambaUserInstance.h"
#include "Linux_SambaPrinterOptionsInstance.h"

#include <iostream>
#include <strings.h>

using namespace std;

namespace genProvider {

  CmpiLinux_SambaWriteListForPrinterProvider::
   CmpiLinux_SambaWriteListForPrinterProvider (
   const CmpiBroker &mbp, const CmpiContext& ctx):
    CmpiBaseMI(mbp, ctx), CmpiInstanceMI(mbp,ctx),
    CmpiMethodMI(mbp,ctx), CmpiAssociationMI(mbp,ctx), cppBroker(mbp) {
      
      interfaceP=Linux_SambaWriteListForPrinterFactory::getImplementation();           
      cout<<"Provider was constructed"<<endl;
  };
    
        
  const char * CmpiLinux_SambaWriteListForPrinterProvider::
   shadowNameSpaceP="IBMShadow/cimv2";
        
  CmpiLinux_SambaWriteListForPrinterProvider::
   ~CmpiLinux_SambaWriteListForPrinterProvider(){
	  delete interfaceP;
  };
  
  int CmpiLinux_SambaWriteListForPrinterProvider::isUnloadable() const{
    return 0;
  }
	
  /* -----------------------------------------------------------------------*/
  /*                       Adding shadow properties                         */
  /* -----------------------------------------------------------------------*/

  void CmpiLinux_SambaWriteListForPrinterProvider::completeInstance(
   const Linux_SambaWriteListForPrinterInstanceName& instanceName,
   CmpiInstance& target, const CmpiContext& ctx){
	  	
    Linux_SambaWriteListForPrinterInstanceName shadowInstanceName(instanceName);
    shadowInstanceName.setNamespace(shadowNameSpaceP);
    CmpiObjectPath cmpiObjectPath=shadowInstanceName.getObjectPath();
	  
    try{
      const char* propertiesP=0;
      CmpiInstance shadowInstance=cppBroker.getInstance (
       ctx, cmpiObjectPath,&propertiesP);
      copyShadowData(&shadowInstance,&target);
    }catch(const CmpiStatus& rc){};                             
  };
	
	
  void CmpiLinux_SambaWriteListForPrinterProvider::copyShadowData (
   const CmpiInstance* source, CmpiInstance* target){
    
	  
  };
    
  /* -----------------------------------------------------------------------*/
  /*                       Extracting shadow instance                         */
  /* -----------------------------------------------------------------------*/

  CmpiInstance* CmpiLinux_SambaWriteListForPrinterProvider::
   getShadowInstance (const CmpiInstance& original,
   const Linux_SambaWriteListForPrinterInstanceName& instanceName){
     
    Linux_SambaWriteListForPrinterInstanceName shadowInstanceName(instanceName);
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

  void CmpiLinux_SambaWriteListForPrinterProvider::removeDanglingShadowInstances (
   const Linux_SambaWriteListForPrinterInstanceNameEnumeration& dinInsNames){
	
    //TODO: enumerate shadow instance names and remove those not included
	// in dinInsNames
	
  };	 	
	
  /* -----------------------------------------------------------------------*/
  /*                          Provider Factory                              */
  /* -----------------------------------------------------------------------*/

  CMProviderBase(CmpiLinux_SambaWriteListForPrinterProvider);

  CMInstanceMIFactory(
   CmpiLinux_SambaWriteListForPrinterProvider, CmpiLinux_SambaWriteListForPrinterProvider);

  CMMethodMIFactory(
   CmpiLinux_SambaWriteListForPrinterProvider, CmpiLinux_SambaWriteListForPrinterProvider);
    
    CMAssociationMIFactory( CmpiLinux_SambaWriteListForPrinterProvider,
     CmpiLinux_SambaWriteListForPrinterProvider);

	
	
  /* -----------------------------------------------------------------------*/
  /*                      Instance Provider Interface                       */
  /* -----------------------------------------------------------------------*/

  //enumInstanceNames
	
  CmpiStatus CmpiLinux_SambaWriteListForPrinterProvider::enumInstanceNames (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop){
      
    cout<<"enumerating instanceNames"<<endl;
    CmpiString nameSpace=cop.getNameSpace();
    const char* nameSpaceP=nameSpace.charPtr();

    Linux_SambaWriteListForPrinterInstanceNameEnumeration enumeration;
    interfaceP->enumInstanceNames(ctx, cppBroker, nameSpaceP, enumeration);
                   
    while ( enumeration.hasNext() ){
      const Linux_SambaWriteListForPrinterInstanceName& instanceName=
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
     
  CmpiStatus CmpiLinux_SambaWriteListForPrinterProvider::enumInstances (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop, const char* *properties){
     
    cout<<"enumerating instances"<<endl;
    CmpiString nameSpace=cop.getNameSpace();
    const char* nameSpaceP=nameSpace.charPtr();
      
    Linux_SambaWriteListForPrinterManualInstanceEnumeration enumeration;
    interfaceP->enumInstances(ctx, cppBroker, nameSpaceP, properties, enumeration);
      
    cout<<"enumerated"<<endl;
      
    while ( enumeration.hasNext() ){
      	
   	  const Linux_SambaWriteListForPrinterManualInstance& instance=
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
    
  CmpiStatus CmpiLinux_SambaWriteListForPrinterProvider::getInstance (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop, const char* *properties){
     	
    //covert to instanceName
    Linux_SambaWriteListForPrinterInstanceName instanceName(cop);
      
    //get instance for instanceName
    Linux_SambaWriteListForPrinterManualInstance instance;
    instance=interfaceP->getInstance(ctx, cppBroker, properties, instanceName);
      
    //we convert the instance in a cmpiInstance
    CmpiInstance cmpiInstance=instance.getCmpiInstance(properties);
      
    //add the static data
    completeInstance(instance.getInstanceName(), cmpiInstance, ctx);
      
    rslt.returnData(cmpiInstance);
      
    rslt.returnDone();
    return CmpiStatus(CMPI_RC_OK);
  };
    
    
  CmpiStatus CmpiLinux_SambaWriteListForPrinterProvider::createInstance (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop,const CmpiInstance& inst){
   	
   	Linux_SambaWriteListForPrinterManualInstance instance (
     inst,cop.getNameSpace().charPtr());
    
    //REPOSITORY DATA    
   //  CmpiInstance* backupShadowInstance=0;
//    	CmpiInstance shadowInstance=
//      Linux_SambaWriteListForPrinterRepositoryInstance(inst,shadowNameSpaceP)
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
    
   //  if(backupShadowInstance)
//       delete(backupShadowInstance);
    
    rslt.returnData( instance.getInstanceName().getObjectPath() );

    rslt.returnDone();
    return CmpiStatus(CMPI_RC_OK);
  };
    
    
  CmpiStatus CmpiLinux_SambaWriteListForPrinterProvider::setInstance (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop, const CmpiInstance& inst,
   const char* *properties){
   	
   	Linux_SambaWriteListForPrinterManualInstance instance (
     inst,cop.getNameSpace().charPtr());
    
    //REPOSITORY DATA    
    CmpiInstance* backupShadowInstance=0;
    CmpiInstance shadowInstance=
     Linux_SambaWriteListForPrinterRepositoryInstance(inst,shadowNameSpaceP)
     .getCmpiInstance(0);     
     
   	//We keep a backup of the existing data for recovering previous
   	//state if the resource access raise an exception
   	CmpiObjectPath shadowOp=shadowInstance.getObjectPath();
    try{
   	  backupShadowInstance=new CmpiInstance(
   	   cppBroker.getInstance (ctx, shadowOp,0));
   	}catch(CmpiStatus& rc){};   	
    
    //if the instance existed before we delete it
    //(setInstance is buggy in Pegasus)
    if(backupShadowInstance)
      cppBroker.setInstance(ctx, shadowOp,shadowInstance,properties);
    else
      cppBroker.createInstance(ctx, shadowOp,shadowInstance);      
    
    
    //RESOURCE ACCESS DATA   
    try{
      interfaceP->setInstance(ctx, cppBroker, properties, instance);
    }catch(CmpiStatus& rc){
      //If something went wrong we recover the previous state
      cppBroker.deleteInstance(ctx, shadowOp);
      if(backupShadowInstance){
        cppBroker.createInstance(ctx, shadowOp,*backupShadowInstance);
      }
      throw rc;
    };
      
    if(backupShadowInstance)
      delete(backupShadowInstance);
        
    rslt.returnDone();
    return CmpiStatus(CMPI_RC_OK);
  };
    
    
  CmpiStatus CmpiLinux_SambaWriteListForPrinterProvider::deleteInstance (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop){
      
    Linux_SambaWriteListForPrinterInstanceName instanceName=
     Linux_SambaWriteListForPrinterInstanceName(cop);
    interfaceP->deleteInstance(ctx, cppBroker, instanceName);

    instanceName.setNamespace(shadowNameSpaceP);
    CmpiObjectPath op=instanceName.getObjectPath();
      
    try{  //The instance could not have static data
      cppBroker.deleteInstance(ctx, op);
    }catch(CmpiStatus& rc){};
      
    rslt.returnDone();
    return CmpiStatus(CMPI_RC_OK);
  };
    
    
  CmpiStatus CmpiLinux_SambaWriteListForPrinterProvider::invokeMethod (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& ref, const char* methodName,
   const CmpiArgs& in, CmpiArgs& out){
     	
    Linux_SambaWriteListForPrinterInstanceName instanceName=
     Linux_SambaWriteListForPrinterInstanceName(ref);
     
    {
     rslt.returnDone();
      return CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::METHOD_NOT_FOUND,
   	   "Method not available");
    }
      
    rslt.returnDone();
    return CmpiStatus(CMPI_RC_OK);      
  };
  /* -----------------------------------------------------------------------*/
  /*                          Association Logic                             */
  /* -----------------------------------------------------------------------*/

  CmpiStatus CmpiLinux_SambaWriteListForPrinterProvider::associationLogic( 
   const CmpiContext& ctx, 
   CmpiResult& rslt,
   const CmpiObjectPath& cop,
   const int instances,
   const int references,
   const char** properties) {

    /* TODO : check if source instance cop exists */

    const char * nsp = cop.getNameSpace().charPtr();

    if( references == 0 && instances == 1 ) {
      /* associators() */

      if(cop.classPathIsA("Linux_SambaUser")) {
        Linux_SambaPrinterOptionsInstanceEnumeration enumeration;
        Linux_SambaUserInstanceName PartComponent(cop);
        interfaceP->associatorsGroupComponent(
	    ctx, cppBroker, nsp, properties,
	    PartComponent, enumeration);

        while(enumeration.hasNext()) {
	      const Linux_SambaPrinterOptionsInstance instance =
          enumeration.getNext();
          CmpiInstance cmpiInstance = instance.getCmpiInstance(properties);
          rslt.returnData(cmpiInstance);
	    }
      }
      else if(cop.classPathIsA("Linux_SambaPrinterOptions")) {
        Linux_SambaUserInstanceEnumeration enumeration;
        Linux_SambaPrinterOptionsInstanceName GroupComponent(cop);
        interfaceP->associatorsPartComponent(
         ctx, cppBroker, nsp, properties,
         GroupComponent, enumeration);
	
        while(enumeration.hasNext()) {
          const Linux_SambaUserInstance instance =
          enumeration.getNext();
          CmpiInstance cmpiInstance = instance.getCmpiInstance(properties);
          rslt.returnData(cmpiInstance);
        }
      }      
    } /* end of associators() */
    else {
      /* associatorNames() || references() || referenceNames() */

      Linux_SambaWriteListForPrinterManualInstanceEnumeration enumeration;

      if(cop.classPathIsA("Linux_SambaUser")) {
        Linux_SambaUserInstanceName PartComponent(cop);
        interfaceP->referencesGroupComponent(
         ctx, cppBroker, nsp, properties,
         PartComponent, enumeration);
      }
      
      if(cop.classPathIsA("Linux_SambaPrinterOptions")) {
        Linux_SambaPrinterOptionsInstanceName GroupComponent(cop);
        interfaceP->referencesPartComponent(
	     ctx, cppBroker, nsp, properties,
	     GroupComponent, enumeration);
      }

      while(enumeration.hasNext()) {

        const Linux_SambaWriteListForPrinterManualInstance manualInstance =
         enumeration.getNext();

        const Linux_SambaWriteListForPrinterInstanceName instanceName = 
         manualInstance.getInstanceName();

        if( references == 1 ) {
          /* referenceNames() : references == 1 && instances == 0 */
          if(instances == 0 ) {
            CmpiObjectPath cmpiObjectPath = instanceName.getObjectPath();
            rslt.returnData(cmpiObjectPath);
          } /* references() : references == 1 && instances == 1 */
          else {
            CmpiInstance cmpiInstance = manualInstance.getCmpiInstance(properties);
            /* todo: complete the Instance */
            rslt.returnData(cmpiInstance);
          }
        }
        /* associatorNames() : references == 0 && instances == 0 */
        else {
      
          if(cop.classPathIsA("Linux_SambaUser")) {
            const Linux_SambaPrinterOptionsInstanceName GroupComponent = 
            instanceName.getGroupComponent();
            CmpiObjectPath cmpiObjectPath = GroupComponent.getObjectPath();
            rslt.returnData(cmpiObjectPath);
          }
        
          if(cop.classPathIsA("Linux_SambaPrinterOptions")) {
            const Linux_SambaUserInstanceName PartComponent = 
            instanceName.getPartComponent();
            CmpiObjectPath cmpiObjectPath = PartComponent.getObjectPath();
            rslt.returnData(cmpiObjectPath);
          }
        }
      }
    } /* end of associatorNames() || references() || referenceNames() */
    
    rslt.returnDone();
    return CmpiStatus(CMPI_RC_OK);
  };
  
  /* -----------------------------------------------------------------------*/
  /*                     Association Provider Interface                     */
  /* -----------------------------------------------------------------------*/


  CmpiStatus CmpiLinux_SambaWriteListForPrinterProvider::associators (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop, 
   const char * assocClass, const char * resultClass,
   const char * role, const char * resultRole, 
   const char** properties) {
     
    cout<<"calling associators() of class Linux_SambaWriteListForPrinter"<<endl;
      
    CmpiStatus rc = associationLogic(ctx,rslt,cop,1,0,properties);
    return CmpiStatus(rc);
      
  }
    

  CmpiStatus CmpiLinux_SambaWriteListForPrinterProvider::associatorNames (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop,
   const char * assocClass, const char * resultClass,
   const char * role, const char * resultRole) {
   
    cout<<"calling associatorNames() of class Linux_SambaWriteListForPrinter"<<endl;
    
    CmpiStatus rc = associationLogic(ctx,rslt,cop,0,0);
    return CmpiStatus(rc);
  
  }


  CmpiStatus CmpiLinux_SambaWriteListForPrinterProvider::references ( 
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop,
   const char * assocClass, const char * role,
   const char** properties) {
    
    cout<<"calling references() of class Linux_SambaWriteListForPrinter"<<endl;
    
    CmpiStatus rc = associationLogic(ctx,rslt,cop,1,1,properties);
    return CmpiStatus(rc);
  
  }
    
    
  CmpiStatus CmpiLinux_SambaWriteListForPrinterProvider::referenceNames (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop,
   const char * assocClass, const char * role) {
   
    cout<<"calling referenceNames() of class Linux_SambaWriteListForPrinter"<<endl;
    
    CmpiStatus rc = associationLogic(ctx,rslt,cop,0,1);
    return CmpiStatus(rc);
  } 
}	
