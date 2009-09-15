// =======================================================================
// Linux_SambaHostsForServiceResourceAccess.cpp 
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
// http://oss.software.ibm.com/developerworks/opensource/license-cpl.html
//
// Author:        generated
//
// Contributors:
//                Wolfgang Taphorn   <taphorn@de.ibm.com>
//                Mukunda Chowdaiah  <cmukunda@in.ibm.com>
//                Ashoka S Rao       <ashoka.rao@in.ibm.com>
//                Rodrigo Ceron      <rceron@br.ibm.com>
//
// =======================================================================
//
//
#include "Linux_SambaHostsForServiceResourceAccess.h"

#include <string>
#include <list>

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"
#include "smt_smb_array.h"

namespace genProvider {

  //----------------------------------------------------------------------------
  //Linux_SambaHostsForServiceResourceAccess::Linux_SambaHostsForServiceResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaHostsForServiceResourceAccess::~Linux_SambaHostsForServiceResourceAccess() { }

  // support methods

  static void setSambaServiceInstanceName(
     const char * aNameSpaceP,
     Linux_SambaServiceInstanceName &anInstanceName) {

	      anInstanceName.setNamespace(aNameSpaceP);
              anInstanceName.setName(DEFAULT_SERVICE_NAME);
              anInstanceName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
              anInstanceName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
              anInstanceName.setSystemName(DEFAULT_SYSTEM_NAME);

  }


  static void setInstanceProperties(
      const char * aNameSpaceP, const char * instName,
      const Linux_SambaServiceInstanceName& anInstanceName,
      Linux_SambaHostsForServiceManualInstanceEnumeration& instances) {

	    Linux_SambaHostsForServiceInstanceName assocInstanceName;
            Linux_SambaHostsForServiceManualInstance assocManualInstance;

	    assocInstanceName.setNamespace(aNameSpaceP);

	    assocInstanceName.setGroupComponent(anInstanceName);

            Linux_SambaHostInstanceName partInstName;
              partInstName.setNamespace(aNameSpaceP);
	      partInstName.setName(instName);

	    assocInstanceName.setPartComponent(partInstName);
	    assocManualInstance.setInstanceName(assocInstanceName);

            instances.addElement(assocManualInstance);

  }




  static void setInstanceNameProperties(
       const char * aNameSpaceP, const char * instName,
       Linux_SambaHostsForServiceInstanceNameEnumeration& instances) {

	    Linux_SambaHostsForServiceInstanceName assocName;

	    assocName.setNamespace(aNameSpaceP);

	    Linux_SambaServiceInstanceName groupInstName;
              groupInstName.setNamespace(aNameSpaceP);
              groupInstName.setName(DEFAULT_SERVICE_NAME);
              groupInstName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
              groupInstName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
              groupInstName.setSystemName(DEFAULT_SYSTEM_NAME);

	    assocName.setGroupComponent(groupInstName);

            Linux_SambaHostInstanceName partInstName;
              partInstName.setNamespace(aNameSpaceP);
	      partInstName.setName(instName);

	    assocName.setPartComponent(partInstName);

            instances.addElement(assocName);

  }

  static bool referencesIsHostPresent(
     const char * aNameSpaceP,
     const char * hosts_list,
     const Linux_SambaHostInstanceName& aSourceInstanceName,
     Linux_SambaHostsForServiceManualInstanceEnumeration& aManualInstanceEnumeration) {

            SambaArray array ;

	    if (hosts_list){
	       array = SambaArray(hosts_list);
	       SambaArrayConstIterator iter ;

	      for (iter = array.begin(); iter != array.end(); ++iter)
	         if(array.isPresent(aSourceInstanceName.getName()))
	         {
	           Linux_SambaServiceInstanceName anInstanceName;
	           setSambaServiceInstanceName(aNameSpaceP,anInstanceName);
	           setInstanceProperties(aNameSpaceP,aSourceInstanceName.getName(),anInstanceName,aManualInstanceEnumeration);
	           return true;
	         }
	    }
	    return false;

  }

