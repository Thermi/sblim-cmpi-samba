/**
 *  Linux_SambaShareSecurityForShareInstanceName.h
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


#ifndef Linux_SambaShareSecurityForShareInstanceName_h
#define Linux_SambaShareSecurityForShareInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaShareSecurityOptionsInstanceName.h"
#include "Linux_SambaShareOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaShareSecurityForShareInstanceName {
  public:
       Linux_SambaShareSecurityForShareInstanceName();
  	
       Linux_SambaShareSecurityForShareInstanceName
  	    (const Linux_SambaShareSecurityForShareInstanceName& original);
  	   
       Linux_SambaShareSecurityForShareInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaShareSecurityForShareInstanceName();
       
       Linux_SambaShareSecurityForShareInstanceName& operator=
  	    (const Linux_SambaShareSecurityForShareInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isSettingDataSet() const;
       void setSettingData(const Linux_SambaShareSecurityOptionsInstanceName& val);
       const Linux_SambaShareSecurityOptionsInstanceName& getSettingData() const;

       unsigned int isManagedElementSet() const;
       void setManagedElement(const Linux_SambaShareOptionsInstanceName& val);
       const Linux_SambaShareOptionsInstanceName& getManagedElement() const;
       
  private:
       void init();
       void init(const Linux_SambaShareSecurityForShareInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaShareSecurityOptionsInstanceName m_SettingData;
       Linux_SambaShareOptionsInstanceName m_ManagedElement;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int SettingData:1;
         unsigned int ManagedElement:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareSecurityForShareInstanceNameEnumerationElement{
  	Linux_SambaShareSecurityForShareInstanceName* m_elementP;
  	Linux_SambaShareSecurityForShareInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaShareSecurityForShareInstanceNameEnumerationElement();
  	~Linux_SambaShareSecurityForShareInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaShareSecurityForShareInstanceNameEnumeration {
  	private:
  	  Linux_SambaShareSecurityForShareInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaShareSecurityForShareInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaShareSecurityForShareInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareSecurityForShareInstanceNameEnumeration();
  	  
  	  Linux_SambaShareSecurityForShareInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaShareSecurityForShareInstanceNameEnumeration(
  	   const Linux_SambaShareSecurityForShareInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaShareSecurityForShareInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareSecurityForShareInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareSecurityForShareInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaShareSecurityForShareInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

