/**
 *  Linux_SambaGlobalBrowseForGlobalRepositoryInstance.h
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


#ifndef Linux_SambaGlobalBrowseForGlobalRepositoryInstance_h
#define Linux_SambaGlobalBrowseForGlobalRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalBrowseForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalBrowseForGlobalRepositoryInstance {
  public:
       Linux_SambaGlobalBrowseForGlobalRepositoryInstance();
  	
       Linux_SambaGlobalBrowseForGlobalRepositoryInstance
  	    (const Linux_SambaGlobalBrowseForGlobalRepositoryInstance& original);
  	   
       Linux_SambaGlobalBrowseForGlobalRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalBrowseForGlobalRepositoryInstance();
       
       Linux_SambaGlobalBrowseForGlobalRepositoryInstance& operator=
  	    (const Linux_SambaGlobalBrowseForGlobalRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalBrowseForGlobalInstanceName& val);        
       const Linux_SambaGlobalBrowseForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalBrowseForGlobalRepositoryInstance& original);
       void reset();
       
       Linux_SambaGlobalBrowseForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumerationElement{
  	Linux_SambaGlobalBrowseForGlobalRepositoryInstance* m_elementP;
  	Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumerationElement();
  	~Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumeration(
  	   const Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalBrowseForGlobalRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalBrowseForGlobalRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalBrowseForGlobalRepositoryInstance& elementP);
  };
}
#endif

