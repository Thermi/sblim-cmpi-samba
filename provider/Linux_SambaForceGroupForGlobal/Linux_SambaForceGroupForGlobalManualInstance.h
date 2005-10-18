/**
 *  Linux_SambaForceGroupForGlobalManualInstance.h
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


#ifndef Linux_SambaForceGroupForGlobalManualInstance_h
#define Linux_SambaForceGroupForGlobalManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceGroupForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaForceGroupForGlobalManualInstance {
  public:
       Linux_SambaForceGroupForGlobalManualInstance();
  	
       Linux_SambaForceGroupForGlobalManualInstance
  	    (const Linux_SambaForceGroupForGlobalManualInstance& original);
  	   
       Linux_SambaForceGroupForGlobalManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaForceGroupForGlobalManualInstance();
       
       Linux_SambaForceGroupForGlobalManualInstance& operator=
  	    (const Linux_SambaForceGroupForGlobalManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaForceGroupForGlobalInstanceName& val);        
       const Linux_SambaForceGroupForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaForceGroupForGlobalManualInstance& original);
       void reset();
       
       Linux_SambaForceGroupForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaForceGroupForGlobalManualInstanceEnumerationElement{
  	Linux_SambaForceGroupForGlobalManualInstance* m_elementP;
  	Linux_SambaForceGroupForGlobalManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaForceGroupForGlobalManualInstanceEnumerationElement();
  	~Linux_SambaForceGroupForGlobalManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaForceGroupForGlobalManualInstanceEnumeration {
  	private:
  	  Linux_SambaForceGroupForGlobalManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaForceGroupForGlobalManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaForceGroupForGlobalManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaForceGroupForGlobalManualInstanceEnumeration();
  	  
  	  Linux_SambaForceGroupForGlobalManualInstanceEnumeration(
  	   const Linux_SambaForceGroupForGlobalManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaForceGroupForGlobalManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaForceGroupForGlobalManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaForceGroupForGlobalManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaForceGroupForGlobalManualInstance& elementP);
  };
}
#endif

