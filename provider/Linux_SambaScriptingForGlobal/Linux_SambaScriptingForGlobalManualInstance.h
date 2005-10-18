/**
 *  Linux_SambaScriptingForGlobalManualInstance.h
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


#ifndef Linux_SambaScriptingForGlobalManualInstance_h
#define Linux_SambaScriptingForGlobalManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaScriptingForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaScriptingForGlobalManualInstance {
  public:
       Linux_SambaScriptingForGlobalManualInstance();
  	
       Linux_SambaScriptingForGlobalManualInstance
  	    (const Linux_SambaScriptingForGlobalManualInstance& original);
  	   
       Linux_SambaScriptingForGlobalManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaScriptingForGlobalManualInstance();
       
       Linux_SambaScriptingForGlobalManualInstance& operator=
  	    (const Linux_SambaScriptingForGlobalManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaScriptingForGlobalInstanceName& val);        
       const Linux_SambaScriptingForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaScriptingForGlobalManualInstance& original);
       void reset();
       
       Linux_SambaScriptingForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaScriptingForGlobalManualInstanceEnumerationElement{
  	Linux_SambaScriptingForGlobalManualInstance* m_elementP;
  	Linux_SambaScriptingForGlobalManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaScriptingForGlobalManualInstanceEnumerationElement();
  	~Linux_SambaScriptingForGlobalManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaScriptingForGlobalManualInstanceEnumeration {
  	private:
  	  Linux_SambaScriptingForGlobalManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaScriptingForGlobalManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaScriptingForGlobalManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaScriptingForGlobalManualInstanceEnumeration();
  	  
  	  Linux_SambaScriptingForGlobalManualInstanceEnumeration(
  	   const Linux_SambaScriptingForGlobalManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaScriptingForGlobalManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaScriptingForGlobalManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaScriptingForGlobalManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaScriptingForGlobalManualInstance& elementP);
  };
}
#endif

