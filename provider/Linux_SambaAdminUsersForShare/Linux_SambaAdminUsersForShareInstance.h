/**
 *  Linux_SambaAdminUsersForShareInstance.h
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


#ifndef Linux_SambaAdminUsersForShareInstance_h
#define Linux_SambaAdminUsersForShareInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaAdminUsersForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaAdminUsersForShareInstance {
  public:
       Linux_SambaAdminUsersForShareInstance();
  	
       Linux_SambaAdminUsersForShareInstance
  	    (const Linux_SambaAdminUsersForShareInstance& original);
  	   
       Linux_SambaAdminUsersForShareInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaAdminUsersForShareInstance();
       
       Linux_SambaAdminUsersForShareInstance& operator=
  	    (const Linux_SambaAdminUsersForShareInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaAdminUsersForShareInstanceName& val);        
       const Linux_SambaAdminUsersForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaAdminUsersForShareInstance& original);
       void reset();
       
       Linux_SambaAdminUsersForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaAdminUsersForShareInstanceEnumerationElement{
  	Linux_SambaAdminUsersForShareInstance* m_elementP;
  	Linux_SambaAdminUsersForShareInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaAdminUsersForShareInstanceEnumerationElement();
  	~Linux_SambaAdminUsersForShareInstanceEnumerationElement();  	
  };
  

  class Linux_SambaAdminUsersForShareInstanceEnumeration {
  	private:
  	  Linux_SambaAdminUsersForShareInstanceEnumerationElement* firstElementP;
  	  Linux_SambaAdminUsersForShareInstanceEnumerationElement* currentElementP;
  	  Linux_SambaAdminUsersForShareInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaAdminUsersForShareInstanceEnumeration();
  	  
  	  Linux_SambaAdminUsersForShareInstanceEnumeration(
  	   const Linux_SambaAdminUsersForShareInstanceEnumeration& original);
  	  
  	  ~Linux_SambaAdminUsersForShareInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaAdminUsersForShareInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaAdminUsersForShareInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaAdminUsersForShareInstance& elementP);
  };
}
#endif

