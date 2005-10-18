/**
 *  CmpiLinux_SambaReadListForShareProvider.cpp
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


#include "CmpiLinux_SambaReadListForShareProvider.h"
#include "ArrayConverter.h"
#include "Linux_SambaReadListForShareManualInstance.h"
#include "Linux_SambaReadListForShareRepositoryInstance.h"
#include "Linux_SambaUserInstance.h"
#include "Linux_SambaShareOptionsInstance.h"

#include <iostream>
#include <strings.h>

using namespace std;

namespace genProvider {

  CmpiLinux_SambaReadListForShareProvider::
   CmpiLinux_SambaReadListForShareProvider (
   const CmpiBroker &mbp, const CmpiContext& ctx):
    CmpiBaseMI(mbp, ctx), CmpiInstanceMI(mbp,ctx),
    CmpiMethodMI(mbp,ctx), CmpiAssociationMI(mbp,ctx), cppBroker(mbp) {
      
      interfaceP=Linux_SambaReadListForShareFactory::getImplementation();           
      cout<<"Provider was constructed"<<endl;
  };
    
        
  const char * CmpiLinux_SambaReadListForShareProvider::
   shadowNameSpaceP="IBMShadow/cimv2";
        
  CmpiLinux_SambaReadListForShareProvider::
   ~CmpiLinux_SambaReadListForShareProvider(){
	  delete interfaceP;
  };
  
  int CmpiLinux_SambaReadListForShareProvider::isUnloadable() const{
    return 0;
  }
	
  /* -----------------------------------------------------------------------*/
  /*                       Adding shadow properties                         */
  /* -----------------------------------------------------------------------*/

  void CmpiLinux_SambaReadListForShareProvider::completeInstance(
   const Linux_SambaReadListForShareInstanceName& instanceName,
   CmpiInstance& target, const CmpiContext& ctx){
	  	
    Linux_SambaReadListForShareInstanceName shadowInstanceName(instanceName);
    shadowInstanceName.setNamespace(shadowNameSpaceP);
    CmpiObjectPath cmpiObjectPath=shadowInstanceName.getObjectPath();
	  
    try{
      const char* propertiesP=0;
      CmpiInstance shadowInstance=cppBroker.getInstance (
       ctx, cmpiObjectPath,&propertiesP);
      copyShadowData(&shadowInstance,&target);
    }catch(const CmpiStatus& rc){};                             
  };
	
	
  void CmpiLinux_SambaReadListForShareProvider::copyShadowData (
   const CmpiInstance* source, CmpiInstance* target){
    
	  
  };
    
  /* -----------------------------------------------------------------------*/
  /*                       Extracting shadow instance                         */
  /* -----------------------------------------------------------------------*/

  CmpiInstance* CmpiLinux_SambaReadListForShareProvider::
   getShadowInstance (const CmpiInstance& original,
   const Linux_SambaReadListForShareInstanceName& instanceName){
     
    Linux_SambaReadListForShareInstanceName shadowInstanceName(instanceName);
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

  void CmpiLinux_SambaReadListForShareProvider::removeDanglingShadowInstances (
   const Linux_SambaReadListForShareInstanceNameEnumeration& dinInsNames){
	
    //TODO: enumerate shadow instance names and remove those not included
	// in dinInsNames
	
  };	 	
	
  /* -----------------------------------------------------------------------*/
  /*                          Provider Factory                              */
  /* -----------------------------------------------------------------------*/

  CMProviderBase(CmpiLinux_SambaReadListForShareProvider);

  CMInstanceMIFactory(
   CmpiLinux_SambaReadListForShareProvider, CmpiLinux_SambaReadListForShareProvider);

  CMMethodMIFactory(
   CmpiLinux_SambaReadListForShareProvider, CmpiLinux_SambaReadListForShareProvider);
    
    CMAssociationMIFactory( CmpiLinux_SambaReadListForShareProvider,
     CmpiLinux_SambaReadListForShareProvider);

	
	
  /* -----------------------------------------------------------------------*/
  /*                      Instance Provider Interface                       */
  /* -----------------------------------------------------------------------*/

  //enumInstanceNames
	
  CmpiStatus CmpiLinux_SambaReadListForShareProvider::enumInstanceNames (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop){
      
    cout<<"enumerating instanceNames"<<endl;
    CmpiString nameSpace=cop.getNameSpace();
    const char* nameSpaceP=nameSpace.charPtr();

    Linux_SambaReadListForShareInstanceNameEnumeration enumeration;
    interfaceP->enumInstanceNames(ctx, cppBroker, nameSpaceP, enumeration);
                   
    while ( enumeration.hasNext() ){
      const Linux_SambaReadListForShareInstanceName& instanceName=
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
     
  CmpiStatus CmpiLinux_SambaReadListForShareProvider::enumInstances (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop, const char* *properties){
     
    cout<<"enumerating instances"<<endl;
    CmpiString nameSpace=cop.getNameSpace();
    const char* nameSpaceP=nameSpace.charPtr();
      
    Linux_SambaReadListForShareManualInstanceEnumeration enumeration;
    interfaceP->enumInstances(ctx, cppBroker, nameSpaceP, properties, enumeration);
      
    cout<<"enumerated"<<endl;
      
    while ( enumeration.hasNext() ){
      	
   	  const Linux_SambaReadListForShareManualInstance& instance=
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
    
  CmpiStatus CmpiLinux_SambaReadListForShareProvider::getInstance (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop, const char* *properties){
     	
    //covert to instanceName
    Linux_SambaReadListForShareInstanceName instanceName(cop);
      
    //get instance for instanceName
    Linux_SambaReadListForShareManualInstance instance;
    instance=interfaceP->getInstance(ctx, cppBroker, properties, instanceName);
      
    //we convert the instance in a cmpiInstance
    CmpiInstance cmpiInstance=instance.getCmpiInstance(properties);
      
    //add the static data
    completeInstance(instance.getInstanceName(), cmpiInstance, ctx);
      
    rslt.returnData(cmpiInstance);
      
    rslt.returnDone();
    return CmpiStatus(CMPI_RC_OK);
  };
    
    
  CmpiStatus CmpiLinux_SambaReadListForShareProvider::createInstance (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop,const CmpiInstance& inst){
   	
   	Linux_SambaReadListForShareManualInstance instance (
     inst,cop.getNameSpace().charPtr());
    
    //REPOSITORY DATA    
   //  CmpiInstance* backupShadowInstance=0;
//    	CmpiInstance shadowInstance=
//      Linux_SambaReadListForShareRepositoryInstance(inst,shadowNameSpaceP)
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
    
    
  CmpiStatus CmpiLinux_SambaReadListForShareProvider::setInstance (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop, const CmpiInstance& inst,
   const char* *properties){
   	
   	Linux_SambaReadListForShareManualInstance instance (
     inst,cop.getNameSpace().charPtr());
    
    //REPOSITORY DATA    
    CmpiInstance* backupShadowInstance=0;
    CmpiInstance shadowInstance=
     Linux_SambaReadListForShareRepositoryInstance(inst,shadowNameSpaceP)
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
    
    
  CmpiStatus CmpiLinux_SambaReadListForShareProvider::deleteInstance (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop){
      
    Linux_SambaReadListForShareInstanceName instanceName=
     Linux_SambaReadListForShareInstanceName(cop);
    interfaceP->deleteInstance(ctx, cppBroker, instanceName);

    instanceName.setNamespace(shadowNameSpaceP);
    CmpiObjectPath op=instanceName.getObjectPath();
      
    try{  //The instance could not have static data
      cppBroker.deleteInstance(ctx, op);
    }catch(CmpiStatus& rc){};
      
    rslt.returnDone();
    return CmpiStatus(CMPI_RC_OK);
  };
    
    
  CmpiStatus CmpiLinux_SambaReadListForShareProvider::invokeMethod (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& ref, const char* methodName,
   const CmpiArgs& in, CmpiArgs& out){
     	
    Linux_SambaReadListForShareInstanceName instanceName=
     Linux_SambaReadListForShareInstanceName(ref);
     
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

  CmpiStatus CmpiLinux_SambaReadListForShareProvider::associationLogic( 
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
        Linux_SambaShareOptionsInstanceEnumeration enumeration;
        Linux_SambaUserInstanceName PartComponent(cop);
        interfaceP->associatorsGroupComponent(
	    ctx, cppBroker, nsp, properties,
	    PartComponent, enumeration);

        while(enumeration.hasNext()) {
	      const Linux_SambaShareOptionsInstance instance =
          enumeration.getNext();
          CmpiInstance cmpiInstance = instance.getCmpiInstance(properties);
          rslt.returnData(cmpiInstance);
	    }
      }
      else if(cop.classPathIsA("Linux_SambaShareOptions")) {
        Linux_SambaUserInstanceEnumeration enumeration;
        Linux_SambaShareOptionsInstanceName GroupComponent(cop);
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

      Linux_SambaReadListForShareManualInstanceEnumeration enumeration;

      if(cop.classPathIsA("Linux_SambaUser")) {
        Linux_SambaUserInstanceName PartComponent(cop);
        interfaceP->referencesGroupComponent(
         ctx, cppBroker, nsp, properties,
         PartComponent, enumeration);
      }
      
      if(cop.classPathIsA("Linux_SambaShareOptions")) {
        Linux_SambaShareOptionsInstanceName GroupComponent(cop);
        interfaceP->referencesPartComponent(
	     ctx, cppBroker, nsp, properties,
	     GroupComponent, enumeration);
      }

      while(enumeration.hasNext()) {

        const Linux_SambaReadListForShareManualInstance manualInstance =
         enumeration.getNext();

        const Linux_SambaReadListForShareInstanceName instanceName = 
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
            const Linux_SambaShareOptionsInstanceName GroupComponent = 
            instanceName.getGroupComponent();
            CmpiObjectPath cmpiObjectPath = GroupComponent.getObjectPath();
            rslt.returnData(cmpiObjectPath);
          }
        
          if(cop.classPathIsA("Linux_SambaShareOptions")) {
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


  CmpiStatus CmpiLinux_SambaReadListForShareProvider::associators (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop, 
   const char * assocClass, const char * resultClass,
   const char * role, const char * resultRole, 
   const char** properties) {
     
    cout<<"calling associators() of class Linux_SambaReadListForShare"<<endl;
      
    CmpiStatus rc = associationLogic(ctx,rslt,cop,1,0,properties);
    return CmpiStatus(rc);
      
  }
    

  CmpiStatus CmpiLinux_SambaReadListForShareProvider::associatorNames (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop,
   const char * assocClass, const char * resultClass,
   const char * role, const char * resultRole) {
   
    cout<<"calling associatorNames() of class Linux_SambaReadListForShare"<<endl;
    
    CmpiStatus rc = associationLogic(ctx,rslt,cop,0,0);
    return CmpiStatus(rc);
  
  }


  CmpiStatus CmpiLinux_SambaReadListForShareProvider::references ( 
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop,
   const char * assocClass, const char * role,
   const char** properties) {
    
    cout<<"calling references() of class Linux_SambaReadListForShare"<<endl;
    
    CmpiStatus rc = associationLogic(ctx,rslt,cop,1,1,properties);
    return CmpiStatus(rc);
  
  }
    
    
  CmpiStatus CmpiLinux_SambaReadListForShareProvider::referenceNames (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop,
   const char * assocClass, const char * role) {
   
    cout<<"calling referenceNames() of class Linux_SambaReadListForShare"<<endl;
    
    CmpiStatus rc = associationLogic(ctx,rslt,cop,0,1);
    return CmpiStatus(rc);
  } 
}	

