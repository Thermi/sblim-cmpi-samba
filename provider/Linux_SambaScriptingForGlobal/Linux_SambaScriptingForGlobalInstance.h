/**
 *  Linux_SambaScriptingForGlobalInstance.h
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


#ifndef Linux_SambaScriptingForGlobalInstance_h
#define Linux_SambaScriptingForGlobalInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaScriptingForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaScriptingForGlobalInstance {
  public:
       Linux_SambaScriptingForGlobalInstance();
  	
       Linux_SambaScriptingForGlobalInstance
  	    (const Linux_SambaScriptingForGlobalInstance& original);
  	   
       Linux_SambaScriptingForGlobalInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaScriptingForGlobalInstance();
       
       Linux_SambaScriptingForGlobalInstance& operator=
  	    (const Linux_SambaScriptingForGlobalInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaScriptingForGlobalInstanceName& val);        
       const Linux_SambaScriptingForGlobalInstanceName&
        getInstanceName() const;

       unsigned int isIsCurrentSet() const;
       void setIsCurrent(const CMPIUint16 val);
       const CMPIUint16 getIsCurrent() const;

       unsigned int isIsDefaultSet() const;
       void setIsDefault(const CMPIUint16 val);
       const CMPIUint16 getIsDefault() const;
       
  private:
       void init();
       void init(const Linux_SambaScriptingForGlobalInstance& original);
       void reset();
       
       Linux_SambaScriptingForGlobalInstanceName m_instanceName;
       CMPIUint16 m_IsCurrent;
       CMPIUint16 m_IsDefault;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int IsCurrent:1;
         unsigned int IsDefault:1;
       } isSet;
  };
  
  
  struct Linux_SambaScriptingForGlobalInstanceEnumerationElement{
  	Linux_SambaScriptingForGlobalInstance* m_elementP;
  	Linux_SambaScriptingForGlobalInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaScriptingForGlobalInstanceEnumerationElement();
  	~Linux_SambaScriptingForGlobalInstanceEnumerationElement();  	
  };
  

  class Linux_SambaScriptingForGlobalInstanceEnumeration {
  	private:
  	  Linux_SambaScriptingForGlobalInstanceEnumerationElement* firstElementP;
  	  Linux_SambaScriptingForGlobalInstanceEnumerationElement* currentElementP;
  	  Linux_SambaScriptingForGlobalInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaScriptingForGlobalInstanceEnumeration();
  	  
  	  Linux_SambaScriptingForGlobalInstanceEnumeration(
  	   const Linux_SambaScriptingForGlobalInstanceEnumeration& original);
  	  
  	  ~Linux_SambaScriptingForGlobalInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaScriptingForGlobalInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaScriptingForGlobalInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaScriptingForGlobalInstance& elementP);
  };
}
#endif

