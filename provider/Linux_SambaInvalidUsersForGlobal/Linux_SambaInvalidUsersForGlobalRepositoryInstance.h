/**
 *  Linux_SambaInvalidUsersForGlobalRepositoryInstance.h
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


#ifndef Linux_SambaInvalidUsersForGlobalRepositoryInstance_h
#define Linux_SambaInvalidUsersForGlobalRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaInvalidUsersForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaInvalidUsersForGlobalRepositoryInstance {
  public:
       Linux_SambaInvalidUsersForGlobalRepositoryInstance();
  	
       Linux_SambaInvalidUsersForGlobalRepositoryInstance
  	    (const Linux_SambaInvalidUsersForGlobalRepositoryInstance& original);
  	   
       Linux_SambaInvalidUsersForGlobalRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaInvalidUsersForGlobalRepositoryInstance();
       
       Linux_SambaInvalidUsersForGlobalRepositoryInstance& operator=
  	    (const Linux_SambaInvalidUsersForGlobalRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaInvalidUsersForGlobalInstanceName& val);        
       const Linux_SambaInvalidUsersForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaInvalidUsersForGlobalRepositoryInstance& original);
       void reset();
       
       Linux_SambaInvalidUsersForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement{
  	Linux_SambaInvalidUsersForGlobalRepositoryInstance* m_elementP;
  	Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement();
  	~Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration(
  	   const Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaInvalidUsersForGlobalRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaInvalidUsersForGlobalRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaInvalidUsersForGlobalRepositoryInstance& elementP);
  };
}
#endif

