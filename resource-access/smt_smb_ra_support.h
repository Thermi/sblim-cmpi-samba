/*
 * smt_smb_ra_support.h
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
 * Author:  Rodrigo Ceron <rceron@br.ibm.com>
 *
 * Contributors:
 *
 */
/* Not being initially implemeted: */
/* placeholder for need to implement internally to RA layer include and copy functionality */ 
/* placeholder for modify_user() functionality */ 
/* We only support printers already defined to CUPS*/

#include <pthread.h>

#ifndef _SMT_SMB_RA_SUPPORT_H_
#define _SMT_SMB_RA_SUPPORT_H_

#ifdef __cplusplus
extern "C" {
#endif

#define INIT_LIST(ptr) do { memset(ptr,0x0,sizeof(*ptr)); ptr->next = 0x0; } while(0)

#define list_add(list,elem) do { (elem)->next = list ; list = elem; } while(0)

#define free_services_list(list) do { int i=0; while(list && list[i]) \
                           free(list[i++]); free(list); list=NULL;  } while(0)

#define free_string_array(ar) do { int i=0; while(ar && ar[i]) \
                           free(ar[i++]); free(ar); ar=NULL;  } while(0)

#define free_array_elements(ar) do { int i=0; while(ar && ar[i])	\
						free(ar[i++]); } while(0)
  
#define free_array(ar) free(ar)
  
  /* This should be called only within smbsupport.c. Don't use it */
  
#define free_shares_list(list) do {  } while(0)
  /* DEPRECATED. Use free_string_array */
  /* This is suposed to be called on a char** variable and frees only the array 
   * itself, not its the content. Its content should NEVER be fred because they 
   * are merely pointers to the global services list, which can not be messed 
   * up */
  
#define free_printers_list(list) do {  } while(0)
  /* DEPRECATED. Use free_string_array */
  /* This is suposed to be called on a char** variable and frees only the array 
   * itself, not its the content. Its content should NEVER be fred because they 
   * are merely pointers to the global services list, which can not be messed 
   * up */
  
#define DEFAULT_CONFIGURATION_FILE              "/etc/samba/smb.conf"
#define GLOBAL					"global"
#define PATH					"path"
#define ROOT_DIR				"root directory"
#define USERNAME_MAP                            "username map"
  
  /* configuration file parameters */
#define SMBCONF "smbconf"
#define SMBDEFAULTS "defaults"
#define SMBSYNONYMS  "synonyms"
#define SMBGRPMAP "groupmap"
#define CACHE_IVAL "cacheinterval"
#define DEF_SMBGRPMAPF "/etc/samba/smbusers"
#define SMB_SERVICE "service" /*smb service path (ex,/etc/init.d/smbd) */
  
  /* miscellaneous */
#define GET_SMBUSRS_CMD "pdbedit -L"
#define GET_SYSGRPS_CMD "getent group"
#define GET_LOCSID_CMD "net getlocalsid"
#define GET_GRPMAP_CMD "net groupmap list"
#define ADD_SYSGRP_CMD "groupadd"
  
#define DEF_GRP "users"
  
#define LOWEST_UID "500"
  
  /* errors */
