/**
 *  Linux_SambaForceGroupForGlobalRepositoryInstance.h
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


#ifndef Linux_SambaForceGroupForGlobalRepositoryInstance_h
#define Linux_SambaForceGroupForGlobalRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceGroupForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaForceGroupForGlobalRepositoryInstance {
  public:
       Linux_SambaForceGroupForGlobalRepositoryInstance();
  	
       Linux_SambaForceGroupForGlobalRepositoryInstance
  	    (const Linux_SambaForceGroupForGlobalRepositoryInstance& original);
  	   
       Linux_SambaForceGroupForGlobalRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaForceGroupForGlobalRepositoryInstance();
       
       Linux_SambaForceGroupForGlobalRepositoryInstance& operator=
  	    (const Linux_SambaForceGroupForGlobalRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaForceGroupForGlobalInstanceName& val);        
       const Linux_SambaForceGroupForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaForceGroupForGlobalRepositoryInstance& original);
       void reset();
       
       Linux_SambaForceGroupForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaForceGroupForGlobalRepositoryInstanceEnumerationElement{
  	Linux_SambaForceGroupForGlobalRepositoryInstance* m_elementP;
  	Linux_SambaForceGroupForGlobalRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaForceGroupForGlobalRepositoryInstanceEnumerationElement();
  	~Linux_SambaForceGroupForGlobalRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaForceGroupForGlobalRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaForceGroupForGlobalRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaForceGroupForGlobalRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration(
  	   const Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaForceGroupForGlobalRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaForceGroupForGlobalRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaForceGroupForGlobalRepositoryInstance& elementP);
  };
}
#endif

