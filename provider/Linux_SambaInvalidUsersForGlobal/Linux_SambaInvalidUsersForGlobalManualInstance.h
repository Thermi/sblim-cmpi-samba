/**
 *  Linux_SambaInvalidUsersForGlobalManualInstance.h
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


#ifndef Linux_SambaInvalidUsersForGlobalManualInstance_h
#define Linux_SambaInvalidUsersForGlobalManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaInvalidUsersForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaInvalidUsersForGlobalManualInstance {
  public:
       Linux_SambaInvalidUsersForGlobalManualInstance();
  	
       Linux_SambaInvalidUsersForGlobalManualInstance
  	    (const Linux_SambaInvalidUsersForGlobalManualInstance& original);
  	   
       Linux_SambaInvalidUsersForGlobalManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaInvalidUsersForGlobalManualInstance();
       
       Linux_SambaInvalidUsersForGlobalManualInstance& operator=
  	    (const Linux_SambaInvalidUsersForGlobalManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaInvalidUsersForGlobalInstanceName& val);        
       const Linux_SambaInvalidUsersForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaInvalidUsersForGlobalManualInstance& original);
       void reset();
       
       Linux_SambaInvalidUsersForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaInvalidUsersForGlobalManualInstanceEnumerationElement{
  	Linux_SambaInvalidUsersForGlobalManualInstance* m_elementP;
  	Linux_SambaInvalidUsersForGlobalManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaInvalidUsersForGlobalManualInstanceEnumerationElement();
  	~Linux_SambaInvalidUsersForGlobalManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaInvalidUsersForGlobalManualInstanceEnumeration {
  	private:
  	  Linux_SambaInvalidUsersForGlobalManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaInvalidUsersForGlobalManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaInvalidUsersForGlobalManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaInvalidUsersForGlobalManualInstanceEnumeration();
  	  
  	  Linux_SambaInvalidUsersForGlobalManualInstanceEnumeration(
  	   const Linux_SambaInvalidUsersForGlobalManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaInvalidUsersForGlobalManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaInvalidUsersForGlobalManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaInvalidUsersForGlobalManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaInvalidUsersForGlobalManualInstance& elementP);
  };
}
#endif

