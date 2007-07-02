// =======================================================================
// Linux_SambaDenyHostsForGlobalResourceAccess.cpp 
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Common Public License from
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
#include "Linux_SambaDenyHostsForGlobalResourceAccess.h"

#include <string>
#include <list>

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"
#include "smt_smb_array.h"

namespace genProvider {

  //----------------------------------------------------------------------------
  //Linux_SambaDenyHostsForGlobalResourceAccess::Linux_SambaDenyHostsForGlobalResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaDenyHostsForGlobalResourceAccess::~Linux_SambaDenyHostsForGlobalResourceAccess() { }

  //----------------------------------------------------------------------------
  //support methods

  static void set_referencesGroupComponent(
    const char * aNameSpaceP,
    const Linux_SambaHostInstanceName& aSourceInstanceName,
    Linux_SambaDenyHostsForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {


      Linux_SambaDenyHostsForGlobalManualInstance manualInstance;
      Linux_SambaDenyHostsForGlobalInstanceName instName;

      instName.setNamespace(aNameSpaceP);
      instName.setPartComponent(aSourceInstanceName);

      Linux_SambaGlobalOptionsInstanceName globalInstName;
      globalInstName.setNamespace(aNameSpaceP);
      globalInstName.setName(DEFAULT_GLOBAL_NAME);
      globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);

      instName.setGroupComponent(globalInstName);

      manualInstance.setInstanceName(instName);
      aManualInstanceEnumeration.addElement(manualInstance);

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

  static void set_associatorsGroupComponent(
      const char * aNameSpaceP,
      Linux_SambaGlobalOptionsInstanceEnumeration& anInstanceEnumeration)

   {
      Linux_SambaGlobalOptionsInstance instance;
      Linux_SambaGlobalOptionsInstanceName globalInstName;

      globalInstName.setNamespace(aNameSpaceP);
      globalInstName.setName(DEFAULT_GLOBAL_NAME);
      globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);

      instance.setInstanceName(globalInstName);

      char *option;

      option = get_global_option(BIND_INTERFACES_ONLY);
      if ( option )
        if(strcasecmp(option,YES) == 0)
  	  instance.setBindInterfacesOnly( true );
        else
	  instance.setBindInterfacesOnly( false );

      option = get_global_option(PRINTABLE);
      if ( option )
        if(strcasecmp(option,YES) == 0)
  	  instance.setBindInterfacesOnly( true );
        else
	  instance.setBindInterfacesOnly( false );

      option = get_global_option(INTERFACES);
      if ( option )
        instance.setInterfaces( option );

      option = get_global_option(NETBIOS_ALIASES);
      if ( option )
        instance.setNetbiosAlias( option );

      option = get_global_option(NETBIOS_NAME);
      if ( option )
        instance.setNetbiosName( option );

      option = get_global_option(SERVER_STRING);
      if ( option )
        instance.setServerString( option );

      option = get_global_option(WORKGROUP);
      if ( option )
        instance.setWorkgroup( option );

      anInstanceEnumeration.addElement(instance);
  }

  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaDenyHostsForGlobalResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaDenyHostsForGlobalInstanceNameEnumeration& anInstanceNameEnumeration) {

	char * hosts_deny = get_global_option(HOSTS_DENY);
	char * hosts_allow  = get_global_option(HOSTS_ALLOW);


	if (hosts_deny)
	{

          SambaArray array_deny = SambaArray(hosts_deny);
          SambaArray array_allow  = SambaArray(hosts_allow);
          SambaArrayConstIterator iter;

          for ( iter = array_deny.begin(); iter != array_deny.end(); ++iter){
             if (!array_allow.isPresent( (*iter).c_str())){

               Linux_SambaDenyHostsForGlobalInstanceName instName;

               instName.setNamespace(aNameSpaceP);

               Linux_SambaGlobalOptionsInstanceName globalInstName;
                 globalInstName.setNamespace(aNameSpaceP);
                 globalInstName.setName(DEFAULT_GLOBAL_NAME);
                 globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);

               Linux_SambaHostInstanceName hostInstName;
                 hostInstName.setNamespace(aNameSpaceP);
                 hostInstName.setName( (*iter).c_str() );

               instName.setGroupComponent(globalInstName);
               instName.setPartComponent(hostInstName);

               anInstanceNameEnumeration.addElement(instName);
             }
          }
        }

  }


  //----------------------------------------------------------------------------

  void
  Linux_SambaDenyHostsForGlobalResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     const char** aPropertiesPP,
  	 Linux_SambaDenyHostsForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {

	char * hosts_deny = get_global_option(HOSTS_DENY);
	char * hosts_allow  = get_global_option(HOSTS_ALLOW);


	if (hosts_deny)
	{

          SambaArray array_deny = SambaArray(hosts_deny);
          SambaArray array_allow  = SambaArray(hosts_allow);
          SambaArrayConstIterator iter;

          for ( iter = array_deny.begin(); iter != array_deny.end(); ++iter){
             if (!array_allow.isPresent( (*iter).c_str())){
               Linux_SambaDenyHostsForGlobalManualInstance manualInstance;
               Linux_SambaDenyHostsForGlobalInstanceName instName;

               instName.setNamespace(aNameSpaceP);

               Linux_SambaGlobalOptionsInstanceName globalInstName;
                 globalInstName.setNamespace(aNameSpaceP);
                 globalInstName.setName(DEFAULT_GLOBAL_NAME);
                 globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);

               Linux_SambaHostInstanceName hostInstName;
                 hostInstName.setNamespace(aNameSpaceP);
                 hostInstName.setName( (*iter).c_str() );

               instName.setGroupComponent(globalInstName);
               instName.setPartComponent(hostInstName);

               manualInstance.setInstanceName(instName);
               aManualInstanceEnumeration.addElement(manualInstance);
             }
          }
        }

  }


  //----------------------------------------------------------------------------

  Linux_SambaDenyHostsForGlobalManualInstance
  Linux_SambaDenyHostsForGlobalResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaDenyHostsForGlobalInstanceName& anInstanceName) {

    Linux_SambaDenyHostsForGlobalManualInstance manualInstance;
    manualInstance.setInstanceName(anInstanceName);


   if (strcasecmp(anInstanceName.getGroupComponent().getName(),DEFAULT_GLOBAL_NAME) != 0 ||
       strcasecmp(anInstanceName.getGroupComponent().getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,("The instance does not exist. The specified global options instance is unknown!"));
    }

    SambaArray array = SambaArray();
    char* user_list = get_option(DEFAULT_GLOBAL_NAME,"hosts deny");

    if(!user_list) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba host is unknown!");
    }
    array.populate(user_list);

    if(!array.isPresent(anInstanceName.getPartComponent().getName())) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba host is unknown!");
    }

    return manualInstance;

  }

  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaDenyHostsForGlobalResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaDenyHostsForGlobalManualInstance& aManualInstance) { }
  */

  //----------------------------------------------------------------------------

  Linux_SambaDenyHostsForGlobalInstanceName
  Linux_SambaDenyHostsForGlobalResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaDenyHostsForGlobalManualInstance& aManualInstance) {

    if(strcasecmp(aManualInstance.getInstanceName().getGroupComponent().getName(),DEFAULT_GLOBAL_NAME) == 0 &&
       strcasecmp(aManualInstance.getInstanceName().getGroupComponent().getInstanceID(),DEFAULT_INSTANCE_ID)==0)
    {
      SambaArray array = SambaArray();
      char* hosts_list = get_global_option(HOSTS_DENY);

      if(hosts_list)
        array.populate(hosts_list);

      if(!validHostName(aManualInstance.getInstanceName().getPartComponent().getName())){
        throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Invalid Host Name!");
      }else{
        if(!array.isPresent(string( aManualInstance.getInstanceName().getPartComponent().getName() ))) {
	  array.add( string( aManualInstance.getInstanceName().getPartComponent().getName() ) );

	  set_global_option(HOSTS_DENY,array.toString().c_str());
        }
        else 
	        throw CmpiStatus(CMPI_RC_ERR_ALREADY_EXISTS,"Instance already exists!");
      }

      //delete hostname from global allow list if present...
      SambaArray array_allow = SambaArray();
      hosts_list = get_global_option(HOSTS_ALLOW);

      if(hosts_list)
        array_allow.populate(hosts_list);


        if(array_allow.isPresent(string( aManualInstance.getInstanceName().getPartComponent().getName() ))) {
	  array_allow.remove( string( aManualInstance.getInstanceName().getPartComponent().getName() ) );

	  set_global_option(HOSTS_ALLOW,array_allow.toString().c_str());
        }

    }
    else 
    	throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Instance could not be created!");

    return aManualInstance.getInstanceName();

  }


  //----------------------------------------------------------------------------

  void
  Linux_SambaDenyHostsForGlobalResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaDenyHostsForGlobalInstanceName& anInstanceName) {

    if(strcasecmp(anInstanceName.getGroupComponent().getName(),DEFAULT_GLOBAL_NAME)==0 &&
       strcasecmp(anInstanceName.getGroupComponent().getInstanceID(),DEFAULT_INSTANCE_ID)==0)
    {
      SambaArray array = SambaArray();
      char* hosts_list = get_global_option(HOSTS_DENY);

      if(hosts_list)
        array.populate(hosts_list);

      if(!validHostName(anInstanceName.getPartComponent().getName())){
        throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Invalid Host Name!");

      } else {
        if(array.isPresent(string( anInstanceName.getPartComponent().getName() ))) {
	  array.remove( string( anInstanceName.getPartComponent().getName() ) );

	  set_global_option(HOSTS_DENY,array.toString().c_str());
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

  void Linux_SambaDenyHostsForGlobalResourceAccess::referencesPartComponent(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaDenyHostsForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {

	char * hosts_deny = get_global_option(HOSTS_DENY);
	char * hosts_allow  = get_global_option(HOSTS_ALLOW);


	if (hosts_deny)
	{

          SambaArray array_deny = SambaArray(hosts_deny);
          SambaArray array_allow  = SambaArray(hosts_allow);
          SambaArrayConstIterator iter;

          for ( iter = array_deny.begin(); iter != array_deny.end(); ++iter){
             if (!array_allow.isPresent( (*iter).c_str())){
               Linux_SambaDenyHostsForGlobalManualInstance manualInstance;
               Linux_SambaDenyHostsForGlobalInstanceName instName;

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
        }

  }


  //----------------------------------------------------------------------------

  void Linux_SambaDenyHostsForGlobalResourceAccess::referencesGroupComponent(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaHostInstanceName& aSourceInstanceName,
    Linux_SambaDenyHostsForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {

      char * hosts_deny = get_global_option(HOSTS_DENY);
      char * hosts_allow  = get_global_option(HOSTS_ALLOW);
      if (hosts_deny){
        SambaArray array_deny = SambaArray(hosts_deny);
       	if (array_deny.isPresent(aSourceInstanceName.getName())){
       	  if (hosts_allow){
       	    SambaArray array_allow = SambaArray(hosts_allow);
       	    if (!array_allow.isPresent(aSourceInstanceName.getName())){
              set_referencesGroupComponent(aNameSpaceP, aSourceInstanceName, aManualInstanceEnumeration);
       	    }
	  }
       	  else
       	    set_referencesGroupComponent(aNameSpaceP, aSourceInstanceName, aManualInstanceEnumeration);
       	}
      }

  }


  //----------------------------------------------------------------------------

  void Linux_SambaDenyHostsForGlobalResourceAccess::associatorsPartComponent(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaHostInstanceEnumeration& anInstanceEnumeration) {

	char * hosts_deny = get_global_option(HOSTS_DENY);
	char * hosts_allow  = get_global_option(HOSTS_ALLOW);


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
        }

  }


  //----------------------------------------------------------------------------

  void Linux_SambaDenyHostsForGlobalResourceAccess::associatorsGroupComponent(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaHostInstanceName& aSourceInstanceName,
    Linux_SambaGlobalOptionsInstanceEnumeration& anInstanceEnumeration) {

      char * hosts_deny = get_global_option(HOSTS_DENY);
      char * hosts_allow  = get_global_option(HOSTS_ALLOW);

      if (hosts_deny){
        SambaArray array_deny = SambaArray(hosts_deny);
       	if (array_deny.isPresent(aSourceInstanceName.getName())){
       	  if (hosts_allow){
       	    SambaArray array_allow = SambaArray(hosts_allow);
       	    if (!array_allow.isPresent(aSourceInstanceName.getName())){
              set_associatorsGroupComponent(aNameSpaceP, anInstanceEnumeration);
       	    }
       	  }
       	  else
       	    set_associatorsGroupComponent(aNameSpaceP, anInstanceEnumeration);
       	}
      }

  }



  // extrinsic methods


}


