// =======================================================================
// Linux_SambaAllowHostsForGlobalResourceAccess.cpp 
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
#include "Linux_SambaAllowHostsForGlobalResourceAccess.h"

#include <string>
#include <list>

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"
#include "smt_smb_array.h"


namespace genProvider {

  //----------------------------------------------------------------------------
  //Linux_SambaAllowHostsForGlobalResourceAccess::Linux_SambaAllowHostsForGlobalResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaAllowHostsForGlobalResourceAccess::~Linux_SambaAllowHostsForGlobalResourceAccess() { }

  //----------------------------------------------------------------------------
  //Support functions

  static void set_referencesGroupComponent(
    const char * aNameSpaceP,
    const Linux_SambaHostInstanceName& aSourceInstanceName,
    Linux_SambaAllowHostsForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {

      Linux_SambaAllowHostsForGlobalManualInstance manualInstance;
      Linux_SambaAllowHostsForGlobalInstanceName instName;

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
      Linux_SambaGlobalOptionsInstanceEnumeration& anInstanceEnumeration) {

      Linux_SambaGlobalOptionsInstance instance;
      Linux_SambaGlobalOptionsInstanceName globalInstName;

      globalInstName.setNamespace(aNameSpaceP);
      globalInstName.setName(DEFAULT_GLOBAL_NAME);
      globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);

      instance.setInstanceName(globalInstName);

      char *option;

      option = get_option(DEFAULT_GLOBAL_NAME,"bind interfaces only");	
      if ( option )
        if(strcasecmp(option,YES) == 0)
  	  instance.setBindInterfacesOnly( true );
        else
	  instance.setBindInterfacesOnly( false );

      option = get_global_option(PRINTABLE);
      if ( option )
        if(strcasecmp(option,YES) == 0)
  	  instance.setPrintable( true );
	  //instance.setBindInterfacesOnly( true );
        else
	  instance.setPrintable( false );

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
  Linux_SambaAllowHostsForGlobalResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaAllowHostsForGlobalInstanceNameEnumeration& anInstanceNameEnumeration) {

	char * hosts_allow = get_global_option(HOSTS_ALLOW);

	if (hosts_allow)
	{
          SambaArray array_allow = SambaArray(hosts_allow);
          SambaArrayConstIterator iter;

          for ( iter = array_allow.begin(); iter != array_allow.end(); ++iter){

               Linux_SambaAllowHostsForGlobalInstanceName instName;

               instName.setNamespace(aNameSpaceP);

               Linux_SambaGlobalOptionsInstanceName globalInstName;
      	       globalInstName.setNamespace(aNameSpaceP);
               globalInstName.setName(DEFAULT_GLOBAL_NAME);
               globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);

               instName.setGroupComponent(globalInstName);

               Linux_SambaHostInstanceName hostInstName;
               hostInstName.setNamespace(aNameSpaceP);
               hostInstName.setName( (*iter).c_str() );

               instName.setPartComponent(hostInstName);

               anInstanceNameEnumeration.addElement(instName);

             }
        }

  }


  //----------------------------------------------------------------------------

  void
  Linux_SambaAllowHostsForGlobalResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     const char** aPropertiesPP,
  	 Linux_SambaAllowHostsForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {

	char * hosts_allow = get_global_option(HOSTS_ALLOW);

	if (hosts_allow)
	{
          SambaArray array_allow = SambaArray(hosts_allow);
          SambaArrayConstIterator iter;

          for ( iter = array_allow.begin(); iter != array_allow.end(); ++iter){

               Linux_SambaAllowHostsForGlobalInstanceName instName;
               Linux_SambaAllowHostsForGlobalManualInstance aManualInstance;

               instName.setNamespace(aNameSpaceP);

               Linux_SambaGlobalOptionsInstanceName globalInstName;
      	       globalInstName.setNamespace(aNameSpaceP);
               globalInstName.setName(DEFAULT_GLOBAL_NAME);
               globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);

               instName.setGroupComponent(globalInstName);

               Linux_SambaHostInstanceName hostInstName;
               hostInstName.setNamespace(aNameSpaceP);
               hostInstName.setName( (*iter).c_str() );

               instName.setPartComponent(hostInstName);
               aManualInstance.setInstanceName(instName);

               aManualInstanceEnumeration.addElement(aManualInstance);

             }
        }

  }


  //----------------------------------------------------------------------------

  Linux_SambaAllowHostsForGlobalManualInstance
  Linux_SambaAllowHostsForGlobalResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaAllowHostsForGlobalInstanceName& anInstanceName) {

    Linux_SambaAllowHostsForGlobalManualInstance manualInstance;
    manualInstance.setInstanceName(anInstanceName);


   if (strcasecmp(anInstanceName.getGroupComponent().getName(),DEFAULT_GLOBAL_NAME) != 0 ||
       strcasecmp(anInstanceName.getGroupComponent().getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
        throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,("The instance does not exist. The specified global options instance is unknown!"));
    }

    SambaArray array = SambaArray();
    char* user_list = get_option(DEFAULT_GLOBAL_NAME,"hosts allow");

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
  Linux_SambaAllowHostsForGlobalResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaAllowHostsForGlobalManualInstance& aManualInstance) { }
  */

  //----------------------------------------------------------------------------

  Linux_SambaAllowHostsForGlobalInstanceName
  Linux_SambaAllowHostsForGlobalResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaAllowHostsForGlobalManualInstance& aManualInstance) {

    if (strcasecmp(aManualInstance.getInstanceName().getGroupComponent().getName(),DEFAULT_GLOBAL_NAME) != 0 ||
        strcasecmp(aManualInstance.getInstanceName().getGroupComponent().getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,("The instance does not exist. The specified global options instance is unknown!"));
    }
    
    SambaArray array = SambaArray();
    char* hosts_list = get_global_option(HOSTS_ALLOW);
    
    if(hosts_list)
      array.populate(hosts_list);
    
    if(!validHostName(aManualInstance.getInstanceName().getPartComponent().getName())){
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Invalid Host Name!");

    } else {
      if(!array.isPresent(string( aManualInstance.getInstanceName().getPartComponent().getName() ))) {
	array.add( string( aManualInstance.getInstanceName().getPartComponent().getName() ) );
	
	set_global_option(HOSTS_ALLOW,array.toString().c_str());
      }
      else 
	throw CmpiStatus(CMPI_RC_ERR_ALREADY_EXISTS,"Instance already exists!");
    }
    
    //delete hostname from global deny list if present...
    SambaArray array_deny = SambaArray();
    hosts_list = get_global_option(HOSTS_DENY);
    
    if(hosts_list)
      array_deny.populate(hosts_list);
       
    if(array_deny.isPresent(string( aManualInstance.getInstanceName().getPartComponent().getName() ))) {
      array_deny.remove( string( aManualInstance.getInstanceName().getPartComponent().getName() ) );
      
      set_global_option(HOSTS_DENY,array_deny.toString().c_str());
    }
    
    return aManualInstance.getInstanceName();
  }


  //----------------------------------------------------------------------------

  void
  Linux_SambaAllowHostsForGlobalResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaAllowHostsForGlobalInstanceName& anInstanceName) {

    if (strcasecmp(anInstanceName.getGroupComponent().getName(),DEFAULT_GLOBAL_NAME) != 0 ||
        strcasecmp(anInstanceName.getGroupComponent().getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,("The instance does not exist. The specified global options instance is unknown!"));
    }
    
    SambaArray array = SambaArray();
    char* hosts_list = get_global_option(HOSTS_ALLOW);
    
    if(hosts_list)
      array.populate(hosts_list);
    
    if(!validHostName(anInstanceName.getPartComponent().getName())){
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Invalid Host Name!, Cannot be deleted");
      
    } else {
      if(array.isPresent(string( anInstanceName.getPartComponent().getName() ))) {
	array.remove( string( anInstanceName.getPartComponent().getName() ) );
	
	set_global_option(HOSTS_ALLOW,array.toString().c_str());
      }
      else
	throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "Instance does not exist. The specified Host is unknown for hosts allow!");
    }

  }



  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaAllowHostsForGlobalResourceAccess::referencesPartComponent(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaAllowHostsForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {

    if (!service_exists(aSourceInstanceName.getName()) ||
        strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist. The specified share is unknown!");
    }
    char * hosts_allow = get_option(DEFAULT_GLOBAL_NAME,"hosts allow");
    
    if (hosts_allow) {
      SambaArray array_allow = SambaArray(hosts_allow);
      SambaArrayConstIterator iter;
      
      for ( iter = array_allow.begin(); iter != array_allow.end(); ++iter){
	
	Linux_SambaAllowHostsForGlobalManualInstance manualInstance;
 	Linux_SambaAllowHostsForGlobalInstanceName instName;
	
	instName.setNamespace(aNameSpaceP);
	instName.setGroupComponent(aSourceInstanceName);
	
	Linux_SambaHostInstanceName hostInstName;
	hostInstName.setNamespace(aNameSpaceP);
	hostInstName.setName( (*iter).c_str() );
	
	instName.setPartComponent(hostInstName);
	
	manualInstance.setInstanceName(instName);
	aManualInstanceEnumeration.addElement(manualInstance);
      
     }
    }
  }


  //----------------------------------------------------------------------------

  void Linux_SambaAllowHostsForGlobalResourceAccess::referencesGroupComponent(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaHostInstanceName& aSourceInstanceName,
    Linux_SambaAllowHostsForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {

    char * hosts_allow = get_option(DEFAULT_GLOBAL_NAME,"hosts allow");
    //char * hosts_deny  = get_option(DEFAULT_GLOBAL_NAME,"hosts deny");
    //int done_flag = 0;
    
    if (hosts_allow){
      SambaArray array_allow = SambaArray(hosts_allow);
      if (array_allow.isPresent(aSourceInstanceName.getName())){
	set_referencesGroupComponent(aNameSpaceP, aSourceInstanceName, aManualInstanceEnumeration);
	//done_flag = 1;
       }
      }
      else
      {
        throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,("The instance does not exist. The specified Samba host is unknown!"));
      }

    //}
    
    /*if ( !done_flag && hosts_deny ){
      SambaArray array_deny = SambaArray(hosts_deny);
      if (!array_deny.isPresent(aSourceInstanceName.getName())){
	set_referencesGroupComponent(aNameSpaceP, aSourceInstanceName, aManualInstanceEnumeration);
	done_flag = 1;
      }
    }
    
    if (!done_flag && !hosts_deny)
      set_referencesGroupComponent(aNameSpaceP, aSourceInstanceName, aManualInstanceEnumeration);
  */
  }


  //----------------------------------------------------------------------------

  void Linux_SambaAllowHostsForGlobalResourceAccess::associatorsPartComponent(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaHostInstanceEnumeration& anInstanceEnumeration) {

    if (strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME) != 0 ||
        strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
        throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,("The instance does not exist. The specified global options instance is unknown!"));
   }

    char * hosts_allow = get_option(DEFAULT_GLOBAL_NAME,"hosts allow");
    //char * hosts_deny  = get_option(DEFAULT_GLOBAL_NAME,"hosts deny");
    
    if (hosts_allow) {
      SambaArray array_allow = SambaArray(hosts_allow);
      SambaArrayConstIterator iter;
      
      for ( iter = array_allow.begin(); iter != array_allow.end(); ++iter){
	set_associatorsPartComponent(aNameSpaceP, ((*iter).c_str()), anInstanceEnumeration);
      }
    }
    
  }


  //----------------------------------------------------------------------------

  void Linux_SambaAllowHostsForGlobalResourceAccess::associatorsGroupComponent(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaHostInstanceName& aSourceInstanceName,
    Linux_SambaGlobalOptionsInstanceEnumeration& anInstanceEnumeration) {

    char * hosts_allow = get_option(DEFAULT_GLOBAL_NAME,"hosts allow");
    //char * hosts_deny  = get_option(DEFAULT_GLOBAL_NAME,"hosts deny");
 
    //int done_flag = 0;
    
    if (hosts_allow){
      SambaArray array_allow = SambaArray(hosts_allow);
      if (array_allow.isPresent(aSourceInstanceName.getName())){
	set_associatorsGroupComponent(aNameSpaceP, anInstanceEnumeration);
	//done_flag = 1;
      }
    }
    
    /*if (!done_flag && hosts_deny){
      SambaArray array_deny = SambaArray(hosts_deny);
      if (!array_deny.isPresent(aSourceInstanceName.getName())){
	set_associatorsGroupComponent(aNameSpaceP, anInstanceEnumeration);
	done_flag = 1;
      }
    }
    
    if (!done_flag && !hosts_deny)
      set_associatorsGroupComponent(aNameSpaceP, anInstanceEnumeration);
    
  }
*/
 else
      {
        throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,("The instance does not exist. The specified Samba host is unknown!"));
      }


  // extrinsic methods
  }
}
