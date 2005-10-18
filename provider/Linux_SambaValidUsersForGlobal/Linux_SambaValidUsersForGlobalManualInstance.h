/**
 *  Linux_SambaValidUsersForGlobalManualInstance.h
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


#ifndef Linux_SambaValidUsersForGlobalManualInstance_h
#define Linux_SambaValidUsersForGlobalManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaValidUsersForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaValidUsersForGlobalManualInstance {
  public:
       Linux_SambaValidUsersForGlobalManualInstance();
  	
       Linux_SambaValidUsersForGlobalManualInstance
  	    (const Linux_SambaValidUsersForGlobalManualInstance& original);
  	   
       Linux_SambaValidUsersForGlobalManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaValidUsersForGlobalManualInstance();
       
       Linux_SambaValidUsersForGlobalManualInstance& operator=
  	    (const Linux_SambaValidUsersForGlobalManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaValidUsersForGlobalInstanceName& val);        
       const Linux_SambaValidUsersForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaValidUsersForGlobalManualInstance& original);
       void reset();
       
       Linux_SambaValidUsersForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaValidUsersForGlobalManualInstanceEnumerationElement{
  	Linux_SambaValidUsersForGlobalManualInstance* m_elementP;
  	Linux_SambaValidUsersForGlobalManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaValidUsersForGlobalManualInstanceEnumerationElement();
  	~Linux_SambaValidUsersForGlobalManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaValidUsersForGlobalManualInstanceEnumeration {
  	private:
  	  Linux_SambaValidUsersForGlobalManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaValidUsersForGlobalManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaValidUsersForGlobalManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaValidUsersForGlobalManualInstanceEnumeration();
  	  
  	  Linux_SambaValidUsersForGlobalManualInstanceEnumeration(
  	   const Linux_SambaValidUsersForGlobalManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaValidUsersForGlobalManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaValidUsersForGlobalManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaValidUsersForGlobalManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaValidUsersForGlobalManualInstance& elementP);
  };
}
#endif

