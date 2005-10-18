/**
 *  Linux_SambaScriptingForGlobalInstanceName.h
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


#ifndef Linux_SambaScriptingForGlobalInstanceName_h
#define Linux_SambaScriptingForGlobalInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaGlobalOptionsInstanceName.h"
#include "Linux_SambaScriptingOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaScriptingForGlobalInstanceName {
  public:
       Linux_SambaScriptingForGlobalInstanceName();
  	
       Linux_SambaScriptingForGlobalInstanceName
  	    (const Linux_SambaScriptingForGlobalInstanceName& original);
  	   
       Linux_SambaScriptingForGlobalInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaScriptingForGlobalInstanceName();
       
       Linux_SambaScriptingForGlobalInstanceName& operator=
  	    (const Linux_SambaScriptingForGlobalInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isManagedElementSet() const;
       void setManagedElement(const Linux_SambaGlobalOptionsInstanceName& val);
       const Linux_SambaGlobalOptionsInstanceName& getManagedElement() const;

       unsigned int isSettingDataSet() const;
       void setSettingData(const Linux_SambaScriptingOptionsInstanceName& val);
       const Linux_SambaScriptingOptionsInstanceName& getSettingData() const;
       
  private:
       void init();
       void init(const Linux_SambaScriptingForGlobalInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaGlobalOptionsInstanceName m_ManagedElement;
       Linux_SambaScriptingOptionsInstanceName m_SettingData;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int ManagedElement:1;
         unsigned int SettingData:1;
       } isSet;
  };
  
  
  struct Linux_SambaScriptingForGlobalInstanceNameEnumerationElement{
  	Linux_SambaScriptingForGlobalInstanceName* m_elementP;
  	Linux_SambaScriptingForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaScriptingForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaScriptingForGlobalInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaScriptingForGlobalInstanceNameEnumeration {
  	private:
  	  Linux_SambaScriptingForGlobalInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaScriptingForGlobalInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaScriptingForGlobalInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaScriptingForGlobalInstanceNameEnumeration();
  	  
  	  Linux_SambaScriptingForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaScriptingForGlobalInstanceNameEnumeration(
  	   const Linux_SambaScriptingForGlobalInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaScriptingForGlobalInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaScriptingForGlobalInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaScriptingForGlobalInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaScriptingForGlobalInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

