/**
 *  Linux_SambaForceUserForGlobalRepositoryInstance.h
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


#ifndef Linux_SambaForceUserForGlobalRepositoryInstance_h
#define Linux_SambaForceUserForGlobalRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceUserForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaForceUserForGlobalRepositoryInstance {
  public:
       Linux_SambaForceUserForGlobalRepositoryInstance();
  	
       Linux_SambaForceUserForGlobalRepositoryInstance
  	    (const Linux_SambaForceUserForGlobalRepositoryInstance& original);
  	   
       Linux_SambaForceUserForGlobalRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaForceUserForGlobalRepositoryInstance();
       
       Linux_SambaForceUserForGlobalRepositoryInstance& operator=
  	    (const Linux_SambaForceUserForGlobalRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaForceUserForGlobalInstanceName& val);        
       const Linux_SambaForceUserForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaForceUserForGlobalRepositoryInstance& original);
       void reset();
       
       Linux_SambaForceUserForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaForceUserForGlobalRepositoryInstanceEnumerationElement{
  	Linux_SambaForceUserForGlobalRepositoryInstance* m_elementP;
  	Linux_SambaForceUserForGlobalRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaForceUserForGlobalRepositoryInstanceEnumerationElement();
  	~Linux_SambaForceUserForGlobalRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaForceUserForGlobalRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaForceUserForGlobalRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaForceUserForGlobalRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaForceUserForGlobalRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaForceUserForGlobalRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaForceUserForGlobalRepositoryInstanceEnumeration(
  	   const Linux_SambaForceUserForGlobalRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaForceUserForGlobalRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaForceUserForGlobalRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaForceUserForGlobalRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaForceUserForGlobalRepositoryInstance& elementP);
  };
}
#endif

