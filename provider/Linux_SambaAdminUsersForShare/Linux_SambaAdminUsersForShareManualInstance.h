/**
 *  Linux_SambaAdminUsersForShareManualInstance.h
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


#ifndef Linux_SambaAdminUsersForShareManualInstance_h
#define Linux_SambaAdminUsersForShareManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaAdminUsersForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaAdminUsersForShareManualInstance {
  public:
       Linux_SambaAdminUsersForShareManualInstance();
  	
       Linux_SambaAdminUsersForShareManualInstance
  	    (const Linux_SambaAdminUsersForShareManualInstance& original);
  	   
       Linux_SambaAdminUsersForShareManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaAdminUsersForShareManualInstance();
       
       Linux_SambaAdminUsersForShareManualInstance& operator=
  	    (const Linux_SambaAdminUsersForShareManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaAdminUsersForShareInstanceName& val);        
       const Linux_SambaAdminUsersForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaAdminUsersForShareManualInstance& original);
       void reset();
       
       Linux_SambaAdminUsersForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaAdminUsersForShareManualInstanceEnumerationElement{
  	Linux_SambaAdminUsersForShareManualInstance* m_elementP;
  	Linux_SambaAdminUsersForShareManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaAdminUsersForShareManualInstanceEnumerationElement();
  	~Linux_SambaAdminUsersForShareManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaAdminUsersForShareManualInstanceEnumeration {
  	private:
  	  Linux_SambaAdminUsersForShareManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaAdminUsersForShareManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaAdminUsersForShareManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaAdminUsersForShareManualInstanceEnumeration();
  	  
  	  Linux_SambaAdminUsersForShareManualInstanceEnumeration(
  	   const Linux_SambaAdminUsersForShareManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaAdminUsersForShareManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaAdminUsersForShareManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaAdminUsersForShareManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaAdminUsersForShareManualInstance& elementP);
  };
}
#endif

