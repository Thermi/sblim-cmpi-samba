// =======================================================================
// Linux_SambaAllowHostsForPrinterResourceAccess.cpp 
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
#include "Linux_SambaAllowHostsForPrinterResourceAccess.h"

#include <string>
#include <list>

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"
#include "smt_smb_array.h"

namespace genProvider {

  //----------------------------------------------------------------------------
  //Linux_SambaAllowHostsForPrinterResourceAccess::Linux_SambaAllowHostsForPrinterResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaAllowHostsForPrinterResourceAccess::~Linux_SambaAllowHostsForPrinterResourceAccess() { }

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
      strcpy(ret_value, hosts_list);
    }


    return ret_value;

  }

  static void set_referencesGroupComponent(
    const char * aNameSpaceP,
    const char * printer,
    const Linux_SambaHostInstanceName& aSourceInstanceName,
    Linux_SambaAllowHostsForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {

      Linux_SambaAllowHostsForPrinterManualInstance manualInstance;
      Linux_SambaAllowHostsForPrinterInstanceName instName;

      instName.setNamespace(aNameSpaceP);
      instName.setPartComponent(aSourceInstanceName);

      Linux_SambaPrinterOptionsInstanceName printerInstName;
      printerInstName.setNamespace(aNameSpaceP);
      printerInstName.setName(printer);
      printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);

      instName.setGroupComponent(printerInstName);

      manualInstance.setInstanceName(instName);
      aManualInstanceEnumeration.addElement(manualInstance);

  }

  static void setInstanceProperties(
      const char * printer,
      Linux_SambaPrinterOptionsInstance& instance) {

    char *option;

    option = get_option(printer,AVAILABLE);
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setAvailable( true );
      else
	instance.setAvailable( false );

    option = get_option(printer,COMMENT);
    if ( option )
      instance.setComment( option );

    option = get_option(printer,PRINTABLE);
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setPrintable( true );
      else
	instance.setPrintable( false );

    option = get_option(printer,PATH);
    if ( option )
      instance.setPath( option );

    option = get_option(printer,PRINTER_NAME);
    if ( option )
      instance.setSystemPrinterName( option );

  }

  static void set_associatorsGroupComponent(
      const char * aNameSpaceP,
      const char * printer,
      Linux_SambaPrinterOptionsInstanceEnumeration& anInstanceEnumeration) {

      Linux_SambaPrinterOptionsInstance instance;
      Linux_SambaPrinterOptionsInstanceName shareInstName;

      shareInstName.setNamespace(aNameSpaceP);
      shareInstName.setName(printer);
      shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);

      instance.setInstanceName(shareInstName);

      setInstanceProperties(printer,instance);

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
  Linux_SambaAllowHostsForPrinterResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaAllowHostsForPrinterInstanceNameEnumeration& anInstanceNameEnumeration) {

     char **printers = get_samba_printers_list();

    for(int i=0; printers[i] ; i++)
    {

      const char * hosts_allow = get_effective_hosts_list(printers[i],HOSTS_ALLOW);

      if (hosts_allow)
      {
        SambaArray array_allow = SambaArray(hosts_allow);
        SambaArrayConstIterator iter;

        for ( iter = array_allow.begin(); iter != array_allow.end(); ++iter){

           Linux_SambaAllowHostsForPrinterInstanceName instName;

           instName.setNamespace(aNameSpaceP);

           Linux_SambaPrinterOptionsInstanceName printerInstName;
              printerInstName.setNamespace(aNameSpaceP);
              printerInstName.setName(printers[i]);
              printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);

           Linux_SambaHostInstanceName hostInstName;
              hostInstName.setNamespace(aNameSpaceP);
              hostInstName.setName( (*iter).c_str() );

           instName.setPartComponent(hostInstName);
           instName.setGroupComponent(printerInstName);

           anInstanceNameEnumeration.addElement(instName);
        }

       free((char*)hosts_allow);
      }
    }

  }


  //----------------------------------------------------------------------------

  void
  Linux_SambaAllowHostsForPrinterResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     const char** aPropertiesPP,
  	 Linux_SambaAllowHostsForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {

    char **printers = get_samba_printers_list();

    for(int i=0; printers[i] ; i++)
    {

      const char * hosts_allow = get_effective_hosts_list(printers[i],HOSTS_ALLOW);

      if (hosts_allow)
      {
        SambaArray array_allow = SambaArray(hosts_allow);
        SambaArrayConstIterator iter;

        for ( iter = array_allow.begin(); iter != array_allow.end(); ++iter){
           Linux_SambaAllowHostsForPrinterManualInstance manualInstance;
           Linux_SambaAllowHostsForPrinterInstanceName instName;

           instName.setNamespace(aNameSpaceP);

           Linux_SambaPrinterOptionsInstanceName printerInstName;
              printerInstName.setNamespace(aNameSpaceP);
              printerInstName.setName(printers[i]);
              printerInstName.setInstanceID(DEFAULT_INSTANCE_ID);

           Linux_SambaHostInstanceName hostInstName;
              hostInstName.setNamespace(aNameSpaceP);
              hostInstName.setName( (*iter).c_str() );

           instName.setPartComponent(hostInstName);
           instName.setGroupComponent(printerInstName);

           manualInstance.setInstanceName(instName);
           aManualInstanceEnumeration.addElement(manualInstance);
        }
      }
      if (hosts_allow) free((char*)hosts_allow);
    }

  }


  //----------------------------------------------------------------------------

  Linux_SambaAllowHostsForPrinterManualInstance
  Linux_SambaAllowHostsForPrinterResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaAllowHostsForPrinterInstanceName& anInstanceName) {

    Linux_SambaAllowHostsForPrinterManualInstance manualInstance;
    manualInstance.setInstanceName(anInstanceName);

    char ** printers = get_samba_printers_list();
    if(printers) {
    int valid_printer = false;
    SambaArray array = SambaArray();
    static const char* host_list;
       for(int i=0;printers[i];i++) {
           if(strcasecmp(anInstanceName.getGroupComponent().getName(),printers[i])==0)
           {
               valid_printer = true;
               host_list = get_effective_hosts_list(printers[i],"hosts allow");
               if(!host_list) {
               throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba host is unknown!");
               }
               array.populate(host_list);
               free((char*)host_list);

               if(!array.isPresent(anInstanceName.getPartComponent().getName())) {
               throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND, "The Instance does not exist. The specified Samba host is unknown!");
               }
           }
        }
        if(!valid_printer) {
           throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist. The specified printer is unknown!");
        }
    }
    else
       throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Printer instance does not exist!");

    return manualInstance;
  }

  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaAllowHostsForPrinterResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaAllowHostsForPrinterManualInstance& aManualInstance) { }
  */

  //----------------------------------------------------------------------------

  Linux_SambaAllowHostsForPrinterInstanceName
  Linux_SambaAllowHostsForPrinterResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaAllowHostsForPrinterManualInstance& aManualInstance) {

    int flag = 0;
    char **printers = get_samba_printers_list();

    for (int i=0; printers[i] ; i++)
       if (!strcasecmp(aManualInstance.getInstanceName().getGroupComponent().getName(),printers[i]) != 0 ) {
         flag = 1;
         break;
       }

    if(flag) {

      SambaArray array = SambaArray();
      char* hosts_list = get_option(aManualInstance.getInstanceName().getGroupComponent().getName(),HOSTS_ALLOW);

      if(hosts_list)
        array.populate(hosts_list);

      if(!validHostName(aManualInstance.getInstanceName().getPartComponent().getName())){
        throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Invalid Host Name!");
      }else{
        if(!array.isPresent(string( aManualInstance.getInstanceName().getPartComponent().getName() ))) {
	  array.add( string( aManualInstance.getInstanceName().getPartComponent().getName() ) );

	  set_printer_option(aManualInstance.getInstanceName().getGroupComponent().getName(),HOSTS_ALLOW,array.toString().c_str());
        }
        else
        	throw CmpiStatus(CMPI_RC_ERR_ALREADY_EXISTS,"Instance already exists!");
        	
      }

      //delete hostname from deny list if present...


      hosts_list = get_option(aManualInstance.getInstanceName().getGroupComponent().getName(),HOSTS_DENY);
      SambaArray array_deny = SambaArray();
      if(hosts_list)
        array_deny.populate(hosts_list);


        if(array_deny.isPresent(string( aManualInstance.getInstanceName().getPartComponent().getName() ))) {
	  array_deny.remove( string( aManualInstance.getInstanceName().getPartComponent().getName() ) );

	  set_printer_option(aManualInstance.getInstanceName().getGroupComponent().getName(),HOSTS_DENY,array_deny.toString().c_str());
        }

    }
    else
    	throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Instance could not be created!");
    	

    return aManualInstance.getInstanceName();

  }


  //----------------------------------------------------------------------------

  void
  Linux_SambaAllowHostsForPrinterResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaAllowHostsForPrinterInstanceName& anInstanceName) {

    int flag = 0;
    char **printers = get_samba_printers_list();

    for (int i=0; printers[i] ; i++)
       if (!strcmp(anInstanceName.getGroupComponent().getName(),printers[i])) {
         flag = 1;
         break;
       }

    if(flag) {

      SambaArray array = SambaArray();
      char* hosts_list = get_option(anInstanceName.getGroupComponent().getName(),HOSTS_ALLOW);

      if(hosts_list)
        array.populate(hosts_list);

      if(!validHostName(anInstanceName.getPartComponent().getName())){
        throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Invalid Host Name!");

      } else {
        if(array.isPresent(string( anInstanceName.getPartComponent().getName() ))) {
	  array.remove( string( anInstanceName.getPartComponent().getName() ) );

	  set_printer_option(anInstanceName.getGroupComponent().getName(),HOSTS_ALLOW,array.toString().c_str());
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

  void Linux_SambaAllowHostsForPrinterResourceAccess::referencesPartComponent(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
    Linux_SambaAllowHostsForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {

    const char * hosts_allow = get_effective_hosts_list(aSourceInstanceName.getName(),HOSTS_ALLOW);

    if (hosts_allow)
    {
      SambaArray array_allow = SambaArray(hosts_allow);
      SambaArrayConstIterator iter;

      for ( iter = array_allow.begin(); iter != array_allow.end(); ++iter){
         Linux_SambaAllowHostsForPrinterManualInstance manualInstance;
         Linux_SambaAllowHostsForPrinterInstanceName instName;

         instName.setNamespace(aNameSpaceP);
         instName.setGroupComponent(aSourceInstanceName);

         Linux_SambaHostInstanceName secInstName;
         secInstName.setNamespace(aNameSpaceP);
         secInstName.setName( (*iter).c_str() );

         instName.setPartComponent(secInstName);

         manualInstance.setInstanceName(instName);
         aManualInstanceEnumeration.addElement(manualInstance);
      }

      free((char*)hosts_allow);
    }

  }


  //----------------------------------------------------------------------------

  void Linux_SambaAllowHostsForPrinterResourceAccess::referencesGroupComponent(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaHostInstanceName& aSourceInstanceName,
    Linux_SambaAllowHostsForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {

    char ** printers = get_samba_printers_list();

       if (printers) {
         for (int i=0; printers[i]; i++) {

            const char * hosts_allow = get_effective_hosts_list(printers[i],HOSTS_ALLOW);
            const char * hosts_deny = get_effective_hosts_list(printers[i],HOSTS_DENY);

	    int done_flag = 0;

            if (hosts_allow){
            SambaArray array_allow = SambaArray(hosts_allow);
       	    if (array_allow.isPresent(aSourceInstanceName.getName())){
       	      set_referencesGroupComponent(aNameSpaceP, printers[i], aSourceInstanceName, aManualInstanceEnumeration);
       	      done_flag = 1;

       	    }
          }

          if ( !done_flag && hosts_deny ){
      	    SambaArray array_deny = SambaArray(hosts_deny);
       	    if (!array_deny.isPresent(aSourceInstanceName.getName())){
              set_referencesGroupComponent(aNameSpaceP, printers[i], aSourceInstanceName, aManualInstanceEnumeration);
              done_flag = 1;
       	    }
          }

          if (!done_flag && !hosts_deny)
            set_referencesGroupComponent(aNameSpaceP, printers[i], aSourceInstanceName, aManualInstanceEnumeration);

          if (hosts_allow) free((char*)hosts_allow);
          if (hosts_deny) free((char*)hosts_deny);
          }
        }

  }


  //----------------------------------------------------------------------------

  void Linux_SambaAllowHostsForPrinterResourceAccess::associatorsPartComponent(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
    Linux_SambaHostInstanceEnumeration& anInstanceEnumeration) {

    const char * hosts_allow = get_effective_hosts_list(aSourceInstanceName.getName(),HOSTS_ALLOW);

    if (hosts_allow)
    {
       SambaArray array_allow = SambaArray(hosts_allow);
       SambaArrayConstIterator iter;

       for ( iter = array_allow.begin(); iter != array_allow.end(); ++iter){
          set_associatorsPartComponent(aNameSpaceP, ((*iter).c_str()), anInstanceEnumeration);
       }
    }

    if (hosts_allow) free((char*)hosts_allow);

  }


  //----------------------------------------------------------------------------

  void Linux_SambaAllowHostsForPrinterResourceAccess::associatorsGroupComponent(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaHostInstanceName& aSourceInstanceName,
    Linux_SambaPrinterOptionsInstanceEnumeration& anInstanceEnumeration) {

    char ** printers = get_samba_printers_list();

       if (printers) {
         for (int i=0; printers[i]; i++) {

            const char * hosts_allow = get_effective_hosts_list(printers[i],HOSTS_ALLOW);
            const char * hosts_deny  = get_effective_hosts_list(printers[i],HOSTS_DENY);

            int done_flag = 0;

            if (hosts_allow){
              SambaArray array_allow = SambaArray(hosts_allow);
       	      if (array_allow.isPresent(aSourceInstanceName.getName())){
       	        set_associatorsGroupComponent(aNameSpaceP, printers[i], anInstanceEnumeration);
       	        done_flag = 1;
       	      }
            }

            if (!done_flag && hosts_deny){
      	      SambaArray array_deny = SambaArray(hosts_deny);
       	      if (!array_deny.isPresent(aSourceInstanceName.getName())){
                set_associatorsGroupComponent(aNameSpaceP, printers[i], anInstanceEnumeration);
                done_flag = 1;
       	      }
            }

            if (!done_flag && !hosts_deny)
      	      set_associatorsGroupComponent(aNameSpaceP, printers[i], anInstanceEnumeration);

	    if (hosts_allow) free((char*)hosts_allow);
            if (hosts_deny) free((char*)hosts_deny);
            }
         }

  }



  // extrinsic methods


}


