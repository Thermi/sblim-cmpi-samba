/**
 *  Linux_SambaGlobalBrowseForGlobalInstanceName.h
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


#ifndef Linux_SambaGlobalBrowseForGlobalInstanceName_h
#define Linux_SambaGlobalBrowseForGlobalInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaGlobalBrowseOptionsInstanceName.h"
#include "Linux_SambaGlobalOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalBrowseForGlobalInstanceName {
  public:
       Linux_SambaGlobalBrowseForGlobalInstanceName();
  	
       Linux_SambaGlobalBrowseForGlobalInstanceName
  	    (const Linux_SambaGlobalBrowseForGlobalInstanceName& original);
  	   
       Linux_SambaGlobalBrowseForGlobalInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaGlobalBrowseForGlobalInstanceName();
       
       Linux_SambaGlobalBrowseForGlobalInstanceName& operator=
  	    (const Linux_SambaGlobalBrowseForGlobalInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isSettingDataSet() const;
       void setSettingData(const Linux_SambaGlobalBrowseOptionsInstanceName& val);
       const Linux_SambaGlobalBrowseOptionsInstanceName& getSettingData() const;

       unsigned int isManagedElementSet() const;
       void setManagedElement(const Linux_SambaGlobalOptionsInstanceName& val);
       const Linux_SambaGlobalOptionsInstanceName& getManagedElement() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalBrowseForGlobalInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaGlobalBrowseOptionsInstanceName m_SettingData;
       Linux_SambaGlobalOptionsInstanceName m_ManagedElement;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int SettingData:1;
         unsigned int ManagedElement:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalBrowseForGlobalInstanceNameEnumerationElement{
  	Linux_SambaGlobalBrowseForGlobalInstanceName* m_elementP;
  	Linux_SambaGlobalBrowseForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalBrowseForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaGlobalBrowseForGlobalInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration {
  	private:
  	  Linux_SambaGlobalBrowseForGlobalInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaGlobalBrowseForGlobalInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaGlobalBrowseForGlobalInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration();
  	  
  	  Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration(
  	   const Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalBrowseForGlobalInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalBrowseForGlobalInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaGlobalBrowseForGlobalInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

