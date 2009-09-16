// =======================================================================
// Linux_SambaHostResourceAccess.cpp 
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
// http://www.opensource.org/licenses/eclipse-1.0.php
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
#include "Linux_SambaHostResourceAccess.h"

#include <string>
#include <list>

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"
#include "smt_smb_array.h"

namespace genProvider {

  //----------------------------------------------------------------------------
  //Linux_SambaHostResourceAccess::Linux_SambaHostResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaHostResourceAccess::~Linux_SambaHostResourceAccess() { }

  // support methods

  static void setInstanceNameProperties(
     const char * nsp, const char * instName,
     Linux_SambaHostInstanceNameEnumeration& anInstnames) {

     Linux_SambaHostInstanceName anInstanceName;

      anInstanceName.setNamespace(nsp);
      anInstanceName.setName( instName);
      anInstnames.addElement(anInstanceName);
  }


  static void setInstanceProperties(
     const char * nsp, const char * instName,
     Linux_SambaHostManualInstanceEnumeration& instances) {

     Linux_SambaHostInstanceName instanceName;
     Linux_SambaHostManualInstance aManualInstance;

      instanceName.setNamespace(nsp);
      instanceName.setName(instName);
      aManualInstance.setInstanceName(instanceName);
      instances.addElement(aManualInstance);

  }

