/**
 *  Linux_SambaReadListForGlobalRepositoryInstance.h
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


#ifndef Linux_SambaReadListForGlobalRepositoryInstance_h
#define Linux_SambaReadListForGlobalRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaReadListForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaReadListForGlobalRepositoryInstance {
  public:
       Linux_SambaReadListForGlobalRepositoryInstance();
  	
       Linux_SambaReadListForGlobalRepositoryInstance
  	    (const Linux_SambaReadListForGlobalRepositoryInstance& original);
  	   
       Linux_SambaReadListForGlobalRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaReadListForGlobalRepositoryInstance();
       
       Linux_SambaReadListForGlobalRepositoryInstance& operator=
  	    (const Linux_SambaReadListForGlobalRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaReadListForGlobalInstanceName& val);        
       const Linux_SambaReadListForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaReadListForGlobalRepositoryInstance& original);
       void reset();
       
       Linux_SambaReadListForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaReadListForGlobalRepositoryInstanceEnumerationElement{
  	Linux_SambaReadListForGlobalRepositoryInstance* m_elementP;
  	Linux_SambaReadListForGlobalRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaReadListForGlobalRepositoryInstanceEnumerationElement();
  	~Linux_SambaReadListForGlobalRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaReadListForGlobalRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaReadListForGlobalRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaReadListForGlobalRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaReadListForGlobalRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaReadListForGlobalRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaReadListForGlobalRepositoryInstanceEnumeration(
  	   const Linux_SambaReadListForGlobalRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaReadListForGlobalRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaReadListForGlobalRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaReadListForGlobalRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaReadListForGlobalRepositoryInstance& elementP);
  };
}
#endif

