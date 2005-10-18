/**
 *  Linux_SambaGuestAccountForGlobalRepositoryInstance.h
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


#ifndef Linux_SambaGuestAccountForGlobalRepositoryInstance_h
#define Linux_SambaGuestAccountForGlobalRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGuestAccountForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaGuestAccountForGlobalRepositoryInstance {
  public:
       Linux_SambaGuestAccountForGlobalRepositoryInstance();
  	
       Linux_SambaGuestAccountForGlobalRepositoryInstance
  	    (const Linux_SambaGuestAccountForGlobalRepositoryInstance& original);
  	   
       Linux_SambaGuestAccountForGlobalRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGuestAccountForGlobalRepositoryInstance();
       
       Linux_SambaGuestAccountForGlobalRepositoryInstance& operator=
  	    (const Linux_SambaGuestAccountForGlobalRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGuestAccountForGlobalInstanceName& val);        
       const Linux_SambaGuestAccountForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaGuestAccountForGlobalRepositoryInstance& original);
       void reset();
       
       Linux_SambaGuestAccountForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumerationElement{
  	Linux_SambaGuestAccountForGlobalRepositoryInstance* m_elementP;
  	Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumerationElement();
  	~Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumeration(
  	   const Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGuestAccountForGlobalRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGuestAccountForGlobalRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGuestAccountForGlobalRepositoryInstance& elementP);
  };
}
#endif

