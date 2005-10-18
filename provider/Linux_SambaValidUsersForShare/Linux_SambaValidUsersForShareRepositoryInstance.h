/**
 *  Linux_SambaValidUsersForShareRepositoryInstance.h
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


#ifndef Linux_SambaValidUsersForShareRepositoryInstance_h
#define Linux_SambaValidUsersForShareRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaValidUsersForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaValidUsersForShareRepositoryInstance {
  public:
       Linux_SambaValidUsersForShareRepositoryInstance();
  	
       Linux_SambaValidUsersForShareRepositoryInstance
  	    (const Linux_SambaValidUsersForShareRepositoryInstance& original);
  	   
       Linux_SambaValidUsersForShareRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaValidUsersForShareRepositoryInstance();
       
       Linux_SambaValidUsersForShareRepositoryInstance& operator=
  	    (const Linux_SambaValidUsersForShareRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaValidUsersForShareInstanceName& val);        
       const Linux_SambaValidUsersForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaValidUsersForShareRepositoryInstance& original);
       void reset();
       
       Linux_SambaValidUsersForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaValidUsersForShareRepositoryInstanceEnumerationElement{
  	Linux_SambaValidUsersForShareRepositoryInstance* m_elementP;
  	Linux_SambaValidUsersForShareRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaValidUsersForShareRepositoryInstanceEnumerationElement();
  	~Linux_SambaValidUsersForShareRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaValidUsersForShareRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaValidUsersForShareRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaValidUsersForShareRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaValidUsersForShareRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaValidUsersForShareRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaValidUsersForShareRepositoryInstanceEnumeration(
  	   const Linux_SambaValidUsersForShareRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaValidUsersForShareRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaValidUsersForShareRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaValidUsersForShareRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaValidUsersForShareRepositoryInstance& elementP);
  };
}
#endif

