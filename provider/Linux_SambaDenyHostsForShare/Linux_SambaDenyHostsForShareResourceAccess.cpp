// =======================================================================
// Linux_SambaDenyHostsForShareResourceAccess.cpp 
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
// =======================================================================
//
//
#include "Linux_SambaDenyHostsForShareResourceAccess.h"

#include <string>
#include <list>

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"
#include "smt_smb_array.h"


namespace genProvider {

  //----------------------------------------------------------------------------
  //Linux_SambaDenyHostsForShareResourceAccess::Linux_SambaDenyHostsForShareResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaDenyHostsForShareResourceAccess::~Linux_SambaDenyHostsForShareResourceAccess() { }

  // Support methods...

  static const char * get_effective_hosts_list(const char * service, const char *option)
  {

    const char * hosts_list;
    char * ret_value;
    SambaArray temp1, temp2;
    string str_hosts_list;

    hosts_list = get_global_option(option);
    if (hosts_list)
      temp1 = SambaArray(hosts_list);

    hosts_list = get_option(service,option);
    if (hosts_list)
      temp2 = SambaArray(hosts_list);

    if (!temp1.chkEmpty() && !temp2.chkEmpty()) {
      SambaArrayConstIterator iter;
      for (iter = temp2.begin(); iter != temp2.end(); ++iter)
         if ( !temp1.isPresent( string((*iter).c_str())) )
           temp1.add( string((*iter).c_str()));
      str_hosts_list = temp1.toString();
      hosts_list = str_hosts_list.c_str();
    }
    else if (!temp1.chkEmpty()) {
      str_hosts_list = temp1.toString();
      hosts_list = str_hosts_list.c_str();
    }
    else if (!temp2.chkEmpty()) {
      str_hosts_list = temp2.toString();
      hosts_list = str_hosts_list.c_str();
    }
    else
      hosts_list = NULL;

    if (hosts_list)
    {
      ret_value = (char *)malloc((strlen(hosts_list)+1));
      strcpy(ret_value,hosts_list);
    }
    else
      ret_value = NULL;

    return ret_value;

  }

  static void set_referencesGroupComponent(
    const char * aNameSpaceP,
    const char * share,
    const Linux_SambaHostInstanceName& aSourceInstanceName,
    Linux_SambaDenyHostsForShareManualInstanceEnumeration& aManualInstanceEnumeration) {

      Linux_SambaDenyHostsForShareManualInstance manualInstance;
      Linux_SambaDenyHostsForShareInstanceName instName;

      instName.setNamespace(aNameSpaceP);
      instName.setPartComponent(aSourceInstanceName);

      Linux_SambaShareOptionsInstanceName shareInstName;
      shareInstName.setNamespace(aNameSpaceP);
      shareInstName.setName(share);
      shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);

      instName.setGroupComponent(shareInstName);