  /*static const char * get_effective_hosts_list(const char * service, const char *option)
  {

        const char * hosts_list;
        SambaArray temp1, temp2;

        hosts_list = get_global_option(option);
        if (hosts_list)
	{
          temp1 = SambaArray(hosts_list);
	}

	hosts_list = get_option(service,option);
	if (hosts_list)
	{
	  temp2 = SambaArray(hosts_list);
	}

	if (!temp1.chkEmpty() && !temp2.chkEmpty())
	{
		SambaArrayConstIterator iter;
		for (iter = temp2.begin(); iter != temp2.end(); ++iter)
		   if ( !temp1.isPresent( string((*iter).c_str())) )
		     temp1.add( string((*iter).c_str()));
			     hosts_list = temp1.toString().c_str();
	}
	else
	if(!temp1.chkEmpty())
		hosts_list = temp1.toString().c_str();
 	else
 	if(!temp2.chkEmpty())
 		hosts_list = temp2.toString().c_str();
 	else
 		hosts_list = NULL;

 	return hosts_list;

  }    */


  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaHostResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaHostInstanceNameEnumeration& anInstanceNameEnumeration) {

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


	    char **shares  = get_shares_list();

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
  Linux_SambaHostResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     const char** aPropertiesPP,
  	 Linux_SambaHostManualInstanceEnumeration& aManualInstanceEnumeration) {

	    char* hosts_list = get_global_option(HOSTS_ALLOW);
	    SambaArray array_allow ;

	    if (hosts_list){
	       array_allow = SambaArray(hosts_list);
	       SambaArrayConstIterator iter ;

	      for (iter = array_allow.begin(); iter != array_allow.end(); ++iter)
	         setInstanceProperties(aNameSpaceP,((*iter).c_str()),aManualInstanceEnumeration);
	    }

	    hosts_list = get_global_option(HOSTS_DENY);
	    if (hosts_list){
	       SambaArray array_deny = SambaArray(hosts_list);
	       SambaArrayConstIterator iter;

	       for (iter = array_deny.begin(); iter != array_deny.end(); ++iter)
	          if (!array_allow.isPresent((*iter).c_str())){
	            array_allow.add((*iter).c_str());
	            setInstanceProperties(aNameSpaceP,((*iter).c_str()),aManualInstanceEnumeration);
	       }
	    }


	    char **printers = get_samba_printers_list();

	    if (printers){
	      for (int i = 0; printers[i]; i++){

	         char * hosts_list = get_option(printers[i],HOSTS_ALLOW);

		 if (hosts_list) {
		    SambaArray array2 = SambaArray(hosts_list);
		    SambaArrayConstIterator iter;

		    for (iter = array2.begin(); iter != array2.end(); ++iter)
		       if ( !(array_allow.isPresent( (*iter).c_str()) )){
	                 array_allow.add((*iter).c_str());
			 setInstanceProperties(aNameSpaceP,((*iter).c_str()),aManualInstanceEnumeration);
		       }
		 }

		 hosts_list = get_option(printers[i],HOSTS_DENY);
		 if (hosts_list) {
		    SambaArray array2 = SambaArray(hosts_list);
		    SambaArrayConstIterator iter;

		    for (iter = array2.begin(); iter != array2.end(); ++iter)
		       if ( !(array_allow.isPresent( (*iter).c_str()) )){
	                 array_allow.add((*iter).c_str());
			 setInstanceProperties(aNameSpaceP,((*iter).c_str()),aManualInstanceEnumeration);
		       }
		 }
	      }
	    }

	    char **shares  = get_shares_list();

	    if (shares){
	      for (int i = 0; shares[i]; i++){

	         char * hosts_list = get_option(shares[i],HOSTS_ALLOW);

		 if (hosts_list) {
		    SambaArray array2 = SambaArray(hosts_list);
		    SambaArrayConstIterator iter;

		    for (iter = array2.begin(); iter != array2.end(); ++iter)
		       if ( !(array_allow.isPresent( (*iter).c_str()) )){
	                 array_allow.add((*iter).c_str());
			 setInstanceProperties(aNameSpaceP,((*iter).c_str()),aManualInstanceEnumeration);
		       }
		 }

		 hosts_list = get_option(shares[i],HOSTS_DENY);
		 if (hosts_list) {
		    SambaArray array2 = SambaArray(hosts_list);
		    SambaArrayConstIterator iter;

		    for (iter = array2.begin(); iter != array2.end(); ++iter)
		       if ( !(array_allow.isPresent( (*iter).c_str()) )){
	                 array_allow.add((*iter).c_str());
			 setInstanceProperties(aNameSpaceP,((*iter).c_str()),aManualInstanceEnumeration);
		       }
		 }
	       }
	    }

  }


  //----------------------------------------------------------------------------

  Linux_SambaHostManualInstance
  Linux_SambaHostResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaHostInstanceName& anInstanceName) {

    Linux_SambaHostManualInstance manualInstance ;
    manualInstance.setInstanceName(anInstanceName);
   
    char* hosts_list = get_global_option(HOSTS_ALLOW);
    SambaArray array_allow ;

    if (hosts_list){
       array_allow = SambaArray(hosts_list);
       SambaArrayConstIterator iter ;

      for (iter = array_allow.begin(); iter != array_allow.end(); ++iter){
         if(array_allow.isPresent(anInstanceName.getName())) {
           return manualInstance;
         }
      }
    }

    hosts_list = get_global_option(HOSTS_DENY);

    if (hosts_list){
       array_allow = SambaArray(hosts_list);
       SambaArrayConstIterator iter ;

      for (iter = array_allow.begin(); iter != array_allow.end(); ++iter){
         if(array_allow.isPresent(anInstanceName.getName())) {
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
         if(array_allow.isPresent(anInstanceName.getName())) {
           return manualInstance;
         }
      }
    }

    hosts_list = get_global_option(HOSTS_DENY);

    if (hosts_list){
       array_allow = SambaArray(hosts_list);
       SambaArrayConstIterator iter ;

      for (iter = array_allow.begin(); iter != array_allow.end(); ++iter){
         if(array_allow.isPresent(anInstanceName.getName())) {
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
         if(array_allow.isPresent(anInstanceName.getName())) {
           return manualInstance;
         }
      }
    }

    hosts_list = get_global_option(HOSTS_DENY);

    if (hosts_list){
       array_allow = SambaArray(hosts_list);
       SambaArrayConstIterator iter ;

      for (iter = array_allow.begin(); iter != array_allow.end(); ++iter){
         if(array_allow.isPresent(anInstanceName.getName())) {
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
  Linux_SambaHostResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaHostManualInstance& aManualInstance) { }
  */

  //----------------------------------------------------------------------------
  /*
  Linux_SambaHostInstanceName
  Linux_SambaHostResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaHostManualInstance& aManualInstance) { }
  */

  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaHostResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaHostInstanceName& anInstanceName) { }
	*/



  // extrinsic methods


}


