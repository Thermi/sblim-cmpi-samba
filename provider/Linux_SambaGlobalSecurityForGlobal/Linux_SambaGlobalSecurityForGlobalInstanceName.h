/**
 *  Linux_SambaGlobalSecurityForGlobalInstanceName.h
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


#ifndef Linux_SambaGlobalSecurityForGlobalInstanceName_h
#define Linux_SambaGlobalSecurityForGlobalInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaGlobalSecurityOptionsInstanceName.h"
#include "Linux_SambaGlobalOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalSecurityForGlobalInstanceName {
  public:
       Linux_SambaGlobalSecurityForGlobalInstanceName();
  	
       Linux_SambaGlobalSecurityForGlobalInstanceName
  	    (const Linux_SambaGlobalSecurityForGlobalInstanceName& original);
  	   
       Linux_SambaGlobalSecurityForGlobalInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaGlobalSecurityForGlobalInstanceName();
       
       Linux_SambaGlobalSecurityForGlobalInstanceName& operator=
  	    (const Linux_SambaGlobalSecurityForGlobalInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isSettingDataSet() const;
       void setSettingData(const Linux_SambaGlobalSecurityOptionsInstanceName& val);
       const Linux_SambaGlobalSecurityOptionsInstanceName& getSettingData() const;

       unsigned int isManagedElementSet() const;
       void setManagedElement(const Linux_SambaGlobalOptionsInstanceName& val);
       const Linux_SambaGlobalOptionsInstanceName& getManagedElement() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalSecurityForGlobalInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaGlobalSecurityOptionsInstanceName m_SettingData;
       Linux_SambaGlobalOptionsInstanceName m_ManagedElement;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int SettingData:1;
         unsigned int ManagedElement:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalSecurityForGlobalInstanceNameEnumerationElement{
  	Linux_SambaGlobalSecurityForGlobalInstanceName* m_elementP;
  	Linux_SambaGlobalSecurityForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalSecurityForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaGlobalSecurityForGlobalInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaGlobalSecurityForGlobalInstanceNameEnumeration {
  	private:
  	  Linux_SambaGlobalSecurityForGlobalInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaGlobalSecurityForGlobalInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaGlobalSecurityForGlobalInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalSecurityForGlobalInstanceNameEnumeration();
  	  
  	  Linux_SambaGlobalSecurityForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaGlobalSecurityForGlobalInstanceNameEnumeration(
  	   const Linux_SambaGlobalSecurityForGlobalInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaGlobalSecurityForGlobalInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalSecurityForGlobalInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalSecurityForGlobalInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaGlobalSecurityForGlobalInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

