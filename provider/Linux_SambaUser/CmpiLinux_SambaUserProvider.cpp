/**
 *  CmpiLinux_SambaUserProvider.cpp
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


#include "CmpiLinux_SambaUserProvider.h"
#include "ArrayConverter.h"
#include "Linux_SambaUserManualInstance.h"
#include "Linux_SambaUserRepositoryInstance.h"

#include <iostream>
#include <strings.h>

using namespace std;

namespace genProvider {

  CmpiLinux_SambaUserProvider::
   CmpiLinux_SambaUserProvider (
   const CmpiBroker &mbp, const CmpiContext& ctx):
    CmpiBaseMI(mbp, ctx), CmpiInstanceMI(mbp,ctx),
    CmpiMethodMI(mbp,ctx), cppBroker(mbp) {
      
      interfaceP=Linux_SambaUserFactory::getImplementation();           
      cout<<"Provider was constructed"<<endl;
  };
    
        
  const char * CmpiLinux_SambaUserProvider::
   shadowNameSpaceP="IBMShadow/cimv2";
        
  CmpiLinux_SambaUserProvider::
   ~CmpiLinux_SambaUserProvider(){
	  delete interfaceP;
  };
  
  int CmpiLinux_SambaUserProvider::isUnloadable() const{
    return 0;
  }
	
  /* -----------------------------------------------------------------------*/
  /*                       Adding shadow properties                         */
  /* -----------------------------------------------------------------------*/

  void CmpiLinux_SambaUserProvider::completeInstance(
   const Linux_SambaUserInstanceName& instanceName,
   CmpiInstance& target, const CmpiContext& ctx){
	  	
    Linux_SambaUserInstanceName shadowInstanceName(instanceName);
    shadowInstanceName.setNamespace(shadowNameSpaceP);
    CmpiObjectPath cmpiObjectPath=shadowInstanceName.getObjectPath();
	  
    try{
      const char* propertiesP=0;
      CmpiInstance shadowInstance=cppBroker.getInstance (
       ctx, cmpiObjectPath,&propertiesP);
      copyShadowData(&shadowInstance,&target);
    }catch(const CmpiStatus& rc){};                             
  };
	
	
  void CmpiLinux_SambaUserProvider::copyShadowData (
   const CmpiInstance* source, CmpiInstance* target){
    
	  
  };
    
  /* -----------------------------------------------------------------------*/
  /*                       Extracting shadow instance                         */
  /* -----------------------------------------------------------------------*/

  CmpiInstance* CmpiLinux_SambaUserProvider::
   getShadowInstance (const CmpiInstance& original,
   const Linux_SambaUserInstanceName& instanceName){
     
    Linux_SambaUserInstanceName shadowInstanceName(instanceName);
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

  void CmpiLinux_SambaUserProvider::removeDanglingShadowInstances (
   const Linux_SambaUserInstanceNameEnumeration& dinInsNames){
	
    //TODO: enumerate shadow instance names and remove those not included
	// in dinInsNames
	
  };	 	
	
  /* -----------------------------------------------------------------------*/
  /*                          Provider Factory                              */
  /* -----------------------------------------------------------------------*/

  CMProviderBase(CmpiLinux_SambaUserProvider);

  CMInstanceMIFactory(
   CmpiLinux_SambaUserProvider, CmpiLinux_SambaUserProvider);

  CMMethodMIFactory(
   CmpiLinux_SambaUserProvider, CmpiLinux_SambaUserProvider);

	
	
  /* -----------------------------------------------------------------------*/
  /*                      Instance Provider Interface                       */
  /* -----------------------------------------------------------------------*/

  //enumInstanceNames
	
  CmpiStatus CmpiLinux_SambaUserProvider::enumInstanceNames (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop){
      
    cout<<"enumerating instanceNames"<<endl;
    CmpiString nameSpace=cop.getNameSpace();
    const char* nameSpaceP=nameSpace.charPtr();

    Linux_SambaUserInstanceNameEnumeration enumeration;
    interfaceP->enumInstanceNames(ctx, cppBroker, nameSpaceP, enumeration);
                   
    while ( enumeration.hasNext() ){
      const Linux_SambaUserInstanceName& instanceName=
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
     
  CmpiStatus CmpiLinux_SambaUserProvider::enumInstances (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop, const char* *properties){
     
    cout<<"enumerating instances"<<endl;
    CmpiString nameSpace=cop.getNameSpace();
    const char* nameSpaceP=nameSpace.charPtr();
      
    Linux_SambaUserManualInstanceEnumeration enumeration;
    interfaceP->enumInstances(ctx, cppBroker, nameSpaceP, properties, enumeration);
      
    cout<<"enumerated"<<endl;
      
    while ( enumeration.hasNext() ){
      	
   	  const Linux_SambaUserManualInstance& instance=
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
    
  CmpiStatus CmpiLinux_SambaUserProvider::getInstance (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop, const char* *properties){
     	
    //covert to instanceName
    Linux_SambaUserInstanceName instanceName(cop);
      
    //get instance for instanceName
    Linux_SambaUserManualInstance instance;
    instance=interfaceP->getInstance(ctx, cppBroker, properties, instanceName);
      
    //we convert the instance in a cmpiInstance
    CmpiInstance cmpiInstance=instance.getCmpiInstance(properties);
      
    //add the static data
    completeInstance(instance.getInstanceName(), cmpiInstance, ctx);
      
    rslt.returnData(cmpiInstance);
      
    rslt.returnDone();
    return CmpiStatus(CMPI_RC_OK);
  };
    
    
  CmpiStatus CmpiLinux_SambaUserProvider::createInstance (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop,const CmpiInstance& inst){
    
    Linux_SambaUserManualInstance instance (
     inst,cop.getNameSpace().charPtr());
    
// 	//REPOSITORY DATA    
// 	CmpiInstance* backupShadowInstance=0;
// 	CmpiInstance shadowInstance=
// 	  Linux_SambaUserRepositoryInstance(inst,shadowNameSpaceP)
// 	  .getCmpiInstance(0);     
	
//    	//We keep a backup of the existing data for recovering previous
//    	//state if the resource access raise an exception
// 	CmpiObjectPath shadowOp=shadowInstance.getObjectPath();
// 	try{
//    	  backupShadowInstance=new CmpiInstance(
// 						cppBroker.getInstance (ctx, shadowOp,0));
	  
//    	  //if the shadow instance exist we delete it
// 	  cppBroker.deleteInstance(ctx, shadowOp);   	    
//    	}catch(CmpiStatus& rc){};   	
	
// 	cppBroker.createInstance(ctx, shadowOp,shadowInstance);   
	
	
	
	//RESOURCE ACCESS DATA   
	try{
	  interfaceP->createInstance(ctx, cppBroker, instance);
	}catch(CmpiStatus& rc){
// 	  //If something went wrong we recover the previous state
// 	  cppBroker.deleteInstance(ctx, shadowOp);
// 	  if(backupShadowInstance){
// 	    cppBroker.createInstance(ctx, shadowOp,*backupShadowInstance);
// 	  }
	  throw rc;
	}
	
// 	if(backupShadowInstance)
// 	  delete(backupShadowInstance);
	
	rslt.returnData( instance.getInstanceName().getObjectPath() );
	
	rslt.returnDone();
	return CmpiStatus(CMPI_RC_OK);
  };
  
  
  CmpiStatus CmpiLinux_SambaUserProvider::setInstance (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop, const CmpiInstance& inst,
   const char* *properties){
   	
   	Linux_SambaUserManualInstance instance (
     inst,cop.getNameSpace().charPtr());
    
    //REPOSITORY DATA    
//     CmpiInstance* backupShadowInstance=0;
//     CmpiInstance shadowInstance=
//      Linux_SambaUserRepositoryInstance(inst,shadowNameSpaceP)
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
 //      cppBroker.deleteInstance(ctx, shadowOp);
//       if(backupShadowInstance){
//         cppBroker.createInstance(ctx, shadowOp,*backupShadowInstance);
//       }
      throw rc;
    };
      
 //    if(backupShadowInstance)
//       delete(backupShadowInstance);
        
    rslt.returnDone();
    return CmpiStatus(CMPI_RC_OK);
  };
    
    
  CmpiStatus CmpiLinux_SambaUserProvider::deleteInstance (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& cop){
      
    Linux_SambaUserInstanceName instanceName=
     Linux_SambaUserInstanceName(cop);
    interfaceP->deleteInstance(ctx, cppBroker, instanceName);

    instanceName.setNamespace(shadowNameSpaceP);
    CmpiObjectPath op=instanceName.getObjectPath();
      
    try{  //The instance could not have static data
      cppBroker.deleteInstance(ctx, op);
    }catch(CmpiStatus& rc){};
      
    rslt.returnDone();
    return CmpiStatus(CMPI_RC_OK);
  };
    
    
  CmpiStatus CmpiLinux_SambaUserProvider::invokeMethod (
   const CmpiContext& ctx, CmpiResult& rslt,
   const CmpiObjectPath& ref, const char* methodName,
   const CmpiArgs& in, CmpiArgs& out){
     	
    Linux_SambaUserInstanceName instanceName=
     Linux_SambaUserInstanceName();
     
    if (strcasecmp(methodName,"getAllSystemGroups")==0){
        cout<<"executing method getAllSystemGroups"<<endl;
                
        rslt.returnData(CmpiData(interfaceP->getAllSystemGroups(
         ctx,
         cppBroker,
         instanceName)));
        cout<<"end of method getAllSystemGroups"<<endl;     
      }else if (strcasecmp(methodName,"getAllSystemUsers")==0){
        cout<<"executing method getAllSystemUsers"<<endl;
                
        rslt.returnData(CmpiData(interfaceP->getAllSystemUsers(
         ctx,
         cppBroker,
         instanceName)));
        cout<<"end of method getAllSystemUsers"<<endl;     
      }else {
     rslt.returnDone();
      return CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::METHOD_NOT_FOUND,
   	   "Method not available");
    }
      
    rslt.returnDone();
    return CmpiStatus(CMPI_RC_OK);      
  };
 
}	
