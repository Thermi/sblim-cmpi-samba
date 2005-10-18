/**
 *  Linux_SambaGlobalProtocolForGlobalManualInstance.h
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


#ifndef Linux_SambaGlobalProtocolForGlobalManualInstance_h
#define Linux_SambaGlobalProtocolForGlobalManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalProtocolForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalProtocolForGlobalManualInstance {
  public:
       Linux_SambaGlobalProtocolForGlobalManualInstance();
  	
       Linux_SambaGlobalProtocolForGlobalManualInstance
  	    (const Linux_SambaGlobalProtocolForGlobalManualInstance& original);
  	   
       Linux_SambaGlobalProtocolForGlobalManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalProtocolForGlobalManualInstance();
       
       Linux_SambaGlobalProtocolForGlobalManualInstance& operator=
  	    (const Linux_SambaGlobalProtocolForGlobalManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalProtocolForGlobalInstanceName& val);        
       const Linux_SambaGlobalProtocolForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalProtocolForGlobalManualInstance& original);
       void reset();
       
       Linux_SambaGlobalProtocolForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalProtocolForGlobalManualInstanceEnumerationElement{
  	Linux_SambaGlobalProtocolForGlobalManualInstance* m_elementP;
  	Linux_SambaGlobalProtocolForGlobalManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalProtocolForGlobalManualInstanceEnumerationElement();
  	~Linux_SambaGlobalProtocolForGlobalManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalProtocolForGlobalManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalProtocolForGlobalManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalProtocolForGlobalManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration();
  	  
  	  Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration(
  	   const Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalProtocolForGlobalManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalProtocolForGlobalManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalProtocolForGlobalManualInstance& elementP);
  };
}
#endif

