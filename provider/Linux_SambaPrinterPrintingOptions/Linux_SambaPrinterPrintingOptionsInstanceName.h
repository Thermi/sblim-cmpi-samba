/**
 *  Linux_SambaPrinterPrintingOptionsInstanceName.h
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


#ifndef Linux_SambaPrinterPrintingOptionsInstanceName_h
#define Linux_SambaPrinterPrintingOptionsInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"

namespace genProvider {

  class Linux_SambaPrinterPrintingOptionsInstanceName {
  public:
       Linux_SambaPrinterPrintingOptionsInstanceName();
  	
       Linux_SambaPrinterPrintingOptionsInstanceName
  	    (const Linux_SambaPrinterPrintingOptionsInstanceName& original);
  	   
       Linux_SambaPrinterPrintingOptionsInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaPrinterPrintingOptionsInstanceName();
       
       Linux_SambaPrinterPrintingOptionsInstanceName& operator=
  	    (const Linux_SambaPrinterPrintingOptionsInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isInstanceIDSet() const;
       void setInstanceID(const char* val, int makeCopy = 1);
       const char* getInstanceID() const;

       unsigned int isNameSet() const;
       void setName(const char* val, int makeCopy = 1);
       const char* getName() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterPrintingOptionsInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       const char* m_InstanceID;
       const char* m_Name;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int InstanceID:1;
         unsigned int Name:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterPrintingOptionsInstanceNameEnumerationElement{
  	Linux_SambaPrinterPrintingOptionsInstanceName* m_elementP;
  	Linux_SambaPrinterPrintingOptionsInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterPrintingOptionsInstanceNameEnumerationElement();
  	~Linux_SambaPrinterPrintingOptionsInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaPrinterPrintingOptionsInstanceNameEnumeration {
  	private:
  	  Linux_SambaPrinterPrintingOptionsInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaPrinterPrintingOptionsInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaPrinterPrintingOptionsInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterPrintingOptionsInstanceNameEnumeration();
  	  
  	  Linux_SambaPrinterPrintingOptionsInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaPrinterPrintingOptionsInstanceNameEnumeration(
  	   const Linux_SambaPrinterPrintingOptionsInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaPrinterPrintingOptionsInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterPrintingOptionsInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterPrintingOptionsInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaPrinterPrintingOptionsInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif
