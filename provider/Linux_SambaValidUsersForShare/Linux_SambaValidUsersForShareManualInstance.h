/**
 *  Linux_SambaValidUsersForShareManualInstance.h
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


#ifndef Linux_SambaValidUsersForShareManualInstance_h
#define Linux_SambaValidUsersForShareManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaValidUsersForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaValidUsersForShareManualInstance {
  public:
       Linux_SambaValidUsersForShareManualInstance();
  	
       Linux_SambaValidUsersForShareManualInstance
  	    (const Linux_SambaValidUsersForShareManualInstance& original);
  	   
       Linux_SambaValidUsersForShareManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaValidUsersForShareManualInstance();
       
       Linux_SambaValidUsersForShareManualInstance& operator=
  	    (const Linux_SambaValidUsersForShareManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaValidUsersForShareInstanceName& val);        
       const Linux_SambaValidUsersForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaValidUsersForShareManualInstance& original);
       void reset();
       
       Linux_SambaValidUsersForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaValidUsersForShareManualInstanceEnumerationElement{
  	Linux_SambaValidUsersForShareManualInstance* m_elementP;
  	Linux_SambaValidUsersForShareManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaValidUsersForShareManualInstanceEnumerationElement();
  	~Linux_SambaValidUsersForShareManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaValidUsersForShareManualInstanceEnumeration {
  	private:
  	  Linux_SambaValidUsersForShareManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaValidUsersForShareManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaValidUsersForShareManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaValidUsersForShareManualInstanceEnumeration();
  	  
  	  Linux_SambaValidUsersForShareManualInstanceEnumeration(
  	   const Linux_SambaValidUsersForShareManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaValidUsersForShareManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaValidUsersForShareManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaValidUsersForShareManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaValidUsersForShareManualInstance& elementP);
  };
}
#endif