  static void setSambaHostInstanceProperties(
      const char * aNameSpaceP,
      const char * hostName,
      Linux_SambaHostInstanceEnumeration& instances){


            Linux_SambaHostInstanceName anInstName;
              anInstName.setNamespace(aNameSpaceP);
	      anInstName.setName(hostName);

	    Linux_SambaHostInstance inst;
	      inst.setInstanceName(anInstName);

            instances.addElement(inst);
  }

  static bool associatorsIsHostPresent(
   const char * aNameSpaceP,
   const char * hosts_list,
   const Linux_SambaHostInstanceName& aSourceInstanceName,
   Linux_SambaServiceInstanceEnumeration& anInstanceEnumeration) {

            SambaArray array ;

	    if (hosts_list){
	       array = SambaArray(hosts_list);
	       SambaArrayConstIterator iter ;

	      for (iter = array.begin(); iter != array.end(); ++iter)
	         if(array.isPresent(aSourceInstanceName.getName()))
	         {
	           Linux_SambaServiceInstanceName anInstanceName;
	             setSambaServiceInstanceName(aNameSpaceP,anInstanceName);
	           Linux_SambaServiceInstance anInstance;
	             anInstance.setInstanceName(anInstanceName);
	           anInstanceEnumeration.addElement(anInstance);
	           return true;
	         }
	    }
	    return false;

  }

  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaHostsForServiceResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaHostsForServiceInstanceNameEnumeration& anInstanceNameEnumeration) {

	    char* hosts_list = get_global_option(HOSTS_ALLOW);
	    SambaArray array_allow ;

	    if (hosts_list){
	       array_allow = SambaArray(hosts_list);
	       SambaArrayConstIterator iter ;

	      for (iter = array_allow.begin(); iter != array_allow.end(); ++iter)
		 setInstanceNameProperties(aNameSpaceP,((*iter).c_str()),anInstanceNameEnumeration);
	    }

	    hosts_list = get_global_option(HOSTS_DENY);
	    if (hosts_list){
	       SambaArray array_deny = SambaArray(hosts_list);
	       SambaArrayConstIterator iter;

	       for (iter = array_deny.begin(); iter != array_deny.end(); ++iter){
	          if (!array_allow.isPresent((*iter).c_str())){
	            array_allow.add((*iter).c_str());
		    setInstanceNameProperties(aNameSpaceP,((*iter).c_str()),anInstanceNameEnumeration);
		  }
	       }

	    }


	    char **printers = get_samba_printers_list();
	    char **shares  = get_shares_list();


	    if (printers){
	      for (int i = 0; printers[i]; i++){

	         char * hosts_list = get_option(printers[i],HOSTS_ALLOW);

		 if (hosts_list) {
		    SambaArray array2 = SambaArray(hosts_list);
		    SambaArrayConstIterator iter;

		    for (iter = array2.begin(); iter != array2.end(); ++iter)
		       if ( !(array_allow.isPresent( (*iter).c_str()) )){
	                 array_allow.add((*iter).c_str());
			 setInstanceNameProperties(aNameSpaceP,((*iter).c_str()),anInstanceNameEnumeration);
		       }
		 }

		 hosts_list = get_option(printers[i],HOSTS_DENY);
		 if (hosts_list) {
		    SambaArray array2 = SambaArray(hosts_list);
		    SambaArrayConstIterator iter;

		    for (iter = array2.begin(); iter != array2.end(); ++iter)
		       if ( !(array_allow.isPresent( (*iter).c_str()) )){
	                 array_allow.add((*iter).c_str());
			 setInstanceNameProperties(aNameSpaceP,((*iter).c_str()),anInstanceNameEnumeration);
		       }
		 }
	      }
	    }



	    if (shares){
	      for (int i = 0; shares[i]; i++){

	         char * hosts_list = get_option(shares[i],HOSTS_ALLOW);

		 if (hosts_list) {
		    SambaArray array2 = SambaArray(hosts_list);
		    SambaArrayConstIterator iter;

		    for (iter = array2.begin(); iter != array2.end(); ++iter)
		       if ( !(array_allow.isPresent( (*iter).c_str()) )){
	                 array_allow.add((*iter).c_str());
			 setInstanceNameProperties(aNameSpaceP,((*iter).c_str()),anInstanceNameEnumeration);
		       }
		 }

		 hosts_list = get_option(shares[i],HOSTS_DENY);
		 if (hosts_list) {
		    SambaArray array2 = SambaArray(hosts_list);
		    SambaArrayConstIterator iter;

		    for (iter = array2.begin(); iter != array2.end(); ++iter)
		       if ( !(array_allow.isPresent( (*iter).c_str()) )){
	                 array_allow.add((*iter).c_str());
			 setInstanceNameProperties(aNameSpaceP,((*iter).c_str()),anInstanceNameEnumeration);
		       }
		 }
	       }
	    }

  }


  //----------------------------------------------------------------------------

  void
  Linux_SambaHostsForServiceResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     const char** aPropertiesPP,
  	 Linux_SambaHostsForServiceManualInstanceEnumeration& aManualInstanceEnumeration) {

	    char* hosts_list = get_global_option(HOSTS_ALLOW);
	    SambaArray array_allow ;

	    if (hosts_list){
	       array_allow = SambaArray(hosts_list);
	       SambaArrayConstIterator iter ;

	      for (iter = array_allow.begin(); iter != array_allow.end(); ++iter){
	         Linux_SambaServiceInstanceName anInstanceName;
	         setSambaServiceInstanceName(aNameSpaceP, anInstanceName);
	         setInstanceProperties(aNameSpaceP,((*iter).c_str()),anInstanceName,aManualInstanceEnumeration);
              }
	    }

	    hosts_list = get_global_option(HOSTS_DENY);
	    if (hosts_list){
	       SambaArray array_deny = SambaArray(hosts_list);
	       SambaArrayConstIterator iter;

	       for (iter = array_deny.begin(); iter != array_deny.end(); ++iter)
	          if (!array_allow.isPresent((*iter).c_str())){
	            array_allow.add((*iter).c_str());
	            Linux_SambaServiceInstanceName anInstanceName;
	            setSambaServiceInstanceName(aNameSpaceP, anInstanceName);
	            setInstanceProperties(aNameSpaceP,((*iter).c_str()),anInstanceName,aManualInstanceEnumeration);
	       }
	    }


	    char **printers = get_samba_printers_list();
	    char **shares  = get_shares_list();


	    if (printers){
	      for (int i = 0; printers[i]; i++){

	         char * hosts_list = get_option(printers[i],HOSTS_ALLOW);

		 if (hosts_list) {
		    SambaArray array2 = SambaArray(hosts_list);
		    SambaArrayConstIterator iter;

		    for (iter = array2.begin(); iter != array2.end(); ++iter)
		       if ( !(array_allow.isPresent( (*iter).c_str()) )){
	                 array_allow.add((*iter).c_str());
			 Linux_SambaServiceInstanceName anInstanceName;
	                 setSambaServiceInstanceName(aNameSpaceP, anInstanceName);
			 setInstanceProperties(aNameSpaceP,((*iter).c_str()),anInstanceName,aManualInstanceEnumeration);
		       }
		 }

		 hosts_list = get_option(printers[i],HOSTS_DENY);
		 if (hosts_list) {
		    SambaArray array2 = SambaArray(hosts_list);
		    SambaArrayConstIterator iter;

		    for (iter = array2.begin(); iter != array2.end(); ++iter)
		       if ( !(array_allow.isPresent( (*iter).c_str()) )){
	                 array_allow.add((*iter).c_str());
			 Linux_SambaServiceInstanceName anInstanceName;
	                 setSambaServiceInstanceName(aNameSpaceP, anInstanceName);
			 setInstanceProperties(aNameSpaceP,((*iter).c_str()),anInstanceName,aManualInstanceEnumeration);
		       }
		 }
	      }
	    }


	    if (shares){
	      for (int i = 0; shares[i]; i++){

	         char * hosts_list = get_option(shares[i],HOSTS_ALLOW);

		 if (hosts_list) {
		    SambaArray array2 = SambaArray(hosts_list);
		    SambaArrayConstIterator iter;

		    for (iter = array2.begin(); iter != array2.end(); ++iter)
		       if ( !(array_allow.isPresent( (*iter).c_str()) )){
	                 array_allow.add((*iter).c_str());
			 Linux_SambaServiceInstanceName anInstanceName;
	                 setSambaServiceInstanceName(aNameSpaceP, anInstanceName);
			 setInstanceProperties(aNameSpaceP,((*iter).c_str()),anInstanceName,aManualInstanceEnumeration);
		       }
		 }

		 hosts_list = get_option(shares[i],HOSTS_DENY);
		 if (hosts_list) {
		    SambaArray array2 = SambaArray(hosts_list);
		    SambaArrayConstIterator iter;

		    for (iter = array2.begin(); iter != array2.end(); ++iter)
		       if ( !(array_allow.isPresent( (*iter).c_str()) )){
	                 array_allow.add((*iter).c_str());
	                 Linux_SambaServiceInstanceName anInstanceName;
	                 setSambaServiceInstanceName(aNameSpaceP, anInstanceName);
			 setInstanceProperties(aNameSpaceP,((*iter).c_str()),anInstanceName,aManualInstanceEnumeration);
		       }
		 }
	       }
	    }

  }


  //----------------------------------------------------------------------------

  Linux_SambaHostsForServiceManualInstance
  Linux_SambaHostsForServiceResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaHostsForServiceInstanceName& anInstanceName) {

    Linux_SambaHostsForServiceManualInstance manualInstance;
    manualInstance.setInstanceName(anInstanceName);

    if(strcasecmp(anInstanceName.getGroupComponent().getName(),DEFAULT_SERVICE_NAME)!=0){
       throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified Samba service is unknown!");
    }

    
    char* hosts_list = get_global_option(HOSTS_ALLOW);
    SambaArray array_allow ;

    if (hosts_list){
       array_allow = SambaArray(hosts_list);
       SambaArrayConstIterator iter ;

      for (iter = array_allow.begin(); iter != array_allow.end(); ++iter){
         if(array_allow.isPresent(anInstanceName.getPartComponent().getName())) {
           return manualInstance;
         }
      }
    }

    hosts_list = get_global_option(HOSTS_DENY);

    if (hosts_list){
       array_allow = SambaArray(hosts_list);
       SambaArrayConstIterator iter ;

      for (iter = array_allow.begin(); iter != array_allow.end(); ++iter){
         if(array_allow.isPresent(anInstanceName.getPartComponent().getName())) {
           return manualInstance;
         }
      }
    }
    
    char **printers = get_samba_printers_list();
    
    if (printers) {
    for (int i=0;printers[i];i++) { 
    
    hosts_list = get_option(printers[i],HOSTS_ALLOW);

    if (hosts_list){
       array_allow = SambaArray(hosts_list);
       SambaArrayConstIterator iter ;

      for (iter = array_allow.begin(); iter != array_allow.end(); ++iter){
         if(array_allow.isPresent(anInstanceName.getPartComponent().getName())) {
           return manualInstance;
         }
      }
    }
     
    hosts_list = get_option(printers[i],HOSTS_DENY);

    if (hosts_list){
       array_allow = SambaArray(hosts_list);
       SambaArrayConstIterator iter ;

      for (iter = array_allow.begin(); iter != array_allow.end(); ++iter){
         if(array_allow.isPresent(anInstanceName.getPartComponent().getName())) {
           return manualInstance;
         }
      }
    }
    }
    }
     
    char **shares = get_shares_list();
     
    if (shares) {

    for (int i=0;shares[i];i++) {
    hosts_list = get_option(shares[i],HOSTS_ALLOW);

    if (hosts_list){
       array_allow = SambaArray(hosts_list);
       SambaArrayConstIterator iter ;

      for (iter = array_allow.begin(); iter != array_allow.end(); ++iter){
         if(array_allow.isPresent(anInstanceName.getPartComponent().getName())) {
           return manualInstance;
         }
      }
    }
     
    hosts_list = get_option(shares[i],HOSTS_DENY);

    if (hosts_list){
       array_allow = SambaArray(hosts_list);
       SambaArrayConstIterator iter ;

      for (iter = array_allow.begin(); iter != array_allow.end(); ++iter){
         if(array_allow.isPresent(anInstanceName.getPartComponent().getName())) {
           return manualInstance;
         }
      }
    }
    }
    }
     
    throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified Host is not defined!");
    return manualInstance;

  }

  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaHostsForServiceResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaHostsForServiceManualInstance& aManualInstance) { }
  */

  //----------------------------------------------------------------------------
  /*
  Linux_SambaHostsForServiceInstanceName
  Linux_SambaHostsForServiceResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaHostsForServiceManualInstance& aManualInstance) {


  }
  */

  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaHostsForServiceResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaHostsForServiceInstanceName& anInstanceName) {


  }
  */


  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaHostsForServiceResourceAccess::referencesPartComponent(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaServiceInstanceName& aSourceInstanceName,
    Linux_SambaHostsForServiceManualInstanceEnumeration& aManualInstanceEnumeration) {

      if (!strcmp(aSourceInstanceName.getName(),DEFAULT_SERVICE_NAME))
      {


      	    char* hosts_list = get_global_option(HOSTS_ALLOW);
      	    SambaArray array_allow ;

      	    if (hosts_list){
      	       array_allow = SambaArray(hosts_list);
      	       SambaArrayConstIterator iter ;

      	      for (iter = array_allow.begin(); iter != array_allow.end(); ++iter)
      		 setInstanceProperties(aNameSpaceP,((*iter).c_str()),aSourceInstanceName,aManualInstanceEnumeration);
      	    }

      	    hosts_list = get_global_option(HOSTS_DENY);
      	    if (hosts_list){
      	       SambaArray array_deny = SambaArray(hosts_list);
      	       SambaArrayConstIterator iter;

      	       for (iter = array_deny.begin(); iter != array_deny.end(); ++iter){
      	          if (!array_allow.isPresent((*iter).c_str())){
      	            array_allow.add((*iter).c_str());
      		    setInstanceProperties(aNameSpaceP,((*iter).c_str()),aSourceInstanceName,aManualInstanceEnumeration);
      		  }
      	       }

      	    }


      	    char **printers = get_samba_printers_list();
      	    char **shares  = get_shares_list();


      	    if (printers){
      	      for (int i = 0; printers[i]; i++){

      	         char * hosts_list = get_option(printers[i],HOSTS_ALLOW);

      		 if (hosts_list) {
      		    SambaArray array2 = SambaArray(hosts_list);
      		    SambaArrayConstIterator iter;

      		    for (iter = array2.begin(); iter != array2.end(); ++iter)
      		       if ( !(array_allow.isPresent( (*iter).c_str()) )){
      	                 array_allow.add((*iter).c_str());
      			 setInstanceProperties(aNameSpaceP,((*iter).c_str()),aSourceInstanceName,aManualInstanceEnumeration);
      		       }
      		 }

      		 hosts_list = get_option(printers[i],HOSTS_DENY);
      		 if (hosts_list) {
      		    SambaArray array2 = SambaArray(hosts_list);
      		    SambaArrayConstIterator iter;

      		    for (iter = array2.begin(); iter != array2.end(); ++iter)
      		       if ( !(array_allow.isPresent( (*iter).c_str()) )){
      	                 array_allow.add((*iter).c_str());
      			 setInstanceProperties(aNameSpaceP,((*iter).c_str()),aSourceInstanceName,aManualInstanceEnumeration);
      		       }
      		 }
      	      }
      	    }



      	    if (shares){
      	      for (int i = 0; shares[i]; i++){

      	         char * hosts_list = get_option(shares[i],HOSTS_ALLOW);

      		 if (hosts_list) {
      		    SambaArray array2 = SambaArray(hosts_list);
      		    SambaArrayConstIterator iter;

      		    for (iter = array2.begin(); iter != array2.end(); ++iter)
      		       if ( !(array_allow.isPresent( (*iter).c_str()) )){
      	                 array_allow.add((*iter).c_str());
      			 setInstanceProperties(aNameSpaceP,((*iter).c_str()),aSourceInstanceName,aManualInstanceEnumeration);
      		       }
      		 }

      		 hosts_list = get_option(shares[i],HOSTS_DENY);
      		 if (hosts_list) {
      		    SambaArray array2 = SambaArray(hosts_list);
      		    SambaArrayConstIterator iter;

      		    for (iter = array2.begin(); iter != array2.end(); ++iter)
      		       if ( !(array_allow.isPresent( (*iter).c_str()) )){
      	                 array_allow.add((*iter).c_str());
      			 setInstanceProperties(aNameSpaceP,((*iter).c_str()),aSourceInstanceName,aManualInstanceEnumeration);
      		       }
      		 }
      	       }
      	    }

      }

  }


  //----------------------------------------------------------------------------

  void Linux_SambaHostsForServiceResourceAccess::referencesGroupComponent(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaHostInstanceName& aSourceInstanceName,
    Linux_SambaHostsForServiceManualInstanceEnumeration& aManualInstanceEnumeration) {

	    char* hosts_list;

	    hosts_list = get_global_option(HOSTS_ALLOW);
	    if (referencesIsHostPresent(aNameSpaceP, hosts_list, aSourceInstanceName, aManualInstanceEnumeration))
	      return;

	    hosts_list = get_global_option(HOSTS_DENY);
	    if (referencesIsHostPresent(aNameSpaceP, hosts_list, aSourceInstanceName, aManualInstanceEnumeration))
	      return;

	    char **printers = get_samba_printers_list();
	    if (printers){
	      for (int i = 0; printers[i]; i++){

                 hosts_list = get_option(printers[i],HOSTS_ALLOW);
                 if (referencesIsHostPresent(aNameSpaceP, hosts_list, aSourceInstanceName, aManualInstanceEnumeration))
	           return;

                 hosts_list = get_option(printers[i],HOSTS_DENY);
                 if (referencesIsHostPresent(aNameSpaceP, hosts_list, aSourceInstanceName, aManualInstanceEnumeration))
	           return;
	      }
	    }


	    char **shares = get_shares_list();
	    if (shares){
	      for (int i = 0; shares[i]; i++){

                 hosts_list = get_option(shares[i],HOSTS_ALLOW);
                 if (referencesIsHostPresent(aNameSpaceP, hosts_list, aSourceInstanceName, aManualInstanceEnumeration))
	           return;

                 hosts_list = get_option(shares[i],HOSTS_DENY);
                 if (referencesIsHostPresent(aNameSpaceP, hosts_list, aSourceInstanceName, aManualInstanceEnumeration))
	           return;
	      }
	    }

  }


  //----------------------------------------------------------------------------

  void Linux_SambaHostsForServiceResourceAccess::associatorsPartComponent(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaServiceInstanceName& aSourceInstanceName,
    Linux_SambaHostInstanceEnumeration& anInstanceEnumeration) {

      if (!strcmp(aSourceInstanceName.getName(),DEFAULT_SERVICE_NAME))
      {

      	    char* hosts_list = get_global_option(HOSTS_ALLOW);
      	    SambaArray array_allow ;

      	    if (hosts_list){
      	       array_allow = SambaArray(hosts_list);
      	       SambaArrayConstIterator iter ;

      	      for (iter = array_allow.begin(); iter != array_allow.end(); ++iter)
      		 setSambaHostInstanceProperties(aNameSpaceP,((*iter).c_str()),anInstanceEnumeration);
      	    }

      	    hosts_list = get_global_option(HOSTS_DENY);
      	    if (hosts_list){
      	       SambaArray array_deny = SambaArray(hosts_list);
      	       SambaArrayConstIterator iter;

      	       for (iter = array_deny.begin(); iter != array_deny.end(); ++iter){
      	          if (!array_allow.isPresent((*iter).c_str())){
      	            array_allow.add((*iter).c_str());
      		    setSambaHostInstanceProperties(aNameSpaceP,((*iter).c_str()),anInstanceEnumeration);
      		  }
      	       }

      	    }


      	    char **printers = get_samba_printers_list();
      	    char **shares  = get_shares_list();


      	    if (printers){
      	      for (int i = 0; printers[i]; i++){

      	         char * hosts_list = get_option(printers[i],HOSTS_ALLOW);

      		 if (hosts_list) {
      		    SambaArray array2 = SambaArray(hosts_list);
      		    SambaArrayConstIterator iter;

      		    for (iter = array2.begin(); iter != array2.end(); ++iter)
      		       if ( !(array_allow.isPresent( (*iter).c_str()) )){
      	                 array_allow.add((*iter).c_str());
      			 setSambaHostInstanceProperties(aNameSpaceP,((*iter).c_str()),anInstanceEnumeration);
      		       }
      		 }

      		 hosts_list = get_option(printers[i],HOSTS_DENY);
      		 if (hosts_list) {
      		    SambaArray array2 = SambaArray(hosts_list);
      		    SambaArrayConstIterator iter;

      		    for (iter = array2.begin(); iter != array2.end(); ++iter)
      		       if ( !(array_allow.isPresent( (*iter).c_str()) )){
      	                 array_allow.add((*iter).c_str());
      			 setSambaHostInstanceProperties(aNameSpaceP,((*iter).c_str()),anInstanceEnumeration);
      		       }
      		 }
      	      }
      	    }



      	    if (shares){
      	      for (int i = 0; shares[i]; i++){

      	         char * hosts_list = get_option(shares[i],HOSTS_ALLOW);

      		 if (hosts_list) {
      		    SambaArray array2 = SambaArray(hosts_list);
      		    SambaArrayConstIterator iter;

      		    for (iter = array2.begin(); iter != array2.end(); ++iter)
      		       if ( !(array_allow.isPresent( (*iter).c_str()) )){
      	                 array_allow.add((*iter).c_str());
      			 setSambaHostInstanceProperties(aNameSpaceP,((*iter).c_str()),anInstanceEnumeration);
      		       }
      		 }

      		 hosts_list = get_option(shares[i],HOSTS_DENY);
      		 if (hosts_list) {
      		    SambaArray array2 = SambaArray(hosts_list);
      		    SambaArrayConstIterator iter;

      		    for (iter = array2.begin(); iter != array2.end(); ++iter)
      		       if ( !(array_allow.isPresent( (*iter).c_str()) )){
      	                 array_allow.add((*iter).c_str());
      			 setSambaHostInstanceProperties(aNameSpaceP,((*iter).c_str()),anInstanceEnumeration);
      		       }
      		 }
      	       }
      	    }

      }

  }


  //----------------------------------------------------------------------------

  void Linux_SambaHostsForServiceResourceAccess::associatorsGroupComponent(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaHostInstanceName& aSourceInstanceName,
    Linux_SambaServiceInstanceEnumeration& anInstanceEnumeration) {

	    char* hosts_list;

	    hosts_list = get_global_option(HOSTS_ALLOW);
	    if (associatorsIsHostPresent(aNameSpaceP,hosts_list, aSourceInstanceName, anInstanceEnumeration))
	      return;

	    hosts_list = get_global_option(HOSTS_DENY);
	    if (associatorsIsHostPresent(aNameSpaceP,hosts_list, aSourceInstanceName, anInstanceEnumeration))
	      return;


	    char **printers = get_samba_printers_list();
	    if (printers){

	      for (int i = 0; printers[i]; i++){

                 hosts_list = get_option(printers[i],HOSTS_ALLOW);
                 if (associatorsIsHostPresent(aNameSpaceP,hosts_list, aSourceInstanceName, anInstanceEnumeration))
	           return;

                 hosts_list = get_option(printers[i],HOSTS_DENY);
                 if (associatorsIsHostPresent(aNameSpaceP,hosts_list, aSourceInstanceName, anInstanceEnumeration))
	           return;
	      }
	    }


	    char **shares = get_shares_list();
	    if (shares){

	      for (int i = 0; shares[i]; i++){

                 hosts_list = get_option(shares[i],HOSTS_ALLOW);
                 if (associatorsIsHostPresent(aNameSpaceP,hosts_list, aSourceInstanceName, anInstanceEnumeration))
	           return;

                 hosts_list = get_option(shares[i],HOSTS_DENY);
                 if (associatorsIsHostPresent(aNameSpaceP,hosts_list, aSourceInstanceName, anInstanceEnumeration))
	           return;
	      }
	    }

  }



  // extrinsic methods


}


