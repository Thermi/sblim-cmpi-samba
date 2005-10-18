/**
 *  Linux_SambaAdminUsersForGlobalInstance.h
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


#ifndef Linux_SambaAdminUsersForGlobalInstance_h
#define Linux_SambaAdminUsersForGlobalInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaAdminUsersForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaAdminUsersForGlobalInstance {
  public:
       Linux_SambaAdminUsersForGlobalInstance();
  	
       Linux_SambaAdminUsersForGlobalInstance
  	    (const Linux_SambaAdminUsersForGlobalInstance& original);
  	   
       Linux_SambaAdminUsersForGlobalInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaAdminUsersForGlobalInstance();
       
       Linux_SambaAdminUsersForGlobalInstance& operator=
  	    (const Linux_SambaAdminUsersForGlobalInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaAdminUsersForGlobalInstanceName& val);        
       const Linux_SambaAdminUsersForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaAdminUsersForGlobalInstance& original);
       void reset();
       
       Linux_SambaAdminUsersForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaAdminUsersForGlobalInstanceEnumerationElement{
  	Linux_SambaAdminUsersForGlobalInstance* m_elementP;
  	Linux_SambaAdminUsersForGlobalInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaAdminUsersForGlobalInstanceEnumerationElement();
  	~Linux_SambaAdminUsersForGlobalInstanceEnumerationElement();  	
  };
  

  class Linux_SambaAdminUsersForGlobalInstanceEnumeration {
  	private:
  	  Linux_SambaAdminUsersForGlobalInstanceEnumerationElement* firstElementP;
  	  Linux_SambaAdminUsersForGlobalInstanceEnumerationElement* currentElementP;
  	  Linux_SambaAdminUsersForGlobalInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaAdminUsersForGlobalInstanceEnumeration();
  	  
  	  Linux_SambaAdminUsersForGlobalInstanceEnumeration(
  	   const Linux_SambaAdminUsersForGlobalInstanceEnumeration& original);
  	  
  	  ~Linux_SambaAdminUsersForGlobalInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaAdminUsersForGlobalInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaAdminUsersForGlobalInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaAdminUsersForGlobalInstance& elementP);
  };
}
#endif

