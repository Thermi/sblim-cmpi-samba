/**
 *  Linux_SambaPrinterSecurityForGlobalInstanceName.h
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


#ifndef Linux_SambaPrinterSecurityForGlobalInstanceName_h
#define Linux_SambaPrinterSecurityForGlobalInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaPrinterSecurityOptionsInstanceName.h"
#include "Linux_SambaGlobalOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterSecurityForGlobalInstanceName {
  public:
       Linux_SambaPrinterSecurityForGlobalInstanceName();
  	
       Linux_SambaPrinterSecurityForGlobalInstanceName
  	    (const Linux_SambaPrinterSecurityForGlobalInstanceName& original);
  	   
       Linux_SambaPrinterSecurityForGlobalInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaPrinterSecurityForGlobalInstanceName();
       
       Linux_SambaPrinterSecurityForGlobalInstanceName& operator=
  	    (const Linux_SambaPrinterSecurityForGlobalInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isSettingDataSet() const;
       void setSettingData(const Linux_SambaPrinterSecurityOptionsInstanceName& val);
       const Linux_SambaPrinterSecurityOptionsInstanceName& getSettingData() const;

       unsigned int isManagedElementSet() const;
       void setManagedElement(const Linux_SambaGlobalOptionsInstanceName& val);
       const Linux_SambaGlobalOptionsInstanceName& getManagedElement() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterSecurityForGlobalInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaPrinterSecurityOptionsInstanceName m_SettingData;
       Linux_SambaGlobalOptionsInstanceName m_ManagedElement;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int SettingData:1;
         unsigned int ManagedElement:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterSecurityForGlobalInstanceNameEnumerationElement{
  	Linux_SambaPrinterSecurityForGlobalInstanceName* m_elementP;
  	Linux_SambaPrinterSecurityForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterSecurityForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaPrinterSecurityForGlobalInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaPrinterSecurityForGlobalInstanceNameEnumeration {
  	private:
  	  Linux_SambaPrinterSecurityForGlobalInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaPrinterSecurityForGlobalInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaPrinterSecurityForGlobalInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterSecurityForGlobalInstanceNameEnumeration();
  	  
  	  Linux_SambaPrinterSecurityForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaPrinterSecurityForGlobalInstanceNameEnumeration(
  	   const Linux_SambaPrinterSecurityForGlobalInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaPrinterSecurityForGlobalInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterSecurityForGlobalInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterSecurityForGlobalInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaPrinterSecurityForGlobalInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

