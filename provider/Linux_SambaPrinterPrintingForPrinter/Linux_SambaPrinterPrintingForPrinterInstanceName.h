/**
 *  Linux_SambaPrinterPrintingForPrinterInstanceName.h
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


#ifndef Linux_SambaPrinterPrintingForPrinterInstanceName_h
#define Linux_SambaPrinterPrintingForPrinterInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaPrinterPrintingOptionsInstanceName.h"
#include "Linux_SambaPrinterOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterPrintingForPrinterInstanceName {
  public:
       Linux_SambaPrinterPrintingForPrinterInstanceName();
  	
       Linux_SambaPrinterPrintingForPrinterInstanceName
  	    (const Linux_SambaPrinterPrintingForPrinterInstanceName& original);
  	   
       Linux_SambaPrinterPrintingForPrinterInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaPrinterPrintingForPrinterInstanceName();
       
       Linux_SambaPrinterPrintingForPrinterInstanceName& operator=
  	    (const Linux_SambaPrinterPrintingForPrinterInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isSettingDataSet() const;
       void setSettingData(const Linux_SambaPrinterPrintingOptionsInstanceName& val);
       const Linux_SambaPrinterPrintingOptionsInstanceName& getSettingData() const;

       unsigned int isManagedElementSet() const;
       void setManagedElement(const Linux_SambaPrinterOptionsInstanceName& val);
       const Linux_SambaPrinterOptionsInstanceName& getManagedElement() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterPrintingForPrinterInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaPrinterPrintingOptionsInstanceName m_SettingData;
       Linux_SambaPrinterOptionsInstanceName m_ManagedElement;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int SettingData:1;
         unsigned int ManagedElement:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterPrintingForPrinterInstanceNameEnumerationElement{
  	Linux_SambaPrinterPrintingForPrinterInstanceName* m_elementP;
  	Linux_SambaPrinterPrintingForPrinterInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterPrintingForPrinterInstanceNameEnumerationElement();
  	~Linux_SambaPrinterPrintingForPrinterInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration {
  	private:
  	  Linux_SambaPrinterPrintingForPrinterInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaPrinterPrintingForPrinterInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaPrinterPrintingForPrinterInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration();
  	  
  	  Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration(
  	   const Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterPrintingForPrinterInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterPrintingForPrinterInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaPrinterPrintingForPrinterInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

