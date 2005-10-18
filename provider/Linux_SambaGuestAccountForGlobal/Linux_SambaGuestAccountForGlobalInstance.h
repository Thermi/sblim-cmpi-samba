/**
 *  Linux_SambaGuestAccountForGlobalInstance.h
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


#ifndef Linux_SambaGuestAccountForGlobalInstance_h
#define Linux_SambaGuestAccountForGlobalInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGuestAccountForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaGuestAccountForGlobalInstance {
  public:
       Linux_SambaGuestAccountForGlobalInstance();
  	
       Linux_SambaGuestAccountForGlobalInstance
  	    (const Linux_SambaGuestAccountForGlobalInstance& original);
  	   
       Linux_SambaGuestAccountForGlobalInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGuestAccountForGlobalInstance();
       
       Linux_SambaGuestAccountForGlobalInstance& operator=
  	    (const Linux_SambaGuestAccountForGlobalInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGuestAccountForGlobalInstanceName& val);        
       const Linux_SambaGuestAccountForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaGuestAccountForGlobalInstance& original);
       void reset();
       
       Linux_SambaGuestAccountForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGuestAccountForGlobalInstanceEnumerationElement{
  	Linux_SambaGuestAccountForGlobalInstance* m_elementP;
  	Linux_SambaGuestAccountForGlobalInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGuestAccountForGlobalInstanceEnumerationElement();
  	~Linux_SambaGuestAccountForGlobalInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGuestAccountForGlobalInstanceEnumeration {
  	private:
  	  Linux_SambaGuestAccountForGlobalInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGuestAccountForGlobalInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGuestAccountForGlobalInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGuestAccountForGlobalInstanceEnumeration();
  	  
  	  Linux_SambaGuestAccountForGlobalInstanceEnumeration(
  	   const Linux_SambaGuestAccountForGlobalInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGuestAccountForGlobalInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGuestAccountForGlobalInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGuestAccountForGlobalInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGuestAccountForGlobalInstance& elementP);
  };
}
#endif

