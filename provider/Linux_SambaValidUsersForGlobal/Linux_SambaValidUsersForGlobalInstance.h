/**
 *  Linux_SambaValidUsersForGlobalInstance.h
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


#ifndef Linux_SambaValidUsersForGlobalInstance_h
#define Linux_SambaValidUsersForGlobalInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaValidUsersForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaValidUsersForGlobalInstance {
  public:
       Linux_SambaValidUsersForGlobalInstance();
  	
       Linux_SambaValidUsersForGlobalInstance
  	    (const Linux_SambaValidUsersForGlobalInstance& original);
  	   
       Linux_SambaValidUsersForGlobalInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaValidUsersForGlobalInstance();
       
       Linux_SambaValidUsersForGlobalInstance& operator=
  	    (const Linux_SambaValidUsersForGlobalInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaValidUsersForGlobalInstanceName& val);        
       const Linux_SambaValidUsersForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaValidUsersForGlobalInstance& original);
       void reset();
       
       Linux_SambaValidUsersForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaValidUsersForGlobalInstanceEnumerationElement{
  	Linux_SambaValidUsersForGlobalInstance* m_elementP;
  	Linux_SambaValidUsersForGlobalInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaValidUsersForGlobalInstanceEnumerationElement();
  	~Linux_SambaValidUsersForGlobalInstanceEnumerationElement();  	
  };
  

  class Linux_SambaValidUsersForGlobalInstanceEnumeration {
  	private:
  	  Linux_SambaValidUsersForGlobalInstanceEnumerationElement* firstElementP;
  	  Linux_SambaValidUsersForGlobalInstanceEnumerationElement* currentElementP;
  	  Linux_SambaValidUsersForGlobalInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaValidUsersForGlobalInstanceEnumeration();
  	  
  	  Linux_SambaValidUsersForGlobalInstanceEnumeration(
  	   const Linux_SambaValidUsersForGlobalInstanceEnumeration& original);
  	  
  	  ~Linux_SambaValidUsersForGlobalInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaValidUsersForGlobalInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaValidUsersForGlobalInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaValidUsersForGlobalInstance& elementP);
  };
}
#endif

