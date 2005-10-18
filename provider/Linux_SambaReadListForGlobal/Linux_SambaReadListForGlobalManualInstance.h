/**
 *  Linux_SambaReadListForGlobalManualInstance.h
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


#ifndef Linux_SambaReadListForGlobalManualInstance_h
#define Linux_SambaReadListForGlobalManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaReadListForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaReadListForGlobalManualInstance {
  public:
       Linux_SambaReadListForGlobalManualInstance();
  	
       Linux_SambaReadListForGlobalManualInstance
  	    (const Linux_SambaReadListForGlobalManualInstance& original);
  	   
       Linux_SambaReadListForGlobalManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaReadListForGlobalManualInstance();
       
       Linux_SambaReadListForGlobalManualInstance& operator=
  	    (const Linux_SambaReadListForGlobalManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaReadListForGlobalInstanceName& val);        
       const Linux_SambaReadListForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaReadListForGlobalManualInstance& original);
       void reset();
       
       Linux_SambaReadListForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaReadListForGlobalManualInstanceEnumerationElement{
  	Linux_SambaReadListForGlobalManualInstance* m_elementP;
  	Linux_SambaReadListForGlobalManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaReadListForGlobalManualInstanceEnumerationElement();
  	~Linux_SambaReadListForGlobalManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaReadListForGlobalManualInstanceEnumeration {
  	private:
  	  Linux_SambaReadListForGlobalManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaReadListForGlobalManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaReadListForGlobalManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaReadListForGlobalManualInstanceEnumeration();
  	  
  	  Linux_SambaReadListForGlobalManualInstanceEnumeration(
  	   const Linux_SambaReadListForGlobalManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaReadListForGlobalManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaReadListForGlobalManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaReadListForGlobalManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaReadListForGlobalManualInstance& elementP);
  };
}
#endif

