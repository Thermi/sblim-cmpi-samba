/**
 *  Linux_SambaAdminUsersForShareRepositoryInstance.h
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


#ifndef Linux_SambaAdminUsersForShareRepositoryInstance_h
#define Linux_SambaAdminUsersForShareRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaAdminUsersForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaAdminUsersForShareRepositoryInstance {
  public:
       Linux_SambaAdminUsersForShareRepositoryInstance();
  	
       Linux_SambaAdminUsersForShareRepositoryInstance
  	    (const Linux_SambaAdminUsersForShareRepositoryInstance& original);
  	   
       Linux_SambaAdminUsersForShareRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaAdminUsersForShareRepositoryInstance();
       
       Linux_SambaAdminUsersForShareRepositoryInstance& operator=
  	    (const Linux_SambaAdminUsersForShareRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaAdminUsersForShareInstanceName& val);        
       const Linux_SambaAdminUsersForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaAdminUsersForShareRepositoryInstance& original);
       void reset();
       
       Linux_SambaAdminUsersForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaAdminUsersForShareRepositoryInstanceEnumerationElement{
  	Linux_SambaAdminUsersForShareRepositoryInstance* m_elementP;
  	Linux_SambaAdminUsersForShareRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaAdminUsersForShareRepositoryInstanceEnumerationElement();
  	~Linux_SambaAdminUsersForShareRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaAdminUsersForShareRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaAdminUsersForShareRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaAdminUsersForShareRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaAdminUsersForShareRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaAdminUsersForShareRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaAdminUsersForShareRepositoryInstanceEnumeration(
  	   const Linux_SambaAdminUsersForShareRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaAdminUsersForShareRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaAdminUsersForShareRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaAdminUsersForShareRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaAdminUsersForShareRepositoryInstance& elementP);
  };
}
#endif

