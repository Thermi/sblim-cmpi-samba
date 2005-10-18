/*
 * smt_smb_ra_path.c
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

#include <string.h>

struct list{
  char *dir;
  struct list *next;
  struct list *prev;
};


static struct list *create_list_elem(char *dir){
  
  struct list *elem = (struct list*) malloc(sizeof(struct list));
  
  elem->dir = strdup(dir);
  elem->next = NULL;
  elem->prev = NULL;
}


static void free_list_elem(struct list *elem){

  if (elem){
    free(elem->dir);
    free(elem);
  }

}


static void build_path(struct list *lst, char *buf){

  struct list *cur_elem = lst;
  
  while(cur_elem){
    if (cur_elem->prev && cur_elem->prev!=lst) strcat(buf,"/");
    strcat(buf,cur_elem->dir);
    cur_elem = cur_elem->next; 
  }
  
}


/* Returns the real system path. The output is something like python's 
 * os.path.realpath() method, except for the fact that it does NOT substitute
 * symbolic links */
char *limited_canonicalize_path(char *path){

  char *cur_dir, *path_copy, *path_copy_ptr, *canonical_path;
  struct list *cur_elem, *new_elem, *lst = NULL;
  int size = 0, num_elem = 0;
  
  /* treatment for the beggining of path */
  if (*path == '/'){
    lst = create_list_elem("/");
    path_copy_ptr = strdup(path+1);
    size += 1;
    num_elem += 1;
  }
  else{
    lst = create_list_elem("./");
    path_copy_ptr = strdup(path);
    size += 2;
    num_elem += 1;
  }
  path_copy = path_copy_ptr;
  cur_elem = lst;

  while( path_copy ){
    cur_dir = strsep(&path_copy,"/");

    if (!cur_dir || strlen(cur_dir)==0) continue; 
    /* multiple '/' or trailing '/' */

    if (strlen(cur_dir)==1 && cur_dir[0]=='.') continue; /* ignore */
      
    if (strlen(cur_dir)==2 && cur_dir[0]=='.' && cur_dir[1]=='.'){
      /* go back one level */
      if (cur_elem->prev){
	size -= strlen(cur_elem->dir);
	num_elem -= 1;
	cur_elem = cur_elem->prev;
	free_list_elem(cur_elem->next);
	cur_elem->next = NULL;
      } /*else: do nothing, we're at list root */
      continue;
    }

    new_elem = create_list_elem(cur_dir);  /*default: add to path list */
    cur_elem->next = new_elem;
    new_elem->prev = cur_elem;
    cur_elem = new_elem;
    size += strlen(cur_dir);
    num_elem += 1;
  }

  canonical_path = (char *) malloc ((size + num_elem-1 + 1)*sizeof(char));
                /* length of path dir names + '/' between them + \0 */
  if (!canonical_path) goto out;
  strcpy(canonical_path,"");

  build_path(lst, canonical_path);

 out:
  while (lst){
    cur_elem = lst;
    lst = lst->next;
    free_list_elem(cur_elem);
  }

  free(path_copy_ptr);
  return canonical_path;
}