#define ENOSHARE 2
#define ENOOPT   3
#define ENOFILE  4
  
  struct smbopt {
    char * key;
    char * value;
    struct smbopt *next;
  };
  
  struct smbmonitors {
    char *service;
    struct smbopt *opts;
    struct smbmonitors *next;
  };
  
  struct smbcache {
    int is_dirty;
    int thread_running;
    void *content;
    pthread_t thread;
    pthread_mutex_t mutex;
  };
  
  /* ATTENTION: The functions below handles only pointers to memory locations, 
   * they NEVER passes copies upwards, unless explicitly stated otherwise. So, 
   * users of these interfaces may never free any memory pointers 
   *
   * Moreover, char pointers returned by these functions should not be used as 
   * argument to another one of these function because the pointer may (and
   * probably will) become a dangling pointer when performing the second
   * operation
   *
   *
   * The pointers returned (like list pointers) by these functions become 
   * dangling pointers after a function is called, ie:
   *
   * char **p = get_samba_users_list();     <- get samba users
   * <call to any other of the functions>   <- call another function
   *                                        <- at this point "p" is likely to be
   *                                           a dangling pointer
   *                                          
   * not all functions cause the above behavior, but YOU HAVE BEEN WARNED!!!
   *
   *
   * Also, no list manipulation should be done by any other ways other than our 
   * public set_* api, as it will potentially corrupt metadata */

  //char *get_oficial_name(const char*);
  /*DEBUG ONLY*/
  
  
  //int clean_up();
  /* DEBUG ONLY. This is here only for RA tests */
  
  //struct smbopt *get_user_mapping_list();
  /* DEBUG ONLY */
  
  //char *__get_local_sid();
  /* DEBUG ONLY */
  
  
  void terminator();
  /* Call this to flush caches, stop threads and free up memory. Hasta la vista, 
   * baby! */
  
  
  
  int enable_service(const char *);
  /* (service name). Returns zero on success or an error_code on failure*/
  
  int disable_service(const char *);
  /* (service name). Returns zero on success or an error_code on failure */
  
  int service_exists(const char*);
  /* (service name). Returns 1 if the service alredy exists and zero otherwise.
   * On failure, errno is set accordingly */
  
  
  
  char *get_default_option(const char *); 
  /*(option name). This returns the value of the option from the defaults */
  
  char *get_option(const char *,const char *); 
  /*(service name, option name). This returns the value of the option from the 
   * service */
  
  int set_option(const char *, const char*, const char*);
  /* (sservice name, opt name, new opt value). This changes the value of the
   * option from the specified service to new opt value. A copy of the new value
   * is made internally, so, this function does not care about what happens later
   * to the pointer of the new value passed as argument. This functions performs
   * all the extra job if needed. If value is NULL, the option is removed from
   * the service. Returns zero on success or an error_code on
   * failure*/
  
  char *get_global_option(const char *);
  /* (global option name). Returns the value of the global option. Read the
   * attention section in the beginning of this file. Returns NULL on failure */
  
  int set_global_option(const char *, const char *);
  /* (option name, option value). A copy of the new value is made internally, so,
   * this function does not care about what later happens to the pointer to the
   * new option value passed as argument. If value is NULL, the option is removed
   * from  the share. Returns zero on success or an 
   * error_code on failure */
  
  

  int share_exists(const char*);
  /* (share name) Returns 0 if the share does not exist, otherwise, if the share 
     exists, 1 is returned */

  char **get_shares_list();
  /* This function returns a list of shares that ARE NOT printable. Therefore, 
   * consider that thi swill return everything but printers. The last element of
   * this list points to NULL. Be aware that after deleting/creating a share,
   * info of pointers gotten from this function WILL BE OUTDATED; you should call
   * this again after creating or deleting a share */
  
  int add_share(const char *);
  /* (share name, share opt struct) Returns zero on success or an error_code on 
   * failure. This function does a check to see if the share already exists and,
   * if so, it returns a faliure. This function performs all the extra jobs when 
   * needed */
  
  int delete_share(const char *);
  /* (share name). Returns zero on success or an error_code on failure. This 
   * function performs all the extra cleanup procedures in the system when 
   * needed. The checks whether the service exists and is not global is performed
   * and in these cases an error is returned  */
  
  int set_share_option(const char *,const char *,const char *);
  /* (share name, opt name, new opt value). This changes the value of the 
   * option from the specified share to new opt value. A copy of the new value 
   * is made internally, so, this function does not care about what happens later
   * to the pointer of the new value passed as argument. This functions performs 
   * all the extra job if needed. If value is NULL, the option is removed from 
   * the share. Returns zero on success or an error_code on 
   * failure*/
  

  
  char **get_cups_printer_list();
  /* from list of printers already defined to CUPS */
  
  int printer_exists(const char*);
  /* (share name) Returns 0 if the share was not found otherwise, if the printer
     was found, 1 is returned. */

  char **get_samba_printers_list();
  /* This function returns all the shares that are printable. Therefore, it
   * returns all defined samba ptinters. The last element of the list is a
   * pointer to NULL. Be aware that after deleting/creating a share,
   * info of pointers gotten from this function WILL BE OUTDATED; you should call
   * this again after creating or deleting a share */
  
  int add_samba_printer(const char *);
  /* (printer name, printer opt struct) Returns zero on success or an error_code 
   * on failure. This function performs all the extra jobs when needed */
  
  int delete_samba_printer(const char *);
  /* (printer name). Returns zero on success or an error_code on failure. This 
   * function performs all the extra cleanup procedures in the system when
   * needed. The checks whether the service exists and is not global is performed
   * and in these cases an error is returned */
  
  int set_printer_option(const char *,const char *,const char *);
  /* (printer name, opt name, new opt value). This changes the value of the 
   * option from the specified share to new opt value. A copy of the new value 
   * is made internally, so, this function does not care about what happens later
   * to the pointer of the new value passed as argument. This functions performs 
   * all the extra job if needed. If value is NULL, the option is removed from 
   * the share. Returns zero on success or an error_code on 
   * failure*/
  


  
  char **get_samba_users_list();
  /* This returns a list of Samba users defined in the system. The last element
   * of the list is a pointer to NULL */
  
  char **get_system_users_list();
  /* This returns the system users list. The last element of the list is a 
   * pointer to NULL */
  
  char *get_user_unix_name(const char*);
  /* (samba_user_name). Returns the unix name of the specified samba user. On
   * failure, returns NULL. Note that this function will check the samba user
   * against the usermap file only. If it doesn't find a mapping, it returns the
   * argument given (the samba user name). It DOES NOT check if samba_user_name
   * is a valid samba user */
  
  char **get_user_groups(const char *);
  /* (samba_user_name). Returns a list of samba groups to which this samba user
   * belongs. The last element of the list points to NULL. Returns NULL on 
   * failure. */ 
  
  int add_samba_user(const char*, const char*, const char*);
  /* (samba_user_name, unix_user_name, samba_group_name, password). This adds a 
   * samba user to samba. If unix_user_name is NULL, then it will make the unix 
   * name be the same of the samba user name. Returns 0 on success or and error 
   * code on failure */
  
  int delete_samba_user(const char*);
  /* (samba_user_name). This deletes the specified samba user. This will also
   * delete the corresponding system user name. Returns 0 on success or an error
   * code on failure */
  
  int add_user_to_group(const char*, const char*);
  /* (samba_username, samba_groupname). Adds samba user to the specified samba
   * group. Returns 0 on sucess or an error code on failure */
  
  int remove_user_from_group(const char*, const char*);
  /* (samba_username, samba_groupname). Removes samba user from specified samba
   * group */
  
  /* There's no attribute in Linux_SambaUser that we can change */
  //int modify_user();
  /* Under questioning if we'll really support this */
  

  int validHostName(const char*);
  /* (host_name). Checking method to process a check if the specified host name is
     valid. */
  
  
  char **get_samba_groups_list();
  /* Returns the existing samba groups. On failure, returns NULL */
  
  char **get_system_groups_list();
  /* Returns the existing system groups. On failure, returns NULL */
  
  char *get_unix_group_name(const char*);
  /* Returns the unix name of the samba group. Returns NULL on error. If there's 
   * no mapping for that samba group, returns the string "-1" */
  
  int set_group_mapping(const char*, const char *);
  /* (samba_group_name, system_group_name). Creates a mapping from 
   * samba_group_name to system_group_name. Returns 0 on sucess or an error
   * code on failure. If system_group_name is NULL, the mapping between the 
   * groups is removed if it exists */
  
  int create_samba_group(const char *, const char *);
  /* (samba group name, unix group name). Creates a samba group and map it to the
   * given unix group. If unix group name is NULL, this creates the samb group 
   * and maps it to system users group. It also creates system group if needed. 
   * Returns 0 on success and an error code on failure */
  
  int delete_samba_group(const char*);
  /* (samba group name). Deletes the samba group. Returns 0 on success or an
   * error code on failure */
  
  
  
  
  
  int start_server();
  /* Returns 0 on success or non-zero on failure */
  
  int stop_server();
  /* Returns 0 on success or non-zero on failure */
  
  int restart_server();
  /* Returns 0 on success or non-zero on failure */
  
  int status_server();
  /* Returns 1 on success or 0 on failure */
  
#ifdef __cplusplus
}
#endif

#endif 

