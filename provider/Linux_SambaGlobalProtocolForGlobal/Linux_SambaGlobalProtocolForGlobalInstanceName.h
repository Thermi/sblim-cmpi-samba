/**
 *  Linux_SambaGlobalProtocolForGlobalInstanceName.h
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


#ifndef Linux_SambaGlobalProtocolForGlobalInstanceName_h
#define Linux_SambaGlobalProtocolForGlobalInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaGlobalProtocolOptionsInstanceName.h"
#include "Linux_SambaGlobalOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalProtocolForGlobalInstanceName {
  public:
       Linux_SambaGlobalProtocolForGlobalInstanceName();
  	
       Linux_SambaGlobalProtocolForGlobalInstanceName
  	    (const Linux_SambaGlobalProtocolForGlobalInstanceName& original);
  	   
       Linux_SambaGlobalProtocolForGlobalInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaGlobalProtocolForGlobalInstanceName();
       
       Linux_SambaGlobalProtocolForGlobalInstanceName& operator=
  	    (const Linux_SambaGlobalProtocolForGlobalInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isSettingDataSet() const;
       void setSettingData(const Linux_SambaGlobalProtocolOptionsInstanceName& val);
       const Linux_SambaGlobalProtocolOptionsInstanceName& getSettingData() const;

       unsigned int isManagedElementSet() const;
       void setManagedElement(const Linux_SambaGlobalOptionsInstanceName& val);
       const Linux_SambaGlobalOptionsInstanceName& getManagedElement() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalProtocolForGlobalInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaGlobalProtocolOptionsInstanceName m_SettingData;
       Linux_SambaGlobalOptionsInstanceName m_ManagedElement;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int SettingData:1;
         unsigned int ManagedElement:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalProtocolForGlobalInstanceNameEnumerationElement{
  	Linux_SambaGlobalProtocolForGlobalInstanceName* m_elementP;
  	Linux_SambaGlobalProtocolForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalProtocolForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaGlobalProtocolForGlobalInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaGlobalProtocolForGlobalInstanceNameEnumeration {
  	private:
  	  Linux_SambaGlobalProtocolForGlobalInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaGlobalProtocolForGlobalInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaGlobalProtocolForGlobalInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalProtocolForGlobalInstanceNameEnumeration();
  	  
  	  Linux_SambaGlobalProtocolForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaGlobalProtocolForGlobalInstanceNameEnumeration(
  	   const Linux_SambaGlobalProtocolForGlobalInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaGlobalProtocolForGlobalInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalProtocolForGlobalInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalProtocolForGlobalInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaGlobalProtocolForGlobalInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

