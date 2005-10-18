/**
 *  Linux_SambaScriptingOptionsInstanceName.h
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


#ifndef Linux_SambaScriptingOptionsInstanceName_h
#define Linux_SambaScriptingOptionsInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"

namespace genProvider {

  class Linux_SambaScriptingOptionsInstanceName {
  public:
       Linux_SambaScriptingOptionsInstanceName();
  	
       Linux_SambaScriptingOptionsInstanceName
  	    (const Linux_SambaScriptingOptionsInstanceName& original);
  	   
       Linux_SambaScriptingOptionsInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaScriptingOptionsInstanceName();
       
       Linux_SambaScriptingOptionsInstanceName& operator=
  	    (const Linux_SambaScriptingOptionsInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isInstanceIDSet() const;
       void setInstanceID(const char* val, int makeCopy = 1);
       const char* getInstanceID() const;

       unsigned int isNameSet() const;
       void setName(const char* val, int makeCopy = 1);
       const char* getName() const;
       
  private:
       void init();
       void init(const Linux_SambaScriptingOptionsInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       const char* m_InstanceID;
       const char* m_Name;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int InstanceID:1;
         unsigned int Name:1;
       } isSet;
  };
  
  
  struct Linux_SambaScriptingOptionsInstanceNameEnumerationElement{
  	Linux_SambaScriptingOptionsInstanceName* m_elementP;
  	Linux_SambaScriptingOptionsInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaScriptingOptionsInstanceNameEnumerationElement();
  	~Linux_SambaScriptingOptionsInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaScriptingOptionsInstanceNameEnumeration {
  	private:
  	  Linux_SambaScriptingOptionsInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaScriptingOptionsInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaScriptingOptionsInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaScriptingOptionsInstanceNameEnumeration();
  	  
  	  Linux_SambaScriptingOptionsInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaScriptingOptionsInstanceNameEnumeration(
  	   const Linux_SambaScriptingOptionsInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaScriptingOptionsInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaScriptingOptionsInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaScriptingOptionsInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaScriptingOptionsInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