      manualInstance.setInstanceName(instName);
      aManualInstanceEnumeration.addElement(manualInstance);

  }

  static void setInstanceProperties(
      const char * share,
      Linux_SambaShareOptionsInstance& instance) {

    char *option;

	option = get_option(share,AVAILABLE);
	if ( option )
	  if(strcasecmp(option,YES) == 0)
	    instance.setAvailable( true );
	  else
	    instance.setAvailable( false );

	option = get_option(share,COMMENT);
	if ( option )
	  instance.setComment(option);

	option = get_option(share,PATH);
	if ( option )
	  instance.setPath(option);

	option = get_option(share,PRINTABLE);
	if ( option )
	  if(strcasecmp(option,"yes") == 0)
	    instance.setPrintable( true );
	  else
	    instance.setPrintable( false );
  }


  static void set_associatorsGroupComponent(
      const char * aNameSpaceP,
      const char * share,
      Linux_SambaShareOptionsInstanceEnumeration& anInstanceEnumeration) {

      Linux_SambaShareOptionsInstance instance;
      Linux_SambaShareOptionsInstanceName shareInstName;

      shareInstName.setNamespace(aNameSpaceP);
      shareInstName.setName(share);
      shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);

      instance.setInstanceName(shareInstName);

      setInstanceProperties(share,instance);

      anInstanceEnumeration.addElement(instance);
  }

  static void set_associatorsPartComponent(
    const char * aNameSpaceP,
    const char * instanceName,
    Linux_SambaHostInstanceEnumeration& anInstanceEnumeration) {

         Linux_SambaHostInstance instance;
         Linux_SambaHostInstanceName secInstName;

         secInstName.setNamespace(aNameSpaceP);
         secInstName.setName( instanceName );

         instance.setInstanceName(secInstName);

         anInstanceEnumeration.addElement(instance);

  }


  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaDenyHostsForShareResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaDenyHostsForShareInstanceNameEnumeration& anInstanceNameEnumeration) {

    char **shares = get_shares_list();

    for(int i=0; shares[i] ; i++)
    {

      const char * hosts_allow = get_effective_hosts_list(shares[i],HOSTS_ALLOW);
      const char * hosts_deny  = get_effective_hosts_list(shares[i],HOSTS_DENY);

      if (hosts_deny)
      {

        SambaArray array_deny = SambaArray(hosts_deny);
        SambaArray array_allow  = SambaArray(hosts_allow);
        SambaArrayConstIterator iter;

        for ( iter = array_deny.begin(); iter != array_deny.end(); ++iter){
           if (!array_allow.isPresent( (*iter).c_str())){
             Linux_SambaDenyHostsForShareManualInstance manualInstance;
             Linux_SambaDenyHostsForShareInstanceName instName;

             instName.setNamespace(aNameSpaceP);

           Linux_SambaShareOptionsInstanceName shareInstName;
              shareInstName.setNamespace(aNameSpaceP);
              shareInstName.setName(shares[i]);
              shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);

             Linux_SambaHostInstanceName secInstName;
             secInstName.setNamespace(aNameSpaceP);
             secInstName.setName( (*iter).c_str() );

             instName.setPartComponent(secInstName);
             instName.setGroupComponent(shareInstName);

             anInstanceNameEnumeration.addElement(instName);
           }
        }
      }
      if (hosts_allow) free((char*)hosts_allow);
      if (hosts_deny) free((char*)hosts_deny);

    }

  }


  //----------------------------------------------------------------------------

  void
  Linux_SambaDenyHostsForShareResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     const char** aPropertiesPP,
  	 Linux_SambaDenyHostsForShareManualInstanceEnumeration& aManualInstanceEnumeration) {

    char **shares = get_shares_list();

    for(int i=0; shares[i] ; i++)
    {

      const char * hosts_allow = get_effective_hosts_list(shares[i],HOSTS_ALLOW);
      const char * hosts_deny  = get_effective_hosts_list(shares[i],HOSTS_DENY);

      if (hosts_deny)
      {

        SambaArray array_deny = SambaArray(hosts_deny);
        SambaArray array_allow  = SambaArray(hosts_allow);
        SambaArrayConstIterator iter;

        for ( iter = array_deny.begin(); iter != array_deny.end(); ++iter){
           if (!array_allow.isPresent( (*iter).c_str())){
             Linux_SambaDenyHostsForShareManualInstance manualInstance;
             Linux_SambaDenyHostsForShareInstanceName instName;

             instName.setNamespace(aNameSpaceP);


           Linux_SambaShareOptionsInstanceName shareInstName;
              shareInstName.setNamespace(aNameSpaceP);
              shareInstName.setName(shares[i]);
              shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);

             Linux_SambaHostInstanceName secInstName;
             secInstName.setNamespace(aNameSpaceP);
             secInstName.setName( (*iter).c_str() );

             instName.setPartComponent(secInstName);
             instName.setGroupComponent(shareInstName);

             manualInstance.setInstanceName(instName);
             aManualInstanceEnumeration.addElement(manualInstance);
           }
        }
      }
      if (hosts_allow) free((char*)hosts_allow);
      if (hosts_deny) free((char*)hosts_deny);
    }

  }


  //----------------------------------------------------------------------------

  Linux_SambaDenyHostsForShareManualInstance
  Linux_SambaDenyHostsForShareResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaDenyHostsForShareInstanceName& anInstanceName) {

    Linux_SambaDenyHostsForShareManualInstance manualInstance;
    int flag = 0;
    char **shares = get_shares_list();

    int i;

    for (i=0; shares[i] ; i++)
       if (strcasecmp(anInstanceName.getGroupComponent().getName(),shares[i])==0 &&
           strcasecmp(anInstanceName.getGroupComponent().getInstanceID(),DEFAULT_INSTANCE_ID)==0) {
         flag = 1;
         break;
       }

    if (!flag)
        throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The specified share instance does not exist!");

    if(!validHostName(anInstanceName.getPartComponent().getName())){
        throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Invalid Host Name!");
    }

    const char * hosts_allow = get_effective_hosts_list(shares[i],HOSTS_ALLOW);
    const char * hosts_deny  = get_effective_hosts_list(shares[i],HOSTS_DENY);

    if (hosts_deny)
    {

      SambaArray array_deny = SambaArray(hosts_deny);
      SambaArray array_allow  = SambaArray(hosts_allow);
      SambaArrayConstIterator iter;

      for ( iter = array_deny.begin(); iter != array_deny.end(); ++iter){
         if (!array_allow.isPresent( (*iter).c_str())){
           manualInstance.setInstanceName(anInstanceName);
           if (hosts_allow) free((char *)hosts_allow);
           if (hosts_deny) free((char *)hosts_deny);
           return manualInstance;
         }
      }
    }

    if (hosts_allow) free((char *)hosts_allow);
    if (hosts_deny) free((char *)hosts_deny);
    throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The specified instance does not exist!");

  }

  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaDenyHostsForShareResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaDenyHostsForShareManualInstance& aManualInstance) { }
  */

  //----------------------------------------------------------------------------

  Linux_SambaDenyHostsForShareInstanceName
  Linux_SambaDenyHostsForShareResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaDenyHostsForShareManualInstance& aManualInstance) {

    int flag = 0;
    char **shares = get_shares_list();

    for (int i=0; shares[i] ; i++)
       if (strcasecmp(aManualInstance.getInstanceName().getGroupComponent().getName(),shares[i])==0&&
           strcasecmp(aManualInstance.getInstanceName().getGroupComponent().getInstanceID(),DEFAULT_INSTANCE_ID)==0) {
         flag = 1;
         break;
       }

    if(flag) {
      SambaArray array = SambaArray();
      char* hosts_list = get_option(aManualInstance.getInstanceName().getGroupComponent().getName(),HOSTS_DENY);

      if(hosts_list)
        array.populate(hosts_list);

      if(!validHostName(aManualInstance.getInstanceName().getPartComponent().getName())){
        throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Invalid Host Name!");
      }else{
        if(!array.isPresent(string( aManualInstance.getInstanceName().getPartComponent().getName() ))) {
	  array.add( string( aManualInstance.getInstanceName().getPartComponent().getName() ) );

	  set_share_option(aManualInstance.getInstanceName().getGroupComponent().getName(),HOSTS_DENY,array.toString().c_str());
        }
        else 
	        throw CmpiStatus(CMPI_RC_ERR_ALREADY_EXISTS,"Instance already exists!");        

      }

      //delete hostname from global and share's allow list if present...


      hosts_list = get_option(aManualInstance.getInstanceName().getGroupComponent().getName(),HOSTS_ALLOW);
      SambaArray array_share = SambaArray();
      if(hosts_list)
        array_share.populate(hosts_list);


        if(array_share.isPresent(string( aManualInstance.getInstanceName().getPartComponent().getName() ))) {
	  array_share.remove( string( aManualInstance.getInstanceName().getPartComponent().getName() ) );

	  set_share_option(aManualInstance.getInstanceName().getGroupComponent().getName(),HOSTS_ALLOW,array_share.toString().c_str());
        }

    }
    else 
    	throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Instance could not be created!");    

    return aManualInstance.getInstanceName();

  }


  //----------------------------------------------------------------------------

  void
  Linux_SambaDenyHostsForShareResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaDenyHostsForShareInstanceName& anInstanceName) {

    int flag = 0;
    char **shares = get_shares_list();

    for (int i=0; shares[i] ; i++)
       if (strcasecmp(anInstanceName.getGroupComponent().getName(),shares[i])==0 &&
           strcasecmp(anInstanceName.getGroupComponent().getInstanceID(),DEFAULT_INSTANCE_ID)==0) {
         flag = 1;
         break;
       }

    if(flag) {
      SambaArray array = SambaArray();
      char* hosts_list = get_option(anInstanceName.getGroupComponent().getName(),HOSTS_DENY);

      if(hosts_list)
        array.populate(hosts_list);

      if(!validHostName(anInstanceName.getPartComponent().getName())){
        throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Invalid Host Name!");

      } else {
        if(array.isPresent(string( anInstanceName.getPartComponent().getName() ))) {
	  array.remove( string( anInstanceName.getPartComponent().getName() ) );

	  set_share_option(anInstanceName.getGroupComponent().getName(),HOSTS_DENY,array.toString().c_str());
        }
        else
        	throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "Instance could not be found!");        
      }
    }
    else
    	throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Instance could not be deleted!");    

  }



  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaDenyHostsForShareResourceAccess::referencesPartComponent(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
    Linux_SambaDenyHostsForShareManualInstanceEnumeration& aManualInstanceEnumeration) {

    const char * hosts_allow = get_effective_hosts_list(aSourceInstanceName.getName(),HOSTS_ALLOW);
    const char * hosts_deny  = get_effective_hosts_list(aSourceInstanceName.getName(),HOSTS_DENY);

    if (hosts_deny)
    {

        SambaArray array_deny = SambaArray(hosts_deny);
        SambaArray array_allow  = SambaArray(hosts_allow);
        SambaArrayConstIterator iter;

        for ( iter = array_deny.begin(); iter != array_deny.end(); ++iter){
           if (!array_allow.isPresent( (*iter).c_str())){
             Linux_SambaDenyHostsForShareManualInstance manualInstance;
             Linux_SambaDenyHostsForShareInstanceName instName;

             instName.setNamespace(aNameSpaceP);
             instName.setGroupComponent(aSourceInstanceName);

             Linux_SambaHostInstanceName secInstName;
             secInstName.setNamespace(aNameSpaceP);
             secInstName.setName( (*iter).c_str() );

             instName.setPartComponent(secInstName);

             manualInstance.setInstanceName(instName);
             aManualInstanceEnumeration.addElement(manualInstance);
           }
        }
	if (hosts_allow) free((char*)hosts_allow);
	if (hosts_deny) free((char*)hosts_deny);
    }

  }


  //----------------------------------------------------------------------------

  void Linux_SambaDenyHostsForShareResourceAccess::referencesGroupComponent(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaHostInstanceName& aSourceInstanceName,
    Linux_SambaDenyHostsForShareManualInstanceEnumeration& aManualInstanceEnumeration) {

    char ** shares = get_shares_list();

       if (shares) {
         for (int i=0; shares[i]; i++) {

            const char * hosts_allow = get_effective_hosts_list(shares[i],HOSTS_ALLOW);
            const char * hosts_deny  = get_effective_hosts_list(shares[i],HOSTS_DENY);


            if (hosts_deny){
              SambaArray array_deny = SambaArray(hosts_deny);
         	if (array_deny.isPresent(aSourceInstanceName.getName())){
         	  if (hosts_allow){
              	    SambaArray array_allow = SambaArray(hosts_allow);
               	    if (!array_allow.isPresent(aSourceInstanceName.getName())){
                      set_referencesGroupComponent(aNameSpaceP, shares[i], aSourceInstanceName, aManualInstanceEnumeration);
               	    }
          	  }
               	  else
               	    set_referencesGroupComponent(aNameSpaceP, shares[i], aSourceInstanceName, aManualInstanceEnumeration);
               	}
             }
             if (hosts_allow) free((char*)hosts_allow);
             if (hosts_deny) free((char*)hosts_deny);
         }
       }

  }


  //----------------------------------------------------------------------------

  void Linux_SambaDenyHostsForShareResourceAccess::associatorsPartComponent(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
    Linux_SambaHostInstanceEnumeration& anInstanceEnumeration) {

    const char * hosts_allow = get_effective_hosts_list(aSourceInstanceName.getName(),HOSTS_ALLOW);
    const char * hosts_deny  = get_effective_hosts_list(aSourceInstanceName.getName(),HOSTS_DENY);

    if (hosts_deny)
    {
       SambaArray array_deny = SambaArray(hosts_deny);
       SambaArrayConstIterator iter;

       if (hosts_allow){
         SambaArray array_allow  = SambaArray(hosts_allow);

         for ( iter = array_deny.begin(); iter != array_deny.end(); ++iter){
            if (!array_allow.isPresent( (*iter).c_str())) {
               set_associatorsPartComponent(aNameSpaceP, ((*iter).c_str()), anInstanceEnumeration);
            }
         }
       }
       else
       {
         for ( iter = array_deny.begin(); iter != array_deny.end(); ++iter)
            set_associatorsPartComponent(aNameSpaceP, ((*iter).c_str()), anInstanceEnumeration);
       }
       if (hosts_allow) free((char*)hosts_allow);
       if (hosts_deny)  free((char*)hosts_deny);
    }

  }


  //----------------------------------------------------------------------------

  void Linux_SambaDenyHostsForShareResourceAccess::associatorsGroupComponent(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaHostInstanceName& aSourceInstanceName,
    Linux_SambaShareOptionsInstanceEnumeration& anInstanceEnumeration) {

   char ** shares = get_shares_list();

       if (shares) {
         for (int i=0; shares[i]; i++) {

            const char * hosts_allow = get_effective_hosts_list(shares[i],HOSTS_ALLOW);
            const char * hosts_deny  = get_effective_hosts_list(shares[i],HOSTS_DENY);


             if (hosts_deny){
               SambaArray array_deny = SambaArray(hosts_deny);
              	if (array_deny.isPresent(aSourceInstanceName.getName())){
              	  if (hosts_allow){
              	    SambaArray array_allow = SambaArray(hosts_allow);
              	    if (!array_allow.isPresent(aSourceInstanceName.getName())){
                     set_associatorsGroupComponent(aNameSpaceP, shares[i], anInstanceEnumeration);
              	    }
              	  }
              	  else
              	    set_associatorsGroupComponent(aNameSpaceP, shares[i], anInstanceEnumeration);
              	}
             }
	     if (hosts_allow) free((char*)hosts_allow);
	     if (hosts_deny) free((char*)hosts_deny);
         }
       }

  }



  // extrinsic methods


}


