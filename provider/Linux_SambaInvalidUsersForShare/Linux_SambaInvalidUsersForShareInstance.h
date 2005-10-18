/**
 *  Linux_SambaInvalidUsersForShareInstance.h
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


#ifndef Linux_SambaInvalidUsersForShareInstance_h
#define Linux_SambaInvalidUsersForShareInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaInvalidUsersForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaInvalidUsersForShareInstance {
  public:
       Linux_SambaInvalidUsersForShareInstance();
  	
       Linux_SambaInvalidUsersForShareInstance
  	    (const Linux_SambaInvalidUsersForShareInstance& original);
  	   
       Linux_SambaInvalidUsersForShareInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaInvalidUsersForShareInstance();
       
       Linux_SambaInvalidUsersForShareInstance& operator=
  	    (const Linux_SambaInvalidUsersForShareInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaInvalidUsersForShareInstanceName& val);        
       const Linux_SambaInvalidUsersForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaInvalidUsersForShareInstance& original);
       void reset();
       
       Linux_SambaInvalidUsersForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaInvalidUsersForShareInstanceEnumerationElement{
  	Linux_SambaInvalidUsersForShareInstance* m_elementP;
  	Linux_SambaInvalidUsersForShareInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaInvalidUsersForShareInstanceEnumerationElement();
  	~Linux_SambaInvalidUsersForShareInstanceEnumerationElement();  	
  };
  

  class Linux_SambaInvalidUsersForShareInstanceEnumeration {
  	private:
  	  Linux_SambaInvalidUsersForShareInstanceEnumerationElement* firstElementP;
  	  Linux_SambaInvalidUsersForShareInstanceEnumerationElement* currentElementP;
  	  Linux_SambaInvalidUsersForShareInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaInvalidUsersForShareInstanceEnumeration();
  	  
  	  Linux_SambaInvalidUsersForShareInstanceEnumeration(
  	   const Linux_SambaInvalidUsersForShareInstanceEnumeration& original);
  	  
  	  ~Linux_SambaInvalidUsersForShareInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaInvalidUsersForShareInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaInvalidUsersForShareInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaInvalidUsersForShareInstance& elementP);
  };
}
#endif

