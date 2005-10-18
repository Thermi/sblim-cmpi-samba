/**
 *  Linux_SambaGroupForUserRepositoryInstance.h
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


#ifndef Linux_SambaGroupForUserRepositoryInstance_h
#define Linux_SambaGroupForUserRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGroupForUserInstanceName.h"

namespace genProvider {

  class Linux_SambaGroupForUserRepositoryInstance {
  public:
       Linux_SambaGroupForUserRepositoryInstance();
  	
       Linux_SambaGroupForUserRepositoryInstance
  	    (const Linux_SambaGroupForUserRepositoryInstance& original);
  	   
       Linux_SambaGroupForUserRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGroupForUserRepositoryInstance();
       
       Linux_SambaGroupForUserRepositoryInstance& operator=
  	    (const Linux_SambaGroupForUserRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGroupForUserInstanceName& val);        
       const Linux_SambaGroupForUserInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaGroupForUserRepositoryInstance& original);
       void reset();
       
       Linux_SambaGroupForUserInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGroupForUserRepositoryInstanceEnumerationElement{
  	Linux_SambaGroupForUserRepositoryInstance* m_elementP;
  	Linux_SambaGroupForUserRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGroupForUserRepositoryInstanceEnumerationElement();
  	~Linux_SambaGroupForUserRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGroupForUserRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaGroupForUserRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGroupForUserRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGroupForUserRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGroupForUserRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaGroupForUserRepositoryInstanceEnumeration(
  	   const Linux_SambaGroupForUserRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGroupForUserRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGroupForUserRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGroupForUserRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGroupForUserRepositoryInstance& elementP);
  };
}
#endif

