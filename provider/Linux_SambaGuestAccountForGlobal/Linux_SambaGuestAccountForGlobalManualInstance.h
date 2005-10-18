/**
 *  Linux_SambaGuestAccountForGlobalManualInstance.h
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


#ifndef Linux_SambaGuestAccountForGlobalManualInstance_h
#define Linux_SambaGuestAccountForGlobalManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGuestAccountForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaGuestAccountForGlobalManualInstance {
  public:
       Linux_SambaGuestAccountForGlobalManualInstance();
  	
       Linux_SambaGuestAccountForGlobalManualInstance
  	    (const Linux_SambaGuestAccountForGlobalManualInstance& original);
  	   
       Linux_SambaGuestAccountForGlobalManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGuestAccountForGlobalManualInstance();
       
       Linux_SambaGuestAccountForGlobalManualInstance& operator=
  	    (const Linux_SambaGuestAccountForGlobalManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGuestAccountForGlobalInstanceName& val);        
       const Linux_SambaGuestAccountForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaGuestAccountForGlobalManualInstance& original);
       void reset();
       
       Linux_SambaGuestAccountForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGuestAccountForGlobalManualInstanceEnumerationElement{
  	Linux_SambaGuestAccountForGlobalManualInstance* m_elementP;
  	Linux_SambaGuestAccountForGlobalManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGuestAccountForGlobalManualInstanceEnumerationElement();
  	~Linux_SambaGuestAccountForGlobalManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGuestAccountForGlobalManualInstanceEnumeration {
  	private:
  	  Linux_SambaGuestAccountForGlobalManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGuestAccountForGlobalManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGuestAccountForGlobalManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGuestAccountForGlobalManualInstanceEnumeration();
  	  
  	  Linux_SambaGuestAccountForGlobalManualInstanceEnumeration(
  	   const Linux_SambaGuestAccountForGlobalManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGuestAccountForGlobalManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGuestAccountForGlobalManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGuestAccountForGlobalManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGuestAccountForGlobalManualInstance& elementP);
  };
}
#endif

