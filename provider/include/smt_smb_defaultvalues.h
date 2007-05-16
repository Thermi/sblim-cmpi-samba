/**
 *  smt_smb_defaultvalues.h
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
 *                Wolfgang Taphorn   <taphorn@de.ibm.com>
 *                Mukunda Chowdaiah  <cmukunda@in.ibm.com>
 *                Ashoka S Rao       <ashoka.rao@in.ibm.com>
 *
 */



#ifndef _DEFAULTVALUES_H_
#define _DEFAULTVALUES_H_

#define DEFAULT_GLOBAL_NAME                "Global"
#define DEFAULT_INSTANCE_ID                "smbd"
#define DEFAULT_NAME                       "smbd"
#define	DEFAULT_SYSTEM_CREATION_CLASS_NAME "Linux_SambaService"
#define DEFAULT_SYSTEM_NAME	           "localhost"
#define DEFAULT_CREATION_CLASS_NAME        "Linux_SambaService"
#define DEFAULT_SERVICE_NAME               "smbd"

#define YES "yes"
#define NO  "no"

// Definitions of Samba attributes
#define BIND_INTERFACES_ONLY           "bind interfaces only"
#define INTERFACES                     "interfaces"
#define NETBIOS_ALIASES                "netbios aliases"
#define NETBIOS_NAME                   "netbios name"
#define SERVER_STRING                  "server string"
#define WORKGROUP                      "workgroup"

#define BROWSEABLE                     "browseable"
#define DOMAIN_MASTER                  "domain master"

#define CASE_SENSITIVE                 "case sensitive"
#define DOS_FILETIMES                  "dos filetimes"
#define HIDE_DOT_FILES                 "hide dot files"

#define CUPS_OPTIONS                   "cups options"
#define DEFAULT_DEVMODE                "default devmode"
#define MAX_PRINT_JOBS                 "max print jobs"
#define MAX_REPORTED_PRINT_JOBS        "max reported print jobs"
#define PRINT_COMMAND                  "print command"
#define PRINTCAP_CACHE_TIME            "printcap cache time"
#define PRINTER_NAME                   "printer name"
#define USE_CLIENT_DRIVER              "use client driver"

#define ACL_COMPATIBILITY              "acl compatibility"
#define EA_SUPPORT                     "ea support"
#define NT_ACL_SUPPORT                 "nt acl support"

#define AUTH_METHODS                   "auth methods"
#define ENCRYPT_PASSWORDS              "encrypt passwords"
#define MIN_PASSWORD_LENGTH            "min password length"
#define NULL_PASSWORDS                 "null passwords"
#define PASSDB_BACKEND                 "passdb backend"
#define SMB_PASSWD_FILE                "smb passwd file"
#define SECURITY                       "security"

#define AVAILABLE                      "available"
#define COMMENT                        "comment"
#define PATH                           "path"
#define PRINTABLE                      "printable"
#define PRINTER_NAME                   "printer name"

#define CREATE_MASK                    "create mask"
#define DIRECTORY_MASK                 "directory mask"
#define DIRECTORY_SECURITY_MASK        "directory security mask"

#define CUPS_OPTIONS                   "cups options"
#define DEFAULT_DEVMODE                "default devmode"
#define MAX_PRINT_JOBS                 "max print jobs"
#define PRINT_COMMAND                  "print command"
#define USE_CLIENT_DRIVER              "use client driver"
#define MAX_REPORTED_PRINT_JOBS        "max reported print jobs"

#define ADD_GROUP_SCRIPT               "add group script"
#define ADD_PRINTER_COMMAND            "add printer command"
#define ADD_SHARE_COMMAND              "add share command"
#define ADD_USER_SCRIPT                "add user script"
#define ADD_USER_TO_GROUP_SCRIPT       "add user to group script"
#define DELETE_GROUP_SCRIPT            "delete group script"
#define DELETE_USER_SCRIPT             "delete user script"
#define DELETE_USER_FROM_GROUP_SCRIPT  "delete user from group script"

#define GUEST_OK                       "guest ok"
#define GUEST_ONLY                     "guest only"
#define HOSTS_ALLOW                    "hosts allow"
#define HOSTS_DENY                     "hosts deny"
#define READ_ONLY                      "read only"


#endif 
