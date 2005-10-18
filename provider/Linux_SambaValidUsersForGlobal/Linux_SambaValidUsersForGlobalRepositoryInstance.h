/**
 *  Linux_SambaValidUsersForGlobalRepositoryInstance.h
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


#ifndef Linux_SambaValidUsersForGlobalRepositoryInstance_h
#define Linux_SambaValidUsersForGlobalRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaValidUsersForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaValidUsersForGlobalRepositoryInstance {
  public:
       Linux_SambaValidUsersForGlobalRepositoryInstance();
  	
       Linux_SambaValidUsersForGlobalRepositoryInstance
  	    (const Linux_SambaValidUsersForGlobalRepositoryInstance& original);
  	   
       Linux_SambaValidUsersForGlobalRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaValidUsersForGlobalRepositoryInstance();
       
       Linux_SambaValidUsersForGlobalRepositoryInstance& operator=
  	    (const Linux_SambaValidUsersForGlobalRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaValidUsersForGlobalInstanceName& val);        
       const Linux_SambaValidUsersForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaValidUsersForGlobalRepositoryInstance& original);
       void reset();
       
       Linux_SambaValidUsersForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaValidUsersForGlobalRepositoryInstanceEnumerationElement{
  	Linux_SambaValidUsersForGlobalRepositoryInstance* m_elementP;
  	Linux_SambaValidUsersForGlobalRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaValidUsersForGlobalRepositoryInstanceEnumerationElement();
  	~Linux_SambaValidUsersForGlobalRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaValidUsersForGlobalRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaValidUsersForGlobalRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaValidUsersForGlobalRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaValidUsersForGlobalRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaValidUsersForGlobalRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaValidUsersForGlobalRepositoryInstanceEnumeration(
  	   const Linux_SambaValidUsersForGlobalRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaValidUsersForGlobalRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaValidUsersForGlobalRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaValidUsersForGlobalRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaValidUsersForGlobalRepositoryInstance& elementP);
  };
}
#endif

