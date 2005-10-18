/**
 *  Linux_SambaInvalidUsersForShareRepositoryInstance.h
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


#ifndef Linux_SambaInvalidUsersForShareRepositoryInstance_h
#define Linux_SambaInvalidUsersForShareRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaInvalidUsersForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaInvalidUsersForShareRepositoryInstance {
  public:
       Linux_SambaInvalidUsersForShareRepositoryInstance();
  	
       Linux_SambaInvalidUsersForShareRepositoryInstance
  	    (const Linux_SambaInvalidUsersForShareRepositoryInstance& original);
  	   
       Linux_SambaInvalidUsersForShareRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaInvalidUsersForShareRepositoryInstance();
       
       Linux_SambaInvalidUsersForShareRepositoryInstance& operator=
  	    (const Linux_SambaInvalidUsersForShareRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaInvalidUsersForShareInstanceName& val);        
       const Linux_SambaInvalidUsersForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaInvalidUsersForShareRepositoryInstance& original);
       void reset();
       
       Linux_SambaInvalidUsersForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaInvalidUsersForShareRepositoryInstanceEnumerationElement{
  	Linux_SambaInvalidUsersForShareRepositoryInstance* m_elementP;
  	Linux_SambaInvalidUsersForShareRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaInvalidUsersForShareRepositoryInstanceEnumerationElement();
  	~Linux_SambaInvalidUsersForShareRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaInvalidUsersForShareRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaInvalidUsersForShareRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaInvalidUsersForShareRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaInvalidUsersForShareRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaInvalidUsersForShareRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaInvalidUsersForShareRepositoryInstanceEnumeration(
  	   const Linux_SambaInvalidUsersForShareRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaInvalidUsersForShareRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaInvalidUsersForShareRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaInvalidUsersForShareRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaInvalidUsersForShareRepositoryInstance& elementP);
  };
}
#endif

