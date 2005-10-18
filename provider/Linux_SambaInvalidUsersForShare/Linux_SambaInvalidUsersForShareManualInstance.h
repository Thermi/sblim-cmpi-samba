/**
 *  Linux_SambaInvalidUsersForShareManualInstance.h
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


#ifndef Linux_SambaInvalidUsersForShareManualInstance_h
#define Linux_SambaInvalidUsersForShareManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaInvalidUsersForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaInvalidUsersForShareManualInstance {
  public:
       Linux_SambaInvalidUsersForShareManualInstance();
  	
       Linux_SambaInvalidUsersForShareManualInstance
  	    (const Linux_SambaInvalidUsersForShareManualInstance& original);
  	   
       Linux_SambaInvalidUsersForShareManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaInvalidUsersForShareManualInstance();
       
       Linux_SambaInvalidUsersForShareManualInstance& operator=
  	    (const Linux_SambaInvalidUsersForShareManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaInvalidUsersForShareInstanceName& val);        
       const Linux_SambaInvalidUsersForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaInvalidUsersForShareManualInstance& original);
       void reset();
       
       Linux_SambaInvalidUsersForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaInvalidUsersForShareManualInstanceEnumerationElement{
  	Linux_SambaInvalidUsersForShareManualInstance* m_elementP;
  	Linux_SambaInvalidUsersForShareManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaInvalidUsersForShareManualInstanceEnumerationElement();
  	~Linux_SambaInvalidUsersForShareManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaInvalidUsersForShareManualInstanceEnumeration {
  	private:
  	  Linux_SambaInvalidUsersForShareManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaInvalidUsersForShareManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaInvalidUsersForShareManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaInvalidUsersForShareManualInstanceEnumeration();
  	  
  	  Linux_SambaInvalidUsersForShareManualInstanceEnumeration(
  	   const Linux_SambaInvalidUsersForShareManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaInvalidUsersForShareManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaInvalidUsersForShareManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaInvalidUsersForShareManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaInvalidUsersForShareManualInstance& elementP);
  };
}
#endif

