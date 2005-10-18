/**
 *  Linux_SambaValidUsersForShareInstance.h
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


#ifndef Linux_SambaValidUsersForShareInstance_h
#define Linux_SambaValidUsersForShareInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaValidUsersForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaValidUsersForShareInstance {
  public:
       Linux_SambaValidUsersForShareInstance();
  	
       Linux_SambaValidUsersForShareInstance
  	    (const Linux_SambaValidUsersForShareInstance& original);
  	   
       Linux_SambaValidUsersForShareInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaValidUsersForShareInstance();
       
       Linux_SambaValidUsersForShareInstance& operator=
  	    (const Linux_SambaValidUsersForShareInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaValidUsersForShareInstanceName& val);        
       const Linux_SambaValidUsersForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaValidUsersForShareInstance& original);
       void reset();
       
       Linux_SambaValidUsersForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaValidUsersForShareInstanceEnumerationElement{
  	Linux_SambaValidUsersForShareInstance* m_elementP;
  	Linux_SambaValidUsersForShareInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaValidUsersForShareInstanceEnumerationElement();
  	~Linux_SambaValidUsersForShareInstanceEnumerationElement();  	
  };
  

  class Linux_SambaValidUsersForShareInstanceEnumeration {
  	private:
  	  Linux_SambaValidUsersForShareInstanceEnumerationElement* firstElementP;
  	  Linux_SambaValidUsersForShareInstanceEnumerationElement* currentElementP;
  	  Linux_SambaValidUsersForShareInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaValidUsersForShareInstanceEnumeration();
  	  
  	  Linux_SambaValidUsersForShareInstanceEnumeration(
  	   const Linux_SambaValidUsersForShareInstanceEnumeration& original);
  	  
  	  ~Linux_SambaValidUsersForShareInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaValidUsersForShareInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaValidUsersForShareInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaValidUsersForShareInstance& elementP);
  };
}
#endif

