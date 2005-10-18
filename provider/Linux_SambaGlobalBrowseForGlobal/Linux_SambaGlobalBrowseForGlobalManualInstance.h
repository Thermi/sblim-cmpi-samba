/**
 *  Linux_SambaGlobalBrowseForGlobalManualInstance.h
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


#ifndef Linux_SambaGlobalBrowseForGlobalManualInstance_h
#define Linux_SambaGlobalBrowseForGlobalManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalBrowseForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalBrowseForGlobalManualInstance {
  public:
       Linux_SambaGlobalBrowseForGlobalManualInstance();
  	
       Linux_SambaGlobalBrowseForGlobalManualInstance
  	    (const Linux_SambaGlobalBrowseForGlobalManualInstance& original);
  	   
       Linux_SambaGlobalBrowseForGlobalManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalBrowseForGlobalManualInstance();
       
       Linux_SambaGlobalBrowseForGlobalManualInstance& operator=
  	    (const Linux_SambaGlobalBrowseForGlobalManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalBrowseForGlobalInstanceName& val);        
       const Linux_SambaGlobalBrowseForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalBrowseForGlobalManualInstance& original);
       void reset();
       
       Linux_SambaGlobalBrowseForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement{
  	Linux_SambaGlobalBrowseForGlobalManualInstance* m_elementP;
  	Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement();
  	~Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration();
  	  
  	  Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration(
  	   const Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalBrowseForGlobalManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalBrowseForGlobalManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalBrowseForGlobalManualInstance& elementP);
  };
}
#endif

