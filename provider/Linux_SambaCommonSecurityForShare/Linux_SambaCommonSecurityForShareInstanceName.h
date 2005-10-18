/**
 *  Linux_SambaCommonSecurityForShareInstanceName.h
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


#ifndef Linux_SambaCommonSecurityForShareInstanceName_h
#define Linux_SambaCommonSecurityForShareInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaCommonSecurityOptionsInstanceName.h"
#include "Linux_SambaShareOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaCommonSecurityForShareInstanceName {
  public:
       Linux_SambaCommonSecurityForShareInstanceName();
  	
       Linux_SambaCommonSecurityForShareInstanceName
  	    (const Linux_SambaCommonSecurityForShareInstanceName& original);
  	   
       Linux_SambaCommonSecurityForShareInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaCommonSecurityForShareInstanceName();
       
       Linux_SambaCommonSecurityForShareInstanceName& operator=
  	    (const Linux_SambaCommonSecurityForShareInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isSettingDataSet() const;
       void setSettingData(const Linux_SambaCommonSecurityOptionsInstanceName& val);
       const Linux_SambaCommonSecurityOptionsInstanceName& getSettingData() const;

       unsigned int isManagedElementSet() const;
       void setManagedElement(const Linux_SambaShareOptionsInstanceName& val);
       const Linux_SambaShareOptionsInstanceName& getManagedElement() const;
       
  private:
       void init();
       void init(const Linux_SambaCommonSecurityForShareInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaCommonSecurityOptionsInstanceName m_SettingData;
       Linux_SambaShareOptionsInstanceName m_ManagedElement;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int SettingData:1;
         unsigned int ManagedElement:1;
       } isSet;
  };
  
  
  struct Linux_SambaCommonSecurityForShareInstanceNameEnumerationElement{
  	Linux_SambaCommonSecurityForShareInstanceName* m_elementP;
  	Linux_SambaCommonSecurityForShareInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaCommonSecurityForShareInstanceNameEnumerationElement();
  	~Linux_SambaCommonSecurityForShareInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaCommonSecurityForShareInstanceNameEnumeration {
  	private:
  	  Linux_SambaCommonSecurityForShareInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaCommonSecurityForShareInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaCommonSecurityForShareInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaCommonSecurityForShareInstanceNameEnumeration();
  	  
  	  Linux_SambaCommonSecurityForShareInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaCommonSecurityForShareInstanceNameEnumeration(
  	   const Linux_SambaCommonSecurityForShareInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaCommonSecurityForShareInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaCommonSecurityForShareInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaCommonSecurityForShareInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaCommonSecurityForShareInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

