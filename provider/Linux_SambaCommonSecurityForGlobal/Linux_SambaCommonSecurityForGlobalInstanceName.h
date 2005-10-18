/**
 *  Linux_SambaCommonSecurityForGlobalInstanceName.h
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


#ifndef Linux_SambaCommonSecurityForGlobalInstanceName_h
#define Linux_SambaCommonSecurityForGlobalInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaCommonSecurityOptionsInstanceName.h"
#include "Linux_SambaGlobalOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaCommonSecurityForGlobalInstanceName {
  public:
       Linux_SambaCommonSecurityForGlobalInstanceName();
  	
       Linux_SambaCommonSecurityForGlobalInstanceName
  	    (const Linux_SambaCommonSecurityForGlobalInstanceName& original);
  	   
       Linux_SambaCommonSecurityForGlobalInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaCommonSecurityForGlobalInstanceName();
       
       Linux_SambaCommonSecurityForGlobalInstanceName& operator=
  	    (const Linux_SambaCommonSecurityForGlobalInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isSettingDataSet() const;
       void setSettingData(const Linux_SambaCommonSecurityOptionsInstanceName& val);
       const Linux_SambaCommonSecurityOptionsInstanceName& getSettingData() const;

       unsigned int isManagedElementSet() const;
       void setManagedElement(const Linux_SambaGlobalOptionsInstanceName& val);
       const Linux_SambaGlobalOptionsInstanceName& getManagedElement() const;
       
  private:
       void init();
       void init(const Linux_SambaCommonSecurityForGlobalInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaCommonSecurityOptionsInstanceName m_SettingData;
       Linux_SambaGlobalOptionsInstanceName m_ManagedElement;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int SettingData:1;
         unsigned int ManagedElement:1;
       } isSet;
  };
  
  
  struct Linux_SambaCommonSecurityForGlobalInstanceNameEnumerationElement{
  	Linux_SambaCommonSecurityForGlobalInstanceName* m_elementP;
  	Linux_SambaCommonSecurityForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaCommonSecurityForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaCommonSecurityForGlobalInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration {
  	private:
  	  Linux_SambaCommonSecurityForGlobalInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaCommonSecurityForGlobalInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaCommonSecurityForGlobalInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration();
  	  
  	  Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration(
  	   const Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaCommonSecurityForGlobalInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaCommonSecurityForGlobalInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaCommonSecurityForGlobalInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

