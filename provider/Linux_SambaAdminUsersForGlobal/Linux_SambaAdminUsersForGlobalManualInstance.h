/**
 *  Linux_SambaAdminUsersForGlobalManualInstance.h
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


#ifndef Linux_SambaAdminUsersForGlobalManualInstance_h
#define Linux_SambaAdminUsersForGlobalManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaAdminUsersForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaAdminUsersForGlobalManualInstance {
  public:
       Linux_SambaAdminUsersForGlobalManualInstance();
  	
       Linux_SambaAdminUsersForGlobalManualInstance
  	    (const Linux_SambaAdminUsersForGlobalManualInstance& original);
  	   
       Linux_SambaAdminUsersForGlobalManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaAdminUsersForGlobalManualInstance();
       
       Linux_SambaAdminUsersForGlobalManualInstance& operator=
  	    (const Linux_SambaAdminUsersForGlobalManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaAdminUsersForGlobalInstanceName& val);        
       const Linux_SambaAdminUsersForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaAdminUsersForGlobalManualInstance& original);
       void reset();
       
       Linux_SambaAdminUsersForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaAdminUsersForGlobalManualInstanceEnumerationElement{
  	Linux_SambaAdminUsersForGlobalManualInstance* m_elementP;
  	Linux_SambaAdminUsersForGlobalManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaAdminUsersForGlobalManualInstanceEnumerationElement();
  	~Linux_SambaAdminUsersForGlobalManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaAdminUsersForGlobalManualInstanceEnumeration {
  	private:
  	  Linux_SambaAdminUsersForGlobalManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaAdminUsersForGlobalManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaAdminUsersForGlobalManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaAdminUsersForGlobalManualInstanceEnumeration();
  	  
  	  Linux_SambaAdminUsersForGlobalManualInstanceEnumeration(
  	   const Linux_SambaAdminUsersForGlobalManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaAdminUsersForGlobalManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaAdminUsersForGlobalManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaAdminUsersForGlobalManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaAdminUsersForGlobalManualInstance& elementP);
  };
}
#endif

