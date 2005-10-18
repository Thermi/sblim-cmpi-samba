/**
 *  Linux_SambaGlobalFileNameHandlingForGlobalManualInstance.h
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


#ifndef Linux_SambaGlobalFileNameHandlingForGlobalManualInstance_h
#define Linux_SambaGlobalFileNameHandlingForGlobalManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalFileNameHandlingForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalFileNameHandlingForGlobalManualInstance {
  public:
       Linux_SambaGlobalFileNameHandlingForGlobalManualInstance();
  	
       Linux_SambaGlobalFileNameHandlingForGlobalManualInstance
  	    (const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance& original);
  	   
       Linux_SambaGlobalFileNameHandlingForGlobalManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalFileNameHandlingForGlobalManualInstance();
       
       Linux_SambaGlobalFileNameHandlingForGlobalManualInstance& operator=
  	    (const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& val);        
       const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance& original);
       void reset();
       
       Linux_SambaGlobalFileNameHandlingForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement{
  	Linux_SambaGlobalFileNameHandlingForGlobalManualInstance* m_elementP;
  	Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement();
  	~Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration();
  	  
  	  Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration(
  	   const Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance& elementP);
  };
}
#endif

