/**
 *  Linux_SambaWriteListForGlobalManualInstance.h
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


#ifndef Linux_SambaWriteListForGlobalManualInstance_h
#define Linux_SambaWriteListForGlobalManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaWriteListForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaWriteListForGlobalManualInstance {
  public:
       Linux_SambaWriteListForGlobalManualInstance();
  	
       Linux_SambaWriteListForGlobalManualInstance
  	    (const Linux_SambaWriteListForGlobalManualInstance& original);
  	   
       Linux_SambaWriteListForGlobalManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaWriteListForGlobalManualInstance();
       
       Linux_SambaWriteListForGlobalManualInstance& operator=
  	    (const Linux_SambaWriteListForGlobalManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaWriteListForGlobalInstanceName& val);        
       const Linux_SambaWriteListForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaWriteListForGlobalManualInstance& original);
       void reset();
       
       Linux_SambaWriteListForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaWriteListForGlobalManualInstanceEnumerationElement{
  	Linux_SambaWriteListForGlobalManualInstance* m_elementP;
  	Linux_SambaWriteListForGlobalManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaWriteListForGlobalManualInstanceEnumerationElement();
  	~Linux_SambaWriteListForGlobalManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaWriteListForGlobalManualInstanceEnumeration {
  	private:
  	  Linux_SambaWriteListForGlobalManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaWriteListForGlobalManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaWriteListForGlobalManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaWriteListForGlobalManualInstanceEnumeration();
  	  
  	  Linux_SambaWriteListForGlobalManualInstanceEnumeration(
  	   const Linux_SambaWriteListForGlobalManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaWriteListForGlobalManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaWriteListForGlobalManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaWriteListForGlobalManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaWriteListForGlobalManualInstance& elementP);
  };
}
#endif
