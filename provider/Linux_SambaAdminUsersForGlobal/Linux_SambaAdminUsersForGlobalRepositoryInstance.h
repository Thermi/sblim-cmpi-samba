/**
 *  Linux_SambaAdminUsersForGlobalRepositoryInstance.h
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
 *
 */


#ifndef Linux_SambaAdminUsersForGlobalRepositoryInstance_h
#define Linux_SambaAdminUsersForGlobalRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaAdminUsersForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaAdminUsersForGlobalRepositoryInstance {
  public:
       Linux_SambaAdminUsersForGlobalRepositoryInstance();
  	
       Linux_SambaAdminUsersForGlobalRepositoryInstance
  	    (const Linux_SambaAdminUsersForGlobalRepositoryInstance& original);
  	   
       Linux_SambaAdminUsersForGlobalRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaAdminUsersForGlobalRepositoryInstance();
       
       Linux_SambaAdminUsersForGlobalRepositoryInstance& operator=
  	    (const Linux_SambaAdminUsersForGlobalRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaAdminUsersForGlobalInstanceName& val);        
       const Linux_SambaAdminUsersForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaAdminUsersForGlobalRepositoryInstance& original);
       void reset();
       
       Linux_SambaAdminUsersForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumerationElement{
  	Linux_SambaAdminUsersForGlobalRepositoryInstance* m_elementP;
  	Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumerationElement();
  	~Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumeration(
  	   const Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaAdminUsersForGlobalRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaAdminUsersForGlobalRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaAdminUsersForGlobalRepositoryInstance& elementP);
  };
}
#endif

