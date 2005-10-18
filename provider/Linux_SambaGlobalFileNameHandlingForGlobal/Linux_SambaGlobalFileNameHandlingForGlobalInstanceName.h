/**
 *  Linux_SambaGlobalFileNameHandlingForGlobalInstanceName.h
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


#ifndef Linux_SambaGlobalFileNameHandlingForGlobalInstanceName_h
#define Linux_SambaGlobalFileNameHandlingForGlobalInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaGlobalOptionsInstanceName.h"
#include "Linux_SambaGlobalFileNameHandlingOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalFileNameHandlingForGlobalInstanceName {
  public:
       Linux_SambaGlobalFileNameHandlingForGlobalInstanceName();
  	
       Linux_SambaGlobalFileNameHandlingForGlobalInstanceName
  	    (const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& original);
  	   
       Linux_SambaGlobalFileNameHandlingForGlobalInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaGlobalFileNameHandlingForGlobalInstanceName();
       
       Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& operator=
  	    (const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isManagedElementSet() const;
       void setManagedElement(const Linux_SambaGlobalOptionsInstanceName& val);
       const Linux_SambaGlobalOptionsInstanceName& getManagedElement() const;

       unsigned int isSettingDataSet() const;
       void setSettingData(const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& val);
       const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& getSettingData() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaGlobalOptionsInstanceName m_ManagedElement;
       Linux_SambaGlobalFileNameHandlingOptionsInstanceName m_SettingData;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int ManagedElement:1;
         unsigned int SettingData:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumerationElement{
  	Linux_SambaGlobalFileNameHandlingForGlobalInstanceName* m_elementP;
  	Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration {
  	private:
  	  Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration();
  	  
  	  Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration(
  	   const Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

