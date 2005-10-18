/**
 *  Linux_SambaScriptingOptionsRepositoryInstance.h
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


#ifndef Linux_SambaScriptingOptionsRepositoryInstance_h
#define Linux_SambaScriptingOptionsRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaScriptingOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaScriptingOptionsRepositoryInstance {
  public:
       Linux_SambaScriptingOptionsRepositoryInstance();
  	
       Linux_SambaScriptingOptionsRepositoryInstance
  	    (const Linux_SambaScriptingOptionsRepositoryInstance& original);
  	   
       Linux_SambaScriptingOptionsRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaScriptingOptionsRepositoryInstance();
       
       Linux_SambaScriptingOptionsRepositoryInstance& operator=
  	    (const Linux_SambaScriptingOptionsRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaScriptingOptionsInstanceName& val);        
       const Linux_SambaScriptingOptionsInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaScriptingOptionsRepositoryInstance& original);
       void reset();
       
       Linux_SambaScriptingOptionsInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaScriptingOptionsRepositoryInstanceEnumerationElement{
  	Linux_SambaScriptingOptionsRepositoryInstance* m_elementP;
  	Linux_SambaScriptingOptionsRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaScriptingOptionsRepositoryInstanceEnumerationElement();
  	~Linux_SambaScriptingOptionsRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaScriptingOptionsRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaScriptingOptionsRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaScriptingOptionsRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaScriptingOptionsRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaScriptingOptionsRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaScriptingOptionsRepositoryInstanceEnumeration(
  	   const Linux_SambaScriptingOptionsRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaScriptingOptionsRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaScriptingOptionsRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaScriptingOptionsRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaScriptingOptionsRepositoryInstance& elementP);
  };
}
#endif

