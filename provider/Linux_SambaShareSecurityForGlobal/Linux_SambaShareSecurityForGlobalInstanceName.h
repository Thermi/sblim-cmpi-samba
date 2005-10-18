/**
 *  Linux_SambaShareSecurityForGlobalInstanceName.h
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


#ifndef Linux_SambaShareSecurityForGlobalInstanceName_h
#define Linux_SambaShareSecurityForGlobalInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaShareSecurityOptionsInstanceName.h"
#include "Linux_SambaGlobalOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaShareSecurityForGlobalInstanceName {
  public:
       Linux_SambaShareSecurityForGlobalInstanceName();
  	
       Linux_SambaShareSecurityForGlobalInstanceName
  	    (const Linux_SambaShareSecurityForGlobalInstanceName& original);
  	   
       Linux_SambaShareSecurityForGlobalInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaShareSecurityForGlobalInstanceName();
       
       Linux_SambaShareSecurityForGlobalInstanceName& operator=
  	    (const Linux_SambaShareSecurityForGlobalInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isSettingDataSet() const;
       void setSettingData(const Linux_SambaShareSecurityOptionsInstanceName& val);
       const Linux_SambaShareSecurityOptionsInstanceName& getSettingData() const;

       unsigned int isManagedElementSet() const;
       void setManagedElement(const Linux_SambaGlobalOptionsInstanceName& val);
       const Linux_SambaGlobalOptionsInstanceName& getManagedElement() const;
       
  private:
       void init();
       void init(const Linux_SambaShareSecurityForGlobalInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaShareSecurityOptionsInstanceName m_SettingData;
       Linux_SambaGlobalOptionsInstanceName m_ManagedElement;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int SettingData:1;
         unsigned int ManagedElement:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareSecurityForGlobalInstanceNameEnumerationElement{
  	Linux_SambaShareSecurityForGlobalInstanceName* m_elementP;
  	Linux_SambaShareSecurityForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaShareSecurityForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaShareSecurityForGlobalInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaShareSecurityForGlobalInstanceNameEnumeration {
  	private:
  	  Linux_SambaShareSecurityForGlobalInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaShareSecurityForGlobalInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaShareSecurityForGlobalInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareSecurityForGlobalInstanceNameEnumeration();
  	  
  	  Linux_SambaShareSecurityForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaShareSecurityForGlobalInstanceNameEnumeration(
  	   const Linux_SambaShareSecurityForGlobalInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaShareSecurityForGlobalInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareSecurityForGlobalInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareSecurityForGlobalInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaShareSecurityForGlobalInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

