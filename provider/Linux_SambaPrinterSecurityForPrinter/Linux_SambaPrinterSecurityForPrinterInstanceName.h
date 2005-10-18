/**
 *  Linux_SambaPrinterSecurityForPrinterInstanceName.h
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


#ifndef Linux_SambaPrinterSecurityForPrinterInstanceName_h
#define Linux_SambaPrinterSecurityForPrinterInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaPrinterSecurityOptionsInstanceName.h"
#include "Linux_SambaPrinterOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterSecurityForPrinterInstanceName {
  public:
       Linux_SambaPrinterSecurityForPrinterInstanceName();
  	
       Linux_SambaPrinterSecurityForPrinterInstanceName
  	    (const Linux_SambaPrinterSecurityForPrinterInstanceName& original);
  	   
       Linux_SambaPrinterSecurityForPrinterInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaPrinterSecurityForPrinterInstanceName();
       
       Linux_SambaPrinterSecurityForPrinterInstanceName& operator=
  	    (const Linux_SambaPrinterSecurityForPrinterInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isSettingDataSet() const;
       void setSettingData(const Linux_SambaPrinterSecurityOptionsInstanceName& val);
       const Linux_SambaPrinterSecurityOptionsInstanceName& getSettingData() const;

       unsigned int isManagedElementSet() const;
       void setManagedElement(const Linux_SambaPrinterOptionsInstanceName& val);
       const Linux_SambaPrinterOptionsInstanceName& getManagedElement() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterSecurityForPrinterInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaPrinterSecurityOptionsInstanceName m_SettingData;
       Linux_SambaPrinterOptionsInstanceName m_ManagedElement;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int SettingData:1;
         unsigned int ManagedElement:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterSecurityForPrinterInstanceNameEnumerationElement{
  	Linux_SambaPrinterSecurityForPrinterInstanceName* m_elementP;
  	Linux_SambaPrinterSecurityForPrinterInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterSecurityForPrinterInstanceNameEnumerationElement();
  	~Linux_SambaPrinterSecurityForPrinterInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaPrinterSecurityForPrinterInstanceNameEnumeration {
  	private:
  	  Linux_SambaPrinterSecurityForPrinterInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaPrinterSecurityForPrinterInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaPrinterSecurityForPrinterInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterSecurityForPrinterInstanceNameEnumeration();
  	  
  	  Linux_SambaPrinterSecurityForPrinterInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaPrinterSecurityForPrinterInstanceNameEnumeration(
  	   const Linux_SambaPrinterSecurityForPrinterInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaPrinterSecurityForPrinterInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterSecurityForPrinterInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterSecurityForPrinterInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaPrinterSecurityForPrinterInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

