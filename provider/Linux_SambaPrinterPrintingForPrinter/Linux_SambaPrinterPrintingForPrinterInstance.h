/**
 *  Linux_SambaPrinterPrintingForPrinterInstance.h
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


#ifndef Linux_SambaPrinterPrintingForPrinterInstance_h
#define Linux_SambaPrinterPrintingForPrinterInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterPrintingForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterPrintingForPrinterInstance {
  public:
       Linux_SambaPrinterPrintingForPrinterInstance();
  	
       Linux_SambaPrinterPrintingForPrinterInstance
  	    (const Linux_SambaPrinterPrintingForPrinterInstance& original);
  	   
       Linux_SambaPrinterPrintingForPrinterInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaPrinterPrintingForPrinterInstance();
       
       Linux_SambaPrinterPrintingForPrinterInstance& operator=
  	    (const Linux_SambaPrinterPrintingForPrinterInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaPrinterPrintingForPrinterInstanceName& val);        
       const Linux_SambaPrinterPrintingForPrinterInstanceName&
        getInstanceName() const;

       unsigned int isIsCurrentSet() const;
       void setIsCurrent(const CMPIUint16 val);
       const CMPIUint16 getIsCurrent() const;

       unsigned int isIsDefaultSet() const;
       void setIsDefault(const CMPIUint16 val);
       const CMPIUint16 getIsDefault() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterPrintingForPrinterInstance& original);
       void reset();
       
       Linux_SambaPrinterPrintingForPrinterInstanceName m_instanceName;
       CMPIUint16 m_IsCurrent;
       CMPIUint16 m_IsDefault;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int IsCurrent:1;
         unsigned int IsDefault:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterPrintingForPrinterInstanceEnumerationElement{
  	Linux_SambaPrinterPrintingForPrinterInstance* m_elementP;
  	Linux_SambaPrinterPrintingForPrinterInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterPrintingForPrinterInstanceEnumerationElement();
  	~Linux_SambaPrinterPrintingForPrinterInstanceEnumerationElement();  	
  };
  

  class Linux_SambaPrinterPrintingForPrinterInstanceEnumeration {
  	private:
  	  Linux_SambaPrinterPrintingForPrinterInstanceEnumerationElement* firstElementP;
  	  Linux_SambaPrinterPrintingForPrinterInstanceEnumerationElement* currentElementP;
  	  Linux_SambaPrinterPrintingForPrinterInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterPrintingForPrinterInstanceEnumeration();
  	  
  	  Linux_SambaPrinterPrintingForPrinterInstanceEnumeration(
  	   const Linux_SambaPrinterPrintingForPrinterInstanceEnumeration& original);
  	  
  	  ~Linux_SambaPrinterPrintingForPrinterInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterPrintingForPrinterInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterPrintingForPrinterInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaPrinterPrintingForPrinterInstance& elementP);
  };
}
#endif

