/**
 *  Linux_SambaScriptingForGlobalRepositoryInstance.h
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


#ifndef Linux_SambaScriptingForGlobalRepositoryInstance_h
#define Linux_SambaScriptingForGlobalRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaScriptingForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaScriptingForGlobalRepositoryInstance {
  public:
       Linux_SambaScriptingForGlobalRepositoryInstance();
  	
       Linux_SambaScriptingForGlobalRepositoryInstance
  	    (const Linux_SambaScriptingForGlobalRepositoryInstance& original);
  	   
       Linux_SambaScriptingForGlobalRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaScriptingForGlobalRepositoryInstance();
       
       Linux_SambaScriptingForGlobalRepositoryInstance& operator=
  	    (const Linux_SambaScriptingForGlobalRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaScriptingForGlobalInstanceName& val);        
       const Linux_SambaScriptingForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaScriptingForGlobalRepositoryInstance& original);
       void reset();
       
       Linux_SambaScriptingForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaScriptingForGlobalRepositoryInstanceEnumerationElement{
  	Linux_SambaScriptingForGlobalRepositoryInstance* m_elementP;
  	Linux_SambaScriptingForGlobalRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaScriptingForGlobalRepositoryInstanceEnumerationElement();
  	~Linux_SambaScriptingForGlobalRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaScriptingForGlobalRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaScriptingForGlobalRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaScriptingForGlobalRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaScriptingForGlobalRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaScriptingForGlobalRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaScriptingForGlobalRepositoryInstanceEnumeration(
  	   const Linux_SambaScriptingForGlobalRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaScriptingForGlobalRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaScriptingForGlobalRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaScriptingForGlobalRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaScriptingForGlobalRepositoryInstance& elementP);
  };
}
#endif

