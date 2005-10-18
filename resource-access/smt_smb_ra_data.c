/*
 * smt_smb_ra_data.c
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
#include <pthread.h>
#include "smt_smb_ra_support.h"
#include <smt_libra_conf.h>
#include <smt_libra_monitors.h>


/* According to the samba documentation, an option that appears both in the 
 * global section and in a share section, get its value from the global 
 * section. However,there seems to be exceptions to this specification. the 
 * printer name key for example (and many others), gets its value from the 
 * global section IN THE CASE THERE IS NO SPECIFICATION IN THE SHARE. In this 
 * implementation, we mantain a list of such cases, wich is used by get_option 
 * merge do determine its behaviour */

#define SCRIPT_NAME __FUNCTION__

char *global_overrides[] = {"hosts allow","allow hosts","hosts deny","deny hosts",NULL};

struct smbopt *defaults = NULL;

/* Monitors and cache information */
struct conf *smb_conf = NULL;

struct monitor *services_list_monitor = NULL;
struct monitor *usermap_file_monitor = NULL;
struct monitor *groupmap_file_monitor = NULL;

struct smbopt *synonyms = NULL;
struct smbopt *usr_mapping = NULL;
struct smbopt *grp_mapping = NULL;
char **global_services_list = NULL;
char **global_shares_list = NULL;
char **global_printers_list = NULL;
char **global_samba_users_list = NULL;
char **global_system_users_list = NULL;
char **global_samba_groups_list = NULL;
char **global_system_groups_list = NULL;
char **cups_printers_list = NULL;

char **user_groups = NULL;

pthread_mutex_t glob_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t services_list_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t shares_list_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t printers_list_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t samba_users_list_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t system_users_list_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t samba_groups_list_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t system_groups_list_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cups_printers_list_mutex = PTHREAD_MUTEX_INITIALIZER;

struct smbcache monitors_cache = {0, 0, NULL, 0, PTHREAD_MUTEX_INITIALIZER};
struct smbcache usermap_cache = {0, 0, NULL, 0, PTHREAD_MUTEX_INITIALIZER};
struct smbcache groupmap_cache = {0, 0, NULL, 0, PTHREAD_MUTEX_INITIALIZER};
