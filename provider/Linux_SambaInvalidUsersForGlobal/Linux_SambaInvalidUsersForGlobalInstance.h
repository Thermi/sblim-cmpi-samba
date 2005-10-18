/**
 *  Linux_SambaInvalidUsersForGlobalInstance.h
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


#ifndef Linux_SambaInvalidUsersForGlobalInstance_h
#define Linux_SambaInvalidUsersForGlobalInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaInvalidUsersForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaInvalidUsersForGlobalInstance {
  public:
       Linux_SambaInvalidUsersForGlobalInstance();
  	
       Linux_SambaInvalidUsersForGlobalInstance
  	    (const Linux_SambaInvalidUsersForGlobalInstance& original);
  	   
       Linux_SambaInvalidUsersForGlobalInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaInvalidUsersForGlobalInstance();
       
       Linux_SambaInvalidUsersForGlobalInstance& operator=
  	    (const Linux_SambaInvalidUsersForGlobalInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaInvalidUsersForGlobalInstanceName& val);        
       const Linux_SambaInvalidUsersForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaInvalidUsersForGlobalInstance& original);
       void reset();
       
       Linux_SambaInvalidUsersForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement{
  	Linux_SambaInvalidUsersForGlobalInstance* m_elementP;
  	Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement();
  	~Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement();  	
  };
  

  class Linux_SambaInvalidUsersForGlobalInstanceEnumeration {
  	private:
  	  Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement* firstElementP;
  	  Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement* currentElementP;
  	  Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaInvalidUsersForGlobalInstanceEnumeration();
  	  
  	  Linux_SambaInvalidUsersForGlobalInstanceEnumeration(
  	   const Linux_SambaInvalidUsersForGlobalInstanceEnumeration& original);
  	  
  	  ~Linux_SambaInvalidUsersForGlobalInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaInvalidUsersForGlobalInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaInvalidUsersForGlobalInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaInvalidUsersForGlobalInstance& elementP);
  };
}
#endif

