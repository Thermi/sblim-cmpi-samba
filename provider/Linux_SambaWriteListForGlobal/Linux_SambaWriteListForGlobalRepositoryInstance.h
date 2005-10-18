/**
 *  Linux_SambaWriteListForGlobalRepositoryInstance.h
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


#ifndef Linux_SambaWriteListForGlobalRepositoryInstance_h
#define Linux_SambaWriteListForGlobalRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaWriteListForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaWriteListForGlobalRepositoryInstance {
  public:
       Linux_SambaWriteListForGlobalRepositoryInstance();
  	
       Linux_SambaWriteListForGlobalRepositoryInstance
  	    (const Linux_SambaWriteListForGlobalRepositoryInstance& original);
  	   
       Linux_SambaWriteListForGlobalRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaWriteListForGlobalRepositoryInstance();
       
       Linux_SambaWriteListForGlobalRepositoryInstance& operator=
  	    (const Linux_SambaWriteListForGlobalRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaWriteListForGlobalInstanceName& val);        
       const Linux_SambaWriteListForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaWriteListForGlobalRepositoryInstance& original);
       void reset();
       
       Linux_SambaWriteListForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaWriteListForGlobalRepositoryInstanceEnumerationElement{
  	Linux_SambaWriteListForGlobalRepositoryInstance* m_elementP;
  	Linux_SambaWriteListForGlobalRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaWriteListForGlobalRepositoryInstanceEnumerationElement();
  	~Linux_SambaWriteListForGlobalRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaWriteListForGlobalRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaWriteListForGlobalRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaWriteListForGlobalRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaWriteListForGlobalRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaWriteListForGlobalRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaWriteListForGlobalRepositoryInstanceEnumeration(
  	   const Linux_SambaWriteListForGlobalRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaWriteListForGlobalRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaWriteListForGlobalRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaWriteListForGlobalRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaWriteListForGlobalRepositoryInstance& elementP);
  };
}
#endif

